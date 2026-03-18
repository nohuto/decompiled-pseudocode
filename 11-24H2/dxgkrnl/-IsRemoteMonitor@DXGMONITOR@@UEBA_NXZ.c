/*
 * XREFs of ?IsRemoteMonitor@DXGMONITOR@@UEBA_NXZ @ 0x1403EECF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DXGMONITOR::IsRemoteMonitor(DXGMONITOR *this)
{
  return (*((_BYTE *)this + 161) & 0x20) != 0;
}
