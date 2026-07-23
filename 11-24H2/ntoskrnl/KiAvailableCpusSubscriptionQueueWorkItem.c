/*
 * XREFs of KiAvailableCpusSubscriptionQueueWorkItem @ 0x1404F8B4C
 * Callers:
 *     KiNotifyAvailableCpusChangeProcess @ 0x1404F8B20 (KiNotifyAvailableCpusChangeProcess.c)
 *     KiAvailableCpusPartitionWorkItemCallback @ 0x1405B5B20 (KiAvailableCpusPartitionWorkItemCallback.c)
 *     KiNotifyAvailableCpusChangeCpuPartition @ 0x1405B5C68 (KiNotifyAvailableCpusChangeCpuPartition.c)
 *     KeRegisterAvailableCpusChangeNotification @ 0x140739A60 (KeRegisterAvailableCpusChangeNotification.c)
 *     KiAvailableCpusProcessWorkItemCallback @ 0x140739E20 (KiAvailableCpusProcessWorkItemCallback.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 */

void __fastcall KiAvailableCpusSubscriptionQueueWorkItem(PWORK_QUEUE_ITEM WorkItem)
{
  if ( (_InterlockedExchange((volatile __int32 *)&WorkItem[1].List.Blink, 3) & 1) == 0 )
  {
    ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&WorkItem[1]);
    ExQueueWorkItem(WorkItem, BackgroundWorkQueue);
  }
}
