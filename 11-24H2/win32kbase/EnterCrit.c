/*
 * XREFs of EnterCrit @ 0x140162740
 * Callers:
 *     <none>
 * Callees:
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401A9084 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 */

__int64 __fastcall EnterCrit(__int64 a1, unsigned int a2)
{
  unsigned int v3; // esi
  _QWORD *UserSessionState; // rdi
  __int64 result; // rax
  __int64 v6; // rbx

  v3 = a1;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
  result = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
             UserSessionState,
             v3,
             a2,
             _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = result;
  v6 = result;
  if ( result )
  {
    if ( !v3 || (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(result) )
    {
      DestroySharedUserCritDeferredUnlockList(UserSessionState + 2468);
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
    }
    return v6;
  }
  return result;
}
