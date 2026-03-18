/*
 * XREFs of Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline @ 0x14007DD5C
 * Callers:
 *     ?HasOverrides@MultiMonitorDescriptor@DxgMonitor@@UEBA_NXZ @ 0x140092150 (-HasOverrides@MultiMonitorDescriptor@DxgMonitor@@UEBA_NXZ.c)
 *     ?LoadDescriptorOverridesFromRegistry@MultiMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorRegistry@2@@Z @ 0x1400921E0 (-LoadDescriptorOverridesFromRegistry@MultiMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorRegistr.c)
 *     ?UnloadDescriptorOverrides@MultiMonitorDescriptor@DxgMonitor@@UEAAXXZ @ 0x140092260 (-UnloadDescriptorOverrides@MultiMonitorDescriptor@DxgMonitor@@UEAAXXZ.c)
 *     DpiFdoInitializeFdo @ 0x140242CBC (DpiFdoInitializeFdo.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x1402446F8 (DpiFdoQueryAdapterInfoIntegratedDisplay2.c)
 *     DpiQueryDisplayIDDescriptor @ 0x1402559CC (DpiQueryDisplayIDDescriptor.c)
 *     ?CopyInstance@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x140280840 (-CopyInstance@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@UIMonitorDescriptor@Dxg.c)
 *     ?CopyWithoutOverrides@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x140280960 (-CopyWithoutOverrides@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@UIMonitorDescri.c)
 *     ?HasOverrides@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA_NXZ @ 0x140281000 (-HasOverrides@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA_NXZ.c)
 *     ?LoadDescriptorOverridesFromRegistry@DisplayIdMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorRegistry@2@@Z @ 0x140281080 (-LoadDescriptorOverridesFromRegistry@DisplayIdMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorReg.c)
 *     ?UnloadDescriptorOverrides@DisplayIdMonitorDescriptor@DxgMonitor@@UEAAXXZ @ 0x140281370 (-UnloadDescriptorOverrides@DisplayIdMonitorDescriptor@DxgMonitor@@UEAAXXZ.c)
 *     ?OnDeviceNodeReady@MonitorDescriptorState@DxgMonitor@@QEAAXAEA_N@Z @ 0x14028A57C (-OnDeviceNodeReady@MonitorDescriptorState@DxgMonitor@@QEAAXAEA_N@Z.c)
 *     DpiDxgkDdiQueryDeviceDescriptor @ 0x1403E5FD0 (DpiDxgkDdiQueryDeviceDescriptor.c)
 *     DpiPdoGetDeviceDescriptor @ 0x14042B12C (DpiPdoGetDeviceDescriptor.c)
 *     ?DxgMiniportQueryMonitorInterfaceCB@@YAJQEAXW4_DXGK_MONITOR_INTERFACE_VERSION@@PEAPEBU_DXGK_MONITOR_INTERFACE@@@Z @ 0x14042E520 (-DxgMiniportQueryMonitorInterfaceCB@@YAJQEAXW4_DXGK_MONITOR_INTERFACE_VERSION@@PEAPEBU_DXGK_MONI.c)
 *     ?OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ @ 0x14042ED20 (-OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ.c)
 * Callees:
 *     Feature_SetMonitorDescriptorOverride__private_IsEnabledFallback @ 0x14007DD94 (Feature_SetMonitorDescriptorOverride__private_IsEnabledFallback.c)
 */

__int64 Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_SetMonitorDescriptorOverride__private_featureState & 0x10) != 0 )
    return Feature_SetMonitorDescriptorOverride__private_featureState & 1;
  else
    return Feature_SetMonitorDescriptorOverride__private_IsEnabledFallback(
             (unsigned int)Feature_SetMonitorDescriptorOverride__private_featureState,
             3LL);
}
