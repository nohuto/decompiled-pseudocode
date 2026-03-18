/*
 * XREFs of ?OnUsageUpdated@DXGMONITOR@@QEAAXAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x140189F18
 * Callers:
 *     ?MonitorSetAppOverride@@YAJPEAUHDXGMONITOR__@@U_GUID@@1I_K_NPEBU_UNICODE_STRING@@@Z @ 0x14018C588 (-MonitorSetAppOverride@@YAJPEAUHDXGMONITOR__@@U_GUID@@1I_K_NPEBU_UNICODE_STRING@@@Z.c)
 *     ?MonitorSetUsageClass@@YAJPEAXIW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026F95C (-MonitorSetUsageClass@@YAJPEAXIW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140289EA4 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEvent.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x140275C00 (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 *     ?_UpdateLinkInfo@DXGMONITOR@@QEAAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x140276F90 (-_UpdateLinkInfo@DXGMONITOR@@QEAAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z.c)
 *     ?_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ @ 0x1403C37C0 (-_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ.c)
 */

void __fastcall DXGMONITOR::OnUsageUpdated(
        DXGMONITOR *this,
        struct DxgMonitor::IMonitorDeferredEventSource *a2,
        char a3)
{
  bool v6; // zf
  int v7; // ecx

  v6 = *((_QWORD *)this + 56) == 0LL;
  v7 = *(_DWORD *)(*((_QWORD *)this + 30) + 16LL);
  if ( !v6 != (v7 == 0) )
  {
    if ( v7 )
    {
      DXGMONITOR::_DestroyTtmDevice(this);
      if ( a3 )
        (**(void (__fastcall ***)(struct DxgMonitor::IMonitorDeferredEventSource *, _QWORD, __int64))a2)(
          a2,
          *((unsigned int *)this + 45),
          10LL);
      DXGMONITOR::_UpdateLinkInfo(this, *(unsigned int *)(*((_QWORD *)this + 30) + 16LL));
    }
    else
    {
      DXGMONITOR::_CreateTtmDevice(this);
      if ( a3 )
        (**(void (__fastcall ***)(struct DxgMonitor::IMonitorDeferredEventSource *, _QWORD, __int64))a2)(
          a2,
          *((unsigned int *)this + 45),
          10LL);
    }
  }
}
