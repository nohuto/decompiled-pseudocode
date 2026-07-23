/*
 * XREFs of MiRemoveUnusedSubsection @ 0x140441E80
 * Callers:
 *     MiDeleteTransitionPte @ 0x140204FF0 (MiDeleteTransitionPte.c)
 *     MiDereferenceControlAreaPfnList @ 0x14021DC9C (MiDereferenceControlAreaPfnList.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiUnlinkUnusedSubsection @ 0x140338CE4 (MiUnlinkUnusedSubsection.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall MiRemoveUnusedSubsection(__int64 a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)qword_140E300C8 + (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
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
