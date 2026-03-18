/*
 * XREFs of UserEnterUserCritSec @ 0x1400FFA40
 * Callers:
 *     <none>
 * Callees:
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401A9084 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 */

_QWORD *__fastcall UserEnterUserCritSec(__int64 a1)
{
  _QWORD *UserSessionState; // rbx
  _QWORD *result; // rax

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
  result = (_QWORD *)UserCritInternal::_anonymous_namespace_::EnterCritInternal(
                       UserSessionState,
                       1LL,
                       0LL,
                       _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = result;
  if ( result )
  {
    result = (_QWORD *)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(result);
    if ( (_BYTE)result )
    {
      DestroySharedUserCritDeferredUnlockList(UserSessionState + 2468);
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
      return DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
    }
  }
  return result;
}
