/*
 * XREFs of ??0MonitorDisplayPortState@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@@Z @ 0x14009079C
 * Callers:
 *     ?_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@IPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAUDXGKMON_USB4_HOSTROUTER_INFO@@@Z @ 0x140356B64 (-_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV-$unique_ptr@VIMonitorDriverInterface@DxgMoni.c)
 * Callees:
 *     <none>
 */

DxgMonitor::MonitorDisplayPortState *__fastcall DxgMonitor::MonitorDisplayPortState::MonitorDisplayPortState(
        DxgMonitor::MonitorDisplayPortState *this,
        const struct DxgMonitor::IMonitorComponentParent *a2)
{
  *(_QWORD *)this = a2;
  *((_BYTE *)this + 8) = 0;
  *(_OWORD *)((char *)this + 12) = 0LL;
  *(_QWORD *)((char *)this + 28) = 0LL;
  *((_DWORD *)this + 9) = 0;
  return this;
}
