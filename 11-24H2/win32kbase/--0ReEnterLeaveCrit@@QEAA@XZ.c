/*
 * XREFs of ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1400E47E0
 * Callers:
 *     UserGetDesktopDC @ 0x14000EDE0 (UserGetDesktopDC.c)
 *     UserDeleteW32Thread @ 0x1400590C0 (UserDeleteW32Thread.c)
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1400E46B0 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1400E47A0 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ResetAccessibilityCountersOnMouseInput @ 0x1400EC220 (ResetAccessibilityCountersOnMouseInput.c)
 *     UserDeleteW32Process @ 0x14015DEE0 (UserDeleteW32Process.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1401B346C (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     DeactivateKSTInputProcessingHelper @ 0x140215790 (DeactivateKSTInputProcessingHelper.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x140042D50 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401A9084 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 */

ReEnterLeaveCrit *__fastcall ReEnterLeaveCrit::ReEnterLeaveCrit(ReEnterLeaveCrit *this)
{
  bool v2; // al
  __int64 v3; // rcx
  _QWORD *UserSessionState; // rbx
  __int64 v5; // rax

  v2 = IS_USERCRIT_OWNED_EXCLUSIVE();
  *(_BYTE *)this = v2;
  if ( !v2 )
  {
    UserSessionState = (_QWORD *)W32GetUserSessionState(v3);
    v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
           UserSessionState,
           1LL,
           0LL,
           _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    UserSessionState[3] = v5;
    if ( v5 )
    {
      if ( (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v5) )
      {
        DestroySharedUserCritDeferredUnlockList(UserSessionState + 2468);
        DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
        DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
      }
    }
  }
  return this;
}
