/*
 * XREFs of PopGetPolicyWorker @ 0x1403F2E04
 * Callers:
 *     PopCheckForIdleness @ 0x1403F1700 (PopCheckForIdleness.c)
 *     PopUserPresentSet @ 0x1403F2C70 (PopUserPresentSet.c)
 *     PopSetNotificationWork @ 0x1403F2D58 (PopSetNotificationWork.c)
 *     PoNotifySystemTimeSet @ 0x1404CA740 (PoNotifySystemTimeSet.c)
 *     PopCoalescingCheck @ 0x1405D2F54 (PopCoalescingCheck.c)
 *     PopCoalesingTimerDpcCallback @ 0x1405D2FC0 (PopCoalesingTimerDpcCallback.c)
 *     PopExecutePowerAction @ 0x140753574 (PopExecutePowerAction.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x140759E80 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PopBatteryApplyCompositeState @ 0x140A3AD08 (PopBatteryApplyCompositeState.c)
 *     PopPolicyWorkerAction @ 0x140A87A20 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x140AA7360 (PopPolicyWorkerActionPromote.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PopGetPolicyWorker(int a1)
{
  KIRQL v2; // al

  v2 = KeAcquireSpinLockRaiseToDpc(&PopWorkerSpinLock);
  PopWorkerPending |= a1;
  KeReleaseSpinLock(&PopWorkerSpinLock, v2);
}
