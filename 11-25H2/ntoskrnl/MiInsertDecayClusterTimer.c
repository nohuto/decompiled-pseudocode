/*
 * XREFs of MiInsertDecayClusterTimer @ 0x14021BD80
 * Callers:
 *     MiInsertPageInList @ 0x14021AFB0 (MiInsertPageInList.c)
 * Callees:
 *     MiRelinkDecayClusterTimer @ 0x14021C10C (MiRelinkDecayClusterTimer.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiInsertDecayClusterTimer(__int64 a1)
{
  __int64 v2; // rbx
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E358E0);
  result = MiRelinkDecayClusterTimer(a1, *(unsigned int *)(v2 + 16096));
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    result = (unsigned int)PopHibernateInProgress;
    if ( !PopHibernateInProgress )
      return ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E358E0, retaddr);
  }
  dword_140E358E0 = 0;
  return result;
}
