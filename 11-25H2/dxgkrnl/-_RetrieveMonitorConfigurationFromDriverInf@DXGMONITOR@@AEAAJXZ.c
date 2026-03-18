/*
 * XREFs of ?_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ @ 0x140352258
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403515CC (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEvent.c)
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@@Z @ 0x140353840 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1400587A4 (--1-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K.c)
 *     ?_RetrieveMonitorOrientationFromAcpi@DXGMONITOR@@AEAAJXZ @ 0x14026F90C (-_RetrieveMonitorOrientationFromAcpi@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorConfigurationFromRegistry@DXGMONITOR@@AEAAJPEAXE@Z @ 0x1403EA178 (-_RetrieveMonitorConfigurationFromRegistry@DXGMONITOR@@AEAAJPEAXE@Z.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorConfigurationFromDriverInf(DXGMONITOR *this)
{
  __int64 v1; // rax
  struct _DEVICE_OBJECT *v4; // rcx
  NTSTATUS MonitorConfigurationFromRegistry; // ebx
  void *DeviceRegKey; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 25);
  if ( !*(_BYTE *)(v1 + 16) )
    return 3221226021LL;
  DeviceRegKey = 0LL;
  v4 = *(struct _DEVICE_OBJECT **)(v1 + 8);
  if ( !v4 || !*(_BYTE *)(v1 + 16) )
  {
    MonitorConfigurationFromRegistry = -1073741661;
LABEL_10:
    WdLogSingleEntry1(2LL, MonitorConfigurationFromRegistry);
    WdLogGlobalForLineNumber = 1639;
    if ( DeviceRegKey )
      ZwClose(DeviceRegKey);
    return (unsigned int)MonitorConfigurationFromRegistry;
  }
  MonitorConfigurationFromRegistry = IoOpenDeviceRegistryKey(v4, 2u, 0x20019u, &DeviceRegKey);
  if ( MonitorConfigurationFromRegistry < 0 )
    goto LABEL_10;
  MonitorConfigurationFromRegistry = DXGMONITOR::_RetrieveMonitorConfigurationFromRegistry(this, DeviceRegKey, 1u);
  if ( MonitorConfigurationFromRegistry >= 0 )
    MonitorConfigurationFromRegistry = DXGMONITOR::_RetrieveMonitorOrientationFromAcpi(this);
  wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&DeviceRegKey);
  return (unsigned int)MonitorConfigurationFromRegistry;
}
