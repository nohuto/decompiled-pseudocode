/*
 * XREFs of ?Terminated@Win32JobObject@@YAXK@Z @ 0x1401AA430
 * Callers:
 *     JobTerminateNotify @ 0x1401AA5E0 (JobTerminateNotify.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x14005A930 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x14005AAB0 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x1401A2C38 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401A9084 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     Win32JobObject::_anonymous_namespace_::DeleteW32Job @ 0x1401A9C08 (Win32JobObject--_anonymous_namespace_--DeleteW32Job.c)
 *     Win32JobObject::_anonymous_namespace_::FindW32Job @ 0x1401A9D28 (Win32JobObject--_anonymous_namespace_--FindW32Job.c)
 */

void __fastcall Win32JobObject::Terminated(Win32JobObject *this)
{
  unsigned int v1; // edi
  __int64 v2; // rcx
  _QWORD *UserSessionState; // rbx
  __int64 v4; // rax
  __int64 *W32Job; // rax
  _BYTE v6[8]; // [rsp+20h] [rbp-118h] BYREF
  __int64 v7; // [rsp+28h] [rbp-110h]
  _BYTE v8[264]; // [rsp+30h] [rbp-108h] BYREF

  v1 = (unsigned int)this;
  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v8);
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
  v7 = 0LL;
  v6[0] = 0;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v6);
  W32Job = Win32JobObject::_anonymous_namespace_::FindW32Job(v1);
  if ( W32Job )
    Win32JobObject::_anonymous_namespace_::DeleteW32Job((char *)W32Job);
  if ( v6[0] )
    --*(_DWORD *)(v7 + 28);
  UserSessionSwitchLeaveCritWithNonPaged();
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v8);
}
