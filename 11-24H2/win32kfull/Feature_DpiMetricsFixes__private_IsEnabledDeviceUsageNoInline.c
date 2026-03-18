/*
 * XREFs of Feature_DpiMetricsFixes__private_IsEnabledDeviceUsageNoInline @ 0x140287708
 * Callers:
 *     GetDpiDependentMetric @ 0x140074FC4 (GetDpiDependentMetric.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x140227310 (_EnsureDpiDepSysMetCacheForPlateau.c)
 * Callees:
 *     Feature_DpiMetricsFixes__private_IsEnabledFallback @ 0x140287740 (Feature_DpiMetricsFixes__private_IsEnabledFallback.c)
 */

__int64 Feature_DpiMetricsFixes__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DpiMetricsFixes__private_featureState & 0x10) != 0 )
    return Feature_DpiMetricsFixes__private_featureState & 1;
  else
    return Feature_DpiMetricsFixes__private_IsEnabledFallback(
             (unsigned int)Feature_DpiMetricsFixes__private_featureState,
             3LL);
}
