/*
 * XREFs of PfpPartitionFromParent @ 0x140492A30
 * Callers:
 *     PfDeletePartition @ 0x140745504 (PfDeletePartition.c)
 *     PfpPartitionFindOrCreate @ 0x1407456D0 (PfpPartitionFindOrCreate.c)
 *     MmFreeSystemCacheReserveView @ 0x1407EDC18 (MmFreeSystemCacheReserveView.c)
 *     PfpPartitionFindByHandle @ 0x1408F6998 (PfpPartitionFindByHandle.c)
 *     PfProcessCreateNotification @ 0x140948348 (PfProcessCreateNotification.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfpPartitionFromParent(__int64 a1)
{
  return *(_QWORD *)(a1 + 32);
}
