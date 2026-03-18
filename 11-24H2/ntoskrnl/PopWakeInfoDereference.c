/*
 * XREFs of PopWakeInfoDereference @ 0x1404BC44C
 * Callers:
 *     PopDereferenceWakeInfos @ 0x1405D32CC (PopDereferenceWakeInfos.c)
 *     PopQueryMostRecentWakeSourceInfo @ 0x1407514F0 (PopQueryMostRecentWakeSourceInfo.c)
 *     PopPowerAggregatorHandleSystemTransitionEndIntent @ 0x1407597F0 (PopPowerAggregatorHandleSystemTransitionEndIntent.c)
 *     PopPotsLogPowerTransitionReliability @ 0x140A9604C (PopPotsLogPowerTransitionReliability.c)
 *     PopQueryMostRecentWakeSourceAttributes @ 0x140A9D7CC (PopQueryMostRecentWakeSourceAttributes.c)
 *     PopNewWakeInfo @ 0x140B67F44 (PopNewWakeInfo.c)
 *     PopIsMostRecentWakeAttended @ 0x140B6DB08 (PopIsMostRecentWakeAttended.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 */

void __fastcall PopWakeInfoDereference(__int64 a1)
{
  struct _WORK_QUEUE_ITEM *v2; // rcx

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 16), 0xFFFFFFFF) == 1 )
  {
    v2 = (struct _WORK_QUEUE_ITEM *)(a1 + 48);
    v2->Parameter = (void *)a1;
    v2->List.Flink = 0LL;
    v2->WorkerRoutine = (void (__fastcall *)(void *))PopFreeWakeInfo;
    ExQueueWorkItem(v2, DelayedWorkQueue);
  }
}
