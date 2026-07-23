/*
 * XREFs of MiInsertDecayClusterTimer @ 0x140301274
 * Callers:
 *     MiInsertPageInList @ 0x140300420 (MiInsertPageInList.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiRelinkDecayClusterTimer @ 0x1404402F0 (MiRelinkDecayClusterTimer.c)
 */

__int64 __fastcall MiInsertDecayClusterTimer(__int64 a1)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E35C60);
  result = MiRelinkDecayClusterTimer(a1, *(unsigned int *)(v2 + 16096));
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    result = (unsigned int)PopHibernateInProgress;
    if ( !PopHibernateInProgress )
      return ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E35C60, retaddr);
  }
  dword_140E35C60 = 0;
  return result;
}
