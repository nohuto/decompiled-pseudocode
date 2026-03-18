/*
 * XREFs of KiNotifyAvailableCpusChangeCpuPartition @ 0x1405B4798
 * Callers:
 *     KeTransitionProcessorParkState @ 0x1403DFF18 (KeTransitionProcessorParkState.c)
 *     KeCpuPartitionMoveCpus @ 0x1405BB870 (KeCpuPartitionMoveCpus.c)
 *     KiAddCpuToSystemCpuPartition @ 0x140B47CE0 (KiAddCpuToSystemCpuPartition.c)
 * Callees:
 *     KiAvailableCpusSubscriptionQueueWorkItem @ 0x1404F8BEC (KiAvailableCpusSubscriptionQueueWorkItem.c)
 */

void __fastcall KiNotifyAvailableCpusChangeCpuPartition(__int64 a1)
{
  if ( (__int64 *)KiAvailableCpusSubscriptionList != &KiAvailableCpusSubscriptionList )
    KiAvailableCpusSubscriptionQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 40));
}
