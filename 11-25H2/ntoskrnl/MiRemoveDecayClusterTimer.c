/*
 * XREFs of MiRemoveDecayClusterTimer @ 0x14021AD58
 * Callers:
 *     MiUnlinkPageFromListEx @ 0x14021A1F0 (MiUnlinkPageFromListEx.c)
 *     MiDecayNodeNowEmpty @ 0x14021BFD8 (MiDecayNodeNowEmpty.c)
 * Callees:
 *     MiUnlinkDecayClusterTimer @ 0x14021C658 (MiUnlinkDecayClusterTimer.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiRemoveDecayClusterTimer(__int64 a1)
{
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E358E0);
  result = *(_QWORD *)(a1 + 8);
  if ( (result & 0x100000000LL) == 0 )
  {
    *(_QWORD *)(a1 + 8) = result | 0x100000000LL;
    result = MiUnlinkDecayClusterTimer(a1);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    result = (unsigned int)PopHibernateInProgress;
    if ( !PopHibernateInProgress )
      return ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E358E0, retaddr);
  }
  dword_140E358E0 = 0;
  return result;
}
