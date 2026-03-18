/*
 * XREFs of Feature_Enable3x4StagingControls__private_IsEnabledDeviceUsageNoInline @ 0x140090368
 * Callers:
 *     ?_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z @ 0x14042D880 (-_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z.c)
 * Callees:
 *     Feature_Enable3x4StagingControls__private_IsEnabledFallback @ 0x1400903A0 (Feature_Enable3x4StagingControls__private_IsEnabledFallback.c)
 */

__int64 Feature_Enable3x4StagingControls__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Enable3x4StagingControls__private_featureState & 0x10) != 0 )
    return Feature_Enable3x4StagingControls__private_featureState & 1;
  else
    return Feature_Enable3x4StagingControls__private_IsEnabledFallback(
             (unsigned int)Feature_Enable3x4StagingControls__private_featureState,
             3LL);
}
