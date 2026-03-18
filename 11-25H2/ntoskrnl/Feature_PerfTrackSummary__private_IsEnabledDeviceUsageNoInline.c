/*
 * XREFs of Feature_PerfTrackSummary__private_IsEnabledDeviceUsageNoInline @ 0x1405D81E4
 * Callers:
 *     PopPotsLogHibernatePerformance @ 0x140A59D2C (PopPotsLogHibernatePerformance.c)
 * Callees:
 *     Feature_PerfTrackSummary__private_IsEnabledFallback @ 0x1405D821C (Feature_PerfTrackSummary__private_IsEnabledFallback.c)
 */

__int64 Feature_PerfTrackSummary__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_PerfTrackSummary__private_featureState & 0x10) != 0 )
    return Feature_PerfTrackSummary__private_featureState & 1;
  else
    return Feature_PerfTrackSummary__private_IsEnabledFallback(
             (unsigned int)Feature_PerfTrackSummary__private_featureState,
             3LL);
}
