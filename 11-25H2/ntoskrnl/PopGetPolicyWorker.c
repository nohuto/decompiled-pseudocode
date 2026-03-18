/*
 * XREFs of PopGetPolicyWorker @ 0x1404769F4
 * Callers:
 *     PopCheckForIdleness @ 0x140476390 (PopCheckForIdleness.c)
 *     PopUserPresentSet @ 0x140476860 (PopUserPresentSet.c)
 *     PopSetNotificationWork @ 0x140476948 (PopSetNotificationWork.c)
 *     PoNotifySystemTimeSet @ 0x1404CA36C (PoNotifySystemTimeSet.c)
 *     PopCoalescingCheck @ 0x1405CE674 (PopCoalescingCheck.c)
 *     PopCoalesingTimerDpcCallback @ 0x1405CE6E0 (PopCoalesingTimerDpcCallback.c)
 *     PopExecutePowerAction @ 0x140747484 (PopExecutePowerAction.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x14074DA30 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PopPolicyWorkerAction @ 0x140A82EF0 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x140AA25D0 (PopPolicyWorkerActionPromote.c)
 *     PopBatteryApplyCompositeState @ 0x140AC1ED8 (PopBatteryApplyCompositeState.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 */

void __fastcall PopGetPolicyWorker(int a1)
{
  KIRQL v2; // al

  v2 = KeAcquireSpinLockRaiseToDpc(&PopWorkerSpinLock);
  PopWorkerPending |= a1;
  KeReleaseSpinLock(&PopWorkerSpinLock, v2);
}
