/*
 * XREFs of ?OnExternalBrightnessNitsUpdated@MonitorColorState@DxgMonitor@@QEAAXIK@Z @ 0x140274DB4
 * Callers:
 *     ?_DispatchIoctrls@DXGMONITOR@@QEBAJKKPEAXK0PEA_KK@Z @ 0x14026EF60 (-_DispatchIoctrls@DXGMONITOR@@QEBAJKKPEAXK0PEA_KK@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJK@Z @ 0x140183F40 (-SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJK@Z.c)
 *     ?TriggerMonitorColorimetryChangedWnf@MonitorColorState@DxgMonitor@@AEAAJXZ @ 0x1403DACB0 (-TriggerMonitorColorimetryChangedWnf@MonitorColorState@DxgMonitor@@AEAAJXZ.c)
 */

void __fastcall DxgMonitor::MonitorColorState::OnExternalBrightnessNitsUpdated(
        DxgMonitor::MonitorColorState *this,
        int a2,
        unsigned int a3)
{
  int v3; // eax
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  DxgMonitor::MonitorColorState *v10; // rcx

  v3 = *((_DWORD *)this + 119);
  *((_DWORD *)this + 118) = a2;
  v5 = 80 * v3;
  if ( (int)DxgMonitor::MonitorColorState::SetLuminanceValuesWithBrightnessCompensation(this, a3) >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 112LL))(*(_QWORD *)this);
    if ( v6 )
    {
      v7 = v6 - 12;
      if ( !v7 || (v8 = v7 - 18) != 0 && (v9 = v8 - 1) != 0 && (unsigned int)(v9 - 1) <= 1 )
      {
        v10 = (DxgMonitor::MonitorColorState *)(unsigned int)(80 * *((_DWORD *)this + 119));
        if ( v5 != (_DWORD)v10 )
          DxgMonitor::MonitorColorState::TriggerMonitorColorimetryChangedWnf(v10);
      }
    }
  }
}
