/*
 * XREFs of PopWakeInfoDereference @ 0x1404B735C
 * Callers:
 *     PopDereferenceWakeInfos @ 0x1405D09EC (PopDereferenceWakeInfos.c)
 *     PopQueryMostRecentWakeSourceInfo @ 0x14074F810 (PopQueryMostRecentWakeSourceInfo.c)
 *     PopPowerAggregatorHandleSystemTransitionEndIntent @ 0x140757C90 (PopPowerAggregatorHandleSystemTransitionEndIntent.c)
 *     PopPotsLogPowerTransitionReliability @ 0x140A9287C (PopPotsLogPowerTransitionReliability.c)
 *     PopQueryMostRecentWakeSourceAttributes @ 0x140A98D3C (PopQueryMostRecentWakeSourceAttributes.c)
 *     PopNewWakeInfo @ 0x140B6A084 (PopNewWakeInfo.c)
 *     PopIsMostRecentWakeAttended @ 0x140B6F3A8 (PopIsMostRecentWakeAttended.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
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
