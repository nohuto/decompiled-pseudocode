/*
 * XREFs of ?_GetMonitorOrientation@DXGMONITOR@@QEBAJPEAK0@Z @ 0x14038C568
 * Callers:
 *     ?MonitorGetMonitorOrientationsFromMonitor@@YAJPEAUHDXGMONITOR__@@PEAK1@Z @ 0x14038C4C0 (-MonitorGetMonitorOrientationsFromMonitor@@YAJPEAUHDXGMONITOR__@@PEAK1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGMONITOR::_GetMonitorOrientation(DXGMONITOR *this, unsigned int *a2, unsigned int *a3)
{
  unsigned int v3; // eax

  if ( a2 )
  {
    v3 = 0;
    if ( *((_DWORD *)this + 78) != *((_DWORD *)this + 76) )
      v3 = *((_DWORD *)this + 78);
    *a2 = v3;
  }
  if ( a3 )
    *a3 = *((_DWORD *)this + 80);
  return 0LL;
}
