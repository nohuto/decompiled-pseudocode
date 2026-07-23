/*
 * XREFs of MiReduceCommitLimits @ 0x140687600
 * Callers:
 *     MiAttemptPageFileReductionApc @ 0x1403EF420 (MiAttemptPageFileReductionApc.c)
 *     MiInsertPartitionPages @ 0x14068BA00 (MiInsertPartitionPages.c)
 *     MiRemovePhysicalMemory @ 0x1407EA37C (MiRemovePhysicalMemory.c)
 *     MiCreatePagingFile @ 0x1407EE934 (MiCreatePagingFile.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiComputeCommitThresholds @ 0x14046B098 (MiComputeCommitThresholds.c)
 */

__int64 __fastcall MiReduceCommitLimits(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // rbp
  KIRQL v7; // r14

  v3 = (_DWORD *)(a1 + 16888);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 16888));
  if ( a3 )
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 16840), -a3);
  if ( a2 )
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 19608), -a2);
  MiComputeCommitThresholds(a1, 1);
  return MiReleaseSpinLockExclusive(v3, v7);
}
