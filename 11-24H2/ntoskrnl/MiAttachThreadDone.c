/*
 * XREFs of MiAttachThreadDone @ 0x1402E2710
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x1402BB5D0 (MiTrimSharedPageFromViews.c)
 *     MiUnlockStealVm @ 0x1402E1FC0 (MiUnlockStealVm.c)
 *     MiSharePages @ 0x1402FA880 (MiSharePages.c)
 *     MmQueryCommitReleaseState @ 0x14047DB54 (MmQueryCommitReleaseState.c)
 *     MmReleaseCommitForMemResetPages @ 0x14066AB1C (MmReleaseCommitForMemResetPages.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14020D580 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14020D650 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeSignalGate @ 0x14030AB68 (KeSignalGate.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiAttachThreadDone(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // bl
  unsigned int v5; // edi
  LONG i; // edx
  __int64 result; // rax
  void *v8; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]
  int v10; // [rsp+30h] [rbp+8h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v5 = 0;
    if ( _interlockedbittestandset(&dword_140E373C0, 0x1Fu) )
      v5 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140E373C0, CurrentIrql, a3);
    for ( i = dword_140E373C0; (dword_140E373C0 & 0xBFFFFFFF) != 0x80000000; i = dword_140E373C0 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedOr(&dword_140E373C0, 0x40000000u);
      if ( (++v5 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v5);
      }
      else
      {
        _mm_pause();
      }
    }
  }
  else
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140E373C0, CurrentIrql);
  }
  v10 = *(_DWORD *)(a1 + 184);
  BYTE1(v10) = BYTE1(v10) & 0xF | (16 * ((BYTE1(v10) >> 4) - 1));
  result = (unsigned __int16)v10;
  *(_WORD *)(a1 + 184) = v10;
  v8 = *(void **)(a1 + 104);
  if ( v8 )
    result = KeSignalGate(v8);
  if ( CurrentIrql == 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0
      || (result = (unsigned int)PopHibernateInProgress, PopHibernateInProgress) )
    {
      dword_140E373C0 = 0;
    }
    else
    {
      return ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E373C0, retaddr);
    }
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      dword_140E373C0 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E373C0, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
