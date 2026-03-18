/*
 * XREFs of Feature_HdrBrightnessPolicy__private_IsEnabledDeviceUsageNoInline @ 0x14006E238
 * Callers:
 *     ?SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJK@Z @ 0x140183F40 (-SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJK@Z.c)
 *     ?OnInitialized@MonitorColorState@DxgMonitor@@QEAAXXZ @ 0x140274E34 (-OnInitialized@MonitorColorState@DxgMonitor@@QEAAXXZ.c)
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x140415E90 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 * Callees:
 *     Feature_HdrBrightnessPolicy__private_IsEnabledFallback @ 0x14006E270 (Feature_HdrBrightnessPolicy__private_IsEnabledFallback.c)
 */

__int64 Feature_HdrBrightnessPolicy__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_HdrBrightnessPolicy__private_featureState & 0x10) != 0 )
    return Feature_HdrBrightnessPolicy__private_featureState & 1;
  else
    return Feature_HdrBrightnessPolicy__private_IsEnabledFallback(
             (unsigned int)Feature_HdrBrightnessPolicy__private_featureState,
             3LL);
}
