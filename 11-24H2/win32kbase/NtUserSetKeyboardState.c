/*
 * XREFs of NtUserSetKeyboardState @ 0x140144700
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     EtwTraceUIPIInputError @ 0x1400256B0 (EtwTraceUIPIInputError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     _SetKeyboardState @ 0x140107EEC (_SetKeyboardState.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z @ 0x1401A5A58 (-CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

__int64 __fastcall NtUserSetKeyboardState(__int64 a1)
{
  _QWORD *UserSessionState; // rdi
  __int64 v3; // rax
  __int64 v4; // rcx
  int v5; // ebx
  struct tagTHREADINFO *v6; // rdi
  __int64 v7; // rsi
  bool v8; // r9
  __int64 v10; // [rsp+50h] [rbp-18h] BYREF
  int v11; // [rsp+58h] [rbp-10h]

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
  v3 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0LL,
         0LL,
         _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v3;
  v5 = 0;
  if ( v3 )
  {
    DestroySharedUserCritDeferredUnlockList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  v6 = PtiCurrent(v4);
  v7 = *((_QWORD *)v6 + 59);
  if ( UIPrivilegeIsolation::CheckAccessEx(
         (UIPrivilegeIsolation *)(*((_QWORD *)v6 + 58) + 872LL),
         (const struct tagUIPI_INFO *)(v7 + 472),
         0LL,
         v8)
    || (*(_DWORD *)(v7 + 436) & 0x2000000) != 0 )
  {
    v5 = SetKeyboardState(a1);
  }
  else
  {
    v10 = *(_QWORD *)(v7 + 472);
    v11 = *(_DWORD *)(v7 + 480);
    EtwTraceUIPIInputError((__int64)v6, 0LL, v7, &v10, 3);
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  return v5;
}
