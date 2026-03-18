/*
 * XREFs of ?SetWcgPolicySupported@MonitorColorState@DxgMonitor@@QEAAJ_N@Z @ 0x14018BA24
 * Callers:
 *     ?OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14028A668 (-OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgMonitor::MonitorColorState::SetWcgPolicySupported(DxgMonitor::MonitorColorState *this, char a2)
{
  __int64 v4; // r9

  if ( *((_BYTE *)this + 468) == a2 )
    return 255LL;
  *((_BYTE *)this + 468) = a2;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 72LL))(*(_QWORD *)this) )
  {
    LOBYTE(v4) = *((_BYTE *)this + 468);
    (*(void (__fastcall **)(_QWORD, __int64, const wchar_t *, __int64))(**((_QWORD **)this + 1) + 152LL))(
      *((_QWORD *)this + 1),
      4LL,
      L"AutoColorManagementSupported",
      v4);
  }
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)this + 128LL))(*(_QWORD *)this, 5LL);
  return 0LL;
}
