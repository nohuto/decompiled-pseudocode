/*
 * XREFs of Feature_Usb4PerAdapterPowerQueue__private_IsEnabledDeviceUsageNoInline @ 0x14007DE18
 * Callers:
 *     ??0MONITOR_MGR@@QEAA@PEAVADAPTER_DISPLAY@@@Z @ 0x140006494 (--0MONITOR_MGR@@QEAA@PEAVADAPTER_DISPLAY@@@Z.c)
 *     ?_InitializeMonitorManager@MONITOR_MGR@@QEAAJXZ @ 0x140274838 (-_InitializeMonitorManager@MONITOR_MGR@@QEAAJXZ.c)
 *     ?MarkWorkItemFinished@USB4_POWERON_WORK_QUEUE@@QEAAXXZ @ 0x140278164 (-MarkWorkItemFinished@USB4_POWERON_WORK_QUEUE@@QEAAXXZ.c)
 *     DxgkPowerOnOffMonitor @ 0x1404279D4 (DxgkPowerOnOffMonitor.c)
 *     ?MonitorEnableDisableMonitor@@YAJPEAXKPEAKEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042DE1C (-MonitorEnableDisableMonitor@@YAJPEAXKPEAKEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     Feature_Usb4PerAdapterPowerQueue__private_IsEnabledFallback @ 0x14007DE50 (Feature_Usb4PerAdapterPowerQueue__private_IsEnabledFallback.c)
 */

__int64 Feature_Usb4PerAdapterPowerQueue__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Usb4PerAdapterPowerQueue__private_featureState & 0x10) != 0 )
    return Feature_Usb4PerAdapterPowerQueue__private_featureState & 1;
  else
    return Feature_Usb4PerAdapterPowerQueue__private_IsEnabledFallback(
             (unsigned int)Feature_Usb4PerAdapterPowerQueue__private_featureState,
             3LL);
}
