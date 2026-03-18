/*
 * XREFs of PopCheckForWork @ 0x14047697C
 * Callers:
 *     PoRegisterDeviceForIdleDetection @ 0x1402FDCA0 (PoRegisterDeviceForIdleDetection.c)
 *     PopCheckForIdleness @ 0x140476390 (PopCheckForIdleness.c)
 *     PopUserPresentSet @ 0x140476860 (PopUserPresentSet.c)
 *     PopSetNotificationWork @ 0x140476948 (PopSetNotificationWork.c)
 *     PoNotifySystemTimeSet @ 0x1404CA36C (PoNotifySystemTimeSet.c)
 *     PopCoalescingCheck @ 0x1405CE674 (PopCoalescingCheck.c)
 *     PopCoalesingTimerDpcCallback @ 0x1405CE6E0 (PopCoalesingTimerDpcCallback.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x14074DA30 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PopBatteryApplyCompositeState @ 0x140AC1ED8 (PopBatteryApplyCompositeState.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 *     PopReleasePolicyLock @ 0x140B57ED0 (PopReleasePolicyLock.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 */

void PopCheckForWork()
{
  KIRQL v0; // bl

  if ( (PopWorkerStatus & PopWorkerPending) != 0 && (struct _KTHREAD *)PopPolicyLockThread != KeGetCurrentThread() )
  {
    v0 = KeAcquireSpinLockRaiseToDpc(&PopWorkerSpinLock);
    if ( PopWorkerStatus < 0 )
    {
      PopWorkerStatus &= ~0x80000000;
      ExQueueWorkItem(&PopPolicyWorker, DelayedWorkQueue);
    }
    KeReleaseSpinLock(&PopWorkerSpinLock, v0);
  }
}
