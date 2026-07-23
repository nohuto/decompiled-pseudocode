/*
 * XREFs of MiAttachThreadDone @ 0x1402FE6F0
 * Callers:
 *     MiUnlockStealVm @ 0x1402FE250 (MiUnlockStealVm.c)
 *     MiSharePages @ 0x140343830 (MiSharePages.c)
 *     MiTrimSharedPageFromViews @ 0x140362D10 (MiTrimSharedPageFromViews.c)
 *     MmQueryCommitReleaseState @ 0x140478DE4 (MmQueryCommitReleaseState.c)
 *     MmReleaseCommitForMemResetPages @ 0x14066BCEC (MmReleaseCommitForMemResetPages.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KeSignalGate @ 0x140314A48 (KeSignalGate.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1403368E0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1403369B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiAttachThreadDone(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl
  unsigned int v3; // edi
  LONG i; // edx
  __int64 result; // rax
  void *v6; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]
  int v8; // [rsp+30h] [rbp+8h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v3 = 0;
    if ( _interlockedbittestandset(&SpinLock, 0x1Fu) )
      v3 = ExpWaitForSpinLockExclusiveAndAcquire(&SpinLock, CurrentIrql);
    for ( i = SpinLock; (SpinLock & 0xBFFFFFFF) != 0x80000000; i = SpinLock )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedOr(&SpinLock, 0x40000000u);
      if ( (++v3 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v3);
      }
      else
      {
        _mm_pause();
      }
    }
  }
  else
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&SpinLock, CurrentIrql);
  }
  v8 = *(_DWORD *)(a1 + 184);
  BYTE1(v8) = BYTE1(v8) & 0xF | (16 * ((BYTE1(v8) >> 4) - 1));
  result = (unsigned __int16)v8;
  *(_WORD *)(a1 + 184) = v8;
  v6 = *(void **)(a1 + 104);
  if ( v6 )
    result = KeSignalGate(v6);
  if ( CurrentIrql == 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0
      || (result = (unsigned int)PopHibernateInProgress, PopHibernateInProgress) )
    {
      SpinLock = 0;
    }
    else
    {
      return ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&SpinLock, retaddr);
    }
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      SpinLock = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&SpinLock, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
