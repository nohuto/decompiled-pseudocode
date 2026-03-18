/*
 * XREFs of ?DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z @ 0x14012FBC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x140124A90 (-DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z.c)
 *     IsUserResetPointerSupported @ 0x140141B60 (IsUserResetPointerSupported.c)
 *     UserResetPointer @ 0x1401422BC (UserResetPointer.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401A9084 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 */

__int64 __fastcall DxgkEngSetDisplayModeCallback(struct _LUID a1, int a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rax
  struct _LUID v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = a1;
  v3 = (_QWORD *)((__int64 (__fastcall *)(_QWORD))W32GetUserSessionState)(a1);
  v4 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         v3,
         1LL,
         0LL,
         _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  v3[3] = v4;
  if ( v4 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v4) )
  {
    DestroySharedUserCritDeferredUnlockList(v3 + 2468);
    DestroyDeferredUnlockObjectAssignmentList(v3 + 2475);
    DestroyDeferredUnlockObjectAssignmentList(v3 + 2473);
  }
  if ( (int)IsUserResetPointerSupported() >= 0 )
    UserResetPointer();
  DrvUpdatePDevForWDDMVidPnSource(&v6, a2);
  UserSessionSwitchLeaveCritWithNonPaged();
  return 0LL;
}
