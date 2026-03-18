/*
 * XREFs of ?AddProcess@Win32JobObject@@YAXPEAU_EPROCESS@@@Z @ 0x1401A9AC8
 * Callers:
 *     JobAddProcessNotify @ 0x1401AA560 (JobAddProcessNotify.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x14005A930 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x14005AAB0 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401A9084 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     ?HandleConvertToGui@Win32JobObject@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1401AA0EC (-HandleConvertToGui@Win32JobObject@@YAXPEAUtagPROCESSINFO@@@Z.c)
 */

void __fastcall Win32JobObject::AddProcess(Win32JobObject *this, struct _EPROCESS *a2)
{
  __int64 v3; // rcx
  _QWORD *UserSessionState; // rbx
  __int64 v5; // rax
  Win32JobObject *ProcessWin32Process; // rax
  struct tagPROCESSINFO *v7; // rdx
  _BYTE v8[264]; // [rsp+20h] [rbp-108h] BYREF

  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v8);
  UserSessionState = (_QWORD *)W32GetUserSessionState(v3);
  v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         1,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v5;
  if ( v5 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v5) )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2468));
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  ProcessWin32Process = (Win32JobObject *)PsGetProcessWin32Process(this);
  if ( ProcessWin32Process && *(_QWORD *)ProcessWin32Process )
    Win32JobObject::HandleConvertToGui(ProcessWin32Process, v7);
  UserSessionSwitchLeaveCritWithNonPaged();
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v8);
}
