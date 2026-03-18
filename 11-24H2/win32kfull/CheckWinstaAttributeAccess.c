/*
 * XREFs of CheckWinstaAttributeAccess @ 0x140093660
 * Callers:
 *     _SetCaretBlinkTime @ 0x1400925C0 (_SetCaretBlinkTime.c)
 *     ?zzzSetCursorPos@@YA_NHH@Z @ 0x1400928F0 (-zzzSetCursorPos@@YA_NHH@Z.c)
 *     CheckCursorClipAccess @ 0x1400932B0 (CheckCursorClipAccess.c)
 *     ?xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z @ 0x14009350C (-xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x14018F9C8 (xxxSystemParametersInfoWorker.c)
 *     _SetDoubleClickTime @ 0x140214894 (_SetDoubleClickTime.c)
 *     NtUserGetCursorInfo @ 0x140242130 (NtUserGetCursorInfo.c)
 *     ?zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1402716B8 (-zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     ?_RegisterHotKey@@YA_NPEAUtagWND@@P6A?AW4tagHotKeyCallBackResult@@_K_J@ZHIIPEAUHWND__@@@Z @ 0x140288B94 (-_RegisterHotKey@@YA_NPEAUtagWND@@P6A-AW4tagHotKeyCallBackResult@@_K_J@ZHIIPEAUHWND__@@@Z.c)
 *     NtUserLockWorkStation @ 0x140299AA0 (NtUserLockWorkStation.c)
 *     NtUserShowSystemCursor @ 0x1402A0FD0 (NtUserShowSystemCursor.c)
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 */

__int64 __fastcall CheckWinstaAttributeAccess(__int64 DesiredAccess)
{
  ACCESS_MASK v1; // esi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi
  HANDLE v6; // rbx
  int v7; // ecx

  v1 = DesiredAccess;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(DesiredAccess);
  v5 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v3 = -*(_QWORD *)CurrentProcessWin32Process;
    v5 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  }
  v6 = *(HANDLE *)(W32GetUserSessionState(v4, v3) + 63584);
  if ( PsGetCurrentProcessId() != v6 )
  {
    if ( (*(_DWORD *)(v5 + 12) & 0x40000) == 0 )
    {
      v7 = 1459;
LABEL_6:
      UserSetLastError(v7);
      return 0LL;
    }
    if ( !RtlAreAllAccessesGranted(*(_DWORD *)(v5 + 672), v1) )
    {
      v7 = 5;
      goto LABEL_6;
    }
  }
  return 1LL;
}
