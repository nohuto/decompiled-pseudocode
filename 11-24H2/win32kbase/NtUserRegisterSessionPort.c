/*
 * XREFs of NtUserRegisterSessionPort @ 0x1401565C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x14017A4CC (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

__int64 __fastcall NtUserRegisterSessionPort(void *a1)
{
  _QWORD *UserSessionState; // rdi
  __int64 v3; // rax
  __int64 v4; // rbx
  NTSTATUS v5; // eax
  ULONG v6; // eax

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
  v3 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0LL,
         0LL,
         _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  v4 = 0LL;
  UserSessionState[3] = v3;
  if ( v3 )
  {
    DestroySharedUserCritDeferredUnlockList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  v5 = xxxDwmProcessStartup(a1);
  if ( v5 >= 0 )
  {
    v4 = 1LL;
  }
  else
  {
    v6 = RtlNtStatusToDosError(v5);
    UserSetLastError(v6);
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  return v4;
}
