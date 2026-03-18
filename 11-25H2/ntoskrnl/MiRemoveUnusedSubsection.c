/*
 * XREFs of MiRemoveUnusedSubsection @ 0x140419DD4
 * Callers:
 *     MiDeleteTransitionPte @ 0x140340900 (MiDeleteTransitionPte.c)
 *     MiDereferenceControlAreaPfnList @ 0x140419984 (MiDereferenceControlAreaPfnList.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkUnusedSubsection @ 0x14031F694 (MiUnlinkUnusedSubsection.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiRemoveUnusedSubsection(__int64 a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)qword_140E2FD48 + (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 1728));
  result = MiUnlinkUnusedSubsection(a1);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    result = (unsigned int)PopHibernateInProgress;
    if ( !PopHibernateInProgress )
      return ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v2 + 1728), retaddr);
  }
  *(_DWORD *)(v2 + 1728) = 0;
  return result;
}
