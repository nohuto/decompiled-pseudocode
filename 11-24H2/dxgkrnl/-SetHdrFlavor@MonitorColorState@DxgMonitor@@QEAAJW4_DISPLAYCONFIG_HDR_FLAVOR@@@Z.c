/*
 * XREFs of ?SetHdrFlavor@MonitorColorState@DxgMonitor@@QEAAJW4_DISPLAYCONFIG_HDR_FLAVOR@@@Z @ 0x14027C2C0
 * Callers:
 *     ?MonitorSetHdrFlavor@@YAJPEAUHDXGMONITOR__@@W4_DISPLAYCONFIG_HDR_FLAVOR@@@Z @ 0x14026F400 (-MonitorSetHdrFlavor@@YAJPEAUHDXGMONITOR__@@W4_DISPLAYCONFIG_HDR_FLAVOR@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ @ 0x14027CB30 (-_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ.c)
 */

__int64 __fastcall DxgMonitor::MonitorColorState::SetHdrFlavor(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx

  v4 = (int)a2;
  if ( *((_DWORD *)a1 + 116) == (_DWORD)a2 )
    return 255LL;
  if ( (((_DWORD)a2 - 1) & (unsigned int)a2) != 0 )
  {
    WdLogSingleEntry1(2LL, (int)a2);
    WdLogGlobalForLineNumber = 1977;
    return 3221225485LL;
  }
  if ( (_DWORD)a2 && ((unsigned int)a2 & *((_DWORD *)a1 + 115)) == 0 )
  {
    WdLogSingleEntry1(2LL, (int)a2);
    WdLogGlobalForLineNumber = 1988;
    return 3221225485LL;
  }
  v7 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v7 + 24) = a1;
  *(_QWORD *)(v7 + 32) = v4;
  v8 = *a1;
  *((_DWORD *)a1 + 116) = v4;
  WdLogGlobalForLineNumber = 1984;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v8 + 72LL))(v8) )
    (*(void (__fastcall **)(__int64, __int64, const wchar_t *, _QWORD))(*(_QWORD *)a1[1] + 136LL))(
      a1[1],
      4LL,
      L"HdrFlavor",
      (unsigned int)v4);
  DxgMonitor::MonitorColorState::_ReevaluateColorAndLuminanceSources((DxgMonitor::MonitorColorState *)a1);
  return 0LL;
}
