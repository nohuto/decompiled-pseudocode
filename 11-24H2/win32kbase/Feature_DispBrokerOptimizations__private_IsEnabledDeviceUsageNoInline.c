/*
 * XREFs of Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x1401A8EC8
 * Callers:
 *     DrvSetDisplayConfig @ 0x140137640 (DrvSetDisplayConfig.c)
 *     xxxUserSetDisplayConfig @ 0x1401636C0 (xxxUserSetDisplayConfig.c)
 *     ?SetDisplayConfigGetActualPathsModality@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140178A48 (-SetDisplayConfigGetActualPathsModality@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcDatagram_5___lambda_8341fb6a1f9e9c95dd045a579bb39db4__&DrvSampleDisplayState_ @ 0x1401A87C8 (InitDisplayBrokerMessage_DispBroker--AlpcDatagram_5___lambda_8341fb6a1f9e9c95dd045a579bb39db4__-.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401AE8CC (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     InitVideo @ 0x1401B2E18 (InitVideo.c)
 *     ApplyPathsModality @ 0x1401C67FC (ApplyPathsModality.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401C6C88 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1401C9DD0 (DrvDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     Feature_DispBrokerOptimizations__private_IsEnabledFallback @ 0x1401A8F00 (Feature_DispBrokerOptimizations__private_IsEnabledFallback.c)
 */

__int64 Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DispBrokerOptimizations__private_featureState & 0x10) != 0 )
    return Feature_DispBrokerOptimizations__private_featureState & 1;
  else
    return Feature_DispBrokerOptimizations__private_IsEnabledFallback(
             (unsigned int)Feature_DispBrokerOptimizations__private_featureState,
             3LL);
}
