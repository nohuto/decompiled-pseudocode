/*
 * XREFs of Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline @ 0x14006E2E0
 * Callers:
 *     ?GetGetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x14005DBAC (-GetGetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     ?_DispatchIoctrls@DXGMONITOR@@QEBAJKKPEAXK0PEA_KK@Z @ 0x14026EF60 (-_DispatchIoctrls@DXGMONITOR@@QEBAJKKPEAXK0PEA_KK@Z.c)
 *     ?OnInitialized@MonitorGammaState@DxgMonitor@@QEAAXXZ @ 0x140272B68 (-OnInitialized@MonitorGammaState@DxgMonitor@@QEAAXXZ.c)
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x140415E90 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 *     DpiPdoDispatchIoctl @ 0x14042A190 (DpiPdoDispatchIoctl.c)
 *     ?OnIoctl@MonitorGammaState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z @ 0x14042D7C0 (-OnIoctl@MonitorGammaState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z.c)
 *     ?_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z @ 0x14042D880 (-_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z.c)
 * Callees:
 *     Feature_ScalarMultiplierForBrightness__private_IsEnabledFallback @ 0x14006E318 (Feature_ScalarMultiplierForBrightness__private_IsEnabledFallback.c)
 */

__int64 Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ScalarMultiplierForBrightness__private_featureState & 0x10) != 0 )
    return Feature_ScalarMultiplierForBrightness__private_featureState & 1;
  else
    return Feature_ScalarMultiplierForBrightness__private_IsEnabledFallback(
             (unsigned int)Feature_ScalarMultiplierForBrightness__private_featureState,
             3LL);
}
