/*
 * XREFs of CheckWinstaAttributeAccess @ 0x1C0041160
 * Callers:
 *     NtUserGetCursorInfo @ 0x1C000A930 (NtUserGetCursorInfo.c)
 *     NtUserLockWorkStation @ 0x1C0017AB0 (NtUserLockWorkStation.c)
 *     CheckCursorClipAccess @ 0x1C002DF50 (CheckCursorClipAccess.c)
 *     ?xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z @ 0x1C003FF0C (-xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z.c)
 *     ?_RegisterHotKey@@YAHPEAUtagWND@@P6AX_K_J@ZHIIPEAUHWND__@@@Z @ 0x1C0040AF8 (-_RegisterHotKey@@YAHPEAUtagWND@@P6AX_K_J@ZHIIPEAUHWND__@@@Z.c)
 *     _SetCaretBlinkTime @ 0x1C00D5620 (_SetCaretBlinkTime.c)
 *     _SetDoubleClickTime @ 0x1C00D801C (_SetDoubleClickTime.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00D9A30 (xxxSystemParametersInfoWorker.c)
 *     ?zzzSetCursorPos@@YA_NHH@Z @ 0x1C01A82B8 (-zzzSetCursorPos@@YA_NHH@Z.c)
 *     ?zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C01A86E0 (-zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     NtUserShowSystemCursor @ 0x1C01DE460 (NtUserShowSystemCursor.c)
 * Callees:
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall CheckWinstaAttributeAccess(__int64 DesiredAccess)
{
  ACCESS_MASK v1; // edi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v3; // rbx
  __int64 v5; // rcx

  v1 = DesiredAccess;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(DesiredAccess);
  v3 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v3 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( PsGetCurrentProcessId() == (HANDLE)gpidLogon )
    return 1LL;
  if ( (*(_DWORD *)(v3 + 12) & 0x40000) != 0 )
  {
    if ( RtlAreAllAccessesGranted(*(_DWORD *)(v3 + 680), v1) )
      return 1LL;
    v5 = 5LL;
  }
  else
  {
    v5 = 1459LL;
  }
  UserSetLastError(v5);
  return 0LL;
}
