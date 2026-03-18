/*
 * XREFs of Feature_HdrBrightnessPolicy__private_IsEnabledDeviceUsageNoInline @ 0x14006E08C
 * Callers:
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_KK@Z @ 0x140184008 (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_KK@Z.c)
 *     ?SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJK@Z @ 0x140186290 (-SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJK@Z.c)
 *     ?OnInitialized@MonitorColorState@DxgMonitor@@QEAAXXZ @ 0x14027BF50 (-OnInitialized@MonitorColorState@DxgMonitor@@QEAAXXZ.c)
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x1403C64A0 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 *     DpiPdoDispatchInternalIoctl @ 0x140429C30 (DpiPdoDispatchInternalIoctl.c)
 * Callees:
 *     Feature_HdrBrightnessPolicy__private_IsEnabledFallback @ 0x14006E0C4 (Feature_HdrBrightnessPolicy__private_IsEnabledFallback.c)
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
