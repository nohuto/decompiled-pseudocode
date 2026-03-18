/*
 * XREFs of ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1400F04A0
 * Callers:
 *     <none>
 * Callees:
 *     EnterSharedCrit @ 0x140010CB0 (EnterSharedCrit.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401A9084 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 */

void __fastcall DxgkEngEnterUserCrit(__int64 a1)
{
  _QWORD *UserSessionState; // rbx
  __int64 v2; // rax

  if ( (_DWORD)a1 )
  {
    UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
    v2 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
           UserSessionState,
           1LL,
           0LL,
           _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    UserSessionState[3] = v2;
    if ( v2 )
    {
      if ( (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v2) )
      {
        DestroySharedUserCritDeferredUnlockList(UserSessionState + 2468);
        DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
        DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
      }
    }
  }
  else
  {
    EnterSharedCrit(1u, 1u);
  }
}
