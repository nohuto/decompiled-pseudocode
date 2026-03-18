/*
 * XREFs of Feature_DpiMetricsInUserMode__private_IsEnabledDeviceUsageNoInline @ 0x1401B11B4
 * Callers:
 *     CleanupGDI @ 0x140165F88 (CleanupGDI.c)
 *     Get96DpiMetrics @ 0x1401940D0 (Get96DpiMetrics.c)
 *     GetSessionDpiMetrics @ 0x140194120 (GetSessionDpiMetrics.c)
 * Callees:
 *     Feature_DpiMetricsInUserMode__private_IsEnabledFallback @ 0x1401B11EC (Feature_DpiMetricsInUserMode__private_IsEnabledFallback.c)
 */

__int64 Feature_DpiMetricsInUserMode__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DpiMetricsInUserMode__private_featureState & 0x10) != 0 )
    return Feature_DpiMetricsInUserMode__private_featureState & 1;
  else
    return Feature_DpiMetricsInUserMode__private_IsEnabledFallback(
             (unsigned int)Feature_DpiMetricsInUserMode__private_featureState,
             3LL);
}
