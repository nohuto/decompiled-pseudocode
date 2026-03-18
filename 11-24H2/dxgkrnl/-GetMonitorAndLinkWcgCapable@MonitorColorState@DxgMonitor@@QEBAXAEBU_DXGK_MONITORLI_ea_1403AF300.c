/*
 * XREFs of ?GetMonitorAndLinkWcgCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEA_NPEAW4MonitorAndLinkWCGIncapableReason@@@Z @ 0x1403AF300
 * Callers:
 *     ?_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z @ 0x140276A70 (-_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z.c)
 *     ?TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14028ACA0 (-TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU.c)
 *     ?MonitorIsMonitorAndDriverWCGCapable@@YAJPEAUHDXGMONITOR__@@PEA_NPEAW4MonitorAndLinkWCGIncapableReason@@@Z @ 0x1403AF234 (-MonitorIsMonitorAndDriverWCGCapable@@YAJPEAUHDXGMONITOR__@@PEA_NPEAW4MonitorAndLinkWCGIncapable.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?WcgDriverCapsSet@MonitorColorState@DxgMonitor@@QEBA_NAEBU_DXGK_MONITORLINKINFO@@@Z @ 0x1403AF3E4 (-WcgDriverCapsSet@MonitorColorState@DxgMonitor@@QEBA_NAEBU_DXGK_MONITORLINKINFO@@@Z.c)
 */

void __fastcall DxgMonitor::MonitorColorState::GetMonitorAndLinkWcgCapable(
        DxgMonitor::MonitorColorState *this,
        const struct _DXGK_MONITORLINKINFO *a2,
        bool *a3,
        enum MonitorAndLinkWCGIncapableReason *a4)
{
  __int64 v8; // rax
  bool v9; // al
  int v10; // ecx
  __int64 v11; // rax

  v9 = 0;
  if ( DxgMonitor::MonitorColorState::WcgDriverCapsSet(this, a2) )
  {
    if ( *((_BYTE *)this + 468) )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
      if ( (*(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8) + 48) & 8) != 0 )
        v9 = 1;
    }
  }
  *a3 = v9;
  if ( !v9 && a4 )
  {
    *(_DWORD *)a4 = 0;
    v10 = 0;
    if ( (*(_BYTE *)&a2->Capabilities.0 & 2) == 0 )
    {
      *(_DWORD *)a4 = 2;
      v10 = 2;
    }
    if ( !*((_BYTE *)this + 468) )
      *(_DWORD *)a4 = v10 | 4;
    v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
    if ( (*(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 24LL))(v11) + 48) & 8) == 0 )
      *(_DWORD *)a4 |= 8u;
    if ( !*(_DWORD *)a4 )
      *(_DWORD *)a4 = 1;
  }
}
