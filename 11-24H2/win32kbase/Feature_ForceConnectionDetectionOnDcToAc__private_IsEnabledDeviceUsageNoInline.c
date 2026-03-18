/*
 * XREFs of Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline @ 0x1401AECD4
 * Callers:
 *     DrvSetDisplayConfig @ 0x140137640 (DrvSetDisplayConfig.c)
 *     xxxVideoPortCalloutThread @ 0x1401B08D4 (xxxVideoPortCalloutThread.c)
 *     InitVideo @ 0x1401B2E18 (InitVideo.c)
 * Callees:
 *     Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledFallback @ 0x1401AED0C (Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledFallback.c)
 */

__int64 Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ForceConnectionDetectionOnDcToAc__private_featureState & 0x10) != 0 )
    return Feature_ForceConnectionDetectionOnDcToAc__private_featureState & 1;
  else
    return Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledFallback(
             (unsigned int)Feature_ForceConnectionDetectionOnDcToAc__private_featureState,
             3LL);
}
