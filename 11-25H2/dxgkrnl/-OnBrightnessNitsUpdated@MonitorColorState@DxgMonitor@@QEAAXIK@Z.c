/*
 * XREFs of ?OnBrightnessNitsUpdated@MonitorColorState@DxgMonitor@@QEAAXIK@Z @ 0x140183EDC
 * Callers:
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_KK@Z @ 0x140181CE4 (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_KK@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJK@Z @ 0x140183F40 (-SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJK@Z.c)
 *     ?SendAdjustedHDRParamsToDriver@MonitorColorState@DxgMonitor@@QEAAJ_N@Z @ 0x1401854B4 (-SendAdjustedHDRParamsToDriver@MonitorColorState@DxgMonitor@@QEAAJ_N@Z.c)
 *     ?TriggerMonitorColorimetryChangedWnf@MonitorColorState@DxgMonitor@@AEAAJXZ @ 0x1403DACB0 (-TriggerMonitorColorimetryChangedWnf@MonitorColorState@DxgMonitor@@AEAAJXZ.c)
 */

void __fastcall DxgMonitor::MonitorColorState::OnBrightnessNitsUpdated(
        DxgMonitor::MonitorColorState *this,
        int a2,
        unsigned int a3)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  DxgMonitor::MonitorColorState *v8; // rcx

  *((_DWORD *)this + 118) = a2;
  if ( DxgMonitor::MonitorColorState::SetLuminanceValuesWithBrightnessCompensation(this, a3) >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 112LL))(*(_QWORD *)this);
    if ( v4 )
    {
      v5 = v4 - 12;
      if ( !v5 || (v6 = v5 - 18) != 0 && (v7 = v6 - 1) != 0 && (unsigned int)(v7 - 1) <= 1 )
      {
        DxgMonitor::MonitorColorState::SendAdjustedHDRParamsToDriver(this, 1);
        DxgMonitor::MonitorColorState::TriggerMonitorColorimetryChangedWnf(v8);
      }
    }
  }
}
