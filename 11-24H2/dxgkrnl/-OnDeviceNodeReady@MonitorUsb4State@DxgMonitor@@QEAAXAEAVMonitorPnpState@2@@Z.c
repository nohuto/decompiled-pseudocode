/*
 * XREFs of ?OnDeviceNodeReady@MonitorUsb4State@DxgMonitor@@QEAAXAEAVMonitorPnpState@2@@Z @ 0x14018B7BC
 * Callers:
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@@Z @ 0x14028C2B0 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@@Z.c)
 * Callees:
 *     ?SetPnpDeviceProperty@MonitorPnpState@DxgMonitor@@QEAAJPEBU_DEVPROPKEY@@KKPEAX@Z @ 0x1403ECD24 (-SetPnpDeviceProperty@MonitorPnpState@DxgMonitor@@QEAAJPEBU_DEVPROPKEY@@KKPEAX@Z.c)
 */

void __fastcall DxgMonitor::MonitorUsb4State::OnDeviceNodeReady(
        DxgMonitor::MonitorUsb4State *this,
        struct DxgMonitor::MonitorPnpState *a2)
{
  if ( *((_BYTE *)this + 8) )
  {
    if ( DxgMonitor::MonitorPnpState::SetPnpDeviceProperty(
           a2,
           &DEVPKEY_Monitor_Dpcd_DP_IN_Adapter_Number,
           7u,
           4u,
           (char *)this + 12) < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1305;
    }
    if ( DxgMonitor::MonitorPnpState::SetPnpDeviceProperty(
           a2,
           &DEVPKEY_Monitor_Dpcd_USB4_Driver_ID,
           7u,
           4u,
           (char *)this + 16) < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1312;
    }
    if ( DxgMonitor::MonitorPnpState::SetPnpDeviceProperty(
           a2,
           &DEVPKEY_Monitor_Dpcd_USB4_ROUTER_TOPOLOGY_ID,
           0x1003u,
           5u,
           (char *)this + 20) < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1319;
    }
  }
}
