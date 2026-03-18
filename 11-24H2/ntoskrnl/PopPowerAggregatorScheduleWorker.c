/*
 * XREFs of PopPowerAggregatorScheduleWorker @ 0x1409BA5AC
 * Callers:
 *     PopPowerAggregatorNotifyDisplayPoweredOn @ 0x1406F7384 (PopPowerAggregatorNotifyDisplayPoweredOn.c)
 *     PopPowerAggregatorSessionSwitchWorker @ 0x140759CB0 (PopPowerAggregatorSessionSwitchWorker.c)
 *     PopNotifyCsStateExited @ 0x1409B9F00 (PopNotifyCsStateExited.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x1409BC0E8 (PopPowerAggregatorHandleIntentUnsafe.c)
 *     PopUmpoProcessPowerMessage @ 0x140A23DB4 (PopUmpoProcessPowerMessage.c)
 *     PopPowerAggregatorNotifyPdcSleepTransition @ 0x140A9B2F0 (PopPowerAggregatorNotifyPdcSleepTransition.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
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
