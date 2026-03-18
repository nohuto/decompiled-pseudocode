/*
 * XREFs of ?_SupportSyncLockIdentical@DXGMONITOR@@QEBA_NXZ @ 0x14018BD54
 * Callers:
 *     ?_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z @ 0x140276A70 (-_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z.c)
 *     ?TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14028ACA0 (-TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGMONITOR::_SupportSyncLockIdentical(DXGMONITOR *this)
{
  return (*((_BYTE *)this + 177) & 2) != 0 && (*((_DWORD *)this + 84) & 0x100) != 0;
}
