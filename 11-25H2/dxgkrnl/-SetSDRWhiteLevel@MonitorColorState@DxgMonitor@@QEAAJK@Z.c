/*
 * XREFs of ?SetSDRWhiteLevel@MonitorColorState@DxgMonitor@@QEAAJK@Z @ 0x1402752F8
 * Callers:
 *     ?MonitorSetSDRWhiteLevel@@YAJPEAUHDXGMONITOR__@@K@Z @ 0x1402686F0 (-MonitorSetSDRWhiteLevel@@YAJPEAUHDXGMONITOR__@@K@Z.c)
 *     ?MonitorSetSDRWhiteLevelOverride@@YAJPEAXIK@Z @ 0x1402687E4 (-MonitorSetSDRWhiteLevelOverride@@YAJPEAXIK@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJK@Z @ 0x140183F40 (-SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJK@Z.c)
 *     ?SendAdjustedHDRParamsToDriver@MonitorColorState@DxgMonitor@@QEAAJ_N@Z @ 0x1401854B4 (-SendAdjustedHDRParamsToDriver@MonitorColorState@DxgMonitor@@QEAAJ_N@Z.c)
 *     ?TriggerMonitorColorimetryChangedWnf@MonitorColorState@DxgMonitor@@AEAAJXZ @ 0x1403DACB0 (-TriggerMonitorColorimetryChangedWnf@MonitorColorState@DxgMonitor@@AEAAJXZ.c)
 */

__int64 __fastcall DxgMonitor::MonitorColorState::SetSDRWhiteLevel(
        DxgMonitor::MonitorColorState *this,
        unsigned int a2)
{
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  DxgMonitor::MonitorColorState *v12; // rcx

  if ( *((_DWORD *)this + 119) == a2 )
    return 255LL;
  *((_DWORD *)this + 119) = a2;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 72LL))(*(_QWORD *)this) )
    (*(void (__fastcall **)(_QWORD, __int64, const wchar_t *, _QWORD))(**((_QWORD **)this + 1) + 136LL))(
      *((_QWORD *)this + 1),
      4LL,
      L"SDRWhiteLevel",
      a2);
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 112LL))(*(_QWORD *)this);
  if ( v5 )
  {
    v6 = v5 - 12;
    if ( !v6 || (v7 = v6 - 18) != 0 && (v8 = v7 - 1) != 0 && (unsigned int)(v8 - 1) <= 1 )
    {
      v9 = DxgMonitor::MonitorColorState::SetLuminanceValuesWithBrightnessCompensation(this, 0xFFFFFFFF);
      v10 = v9;
      if ( v9 < 0 )
      {
        WdLogSingleEntry1(2LL, v9);
        WdLogGlobalForLineNumber = 1935;
        return v10;
      }
      v11 = DxgMonitor::MonitorColorState::SendAdjustedHDRParamsToDriver(this, 1);
      v10 = v11;
      if ( v11 < 0 )
      {
        WdLogSingleEntry1(2LL, v11);
        WdLogGlobalForLineNumber = 1939;
        return v10;
      }
      DxgMonitor::MonitorColorState::TriggerMonitorColorimetryChangedWnf(v12);
    }
  }
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)this + 128LL))(*(_QWORD *)this, 4LL);
  return 0LL;
}
