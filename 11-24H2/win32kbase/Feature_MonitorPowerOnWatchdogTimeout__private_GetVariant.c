/*
 * XREFs of Feature_MonitorPowerOnWatchdogTimeout__private_GetVariant @ 0x1401AED28
 * Callers:
 *     ?InitializePowerWatchdogTimeoutDefaults@@YAXXZ @ 0x140140064 (-InitializePowerWatchdogTimeoutDefaults@@YAXXZ.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportVariantUsageToService @ 0x1401B0604 (wil_details_FeatureReporting_ReportVariantUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedVariantState @ 0x1401B06A0 (wil_details_FeatureStateCache_ReevaluateCachedVariantState.c)
 */

__int64 __fastcall Feature_MonitorPowerOnWatchdogTimeout__private_GetVariant(__int64 a1)
{
  __int64 v1; // rbx

  v1 = Feature_MonitorPowerOnWatchdogTimeout__private_featureState;
  if ( (Feature_MonitorPowerOnWatchdogTimeout__private_featureState & 8) == 0 )
    v1 = wil_details_FeatureStateCache_ReevaluateCachedVariantState(
           a1,
           Feature_MonitorPowerOnWatchdogTimeout__private_featureState);
  wil_details_FeatureReporting_ReportVariantUsageToService(a1, v1);
  return ((unsigned int)v1 >> 12) & 0x3F;
}
