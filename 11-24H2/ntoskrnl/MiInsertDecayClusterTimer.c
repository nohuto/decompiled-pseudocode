/*
 * XREFs of MiInsertDecayClusterTimer @ 0x14022D964
 * Callers:
 *     MiInsertPageInList @ 0x14022CB10 (MiInsertPageInList.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiRelinkDecayClusterTimer @ 0x140447BD0 (MiRelinkDecayClusterTimer.c)
 */

__int64 __fastcall MiInsertDecayClusterTimer(__int64 a1)
{
  __int64 v2; // rbx
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E35B20);
  result = MiRelinkDecayClusterTimer(a1, *(unsigned int *)(v2 + 16096));
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    result = (unsigned int)PopHibernateInProgress;
    if ( !PopHibernateInProgress )
      return ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E35B20, retaddr);
  }
  dword_140E35B20 = 0;
  return result;
}
