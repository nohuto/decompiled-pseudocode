/*
 * XREFs of ??0MonitorGammaState@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@AEBVIMonitorDxgiGammaSource@1@@Z @ 0x140272784
 * Callers:
 *     ?_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@IPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAUDXGKMON_USB4_HOSTROUTER_INFO@@@Z @ 0x140356B64 (-_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV-$unique_ptr@VIMonitorDriverInterface@DxgMoni.c)
 * Callees:
 *     memset @ 0x14009FCC0 (memset.c)
 */

DxgMonitor::MonitorGammaState *__fastcall DxgMonitor::MonitorGammaState::MonitorGammaState(
        DxgMonitor::MonitorGammaState *this,
        const struct DxgMonitor::IMonitorComponentParent *a2,
        const struct DxgMonitor::IMonitorDxgiGammaSource *a3)
{
  DxgMonitor::MonitorGammaState *result; // rax

  *(_QWORD *)this = a2;
  *((_QWORD *)this + 1) = a3;
  memset((char *)this + 16, 0, 0x40uLL);
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 34) = 1;
  *((_DWORD *)this + 48) = 1;
  result = this;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 32) = 0;
  *((_DWORD *)this + 33) = -1;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 46) = 0;
  *((_DWORD *)this + 47) = -1;
  *((_DWORD *)this + 50) = -1082130432;
  *((_BYTE *)this + 204) = 0;
  return result;
}
