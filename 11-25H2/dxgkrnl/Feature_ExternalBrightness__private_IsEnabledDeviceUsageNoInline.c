/*
 * XREFs of Feature_ExternalBrightness__private_IsEnabledDeviceUsageNoInline @ 0x14006E1E4
 * Callers:
 *     ?OnInitialized@MonitorColorState@DxgMonitor@@QEAAXXZ @ 0x140274E34 (-OnInitialized@MonitorColorState@DxgMonitor@@QEAAXXZ.c)
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x140415E90 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 * Callees:
 *     Feature_ExternalBrightness__private_IsEnabledFallback @ 0x14006E21C (Feature_ExternalBrightness__private_IsEnabledFallback.c)
 */

__int64 Feature_ExternalBrightness__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ExternalBrightness__private_featureState & 0x10) != 0 )
    return Feature_ExternalBrightness__private_featureState & 1;
  else
    return Feature_ExternalBrightness__private_IsEnabledFallback(
             (unsigned int)Feature_ExternalBrightness__private_featureState,
             3LL);
}
