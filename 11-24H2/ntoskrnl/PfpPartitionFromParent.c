/*
 * XREFs of PfpPartitionFromParent @ 0x140498054
 * Callers:
 *     PfDeletePartition @ 0x140747214 (PfDeletePartition.c)
 *     PfpPartitionFindOrCreate @ 0x1407473E0 (PfpPartitionFindOrCreate.c)
 *     MmFreeSystemCacheReserveView @ 0x1407ED648 (MmFreeSystemCacheReserveView.c)
 *     PfpPartitionFindByHandle @ 0x140933E78 (PfpPartitionFindByHandle.c)
 *     PfProcessCreateNotification @ 0x140960888 (PfProcessCreateNotification.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfpPartitionFromParent(__int64 a1)
{
  return *(_QWORD *)(a1 + 32);
}
