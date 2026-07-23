/*
 * XREFs of PopDeepSleepClearDisengageReason @ 0x1402B9FF0
 * Callers:
 *     PopSetPowerActionState @ 0x1402B8248 (PopSetPowerActionState.c)
 *     PopDecrementPowerSettingPendingUpdates @ 0x1402B9F60 (PopDecrementPowerSettingPendingUpdates.c)
 *     PopDequeueQuerySetIrp @ 0x1402BA5A0 (PopDequeueQuerySetIrp.c)
 *     PpmUpdatePlatformIdleVeto @ 0x1403A5100 (PpmUpdatePlatformIdleVeto.c)
 *     PopFxPlatformStateAvailable @ 0x1403A5E38 (PopFxPlatformStateAvailable.c)
 *     PopThermalEventTransitionEnableDeepSleep @ 0x1404F77C4 (PopThermalEventTransitionEnableDeepSleep.c)
 *     PopThermalEventTransitionTimerCallback @ 0x1405D1460 (PopThermalEventTransitionTimerCallback.c)
 *     PopDirectedDripsWorkerRoutine @ 0x14074AEB0 (PopDirectedDripsWorkerRoutine.c)
 *     PopIdleAoAcDozeToS4 @ 0x14075B3A0 (PopIdleAoAcDozeToS4.c)
 *     PopCheckResiliencyScenarios @ 0x140A1BD98 (PopCheckResiliencyScenarios.c)
 *     PopDirectedDripsHandleResiliencyNotification @ 0x140A360B8 (PopDirectedDripsHandleResiliencyNotification.c)
 *     PopEnforceDeepSleep @ 0x140AA710C (PopEnforceDeepSleep.c)
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x1402BA0B4 (PopDeepSleepResiliencyPhaseAccountingUpdate.c)
 *     PopDiagTraceClearDeepSleepConstraint @ 0x1402BA210 (PopDiagTraceClearDeepSleepConstraint.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     KeSetForceIdle @ 0x140484970 (KeSetForceIdle.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
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
