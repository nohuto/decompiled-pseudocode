/*
 * XREFs of PfpPartitionFromParent @ 0x140499120
 * Callers:
 *     PfDeletePartition @ 0x14073B1F4 (PfDeletePartition.c)
 *     PfpPartitionFindOrCreate @ 0x14073B3C0 (PfpPartitionFindOrCreate.c)
 *     MmFreeSystemCacheReserveView @ 0x1407DD7A8 (MmFreeSystemCacheReserveView.c)
 *     PfProcessCreateNotification @ 0x140826108 (PfProcessCreateNotification.c)
 *     PfpPartitionFindByHandle @ 0x14093AACC (PfpPartitionFindByHandle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfpPartitionFromParent(__int64 a1)
{
  return *(_QWORD *)(a1 + 32);
}
