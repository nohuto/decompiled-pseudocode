/*
 * XREFs of PopGetPolicyWorker @ 0x1403E6B24
 * Callers:
 *     PopCheckForIdleness @ 0x1403E5420 (PopCheckForIdleness.c)
 *     PopUserPresentSet @ 0x1403E6990 (PopUserPresentSet.c)
 *     PopSetNotificationWork @ 0x1403E6A78 (PopSetNotificationWork.c)
 *     PoNotifySystemTimeSet @ 0x1404C3C60 (PoNotifySystemTimeSet.c)
 *     PopCoalescingCheck @ 0x1405D0674 (PopCoalescingCheck.c)
 *     PopCoalesingTimerDpcCallback @ 0x1405D06E0 (PopCoalesingTimerDpcCallback.c)
 *     PopExecutePowerAction @ 0x140751894 (PopExecutePowerAction.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x1407582D0 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PopBatteryApplyCompositeState @ 0x140A304E8 (PopBatteryApplyCompositeState.c)
 *     PopPolicyWorkerAction @ 0x140A83F10 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x140AA2460 (PopPolicyWorkerActionPromote.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PopGetPolicyWorker(int a1)
{
  KIRQL v2; // al

  v2 = KeAcquireSpinLockRaiseToDpc(&PopWorkerSpinLock);
  PopWorkerPending |= a1;
  KeReleaseSpinLock(&PopWorkerSpinLock, v2);
}
