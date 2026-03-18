/*
 * XREFs of MiAttachThreadDone @ 0x1402BC1A0
 * Callers:
 *     MiSharePages @ 0x140238650 (MiSharePages.c)
 *     MiUnlockStealVm @ 0x1402BB590 (MiUnlockStealVm.c)
 *     MiTrimSharedPageFromViews @ 0x140321850 (MiTrimSharedPageFromViews.c)
 *     MmQueryCommitReleaseState @ 0x14047CE80 (MmQueryCommitReleaseState.c)
 *     MmReleaseCommitForMemResetPages @ 0x14065EFDC (MmReleaseCommitForMemResetPages.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402120E0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402121B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     KeSignalGate @ 0x140225608 (KeSignalGate.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiAttachThreadDone(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di
  unsigned int v3; // ebx
  __int64 i; // rcx
  __int64 result; // rax
  _DWORD *v6; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]
  int v8; // [rsp+30h] [rbp+8h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v3 = 0;
    if ( _interlockedbittestandset(&dword_140E37180, 0x1Fu) )
      v3 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140E37180, CurrentIrql);
    for ( i = (unsigned int)dword_140E37180; (dword_140E37180 & 0xBFFFFFFF) != 0x80000000; i = (unsigned int)dword_140E37180 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedOr(&dword_140E37180, 0x40000000u);
      if ( (++v3 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(i) )
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
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140E37180, CurrentIrql);
  }
  v8 = *(_DWORD *)(a1 + 184);
  BYTE1(v8) = BYTE1(v8) & 0xF | (16 * ((BYTE1(v8) >> 4) - 1));
  result = (unsigned __int16)v8;
  *(_WORD *)(a1 + 184) = v8;
  v6 = *(_DWORD **)(a1 + 104);
  if ( v6 )
    result = KeSignalGate(v6, 1);
  if ( CurrentIrql == 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0
      || (result = (unsigned int)PopHibernateInProgress, PopHibernateInProgress) )
    {
      dword_140E37180 = 0;
    }
    else
    {
      return ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E37180, retaddr);
    }
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      dword_140E37180 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E37180, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
