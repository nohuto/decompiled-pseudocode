/*
 * XREFs of ?GetDriverInterface@DXGMONITOR@@UEBAAEAVIMonitorDriverInterface@DxgMonitor@@XZ @ 0x1403F2FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct DxgMonitor::IMonitorDriverInterface *__fastcall DXGMONITOR::GetDriverInterface(DXGMONITOR *this)
{
  return (struct DxgMonitor::IMonitorDriverInterface *)*((_QWORD *)this + 22);
}
