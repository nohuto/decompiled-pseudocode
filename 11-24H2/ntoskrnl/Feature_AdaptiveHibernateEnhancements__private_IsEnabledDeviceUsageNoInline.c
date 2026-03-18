/*
 * XREFs of Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline @ 0x1405D787C
 * Callers:
 *     PopPowerAggregatorHandleModernStandbyIntent @ 0x1407596E0 (PopPowerAggregatorHandleModernStandbyIntent.c)
 *     PopPowerAggregatorNotifyPdcPhaseState @ 0x140759914 (PopPowerAggregatorNotifyPdcPhaseState.c)
 *     PopPowerAggregatorTriggerAdaptiveAction @ 0x140759F40 (PopPowerAggregatorTriggerAdaptiveAction.c)
 *     PopDelayedPdcRegistrationWorker @ 0x14075D450 (PopDelayedPdcRegistrationWorker.c)
 *     PopAdaptiveStandbyCheckHibernateBudgetAction @ 0x1407604EC (PopAdaptiveStandbyCheckHibernateBudgetAction.c)
 *     PopAdaptiveStandbyCheckRestrictedStandbyBudgetAction @ 0x140760D48 (PopAdaptiveStandbyCheckRestrictedStandbyBudgetAction.c)
 *     PopAdaptiveStandbyHandleBatteryUpdate @ 0x140761118 (PopAdaptiveStandbyHandleBatteryUpdate.c)
 *     PopAdaptiveStandbyInitialize @ 0x1407617F8 (PopAdaptiveStandbyInitialize.c)
 *     PopAdaptiveStandbySessionStart @ 0x140762088 (PopAdaptiveStandbySessionStart.c)
 *     PopAdaptiveStandbySessionStop @ 0x1407622D0 (PopAdaptiveStandbySessionStop.c)
 *     PopAdaptiveStandbyTraceBatteryUpdate @ 0x1407624E0 (PopAdaptiveStandbyTraceBatteryUpdate.c)
 *     PopAdaptiveStandbyTraceSessionSettings @ 0x14076298C (PopAdaptiveStandbyTraceSessionSettings.c)
 *     PopAdaptiveStandbyWnfCallback @ 0x140762DD0 (PopAdaptiveStandbyWnfCallback.c)
 * Callees:
 *     Feature_AdaptiveHibernateEnhancements__private_IsEnabledFallback @ 0x1405D78B4 (Feature_AdaptiveHibernateEnhancements__private_IsEnabledFallback.c)
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
