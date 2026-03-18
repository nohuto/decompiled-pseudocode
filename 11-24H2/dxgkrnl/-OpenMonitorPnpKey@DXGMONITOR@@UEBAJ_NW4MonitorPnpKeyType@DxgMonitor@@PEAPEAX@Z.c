/*
 * XREFs of ?OpenMonitorPnpKey@DXGMONITOR@@UEBAJ_NW4MonitorPnpKeyType@DxgMonitor@@PEAPEAX@Z @ 0x1403E2580
 * Callers:
 *     <none>
 * Callees:
 *     ?OpenMonitorPnpKey@MonitorPnpState@DxgMonitor@@QEBAJ_NW4MonitorPnpKeyType@2@PEAPEAX@Z @ 0x1403E259C (-OpenMonitorPnpKey@MonitorPnpState@DxgMonitor@@QEBAJ_NW4MonitorPnpKeyType@2@PEAPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::OpenMonitorPnpKey(__int64 a1)
{
  return DxgMonitor::MonitorPnpState::OpenMonitorPnpKey(*(_QWORD *)(a1 + 176));
}
