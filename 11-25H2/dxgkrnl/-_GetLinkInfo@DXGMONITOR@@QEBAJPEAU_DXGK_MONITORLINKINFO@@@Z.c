/*
 * XREFs of ?_GetLinkInfo@DXGMONITOR@@QEBAJPEAU_DXGK_MONITORLINKINFO@@@Z @ 0x1403B2474
 * Callers:
 *     ?TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140352330 (-TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU.c)
 *     ?MonitorGetLinkInfoFromMonitor@@YAJPEAUHDXGMONITOR__@@AEAU_DXGK_MONITORLINKINFO@@@Z @ 0x1403B232C (-MonitorGetLinkInfoFromMonitor@@YAJPEAUHDXGMONITOR__@@AEAU_DXGK_MONITORLINKINFO@@@Z.c)
 *     ?MonitorGetLinkInfoFromTarget@@YAJPEAXIPEAU_DXGK_MONITORLINKINFO@@@Z @ 0x1403B23C4 (-MonitorGetLinkInfoFromTarget@@YAJPEAXIPEAU_DXGK_MONITORLINKINFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGMONITOR::_GetLinkInfo(DXGMONITOR *this, struct _DXGK_MONITORLINKINFO *a2)
{
  if ( (*((_BYTE *)this + 177) & 2) != 0 )
  {
    *a2 = *(struct _DXGK_MONITORLINKINFO *)((char *)this + 332);
    return 0LL;
  }
  else
  {
    *(_QWORD *)&a2->UsageHints.0 = 0LL;
    a2->DitheringSupport.Value = 0;
    return 3221226021LL;
  }
}
