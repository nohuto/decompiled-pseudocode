/*
 * XREFs of Feature_PanelBufferControl__private_IsEnabledDeviceUsageNoInline @ 0x14006E0E0
 * Callers:
 *     DpiPanelBufferingGetCaps @ 0x14008A7DC (DpiPanelBufferingGetCaps.c)
 *     DpiPanelBufferingSetAutomaticPolicy @ 0x14008A96C (DpiPanelBufferingSetAutomaticPolicy.c)
 *     DpiPanelBufferingSetOverrideState @ 0x14008AB54 (DpiPanelBufferingSetOverrideState.c)
 *     DxgkDDisplayEnum2 @ 0x1401C5D30 (DxgkDDisplayEnum2.c)
 *     DxgkDDisplayEnumInternalLegacy @ 0x1401C5D60 (DxgkDDisplayEnumInternalLegacy.c)
 *     DpiFdoStartAdapter @ 0x140245688 (DpiFdoStartAdapter.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x14025ABEC (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     ConfigureFeatureDefaults @ 0x1402882E4 (ConfigureFeatureDefaults.c)
 *     DxgkDispMgrTargetOperation @ 0x1404150A0 (DxgkDispMgrTargetOperation.c)
 * Callees:
 *     Feature_PanelBufferControl__private_IsEnabledFallback @ 0x14006E118 (Feature_PanelBufferControl__private_IsEnabledFallback.c)
 */

__int64 Feature_PanelBufferControl__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_PanelBufferControl__private_featureState & 0x10) != 0 )
    return Feature_PanelBufferControl__private_featureState & 1;
  else
    return Feature_PanelBufferControl__private_IsEnabledFallback(
             (unsigned int)Feature_PanelBufferControl__private_featureState,
             3LL);
}
