/*
 * XREFs of Feature_AsyncSpiSetNonClientMetrics_BackportNi__private_IsEnabledDeviceUsage @ 0x1C013B2BC
 * Callers:
 *     xxxMetricsRecalc @ 0x1C01C804C (xxxMetricsRecalc.c)
 * Callees:
 *     Feature_AsyncSpiSetNonClientMetrics_BackportNi__private_IsEnabledFallback @ 0x1C013B2F4 (Feature_AsyncSpiSetNonClientMetrics_BackportNi__private_IsEnabledFallback.c)
 */

__int64 Feature_AsyncSpiSetNonClientMetrics_BackportNi__private_IsEnabledDeviceUsage()
{
  if ( (Feature_AsyncSpiSetNonClientMetrics_BackportNi__private_featureState & 0x10) != 0 )
    return Feature_AsyncSpiSetNonClientMetrics_BackportNi__private_featureState & 1;
  else
    return Feature_AsyncSpiSetNonClientMetrics_BackportNi__private_IsEnabledFallback(
             (unsigned int)Feature_AsyncSpiSetNonClientMetrics_BackportNi__private_featureState,
             3LL);
}
