/*
 * XREFs of ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1401AE764
 * Callers:
 *     ?PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401AE1FC (-PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWERON_LOC@@@Z @ 0x1401AE390 (-PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWER.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140091E28 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     EtwTraceDisplayChange @ 0x140091F00 (EtwTraceDisplayChange.c)
 *     CitDisplayPowerChange @ 0x1400B59E4 (CitDisplayPowerChange.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A2B00 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ?UpdateAdaptiveSessionState@@YAXXZ @ 0x1401AE6B0 (-UpdateAdaptiveSessionState@@YAXXZ.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall UpdateSessionPowerState(__int64 a1, enum POWER_MONITOR_REQUEST_REASON a2)
{
  int v3; // edi
  __int64 UserSessionState; // rbx
  int CurrentWin32kSessionId; // eax
  unsigned __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  _BYTE v9[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 InputBuffer; // [rsp+38h] [rbp-40h] BYREF
  int v11; // [rsp+40h] [rbp-38h]
  char v12; // [rsp+44h] [rbp-34h]
  bool v13; // [rsp+45h] [rbp-33h]
  __int16 v14; // [rsp+46h] [rbp-32h]
  enum POWER_MONITOR_REQUEST_REASON v15; // [rsp+48h] [rbp-30h]

  v3 = a1;
  UserSessionState = W32GetUserSessionState(a1);
  v14 = 0;
  CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
  *(_DWORD *)(UserSessionState + 2892) = *(_DWORD *)(UserSessionState + 2896);
  *(_DWORD *)(UserSessionState + 2824) = CurrentWin32kSessionId;
  *(_DWORD *)(UserSessionState + 2896) = v3 != 0;
  *(_QWORD *)(UserSessionState + 2832) = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                                         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                                       - *(_QWORD *)(UserSessionState + 2840);
  v6 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
  *(_QWORD *)(UserSessionState + 2840) = (v6 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  *(_WORD *)(UserSessionState + 2900) = *(_WORD *)(W32GetUserSessionState(v6) + 69008) == 0;
  *(_DWORD *)(UserSessionState + 2756) = v3;
  UpdateAdaptiveSessionState();
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v9, 1);
  InputBuffer = 19LL;
  v11 = W32GetCurrentWin32kSessionId();
  v12 = v3;
  v15 = a2;
  v13 = *(_WORD *)(W32GetUserSessionState(v7) + 69008) == 0;
  ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 0x14u, 0LL, 0);
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v9);
  EtwTraceDisplayChange(v8);
  CitDisplayPowerChange(UserSessionState + 2824);
}
