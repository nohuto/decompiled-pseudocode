/*
 * XREFs of PopPowerAggregatorScheduleWorker @ 0x140A3D5E8
 * Callers:
 *     PopPowerAggregatorNotifyDisplayPoweredOn @ 0x1406EBB20 (PopPowerAggregatorNotifyDisplayPoweredOn.c)
 *     PopPowerAggregatorSessionSwitchWorker @ 0x14074D860 (PopPowerAggregatorSessionSwitchWorker.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140964338 (PopPowerAggregatorHandleIntentUnsafe.c)
 *     PopUmpoProcessPowerMessage @ 0x140A18A88 (PopUmpoProcessPowerMessage.c)
 *     PopNotifyCsStateExited @ 0x140A3D360 (PopNotifyCsStateExited.c)
 *     PopPowerAggregatorNotifyPdcSleepTransition @ 0x140A955D0 (PopPowerAggregatorNotifyPdcSleepTransition.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
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
