/*
 * XREFs of ?GetAdapterInterface@DXGMONITOR@@UEBAAEAVIMonitorAdapterInterface@DxgMonitor@@XZ @ 0x1403C43C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct DxgMonitor::IMonitorAdapterInterface *__fastcall DXGMONITOR::GetAdapterInterface(DXGMONITOR *this)
{
  return (struct DxgMonitor::IMonitorAdapterInterface *)*((_QWORD *)this + 19);
}
