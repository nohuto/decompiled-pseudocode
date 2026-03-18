/*
 * XREFs of NtUserGetClipCursor @ 0x140046AE0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x140045170 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     PhysicalToLogicalDPIRect @ 0x1400453C0 (PhysicalToLogicalDPIRect.c)
 *     GuessMonitorOverrideForCoordinateConversions @ 0x140046C00 (GuessMonitorOverrideForCoordinateConversions.c)
 *     ?GetClip@CCursorClip@@QEBA?AUtagRECT@@XZ @ 0x1400470A0 (-GetClip@CCursorClip@@QEBA-AUtagRECT@@XZ.c)
 *     ApiSetCheckCursorClipAccess @ 0x140047744 (ApiSetCheckCursorClipAccess.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x140198C14 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetClipCursor(ULONG64 a1)
{
  int v1; // ebx
  _BYTE *v2; // rdx
  __int64 UserSessionState; // rax
  __int64 v4; // rcx
  __int64 CurrentThreadDpiAwarenessContext; // rbx
  __int64 v7; // [rsp+30h] [rbp-58h]
  __int64 v9; // [rsp+48h] [rbp-40h] BYREF
  _BYTE v10[16]; // [rsp+50h] [rbp-38h] BYREF
  struct tagRECT v11; // [rsp+60h] [rbp-28h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(v10, 1LL);
  v1 = 0;
  if ( (unsigned int)ApiSetCheckCursorClipAccess(1LL) )
  {
    v2 = (_BYTE *)a1;
    if ( a1 >= MmUserProbeAddress )
      v2 = (_BYTE *)MmUserProbeAddress;
    *v2 = *v2;
    v2[15] = v2[15];
    UserSessionState = W32GetUserSessionState(MmUserProbeAddress);
    CCursorClip::GetClip(*(CCursorClip **)(UserSessionState + 36296), &v11);
    LODWORD(v7) = (v11.left + v11.right) / 2;
    HIDWORD(v7) = (v11.top + v11.bottom) / 2;
    CurrentThreadDpiAwarenessContext = (unsigned int)W32GetCurrentThreadDpiAwarenessContext(v4);
    v9 = GuessMonitorOverrideForCoordinateConversions(v7, CurrentThreadDpiAwarenessContext, 1LL);
    PhysicalToLogicalDPIRect(a1, &v11, CurrentThreadDpiAwarenessContext, &v9);
    v1 = 1;
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  return v1;
}
