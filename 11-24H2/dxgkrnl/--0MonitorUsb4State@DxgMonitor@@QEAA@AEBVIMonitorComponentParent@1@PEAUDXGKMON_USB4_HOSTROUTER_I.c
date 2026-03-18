/*
 * XREFs of ??0MonitorUsb4State@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@PEAUDXGKMON_USB4_HOSTROUTER_INFO@@PEAUPOHANDLE__@@I@Z @ 0x140277358
 * Callers:
 *     ?_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@IPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAUDXGKMON_USB4_HOSTROUTER_INFO@@@Z @ 0x1403CC928 (-_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV-$unique_ptr@VIMonitorDriverInterface@DxgMoni.c)
 * Callees:
 *     ??0USB4POFXREF_REF_ACCESSOR@DxgMonitor@@QEAA@PEAVUsb4HostRouterPoFxRefv2@1@@Z @ 0x140091600 (--0USB4POFXREF_REF_ACCESSOR@DxgMonitor@@QEAA@PEAVUsb4HostRouterPoFxRefv2@1@@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorUsb4State::MonitorUsb4State(
        DxgMonitor::MonitorUsb4State *this,
        const struct DxgMonitor::IMonitorComponentParent *a2,
        struct DXGKMON_USB4_HOSTROUTER_INFO *a3,
        struct POHANDLE__ *a4,
        unsigned int a5)
{
  __int64 v5; // r8
  __int64 v6; // r10
  __int64 v7; // rdx
  __int64 v8; // r9

  *(_QWORD *)this = a2;
  *((_BYTE *)this + 8) = 0;
  *(_OWORD *)((char *)this + 12) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *(_OWORD *)((char *)this + 40) = 0LL;
  *((_DWORD *)this + 15) = -1;
  *((_WORD *)this + 28) = 0;
  *((_QWORD *)this + 8) = 0LL;
  DxgMonitor::USB4POFXREF_REF_ACCESSOR::USB4POFXREF_REF_ACCESSOR(
    (DxgMonitor::MonitorUsb4State *)((char *)this + 72),
    0LL);
  *(_QWORD *)(v6 + 88) = v7;
  *(_DWORD *)(v6 + 60) = a5;
  *(_QWORD *)(v6 + 64) = v8;
  if ( v5 )
  {
    *(_BYTE *)(v6 + 8) = 1;
    *(_OWORD *)(v6 + 12) = *(_OWORD *)v5;
    *(_QWORD *)(v6 + 48) = *(_QWORD *)(v5 + 24);
    *(_WORD *)(v6 + 40) = *(_WORD *)(v5 + 16);
    *(_WORD *)(v6 + 42) = *(_WORD *)(v5 + 18);
  }
  return v6;
}
