/*
 * XREFs of ?GetAddress@MonitorDisplayPortState@DxgMonitor@@QEBA?AU_DXGKARG_GETDPADDRESS@@XZ @ 0x140064178
 * Callers:
 *     ?_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z @ 0x140276A70 (-_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z.c)
 *     ?TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14028ACA0 (-TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgMonitor::MonitorDisplayPortState::GetAddress(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // xmm1_8

  v2 = *(_DWORD *)(a1 + 36);
  v3 = *(_QWORD *)(a1 + 28);
  *(_OWORD *)a2 = *(_OWORD *)(a1 + 12);
  *(_QWORD *)(a2 + 16) = v3;
  *(_DWORD *)(a2 + 24) = v2;
  return a2;
}
