/*
 * XREFs of KiAvailableCpusSubscriptionQueueWorkItem @ 0x1404FB26C
 * Callers:
 *     KiNotifyAvailableCpusChangeProcess @ 0x1404FB240 (KiNotifyAvailableCpusChangeProcess.c)
 *     KiAvailableCpusPartitionWorkItemCallback @ 0x1405B8540 (KiAvailableCpusPartitionWorkItemCallback.c)
 *     KiNotifyAvailableCpusChangeCpuPartition @ 0x1405B8688 (KiNotifyAvailableCpusChangeCpuPartition.c)
 *     KeRegisterAvailableCpusChangeNotification @ 0x14073BB30 (KeRegisterAvailableCpusChangeNotification.c)
 *     KiAvailableCpusProcessWorkItemCallback @ 0x14073BEF0 (KiAvailableCpusProcessWorkItemCallback.c)
 * Callees:
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 */

void __fastcall KiAvailableCpusSubscriptionQueueWorkItem(PWORK_QUEUE_ITEM WorkItem)
{
  if ( (_InterlockedExchange((volatile __int32 *)&WorkItem[1].List.Blink, 3) & 1) == 0 )
  {
    ExAcquireRundownProtection((PEX_RUNDOWN_REF)&WorkItem[1]);
    ExQueueWorkItem(WorkItem, BackgroundWorkQueue);
  }
}
