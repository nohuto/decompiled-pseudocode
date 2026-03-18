/*
 * XREFs of ?IsSimulatedMonitor@DXGMONITOR@@UEBA_NXZ @ 0x140397C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DXGMONITOR::IsSimulatedMonitor(DXGMONITOR *this)
{
  return *((_DWORD *)this + 66) != 1;
}
