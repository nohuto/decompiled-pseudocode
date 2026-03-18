/*
 * XREFs of ?GetMonitorAndLinkWcgCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEA_N1@Z @ 0x1403BB044
 * Callers:
 *     ?TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140352330 (-TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?WcgDriverCapsSet@MonitorColorState@DxgMonitor@@QEBA_NAEBU_DXGK_MONITORLINKINFO@@@Z @ 0x1403BB26C (-WcgDriverCapsSet@MonitorColorState@DxgMonitor@@QEBA_NAEBU_DXGK_MONITORLINKINFO@@@Z.c)
 */

void __fastcall DxgMonitor::MonitorColorState::GetMonitorAndLinkWcgCapable(
        DxgMonitor::MonitorColorState *this,
        const struct _DXGK_MONITORLINKINFO *a2,
        bool *a3,
        bool *a4)
{
  __int64 v7; // rax
  bool v8; // al
  bool v9; // zf

  if ( DxgMonitor::MonitorColorState::WcgDriverCapsSet(this, a2)
    && (v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this),
        (*(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7) + 48) & 8) != 0) )
  {
    v9 = *((_BYTE *)this + 468) == 0;
    v8 = 1;
    *a4 = 1;
    if ( !v9 )
      goto LABEL_5;
  }
  else
  {
    *a4 = 0;
  }
  v8 = 0;
LABEL_5:
  *a3 = v8;
}
