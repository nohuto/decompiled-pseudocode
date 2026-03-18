/*
 * XREFs of _lambda_32f3cb84696a90cec3124b3263005914_::operator() @ 0x1401B3CB4
 * Callers:
 *     W32AttachToProcessAndExecute__lambda_32f3cb84696a90cec3124b3263005914___ @ 0x1401B397C (W32AttachToProcessAndExecute__lambda_32f3cb84696a90cec3124b3263005914___.c)
 *     _lambda_69228823fbc65be232edc551363dbcf2_::operator() @ 0x1401B3DE0 (_lambda_69228823fbc65be232edc551363dbcf2_--operator().c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x14005A930 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x14005AAB0 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401A9084 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     ?LogProcessInformation@ForegroundBoost@@YAXXZ @ 0x1401AC43C (-LogProcessInformation@ForegroundBoost@@YAXXZ.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@_K@Z @ 0x14023C0F8 (-CitEtwEnableCallback@@YAXPEBU_GUID@@_K@Z.c)
 */

__int64 __fastcall lambda_32f3cb84696a90cec3124b3263005914_::operator()(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *UserSessionState; // rbx
  __int64 v4; // rax
  ForegroundBoost *v5; // rcx
  _BYTE v7[264]; // [rsp+20h] [rbp-108h] BYREF

  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v7);
  UserSessionState = (_QWORD *)W32GetUserSessionState(v2);
  v4 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         1,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v4;
  if ( v4 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v4) )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2468));
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  if ( (*(_BYTE *)(a1 + 8) & 4) != 0 )
    ForegroundBoost::LogProcessInformation(v5);
  CitEtwEnableCallback(*(const struct _GUID **)a1, *(_QWORD *)(a1 + 8));
  UserSessionSwitchLeaveCritWithNonPaged();
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v7);
  return 0LL;
}
