/*
 * XREFs of NtUserLockCursor @ 0x14011DEB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x140045170 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     LogicalToPhysicalDPIRect @ 0x140046540 (LogicalToPhysicalDPIRect.c)
 *     GuessMonitorOverrideForCoordinateConversions @ 0x140046C00 (GuessMonitorOverrideForCoordinateConversions.c)
 *     ApiSetCheckCursorClipAccess @ 0x140047744 (ApiSetCheckCursorClipAccess.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     ?ClearClip@CCursorClip@@QEAAXXZ @ 0x14011E540 (-ClearClip@CCursorClip@@QEAAXXZ.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     ?LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x14020B0AC (-LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserLockCursor(struct tagRECT *a1)
{
  struct tagRECT *v1; // rdi
  _QWORD *UserSessionState; // rsi
  __int64 v3; // rax
  int v4; // ebx
  __int64 v5; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // ebx
  __int64 v7; // rcx
  CCursorClip *v8; // rcx
  __int64 v9; // rax
  struct tagRECT v11; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT v12; // [rsp+50h] [rbp-28h] BYREF

  v1 = a1;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
  v3 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0LL,
         0LL,
         _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v3;
  v4 = 0;
  if ( v3 )
  {
    DestroySharedUserCritDeferredUnlockList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  v12 = 0LL;
  if ( (unsigned int)ApiSetCheckCursorClipAccess(2u, 0) )
  {
    if ( v1 )
    {
      if ( (unsigned __int64)v1 >= MmUserProbeAddress )
        v1 = (struct tagRECT *)MmUserProbeAddress;
      v12 = *v1;
      v11.left = (v12.right + v12.left) / 2;
      v11.top = (v12.bottom + v12.top) / 2;
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(HIDWORD(*(_QWORD *)&v12.right));
      *(_QWORD *)&v11.left = GuessMonitorOverrideForCoordinateConversions(
                               *(__int64 *)&v11.left,
                               CurrentThreadDpiAwarenessContext,
                               0);
      LogicalToPhysicalDPIRect((__int64)&v12, &v12, CurrentThreadDpiAwarenessContext, (__int64 *)&v11.left);
      v8 = *(CCursorClip **)(W32GetUserSessionState(v7) + 36296);
      v11 = v12;
      CCursorClip::LockCursor(v8, &v11);
    }
    else
    {
      v9 = W32GetUserSessionState(v5);
      CCursorClip::ClearClip(*(CCursorClip **)(v9 + 36296));
    }
    v4 = 1;
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  return v4;
}
