/*
 * XREFs of SortMonitorsInSpatialOrder @ 0x1C00889B0
 * Callers:
 *     ?SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C0088168 (-SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z.c)
 * Callees:
 *     ?UpdateDesktopMonitorNavigationOrder@@YAXXZ @ 0x1C00889D8 (-UpdateDesktopMonitorNavigationOrder@@YAXXZ.c)
 */

void SortMonitorsInSpatialOrder()
{
  if ( *(_DWORD *)*gpDispInfo )
    UpdateDesktopMonitorNavigationOrder();
}
