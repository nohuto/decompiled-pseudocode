/*
 * XREFs of Feature_DolbyVisionForcePresent__private_IsEnabledDeviceUsageNoInline @ 0x1401AEC80
 * Callers:
 *     xxxVideoPortCalloutThread @ 0x1401B08D4 (xxxVideoPortCalloutThread.c)
 * Callees:
 *     Feature_DolbyVisionForcePresent__private_IsEnabledFallback @ 0x1401AECB8 (Feature_DolbyVisionForcePresent__private_IsEnabledFallback.c)
 */

__int64 Feature_DolbyVisionForcePresent__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DolbyVisionForcePresent__private_featureState & 0x10) != 0 )
    return Feature_DolbyVisionForcePresent__private_featureState & 1;
  else
    return Feature_DolbyVisionForcePresent__private_IsEnabledFallback(
             (unsigned int)Feature_DolbyVisionForcePresent__private_featureState,
             3LL);
}
