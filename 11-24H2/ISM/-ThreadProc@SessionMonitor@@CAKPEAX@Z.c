/*
 * XREFs of ?ThreadProc@SessionMonitor@@CAKPEAX@Z @ 0x1800A4B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall SessionMonitor::ThreadProc(SessionMonitor *Parameter)
{
  return SessionMonitor::InstanceThreadProc(Parameter);
}
