/*
 * XREFs of Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline @ 0x1405D4DFC
 * Callers:
 *     PopPowerAggregatorHandleModernStandbyIntent @ 0x140757B40 (PopPowerAggregatorHandleModernStandbyIntent.c)
 *     PopPowerAggregatorNotifyPdcPhaseState @ 0x140757DB4 (PopPowerAggregatorNotifyPdcPhaseState.c)
 *     PopPowerAggregatorTriggerAdaptiveAction @ 0x140758390 (PopPowerAggregatorTriggerAdaptiveAction.c)
 *     PopDelayedPdcRegistrationWorker @ 0x14075C3F0 (PopDelayedPdcRegistrationWorker.c)
 *     PopAdaptiveStandbyCheckHibernateBudgetAction @ 0x14075F4EC (PopAdaptiveStandbyCheckHibernateBudgetAction.c)
 *     PopAdaptiveStandbyCheckRestrictedStandbyBudgetAction @ 0x14075FEF4 (PopAdaptiveStandbyCheckRestrictedStandbyBudgetAction.c)
 *     PopAdaptiveStandbyHandleBatteryUpdate @ 0x140760484 (PopAdaptiveStandbyHandleBatteryUpdate.c)
 *     PopAdaptiveStandbyInitialize @ 0x140760B64 (PopAdaptiveStandbyInitialize.c)
 *     PopAdaptiveStandbyPowerSettingCallback @ 0x1407612D0 (PopAdaptiveStandbyPowerSettingCallback.c)
 *     PopAdaptiveStandbySessionStart @ 0x140761630 (PopAdaptiveStandbySessionStart.c)
 *     PopAdaptiveStandbySessionStop @ 0x1407619D0 (PopAdaptiveStandbySessionStop.c)
 *     PopAdaptiveStandbyTraceBatteryUpdate @ 0x140761CB0 (PopAdaptiveStandbyTraceBatteryUpdate.c)
 *     PopAdaptiveStandbyTraceSessionSettings @ 0x14076215C (PopAdaptiveStandbyTraceSessionSettings.c)
 *     PopAdaptiveStandbyWnfCallback @ 0x140762640 (PopAdaptiveStandbyWnfCallback.c)
 * Callees:
 *     Feature_AdaptiveHibernateEnhancements__private_IsEnabledFallback @ 0x1405D4E34 (Feature_AdaptiveHibernateEnhancements__private_IsEnabledFallback.c)
 */

__int64 Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_AdaptiveHibernateEnhancements__private_featureState & 0x10) != 0 )
    return Feature_AdaptiveHibernateEnhancements__private_featureState & 1;
  else
    return Feature_AdaptiveHibernateEnhancements__private_IsEnabledFallback(
             (unsigned int)Feature_AdaptiveHibernateEnhancements__private_featureState,
             3LL);
}
