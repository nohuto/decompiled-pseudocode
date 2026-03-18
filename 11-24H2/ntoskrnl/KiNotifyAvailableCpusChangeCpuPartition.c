/*
 * XREFs of KiNotifyAvailableCpusChangeCpuPartition @ 0x1405B8688
 * Callers:
 *     KeTransitionProcessorParkState @ 0x1403E9560 (KeTransitionProcessorParkState.c)
 *     KeCpuPartitionMoveCpus @ 0x1405BF6B0 (KeCpuPartitionMoveCpus.c)
 *     KiAddCpuToSystemCpuPartition @ 0x140B57C80 (KiAddCpuToSystemCpuPartition.c)
 * Callees:
 *     KiAvailableCpusSubscriptionQueueWorkItem @ 0x1404FB26C (KiAvailableCpusSubscriptionQueueWorkItem.c)
 */

void __fastcall KiNotifyAvailableCpusChangeCpuPartition(__int64 a1)
{
  if ( (__int64 *)KiAvailableCpusSubscriptionList != &KiAvailableCpusSubscriptionList )
    KiAvailableCpusSubscriptionQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 40));
}
