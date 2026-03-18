/*
 * XREFs of KiAvailableCpusSubscriptionQueueWorkItem @ 0x1404F8BEC
 * Callers:
 *     KiNotifyAvailableCpusChangeProcess @ 0x1404F8BC0 (KiNotifyAvailableCpusChangeProcess.c)
 *     KiAvailableCpusPartitionWorkItemCallback @ 0x1405B4650 (KiAvailableCpusPartitionWorkItemCallback.c)
 *     KiNotifyAvailableCpusChangeCpuPartition @ 0x1405B4798 (KiNotifyAvailableCpusChangeCpuPartition.c)
 *     KeRegisterAvailableCpusChangeNotification @ 0x14072F8A0 (KeRegisterAvailableCpusChangeNotification.c)
 *     KiAvailableCpusProcessWorkItemCallback @ 0x14072FC60 (KiAvailableCpusProcessWorkItemCallback.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 */

void __fastcall KiAvailableCpusSubscriptionQueueWorkItem(PWORK_QUEUE_ITEM WorkItem)
{
  if ( (_InterlockedExchange((volatile __int32 *)&WorkItem[1].List.Blink, 3) & 1) == 0 )
  {
    ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&WorkItem[1]);
    ExQueueWorkItem(WorkItem, BackgroundWorkQueue);
  }
}
