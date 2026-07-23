/*
 * XREFs of PopPowerAggregatorScheduleWorker @ 0x1409A0BFC
 * Callers:
 *     PopPowerAggregatorNotifyDisplayPoweredOn @ 0x1406F5384 (PopPowerAggregatorNotifyDisplayPoweredOn.c)
 *     PopPowerAggregatorSessionSwitchWorker @ 0x140758100 (PopPowerAggregatorSessionSwitchWorker.c)
 *     PopNotifyCsStateExited @ 0x1409A0550 (PopNotifyCsStateExited.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x1409A2738 (PopPowerAggregatorHandleIntentUnsafe.c)
 *     PopUmpoProcessPowerMessage @ 0x140A181C4 (PopUmpoProcessPowerMessage.c)
 *     PopPowerAggregatorNotifyPdcSleepTransition @ 0x140A96860 (PopPowerAggregatorNotifyPdcSleepTransition.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 */

void __fastcall PopPowerAggregatorScheduleWorker(__int64 a1)
{
  int v1; // r8d

  v1 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 8) = v1 | 2;
  if ( (v1 & 1) == 0 )
  {
    *(_DWORD *)(a1 + 8) = v1 | 3;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 5584), DelayedWorkQueue);
  }
}
