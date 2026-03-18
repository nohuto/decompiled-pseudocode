/*
 * XREFs of ?OnInitialized@MonitorUsb4State@DxgMonitor@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042C914
 * Callers:
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140356840 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEve.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Assign@USB4POFXREF_REF_ACCESSOR@DxgMonitor@@QEAAXPEAVUsb4HostRouterPoFxRefv2@2@@Z @ 0x1400902F8 (-Assign@USB4POFXREF_REF_ACCESSOR@DxgMonitor@@QEAAXPEAVUsb4HostRouterPoFxRefv2@2@@Z.c)
 *     ?SetupPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042CA10 (-SetupPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_.c)
 */

__int64 __fastcall DxgMonitor::MonitorUsb4State::OnInitialized(
        _DWORD *Context,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // r8
  unsigned int v10; // edi

  v6 = operator new(0x60uLL, 0x4D677844u, 64LL, a4);
  if ( v6 )
  {
    v7 = Context[15];
    v8 = *((_QWORD *)Context + 8);
    *(_QWORD *)(v6 + 32) = 0LL;
    *(_QWORD *)(v6 + 56) = 0LL;
    *(_QWORD *)(v6 + 64) = 0LL;
    *(_DWORD *)(v6 + 80) = 0;
    *(_DWORD *)(v6 + 84) = -1;
    *(_QWORD *)v6 = &rc_buffer<DispBroker::AlpcRequest<7>>::`vftable';
    *(_QWORD *)v6 = &DxgMonitor::Usb4HostRouterPoFxRefv2::`vftable';
    *(_DWORD *)(v6 + 8) = 1;
    *(_DWORD *)(v6 + 16) = v7;
    *(_QWORD *)(v6 + 24) = v8;
    *(_BYTE *)(v6 + 40) = 0;
    *(_QWORD *)(v6 + 72) = 0LL;
    *(_DWORD *)(v6 + 88) = 1;
  }
  else
  {
    v6 = 0LL;
  }
  DxgMonitor::USB4POFXREF_REF_ACCESSOR::Assign(
    (DxgMonitor::USB4POFXREF_REF_ACCESSOR *)(Context + 18),
    (struct DxgMonitor::Usb4HostRouterPoFxRefv2 *)v6);
  if ( *((_QWORD *)Context + 10) )
  {
    v10 = DxgMonitor::MonitorUsb4State::SetupPowerConnectionWithUsb4Stack(Context, a2);
    if ( v6 )
      ReferenceCounted::Release((ReferenceCounted *)v6);
    return v10;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 931;
    if ( v6 )
      ReferenceCounted::Release((ReferenceCounted *)v6);
    return 3221225495LL;
  }
}
