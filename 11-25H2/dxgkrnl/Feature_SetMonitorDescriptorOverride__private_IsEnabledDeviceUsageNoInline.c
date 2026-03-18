/*
 * XREFs of Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline @ 0x14007D6D4
 * Callers:
 *     ?HasOverrides@MultiMonitorDescriptor@DxgMonitor@@UEBA_NXZ @ 0x140090E00 (-HasOverrides@MultiMonitorDescriptor@DxgMonitor@@UEBA_NXZ.c)
 *     ?LoadDescriptorOverridesFromRegistry@MultiMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorRegistry@2@@Z @ 0x140090E90 (-LoadDescriptorOverridesFromRegistry@MultiMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorRegistr.c)
 *     ?UnloadDescriptorOverrides@MultiMonitorDescriptor@DxgMonitor@@UEAAXXZ @ 0x140090F10 (-UnloadDescriptorOverrides@MultiMonitorDescriptor@DxgMonitor@@UEAAXXZ.c)
 *     DpiFdoInitializeFdo @ 0x14023C19C (DpiFdoInitializeFdo.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x14023DB08 (DpiFdoQueryAdapterInfoIntegratedDisplay2.c)
 *     DpiQueryDisplayIDDescriptor @ 0x14024EB9C (DpiQueryDisplayIDDescriptor.c)
 *     ?CopyInstance@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x140279350 (-CopyInstance@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@UIMonitorDescriptor@Dxg.c)
 *     ?CopyWithoutOverrides@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x140279470 (-CopyWithoutOverrides@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@UIMonitorDescri.c)
 *     ?HasOverrides@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA_NXZ @ 0x140279AD0 (-HasOverrides@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA_NXZ.c)
 *     ?LoadDescriptorOverridesFromRegistry@DisplayIdMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorRegistry@2@@Z @ 0x140279B50 (-LoadDescriptorOverridesFromRegistry@DisplayIdMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorReg.c)
 *     ?UnloadDescriptorOverrides@DisplayIdMonitorDescriptor@DxgMonitor@@UEAAXXZ @ 0x140279E50 (-UnloadDescriptorOverrides@DisplayIdMonitorDescriptor@DxgMonitor@@UEAAXXZ.c)
 *     ?OnDeviceNodeReady@MonitorDescriptorState@DxgMonitor@@QEAAXAEA_N@Z @ 0x140351CA4 (-OnDeviceNodeReady@MonitorDescriptorState@DxgMonitor@@QEAAXAEA_N@Z.c)
 *     DpiPdoGetDeviceDescriptor @ 0x1403C9318 (DpiPdoGetDeviceDescriptor.c)
 *     DpiDxgkDdiQueryDeviceDescriptor @ 0x1403EC680 (DpiDxgkDdiQueryDeviceDescriptor.c)
 *     ?DxgMiniportQueryMonitorInterfaceCB@@YAJQEAXW4_DXGK_MONITOR_INTERFACE_VERSION@@PEAPEBU_DXGK_MONITOR_INTERFACE@@@Z @ 0x14042C630 (-DxgMiniportQueryMonitorInterfaceCB@@YAJQEAXW4_DXGK_MONITOR_INTERFACE_VERSION@@PEAPEBU_DXGK_MONI.c)
 *     ?OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ @ 0x14042CE30 (-OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ.c)
 * Callees:
 *     Feature_SetMonitorDescriptorOverride__private_IsEnabledFallback @ 0x14007D70C (Feature_SetMonitorDescriptorOverride__private_IsEnabledFallback.c)
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
