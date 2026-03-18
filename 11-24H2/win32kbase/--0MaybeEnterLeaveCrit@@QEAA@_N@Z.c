/*
 * XREFs of ??0MaybeEnterLeaveCrit@@QEAA@_N@Z @ 0x1400E94B0
 * Callers:
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x140187370 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401A9084 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 */

MaybeEnterLeaveCrit *__fastcall MaybeEnterLeaveCrit::MaybeEnterLeaveCrit(MaybeEnterLeaveCrit *this, char a2)
{
  _QWORD *UserSessionState; // rbx
  __int64 v4; // rax

  *(_BYTE *)this = a2;
  if ( a2 )
  {
    UserSessionState = (_QWORD *)W32GetUserSessionState(this);
    v4 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
           UserSessionState,
           1LL,
           0LL,
           _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    UserSessionState[3] = v4;
    if ( v4 )
    {
      if ( (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v4) )
      {
        DestroySharedUserCritDeferredUnlockList(UserSessionState + 2468);
        DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
        DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
      }
    }
  }
  return this;
}
