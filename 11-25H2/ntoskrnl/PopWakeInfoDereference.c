/*
 * XREFs of PopWakeInfoDereference @ 0x1404BD2EC
 * Callers:
 *     PopDereferenceWakeInfos @ 0x1405CE874 (PopDereferenceWakeInfos.c)
 *     PopQueryMostRecentWakeSourceInfo @ 0x140745420 (PopQueryMostRecentWakeSourceInfo.c)
 *     PopPowerAggregatorHandleSystemTransitionEndIntent @ 0x14074D510 (PopPowerAggregatorHandleSystemTransitionEndIntent.c)
 *     PopPotsLogPowerTransitionReliability @ 0x140A91E9C (PopPotsLogPowerTransitionReliability.c)
 *     PopQueryMostRecentWakeSourceAttributes @ 0x140A97C9C (PopQueryMostRecentWakeSourceAttributes.c)
 *     PopNewWakeInfo @ 0x140B58114 (PopNewWakeInfo.c)
 *     PopIsMostRecentWakeAttended @ 0x140B5EA58 (PopIsMostRecentWakeAttended.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
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
