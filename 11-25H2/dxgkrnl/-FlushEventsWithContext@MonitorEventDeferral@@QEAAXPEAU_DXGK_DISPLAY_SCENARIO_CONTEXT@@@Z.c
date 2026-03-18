/*
 * XREFs of ?FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140354008
 * Callers:
 *     ?MonitorSetAppOverride@@YAJPEAUHDXGMONITOR__@@U_GUID@@1I_K_NPEBU_UNICODE_STRING@@@Z @ 0x14018A338 (-MonitorSetAppOverride@@YAJPEAUHDXGMONITOR__@@U_GUID@@1I_K_NPEBU_UNICODE_STRING@@@Z.c)
 *     ?MonitorDisableMonitorVirtualModeSupport@@YAJPEAXIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140266D8C (-MonitorDisableMonitorVirtualModeSupport@@YAJPEAXIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?MonitorSetUsageClass@@YAJPEAXIW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402689FC (-MonitorSetUsageClass@@YAJPEAXIW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140268BF8 (-RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x14026D140 (-_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z.c)
 *     ?MonitorNotifyDeviceNodeReady@@YAJPEAXIPEAU_DEVICE_OBJECT@@@Z @ 0x140353960 (-MonitorNotifyDeviceNodeReady@@YAJPEAXIPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEAEAVMONITOR_REF_ACCESSOR@@PEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140355604 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEAEAVMONITOR_REF_ACCESSOR@@PEAU_.c)
 *     ??1MonitorEventDeferral@@UEAA@XZ @ 0x1403F8BE8 (--1MonitorEventDeferral@@UEAA@XZ.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@@AEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140402270 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall MonitorEventDeferral::FlushEventsWithContext(
        MonitorEventDeferral *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  __int64 i; // rdi

  if ( *((_QWORD *)this + 1) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 28); i = (unsigned int)(i + 1) )
      (***((void (__fastcall ****)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *))this
         + 1))(
        *((_QWORD *)this + 1),
        *((unsigned int *)this + 6 * i + 4),
        *((unsigned int *)this + 6 * i + 5),
        *((_QWORD *)this + 3 * i + 3),
        *((_DWORD *)this + 6 * i + 8),
        a2);
    *((_DWORD *)this + 28) = 0;
  }
  else
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5305;
  }
}
