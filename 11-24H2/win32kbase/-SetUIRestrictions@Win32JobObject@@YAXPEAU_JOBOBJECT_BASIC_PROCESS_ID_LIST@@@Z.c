/*
 * XREFs of ?SetUIRestrictions@Win32JobObject@@YAXPEAU_JOBOBJECT_BASIC_PROCESS_ID_LIST@@@Z @ 0x1401AA2F0
 * Callers:
 *     JobSetUIRestrictionsNotify @ 0x1401AA5B0 (JobSetUIRestrictionsNotify.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x14005A930 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x14005AAB0 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x14015C9F4 (--1CLockProcessByPid@@QEAA@XZ.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x1401A2894 (--0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x1401A2C38 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401A9084 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     Win32JobObject::_anonymous_namespace_::ConfigureProcessRestrictions @ 0x1401A9B8C (Win32JobObject--_anonymous_namespace_--ConfigureProcessRestrictions.c)
 *     ?GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x1401A9E14 (-GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ.c)
 */

void __fastcall Win32JobObject::SetUIRestrictions(Win32JobObject *this, struct _JOBOBJECT_BASIC_PROCESS_ID_LIST *a2)
{
  __int64 v3; // rcx
  _QWORD *UserSessionState; // rbx
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 i; // rbx
  unsigned __int64 ProcessInfo; // rax
  __int64 v9; // rdi
  int ProcessEffectiveUILimits; // eax
  _BYTE v11[8]; // [rsp+30h] [rbp-168h] BYREF
  __int64 v12; // [rsp+38h] [rbp-160h]
  _BYTE v13[80]; // [rsp+40h] [rbp-158h] BYREF
  _BYTE v14[256]; // [rsp+90h] [rbp-108h] BYREF

  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v14);
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
  v12 = 0LL;
  v11[0] = 0;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v11);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1); i = (unsigned int)(i + 1) )
  {
    CLockProcessByPid::CLockProcessByPid((__int64)v13, *((int *)this + 2 * i + 2), 0, v6, 1, 0LL);
    ProcessInfo = CLockProcessByPid::GetProcessInfo((CLockProcessByPid *)v13);
    v9 = ProcessInfo;
    if ( ProcessInfo && *(_BYTE *)(ProcessInfo + 1208) == 1 )
    {
      ProcessEffectiveUILimits = KfGetProcessEffectiveUILimits(*(_QWORD *)ProcessInfo);
      Win32JobObject::_anonymous_namespace_::ConfigureProcessRestrictions(v9, ProcessEffectiveUILimits);
    }
    CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v13);
  }
  if ( v11[0] )
    --*(_DWORD *)(v12 + 28);
  UserSessionSwitchLeaveCritWithNonPaged();
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v14);
}
