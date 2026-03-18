/*
 * XREFs of SortMonitorsInSpatialOrder @ 0x140112190
 * Callers:
 *     ?SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z @ 0x14011138C (-SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x14018F9C8 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ?UpdateDesktopMonitorNavigationOrder@@YAXXZ @ 0x140110CA0 (-UpdateDesktopMonitorNavigationOrder@@YAXXZ.c)
 */

void __fastcall SortMonitorsInSpatialOrder(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  _DWORD **v3; // rcx

  v3 = *(_DWORD ***)(W32GetUserSessionState(a1, a2) + 57008);
  if ( **v3 )
    UpdateDesktopMonitorNavigationOrder((__int64)v3, v2);
}
