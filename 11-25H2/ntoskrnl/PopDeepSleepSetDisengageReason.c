/*
 * XREFs of PopDeepSleepSetDisengageReason @ 0x140354D44
 * Callers:
 *     PpmUpdatePlatformIdleVeto @ 0x14026A200 (PpmUpdatePlatformIdleVeto.c)
 *     PopQueueQuerySetIrp @ 0x14034DCB8 (PopQueueQuerySetIrp.c)
 *     PopSetPowerActionState @ 0x140354C84 (PopSetPowerActionState.c)
 *     PopIncrementPowerSettingPendingUpdates @ 0x140354CB8 (PopIncrementPowerSettingPendingUpdates.c)
 *     PopFxPlatformStateAvailable @ 0x140355F24 (PopFxPlatformStateAvailable.c)
 *     PopThermalEventTransitionDisableDeepSleep @ 0x1404D7BC4 (PopThermalEventTransitionDisableDeepSleep.c)
 *     PopIdleAoAcDozeS4TimerCallback @ 0x1405D3760 (PopIdleAoAcDozeS4TimerCallback.c)
 *     PopPowerInformationInternal @ 0x140A1B29C (PopPowerInformationInternal.c)
 *     PopCheckResiliencyScenarios @ 0x140A1E378 (PopCheckResiliencyScenarios.c)
 *     PopDirectedDripsIdleResiliencyCallback @ 0x140A1E4E4 (PopDirectedDripsIdleResiliencyCallback.c)
 *     PopEnforceDeepSleep @ 0x140AA6B7C (PopEnforceDeepSleep.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     PopDiagTraceSetDeepSleepConstraint @ 0x140354E08 (PopDiagTraceSetDeepSleepConstraint.c)
 *     PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x140354FFC (PopDeepSleepResiliencyPhaseAccountingUpdate.c)
 *     KeClearForceIdle @ 0x1403551F8 (KeClearForceIdle.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall PopDeepSleepSetDisengageReason(unsigned int a1)
{
  KIRQL v2; // al
  int v3; // esi
  unsigned __int64 v4; // rbx
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx

  v2 = KeAcquireSpinLockRaiseToDpc(&PopDeepSleepDisengageReasonLock);
  v3 = PopDeepSleepDisengageReasonMask;
  v4 = v2;
  PopDeepSleepDisengageReasonMask |= 1 << a1;
  if ( v3 != PopDeepSleepDisengageReasonMask )
  {
    PopDiagTraceSetDeepSleepConstraint();
    LOBYTE(v7) = 1;
    PopDeepSleepResiliencyPhaseAccountingUpdate(a1, v7);
    if ( !v3 )
    {
      if ( PopIsForceIdleSet )
      {
        KeClearForceIdle();
        PopIsForceIdleSet = 0;
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
