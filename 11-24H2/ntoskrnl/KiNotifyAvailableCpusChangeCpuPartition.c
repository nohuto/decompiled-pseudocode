/*
 * XREFs of KiNotifyAvailableCpusChangeCpuPartition @ 0x1405B5C68
 * Callers:
 *     KeTransitionProcessorParkState @ 0x1403D720C (KeTransitionProcessorParkState.c)
 *     KeCpuPartitionMoveCpus @ 0x1405BCCE0 (KeCpuPartitionMoveCpus.c)
 *     KiAddCpuToSystemCpuPartition @ 0x140B59D00 (KiAddCpuToSystemCpuPartition.c)
 * Callees:
 *     KiAvailableCpusSubscriptionQueueWorkItem @ 0x1404F8B4C (KiAvailableCpusSubscriptionQueueWorkItem.c)
 */

void __fastcall KiNotifyAvailableCpusChangeCpuPartition(__int64 a1)
{
  if ( (__int64 *)KiAvailableCpusSubscriptionList != &KiAvailableCpusSubscriptionList )
    KiAvailableCpusSubscriptionQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 40));
}
