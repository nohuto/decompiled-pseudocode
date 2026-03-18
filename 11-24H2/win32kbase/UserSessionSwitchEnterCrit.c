/*
 * XREFs of UserSessionSwitchEnterCrit @ 0x14004C9C0
 * Callers:
 *     AcquireCriticalSectionAndCheckState @ 0x14004C990 (AcquireCriticalSectionAndCheckState.c)
 *     ?NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x1400F50DC (-NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140091E28 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400CFC50 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401A9084 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 */

__int64 __fastcall UserSessionSwitchEnterCrit(__int64 a1)
{
  __int64 UserSessionState; // rbx
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  char v8; // [rsp+40h] [rbp+8h] BYREF

  UserSessionState = W32GetUserSessionState(a1);
  v2 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         1LL,
         0LL,
         _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  *(_QWORD *)(UserSessionState + 24) = v2;
  if ( v2 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v2) )
  {
    DestroySharedUserCritDeferredUnlockList(UserSessionState + 19744);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 19800);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 19784);
  }
  while ( *(_DWORD *)(W32GetUserGdiSessionState() + 36) && !(unsigned int)IsCurrentProcessDwm() )
  {
    v4 = W32GetUserSessionState(v3);
    v8 = 0;
    ++*(_DWORD *)(v4 + 69136);
    UserSessionSwitchLeaveCritWithNonPaged();
    v6 = W32GetUserSessionState(v5);
    KeWaitForSingleObject(*(PVOID *)(v6 + 69128), UserRequest, 0, 0, 0LL);
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v8);
  }
  return 0LL;
}
