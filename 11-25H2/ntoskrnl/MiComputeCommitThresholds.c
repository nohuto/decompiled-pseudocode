/*
 * XREFs of MiComputeCommitThresholds @ 0x1404785C4
 * Callers:
 *     MiIncreaseCommitLimits @ 0x14067A97C (MiIncreaseCommitLimits.c)
 *     MiReduceCommitLimits @ 0x14067AC40 (MiReduceCommitLimits.c)
 *     MiFinishChildPartitionHotAdd @ 0x14067EAA0 (MiFinishChildPartitionHotAdd.c)
 *     MiInsertPartitionPages @ 0x14067F040 (MiInsertPartitionPages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiSyncCommitSignals @ 0x1404786C0 (MiSyncCommitSignals.c)
 */

__int64 __fastcall MiComputeCommitThresholds(__int64 a1, int a2)
{
  KIRQL v4; // di
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rax
  __int64 result; // rax

  if ( a2 )
    v4 = 17;
  else
    v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 16888));
  v5 = *(_QWORD *)(a1 + 19608);
  v6 = v5 / 0xA;
  if ( v5 / 0xA > 0x10000 )
    v6 = 0x10000LL;
  v7 = v5 - v6;
  *(_QWORD *)(a1 + 16864) = v5 - v6;
  v8 = v5 / 0x14;
  if ( v5 >= 0xA0014 )
    v8 = 0x8000LL;
  *(_QWORD *)(a1 + 16872) = v5 - v8;
  v9 = v5 >> 2;
  if ( v5 >> 2 > 0x100000 )
    v9 = 0x100000LL;
  v10 = v5 - v9;
  *(_QWORD *)(a1 + 16856) = v10;
  v11 = (v7 - v10) >> 1;
  if ( v11 > 0x4000 )
    v11 = 0x4000LL;
  *(_QWORD *)(a1 + 16880) = v7 - v11;
  result = MiSyncCommitSignals(a1, 1LL);
  if ( !a2 )
    return MiReleaseSpinLockExclusive((_DWORD *)(a1 + 16888), v4);
  return result;
}
