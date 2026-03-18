/*
 * XREFs of UserThreadCallout @ 0x140166CD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ?DispBrokerAsyncSessionStateChanged@@YAJQEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400C7110 (-DispBrokerAsyncSessionStateChanged@@YAJQEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x1400F78E4 (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     RtlGetExpWinVer @ 0x1400FF4A0 (RtlGetExpWinVer.c)
 *     GreCleanDC @ 0x1401073F0 (GreCleanDC.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14010EA98 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     xxxCreateThreadInfo @ 0x14015DFD8 (xxxCreateThreadInfo.c)
 *     xxxDestroyThreadInfo @ 0x14015F444 (xxxDestroyThreadInfo.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401A9084 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 */

__int64 __fastcall UserThreadCallout(PETHREAD Thread, int a2)
{
  unsigned int ThreadInfo; // r14d
  char v4; // di
  CTouchProcessor *v5; // rcx
  bool v6; // bl
  bool v7; // si
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  _QWORD *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  CTouchProcessor *v18; // rcx
  bool v19; // bl
  bool v20; // si
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  __int64 v24; // rcx
  __int64 *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rbx
  PEPROCESS ThreadProcess; // rax
  PEPROCESS v30; // rsi
  __int64 ProcessSectionBaseAddress; // rax
  _QWORD *v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rbx
  __int64 *v35; // rax
  bool v36; // bl
  __int64 v37; // rax
  int v38; // r8d
  int v39; // edx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v40[2]; // [rsp+40h] [rbp-28h] BYREF

  ThreadInfo = 0;
  v4 = 1;
  if ( a2 )
  {
    if ( a2 != 1 )
      goto LABEL_48;
    v5 = WPP_GLOBAL_Control;
    v6 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v9) = v7;
      LOBYTE(v10) = v6;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v10,
        v9,
        *(_QWORD *)(UserSessionState + 69400),
        4,
        14,
        28,
        (__int64)&WPP_c6ad2250ef6e3ae3eb9ff75238ab5e56_Traceguids);
    }
    v11 = (_QWORD *)W32GetUserSessionState(v5);
    v12 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
            v11,
            1LL,
            0LL,
            _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    v11[3] = v12;
    if ( v12 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v12) )
    {
      DestroySharedUserCritDeferredUnlockList(v11 + 2468);
      DestroyDeferredUnlockObjectAssignmentList(v11 + 2475);
      DestroyDeferredUnlockObjectAssignmentList(v11 + 2473);
    }
    v13 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(Thread);
    if ( ThreadWin32Thread )
      v13 = *ThreadWin32Thread;
    _InterlockedOr((volatile signed __int32 *)(v13 + 528), 1u);
    if ( !*(_DWORD *)(W32GetUserSessionState(v15) + 68868) || *(_DWORD *)(W32GetUserGdiSessionState(v16) + 32) )
    {
      v17 = W32GetUserSessionState(v16);
      GreCleanDC(*(HDC *)(*(_QWORD *)(v17 + 57008) + 64LL));
    }
    if ( (*(_BYTE *)(v13 + 1360) & 2) != 0 )
    {
      *(_DWORD *)(W32GetUserGdiSessionState(v16) + 36) = 0;
      LOBYTE(v40[0]) = 0;
      CDisplayScenarioContextScope::ContextScopeConstructor(v40, 0LL, 0x4Fu, 0);
      DispBrokerAsyncSessionStateChanged(v40[1]);
      CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v40);
    }
    if ( (*(_BYTE *)(v13 + 1360) & 1) == 0 )
      xxxDestroyThreadInfo();
  }
  else
  {
    v18 = WPP_GLOBAL_Control;
    v19 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v22) = v20;
      LOBYTE(v23) = v19;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v23,
        v22,
        *(_QWORD *)(v21 + 69400),
        4,
        14,
        27,
        (__int64)&WPP_c6ad2250ef6e3ae3eb9ff75238ab5e56_Traceguids);
    }
    if ( *(_DWORD *)(W32GetUserSessionState(v18) + 2732) )
      return 3221225473LL;
    if ( !*(_DWORD *)(W32GetUserSessionState(v24) + 68664) )
    {
      v34 = 0LL;
      v35 = (__int64 *)PsGetThreadWin32Thread(Thread);
      if ( v35 )
        v34 = *v35;
      _interlockedbittestandset((volatile signed __int32 *)(v34 + 1360), 0);
      goto LABEL_48;
    }
    v26 = (__int64 *)PsGetThreadWin32Thread(Thread);
    if ( v26 )
    {
      v28 = *v26;
      if ( *v26 )
      {
        ThreadProcess = PsGetThreadProcess(Thread);
        v30 = ThreadProcess;
        if ( ThreadProcess && PsGetProcessPeb(ThreadProcess) )
        {
          ProcessSectionBaseAddress = PsGetProcessSectionBaseAddress(v30);
          *(_DWORD *)(v28 + 672) = RtlGetExpWinVer(ProcessSectionBaseAddress);
        }
        else
        {
          *(_DWORD *)(v28 + 672) = 0;
        }
      }
    }
    v32 = (_QWORD *)W32GetUserSessionState(v27);
    v33 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
            v32,
            1LL,
            0LL,
            _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    v32[3] = v33;
    if ( v33 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v33) )
    {
      DestroySharedUserCritDeferredUnlockList(v32 + 2468);
      DestroyDeferredUnlockObjectAssignmentList(v32 + 2475);
      DestroyDeferredUnlockObjectAssignmentList(v32 + 2473);
    }
    ThreadInfo = xxxCreateThreadInfo(Thread);
  }
  UserSessionSwitchLeaveCritWithNonPaged();
LABEL_48:
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v4 = 0;
  }
  v36 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v37 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v38) = v36;
    LOBYTE(v39) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v39,
      v38,
      *(_QWORD *)(v37 + 69400),
      4,
      14,
      29,
      (__int64)&WPP_c6ad2250ef6e3ae3eb9ff75238ab5e56_Traceguids);
  }
  return ThreadInfo;
}
