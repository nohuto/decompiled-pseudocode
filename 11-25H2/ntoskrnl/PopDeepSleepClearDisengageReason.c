/*
 * XREFs of PopDeepSleepClearDisengageReason @ 0x140354F38
 * Callers:
 *     PpmUpdatePlatformIdleVeto @ 0x14026A200 (PpmUpdatePlatformIdleVeto.c)
 *     PopSetPowerActionState @ 0x140354C84 (PopSetPowerActionState.c)
 *     PopDecrementPowerSettingPendingUpdates @ 0x140354EA8 (PopDecrementPowerSettingPendingUpdates.c)
 *     PopFxPlatformStateAvailable @ 0x140355F24 (PopFxPlatformStateAvailable.c)
 *     PopDequeueQuerySetIrp @ 0x14035836C (PopDequeueQuerySetIrp.c)
 *     PopThermalEventTransitionEnableDeepSleep @ 0x1404F7764 (PopThermalEventTransitionEnableDeepSleep.c)
 *     PopThermalEventTransitionTimerCallback @ 0x1405CF2D0 (PopThermalEventTransitionTimerCallback.c)
 *     PopDirectedDripsWorkerRoutine @ 0x140740AB0 (PopDirectedDripsWorkerRoutine.c)
 *     PopIdleAoAcDozeToS4 @ 0x14074FAF0 (PopIdleAoAcDozeToS4.c)
 *     PopPowerInformationInternal @ 0x140A1B29C (PopPowerInformationInternal.c)
 *     PopCheckResiliencyScenarios @ 0x140A1E378 (PopCheckResiliencyScenarios.c)
 *     PopDirectedDripsHandleResiliencyNotification @ 0x140A3BFB8 (PopDirectedDripsHandleResiliencyNotification.c)
 *     PopEnforceDeepSleep @ 0x140AA6B7C (PopEnforceDeepSleep.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KeSetForceIdle @ 0x140354B90 (KeSetForceIdle.c)
 *     PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x140354FFC (PopDeepSleepResiliencyPhaseAccountingUpdate.c)
 *     PopDiagTraceClearDeepSleepConstraint @ 0x140355158 (PopDiagTraceClearDeepSleepConstraint.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
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
