/*
 * XREFs of ?OnInitialized@MonitorUsb4State@DxgMonitor@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042E804
 * Callers:
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140405254 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEve.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Assign@USB4POFXREF_REF_ACCESSOR@DxgMonitor@@QEAAXPEAVUsb4HostRouterPoFxRefv2@2@@Z @ 0x140091758 (-Assign@USB4POFXREF_REF_ACCESSOR@DxgMonitor@@QEAAXPEAVUsb4HostRouterPoFxRefv2@2@@Z.c)
 *     ?SetupPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042E900 (-SetupPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_.c)
 */

__int64 __fastcall DxgMonitor::MonitorUsb4State::OnInitialized(
        DxgMonitor::MonitorUsb4State *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  __int64 v4; // rbx
  int v5; // eax
  __int64 v6; // r8
  unsigned int v8; // edi

  v4 = operator new(0x60uLL, 0x4D677844u, 64LL);
  if ( v4 )
  {
    v5 = *((_DWORD *)this + 15);
    v6 = *((_QWORD *)this + 8);
    *(_QWORD *)(v4 + 32) = 0LL;
    *(_QWORD *)(v4 + 56) = 0LL;
    *(_QWORD *)(v4 + 64) = 0LL;
    *(_DWORD *)(v4 + 80) = 0;
    *(_DWORD *)(v4 + 84) = -1;
    *(_QWORD *)v4 = &rc_buffer<DispBroker::AlpcRequest<7>>::`vftable';
    *(_QWORD *)v4 = &DxgMonitor::Usb4HostRouterPoFxRefv2::`vftable';
    *(_DWORD *)(v4 + 8) = 1;
    *(_DWORD *)(v4 + 16) = v5;
    *(_QWORD *)(v4 + 24) = v6;
    *(_BYTE *)(v4 + 40) = 0;
    *(_QWORD *)(v4 + 72) = 0LL;
    *(_DWORD *)(v4 + 88) = 1;
  }
  else
  {
    v4 = 0LL;
  }
  DxgMonitor::USB4POFXREF_REF_ACCESSOR::Assign(
    (DxgMonitor::MonitorUsb4State *)((char *)this + 72),
    (struct DxgMonitor::Usb4HostRouterPoFxRefv2 *)v4);
  if ( *((_QWORD *)this + 10) )
  {
    v8 = DxgMonitor::MonitorUsb4State::SetupPowerConnectionWithUsb4Stack(this, a2);
    if ( v4 )
      ReferenceCounted::Release((ReferenceCounted *)v4);
    return v8;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 944;
    if ( v4 )
      ReferenceCounted::Release((ReferenceCounted *)v4);
    return 3221225495LL;
  }
}
