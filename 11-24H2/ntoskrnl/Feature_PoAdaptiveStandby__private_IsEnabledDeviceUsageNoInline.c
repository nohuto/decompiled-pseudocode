/*
 * XREFs of Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline @ 0x1405CCC74
 * Callers:
 *     PopIdleChooseDozeS4Time @ 0x1405D812C (PopIdleChooseDozeS4Time.c)
 *     PdcPoCurrentPdcPhase @ 0x1405D87A0 (PdcPoCurrentPdcPhase.c)
 *     PopPowerAggregatorActiveToScreenOffStateHandler @ 0x140759060 (PopPowerAggregatorActiveToScreenOffStateHandler.c)
 *     PopPowerAggregatorNotifyPdcPhaseState @ 0x140759914 (PopPowerAggregatorNotifyPdcPhaseState.c)
 *     PopPowerAggregatorTriggerAdaptiveAction @ 0x140759F40 (PopPowerAggregatorTriggerAdaptiveAction.c)
 *     PopIdleAoAcDozeToS4 @ 0x14075C370 (PopIdleAoAcDozeToS4.c)
 *     PopIdleTriggerAdaptiveStandbyAction @ 0x14075C50C (PopIdleTriggerAdaptiveStandbyAction.c)
 *     PopUmpoProcessPowerMessage @ 0x140A23DB4 (PopUmpoProcessPowerMessage.c)
 *     PopPdcRegister @ 0x140ABEFF8 (PopPdcRegister.c)
 *     PopIdleCsStateChanged @ 0x140AC9180 (PopIdleCsStateChanged.c)
 *     PopIdleGlobalUserPresenceCallback @ 0x140AC9210 (PopIdleGlobalUserPresenceCallback.c)
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 *     PopInitPlatformSettings @ 0x140C67E1C (PopInitPlatformSettings.c)
 * Callees:
 *     Feature_PoAdaptiveStandby__private_IsEnabledFallback @ 0x1405CCCAC (Feature_PoAdaptiveStandby__private_IsEnabledFallback.c)
 */

__int64 Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_PoAdaptiveStandby__private_featureState & 0x10) != 0 )
    return Feature_PoAdaptiveStandby__private_featureState & 1;
  else
    return Feature_PoAdaptiveStandby__private_IsEnabledFallback(
             (unsigned int)Feature_PoAdaptiveStandby__private_featureState,
             3LL);
}
