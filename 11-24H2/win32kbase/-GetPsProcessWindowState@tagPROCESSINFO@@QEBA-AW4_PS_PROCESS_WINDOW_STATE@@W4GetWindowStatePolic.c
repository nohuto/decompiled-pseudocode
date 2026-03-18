/*
 * XREFs of ?GetPsProcessWindowState@tagPROCESSINFO@@QEBA?AW4_PS_PROCESS_WINDOW_STATE@@W4GetWindowStatePolicy@1@@Z @ 0x1401A521C
 * Callers:
 *     ?EndDeferral@CQoSReport@@QEAAXXZ @ 0x1401A50A0 (-EndDeferral@CQoSReport@@QEAAXXZ.c)
 *     ?PolicyChanged@QualityOfService@@YAXXZ @ 0x1401A5400 (-PolicyChanged@QualityOfService@@YAXXZ.c)
 *     ?ReportProcess@CQoSReport@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x1401A56D0 (-ReportProcess@CQoSReport@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?LogProcessInformation@ForegroundBoost@@YAXXZ @ 0x1401AC43C (-LogProcessInformation@ForegroundBoost@@YAXXZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C0560 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     IsCurrentSessionServiceSession @ 0x14012AA48 (IsCurrentSessionServiceSession.c)
 *     Feature_AgenticSessionCapQoSPolicy__private_IsEnabledDeviceUsageNoInline @ 0x1401A5824 (Feature_AgenticSessionCapQoSPolicy__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetIOWinsta@tagWINDOWSTATION@@SAPEBU1@XZ @ 0x1401A7A90 (-GetIOWinsta@tagWINDOWSTATION@@SAPEBU1@XZ.c)
 */

__int64 __fastcall tagPROCESSINFO::GetPsProcessWindowState(__int64 a1, int a2)
{
  char v4; // di
  char v5; // si
  int v6; // ebx
  __int64 UserSessionState; // rax
  int v9; // ebx
  const struct tagWINDOWSTATION *IOWinsta; // rax

  if ( !(unsigned int)Feature_AgenticSessionCapQoSPolicy__private_IsEnabledDeviceUsageNoInline() )
    return dword_14026A8A8[*(int *)(a1 + 1172)];
  if ( (unsigned int)IsCurrentSessionServiceSession() )
  {
    v4 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = *(_DWORD *)(a1 + 56);
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v4,
        v5,
        *(_QWORD *)(UserSessionState + 69400),
        4u,
        0xEu,
        0x11u,
        (__int64)&WPP_383e00c9a6733678f2e50c59db551300_Traceguids,
        v6);
    }
    return 0LL;
  }
  else
  {
    v9 = dword_14026A8A8[*(int *)(a1 + 1172)];
    if ( !a2 )
    {
      IOWinsta = tagWINDOWSTATION::GetIOWinsta();
      if ( (!IOWinsta || (*((_DWORD *)IOWinsta + 64) & 2) == 0) && v9 >= 1 )
        return 1;
    }
    return (unsigned int)v9;
  }
}
