/*
 * XREFs of NtUserSetInputServiceState @ 0x140112D80
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     HandleDeferredInput @ 0x1400C06B0 (HandleDeferredInput.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401A9084 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 */

__int64 __fastcall NtUserSetInputServiceState(__int64 a1, int a2)
{
  int v3; // esi
  _QWORD *UserSessionState; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  struct tagTHREADINFO *v8; // rax

  v3 = a1;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
  v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         1LL,
         0LL,
         _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  v7 = 0LL;
  UserSessionState[3] = v5;
  if ( v5 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v5) )
  {
    DestroySharedUserCritDeferredUnlockList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  v8 = PtiCurrent(v6);
  if ( !v3 )
  {
    *((_QWORD *)v8 + 170) &= ~0x10000000uLL;
    goto LABEL_14;
  }
  if ( v3 == 1 )
  {
    *((_QWORD *)v8 + 170) |= 0x10000000uLL;
LABEL_14:
    v7 = 1LL;
    goto LABEL_15;
  }
  if ( v3 == 2 || v3 == 3 || v3 == 4 || (unsigned int)(v3 - 5) <= 1 )
  {
    if ( (*((_DWORD *)v8 + 340) & 0x10000000) != 0 )
      HandleDeferredInput((__int64)v8, v3, a2);
    goto LABEL_14;
  }
LABEL_15:
  UserSessionSwitchLeaveCritWithNonPaged();
  return v7;
}
