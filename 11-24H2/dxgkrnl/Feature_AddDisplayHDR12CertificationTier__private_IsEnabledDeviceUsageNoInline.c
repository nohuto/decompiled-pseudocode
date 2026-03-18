/*
 * XREFs of Feature_AddDisplayHDR12CertificationTier__private_IsEnabledDeviceUsageNoInline @ 0x14006DE94
 * Callers:
 *     ?MonitorGetDisplayHdrSupportLevel@@YAJPEAUHDXGMONITOR__@@PEAW4_DISPLAYCONFIG_HDR_CERTIFICATIONS@@PEAW4_DISPLAYCONFIG_HDR_CERTIFICATIONS2@@@Z @ 0x14026E3A0 (-MonitorGetDisplayHdrSupportLevel@@YAJPEAUHDXGMONITOR__@@PEAW4_DISPLAYCONFIG_HDR_CERTIFICATIONS@.c)
 *     ?CopyInstance@MonitorColorState@DxgMonitor@@QEBA?AV?$unique_ptr@VMonitorColorState@DxgMonitor@@U?$default_delete@VMonitorColorState@DxgMonitor@@@wistd@@@wistd@@AEAVIMonitorComponentParent@2@AEAVIMonitorRegistry@2@@Z @ 0x14027ADA0 (-CopyInstance@MonitorColorState@DxgMonitor@@QEBA-AV-$unique_ptr@VMonitorColorState@DxgMonitor@@U.c)
 *     ?_ReadDisplayHdrSupportFromPnpRegistry@MonitorColorState@DxgMonitor@@AEAAJAEAW4_DISPLAYCONFIG_HDR_CERTIFICATIONS@@AEAW4_DISPLAYCONFIG_HDR_CERTIFICATIONS2@@AEA_N@Z @ 0x14027C74C (-_ReadDisplayHdrSupportFromPnpRegistry@MonitorColorState@DxgMonitor@@AEAAJAEAW4_DISPLAYCONFIG_HD.c)
 *     ?OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14028A668 (-OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@.c)
 *     DxgkGetMonitorInternalInfo @ 0x140413FF0 (DxgkGetMonitorInternalInfo.c)
 * Callees:
 *     Feature_AddDisplayHDR12CertificationTier__private_IsEnabledFallback @ 0x14006DECC (Feature_AddDisplayHDR12CertificationTier__private_IsEnabledFallback.c)
 */

__int64 Feature_AddDisplayHDR12CertificationTier__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_AddDisplayHDR12CertificationTier__private_featureState & 0x10) != 0 )
    return Feature_AddDisplayHDR12CertificationTier__private_featureState & 1;
  else
    return Feature_AddDisplayHDR12CertificationTier__private_IsEnabledFallback(
             (unsigned int)Feature_AddDisplayHDR12CertificationTier__private_featureState,
             3LL);
}
