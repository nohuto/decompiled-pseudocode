/*
 * XREFs of MiRemoveUnusedSubsection @ 0x1403700B0
 * Callers:
 *     MiDeleteTransitionPte @ 0x14023D260 (MiDeleteTransitionPte.c)
 *     MiDereferenceControlAreaPfnList @ 0x14036FF5C (MiDereferenceControlAreaPfnList.c)
 * Callees:
 *     MiUnlinkUnusedSubsection @ 0x14020F984 (MiUnlinkUnusedSubsection.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiRemoveUnusedSubsection(__int64 a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)qword_140E2FF88 + (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 1728));
  result = MiUnlinkUnusedSubsection(a1);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    result = (unsigned int)PopHibernateInProgress;
    if ( !PopHibernateInProgress )
      return ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2 + 1728, retaddr);
  }
  *(_DWORD *)(v2 + 1728) = 0;
  return result;
}
