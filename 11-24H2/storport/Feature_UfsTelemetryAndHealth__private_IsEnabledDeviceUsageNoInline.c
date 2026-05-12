/*
 * XREFs of Feature_UfsTelemetryAndHealth__private_IsEnabledDeviceUsageNoInline @ 0x1400AABB8
 * Callers:
 *     StorpAdapterHealthWorkItemRoutine @ 0x1400AF450 (StorpAdapterHealthWorkItemRoutine.c)
 *     StorpLogPerAdapterStatistics @ 0x1400B0A00 (StorpLogPerAdapterStatistics.c)
 * Callees:
 *     Feature_UfsTelemetryAndHealth__private_IsEnabledFallback @ 0x1400AABF0 (Feature_UfsTelemetryAndHealth__private_IsEnabledFallback.c)
 */

__int64 Feature_UfsTelemetryAndHealth__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_UfsTelemetryAndHealth__private_featureState & 0x10) != 0 )
    return Feature_UfsTelemetryAndHealth__private_featureState & 1;
  else
    return Feature_UfsTelemetryAndHealth__private_IsEnabledFallback(
             (unsigned int)Feature_UfsTelemetryAndHealth__private_featureState,
             3LL);
}
