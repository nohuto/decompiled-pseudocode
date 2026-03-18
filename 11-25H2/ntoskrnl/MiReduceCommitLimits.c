/*
 * XREFs of MiReduceCommitLimits @ 0x14067AC40
 * Callers:
 *     MiAttemptPageFileReductionApc @ 0x14045A0D0 (MiAttemptPageFileReductionApc.c)
 *     MiInsertPartitionPages @ 0x14067F040 (MiInsertPartitionPages.c)
 *     MiRemovePhysicalMemory @ 0x1407D9EEC (MiRemovePhysicalMemory.c)
 *     MiCreatePagingFile @ 0x1407DE4C4 (MiCreatePagingFile.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiComputeCommitThresholds @ 0x1404785C4 (MiComputeCommitThresholds.c)
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
