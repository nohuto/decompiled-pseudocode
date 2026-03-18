/*
 * XREFs of PopDeepSleepSetDisengageReason @ 0x1403CB2E4
 * Callers:
 *     PopQueueQuerySetIrp @ 0x140376E74 (PopQueueQuerySetIrp.c)
 *     PpmUpdatePlatformIdleVeto @ 0x1403CA530 (PpmUpdatePlatformIdleVeto.c)
 *     PopFxPlatformStateAvailable @ 0x1403CAA54 (PopFxPlatformStateAvailable.c)
 *     PopSetPowerActionState @ 0x1403CB224 (PopSetPowerActionState.c)
 *     PopIncrementPowerSettingPendingUpdates @ 0x1403CB258 (PopIncrementPowerSettingPendingUpdates.c)
 *     PopThermalEventTransitionDisableDeepSleep @ 0x1404D69F4 (PopThermalEventTransitionDisableDeepSleep.c)
 *     PopIdleAoAcDozeS4TimerCallback @ 0x1405D80C0 (PopIdleAoAcDozeS4TimerCallback.c)
 *     PopCheckResiliencyScenarios @ 0x140A27318 (PopCheckResiliencyScenarios.c)
 *     PopDirectedDripsIdleResiliencyCallback @ 0x140A27484 (PopDirectedDripsIdleResiliencyCallback.c)
 *     PopEnforceDeepSleep @ 0x140AAC13C (PopEnforceDeepSleep.c)
 *     PopPowerInformationInternal @ 0x140AC4A30 (PopPowerInformationInternal.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     PopDiagTraceSetDeepSleepConstraint @ 0x1403CB3A8 (PopDiagTraceSetDeepSleepConstraint.c)
 *     PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x1403CB59C (PopDeepSleepResiliencyPhaseAccountingUpdate.c)
 *     KeClearForceIdle @ 0x1403CB798 (KeClearForceIdle.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
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
