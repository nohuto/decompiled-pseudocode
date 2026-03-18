/*
 * XREFs of ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1401364B8
 * Callers:
 *     NtCompositionSetDropTarget @ 0x14012B7F0 (NtCompositionSetDropTarget.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?LockForWrite@CompositionInputObject@@QEAAJPEAPEAVCInputSink@@@Z @ 0x1400471A0 (-LockForWrite@CompositionInputObject@@QEAAJPEAPEAVCInputSink@@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1400476D0 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?SetDropTarget@CInputSink@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x14006C488 (-SetDropTarget@CInputSink@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401A9084 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 */

__int64 __fastcall CompositionInputObject::SetDropTarget(char *Object, const struct COMPOSITION_INPUT_QUEUE *a2)
{
  _QWORD *UserSessionState; // rbx
  __int64 v5; // rax
  int v6; // ebx
  CInputSink *v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0LL;
  UserSessionState = (_QWORD *)W32GetUserSessionState(Object);
  v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         1LL,
         0LL,
         _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v5;
  if ( v5 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v5) )
  {
    DestroySharedUserCritDeferredUnlockList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  v6 = CompositionInputObject::LockForWrite(Object, &v8);
  if ( v6 >= 0 )
  {
    v6 = CInputSink::SetDropTarget(v8, a2);
    CInputSink::UnlockAndRelease(v8);
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  return (unsigned int)v6;
}
