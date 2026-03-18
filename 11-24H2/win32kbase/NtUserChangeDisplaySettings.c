/*
 * XREFs of NtUserChangeDisplaySettings @ 0x14016B4D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     xxxUserChangeDisplaySettings @ 0x1400E4890 (xxxUserChangeDisplaySettings.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x1400F78E4 (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14010EA98 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     DrvLogDiagDisplayChange @ 0x140145870 (DrvLogDiagDisplayChange.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?HasUILimit@tagPROCESSINFO@@QEBA_NK@Z @ 0x1401A3340 (-HasUILimit@tagPROCESSINFO@@QEBA_NK@Z.c)
 *     ?CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z @ 0x1401A5A58 (-CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x1401A9280 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall NtUserChangeDisplaySettings(_OWORD *a1, void *a2, unsigned int a3, void *a4)
{
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v8; // r15
  __int64 v9; // rcx
  _QWORD *UserSessionState; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned int v14; // ebx
  struct tagTHREADINFO *v15; // rbx
  bool v16; // r9
  __int64 v17; // rcx
  int v18; // ecx
  signed __int32 v19; // eax
  char *v20; // rbx
  _DWORD v22[4]; // [rsp+48h] [rbp-40h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v23[3]; // [rsp+58h] [rbp-30h] BYREF

  LOBYTE(v23[0]) = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(v23, 0LL, 0x1Au, 0);
  v8 = v23[1];
  v22[1] = -1;
  v22[2] = 0;
  v22[0] = 0x2000;
  UserSessionState = (_QWORD *)W32GetUserSessionState(v9);
  v11 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
          UserSessionState,
          0LL,
          0LL,
          _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v11;
  if ( v11 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2468));
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  if ( *(_DWORD *)(W32GetUserGdiSessionState(v12) + 32) )
  {
    v15 = PtiCurrent(v13);
    if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( tagPROCESSINFO::HasUILimit(*((tagPROCESSINFO **)v15 + 58), 0x10u) )
        goto LABEL_9;
      v17 = *((_QWORD *)v15 + 58);
    }
    else
    {
      v19 = _InterlockedCompareExchange((volatile signed __int32 *)v15 + 132, 0, 0);
      v20 = (char *)v15 + 464;
      if ( (v19 & 0x20000000) != 0 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v20 + 760LL) + 32LL) & 0x10) != 0 )
        goto LABEL_9;
      v17 = *(_QWORD *)v20;
    }
    if ( UIPrivilegeIsolation::CheckAccessEx(
           (UIPrivilegeIsolation *)(v17 + 872),
           (const struct tagUIPI_INFO *)v22,
           0LL,
           v16) )
    {
      if ( (a3 & 0x8000000) != 0 )
      {
        v18 = 87;
        goto LABEL_11;
      }
LABEL_17:
      DrvLogDiagDisplayChange(0LL, 8);
      v14 = xxxUserChangeDisplaySettings(a1, a2, 0LL, a3, a4, UserMode, v8);
      goto LABEL_18;
    }
LABEL_9:
    if ( a3 != 34 )
    {
      v18 = 5;
LABEL_11:
      v14 = -1;
      UserSetLastError(v18);
      goto LABEL_18;
    }
    goto LABEL_17;
  }
  v14 = -1;
LABEL_18:
  UserSessionSwitchLeaveCritWithNonPaged();
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v23);
  return v14;
}
