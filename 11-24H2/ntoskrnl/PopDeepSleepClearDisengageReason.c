/*
 * XREFs of PopDeepSleepClearDisengageReason @ 0x1403CB4D8
 * Callers:
 *     PopDequeueQuerySetIrp @ 0x140375DBC (PopDequeueQuerySetIrp.c)
 *     PpmUpdatePlatformIdleVeto @ 0x1403CA530 (PpmUpdatePlatformIdleVeto.c)
 *     PopFxPlatformStateAvailable @ 0x1403CAA54 (PopFxPlatformStateAvailable.c)
 *     PopSetPowerActionState @ 0x1403CB224 (PopSetPowerActionState.c)
 *     PopDecrementPowerSettingPendingUpdates @ 0x1403CB448 (PopDecrementPowerSettingPendingUpdates.c)
 *     PopThermalEventTransitionEnableDeepSleep @ 0x1404F9EE4 (PopThermalEventTransitionEnableDeepSleep.c)
 *     PopThermalEventTransitionTimerCallback @ 0x1405D3CE0 (PopThermalEventTransitionTimerCallback.c)
 *     PopDirectedDripsWorkerRoutine @ 0x14074CB80 (PopDirectedDripsWorkerRoutine.c)
 *     PopIdleAoAcDozeToS4 @ 0x14075C370 (PopIdleAoAcDozeToS4.c)
 *     PopCheckResiliencyScenarios @ 0x140A27318 (PopCheckResiliencyScenarios.c)
 *     PopDirectedDripsHandleResiliencyNotification @ 0x140A407D8 (PopDirectedDripsHandleResiliencyNotification.c)
 *     PopEnforceDeepSleep @ 0x140AAC13C (PopEnforceDeepSleep.c)
 *     PopPowerInformationInternal @ 0x140AC4A30 (PopPowerInformationInternal.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     KeSetForceIdle @ 0x1403CAD20 (KeSetForceIdle.c)
 *     PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x1403CB59C (PopDeepSleepResiliencyPhaseAccountingUpdate.c)
 *     PopDiagTraceClearDeepSleepConstraint @ 0x1403CB6F8 (PopDiagTraceClearDeepSleepConstraint.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall PopDeepSleepClearDisengageReason(unsigned int a1)
{
  KIRQL v2; // al
  int v3; // r8d
  unsigned __int64 v4; // rbx
  __int64 result; // rax
  __int64 v6; // rdx

  v2 = KeAcquireSpinLockRaiseToDpc(&PopDeepSleepDisengageReasonLock);
  v3 = PopDeepSleepDisengageReasonMask;
  v4 = v2;
  PopDeepSleepDisengageReasonMask &= ~(1 << a1);
  if ( v3 != PopDeepSleepDisengageReasonMask )
  {
    PopDiagTraceClearDeepSleepConstraint();
    PopDeepSleepResiliencyPhaseAccountingUpdate(a1, 0LL);
    if ( !PopDeepSleepDisengageReasonMask )
    {
      if ( (PopAggressiveStandbyAppliedActions & 4) != 0 )
      {
        KeSetForceIdle();
        PopIsForceIdleSet = 1;
      }
      if ( !PopDeepSleepEvaluateWorkItemQueued )
      {
        PopDeepSleepEvaluateWorkItemQueued = 1;
        ExQueueWorkItem(&PopDeepSleepEvaluateWorkItem, DelayedWorkQueue);
      }
    }
  }
  result = KxReleaseSpinLock((volatile signed __int64 *)&PopDeepSleepDisengageReasonLock);
  if ( KiIrqlFlags )
  {
    LOBYTE(v6) = v4;
    result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
  }
  __writecr8(v4);
  return result;
}
