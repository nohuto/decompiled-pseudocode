/*
 * XREFs of ?UserInitialize@@YAJXZ @ 0x14013264C
 * Callers:
 *     Win32kBaseUserInitialize @ 0x140167110 (Win32kBaseUserInitialize.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     InitLoadResources @ 0x14005548C (InitLoadResources.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     FastGetProfileIntFromID @ 0x14009F4A0 (FastGetProfileIntFromID.c)
 *     FastGetProfileDwordEx @ 0x14009FAE0 (FastGetProfileDwordEx.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1400A0750 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1400A07C0 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14010EA98 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     CreateKernelEvent @ 0x140131DB0 (CreateKernelEvent.c)
 *     ?HYDRA_HINT@@YAXW4HydraHint@@@Z @ 0x1401483DC (-HYDRA_HINT@@YAXW4HydraHint@@@Z.c)
 *     ?InitializeRemoteSessionOcclusionEvent@@YAJXZ @ 0x14014A1D0 (-InitializeRemoteSessionOcclusionEvent@@YAJXZ.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14015A320 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     xxxCreateThreadInfo @ 0x14015DFD8 (xxxCreateThreadInfo.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     xxxSystemParametersInfo @ 0x140173780 (xxxSystemParametersInfo.c)
 *     ?ReserveUserSessionViews@@YAJPEAPEAX0@Z @ 0x1401987B8 (-ReserveUserSessionViews@@YAJPEAPEAX0@Z.c)
 *     LW_BrushInit @ 0x14019E880 (LW_BrushInit.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401A9084 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     ?DrvDriverFailure@@YAJXZ @ 0x1401B1EA4 (-DrvDriverFailure@@YAJXZ.c)
 *     InitVideo @ 0x1401B2E18 (InitVideo.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     InitCreateObjectDirectory @ 0x1402E5628 (InitCreateObjectDirectory.c)
 */

__int64 UserInitialize(void)
{
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v0; // r15
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 UserSessionState; // r14
  char v4; // di
  char v5; // bl
  bool v6; // si
  __int64 v7; // rax
  int v8; // r8d
  int v9; // edx
  _QWORD *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  int ObjectDirectory; // ebx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  struct _KEVENT *KernelEvent; // rbx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  void (*v43)(void); // rax
  __int64 v44; // rax
  bool v45; // si
  __int64 v46; // rax
  int v47; // r8d
  int v48; // edx
  ULONG OutputBufferLength[2]; // [rsp+28h] [rbp-39h]
  __int64 v51; // [rsp+48h] [rbp-19h] BYREF
  PVOID MappedBase; // [rsp+50h] [rbp-11h] BYREF
  PVOID Object; // [rsp+58h] [rbp-9h] BYREF
  __int64 InputBuffer; // [rsp+60h] [rbp-1h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v55; // [rsp+68h] [rbp+7h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v56; // [rsp+70h] [rbp+Fh] BYREF
  GUID ActivityId; // [rsp+78h] [rbp+17h] BYREF

  LOBYTE(v55) = 0;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  DisplayScenarioContextEnsureAndAssociate(&ActivityId, 0x1Cu, 0, &v56, (unsigned __int8 *)&v55);
  v0 = v56;
  Object = 0LL;
  MappedBase = 0LL;
  LODWORD(v51) = 0;
  InputBuffer = 0LL;
  UserSessionState = W32GetUserSessionState(v1);
  v4 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
    || (v5 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v5 = 0;
  }
  v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = W32GetUserSessionState(v2);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v8,
      *(_QWORD *)(v7 + 69400),
      4,
      14,
      24,
      (__int64)&WPP_c6ad2250ef6e3ae3eb9ff75238ab5e56_Traceguids);
  }
  v10 = (_QWORD *)W32GetUserSessionState(v2);
  v11 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
          v10,
          1LL,
          0LL,
          _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  v10[3] = v11;
  if ( v11 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v11) )
  {
    DestroySharedUserCritDeferredUnlockList(v10 + 2468);
    DestroyDeferredUnlockObjectAssignmentList(v10 + 2475);
    DestroyDeferredUnlockObjectAssignmentList(v10 + 2473);
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v12) + 36448) && *(_QWORD *)(UserSessionState + 63584) )
  {
    v14 = W32GetUserSessionState(v13);
    ZwClose(*(HANDLE *)(v14 + 36448));
    *(_QWORD *)(W32GetUserSessionState(v15) + 36448) = 0LL;
  }
  HYDRA_HINT(2LL);
  if ( *(_DWORD *)(W32GetUserSessionState(v16) + 68868) )
  {
    OutputBufferLength[0] = W32GetCurrentWin32kSessionId();
    RtlStringCchPrintfW(
      (unsigned __int16 *)(UserSessionState + 63648),
      256LL,
      L"%ws\\%ld%ws",
      L"\\Sessions",
      *(_QWORD *)OutputBufferLength,
      L"\\Windows\\WindowStations");
  }
  else
  {
    RtlStringCchCopyW((char *)(UserSessionState + 63648), 256LL, (char *)L"\\Windows\\WindowStations");
  }
  ObjectDirectory = InitCreateObjectDirectory();
  if ( ObjectDirectory >= 0 )
  {
    v19 = W32GetUserSessionState(v17);
    FastGetProfileIntFromID(0, 52, 0x26Fu, 5000, (PULONG)(v19 + 36468), 0);
    v21 = W32GetUserSessionState(v20);
    *(_DWORD *)(*(_QWORD *)(v21 + 19928) + 2236LL) |= 4u;
    KernelEvent = CreateKernelEvent(SynchronizationEvent, 0);
    *(_QWORD *)(W32GetUserSessionState(v23) + 62848) = KernelEvent;
    if ( *(_QWORD *)(W32GetUserSessionState(v24) + 62848) )
    {
      if ( !*(_DWORD *)(W32GetUserSessionState(v17) + 68868) || *(_DWORD *)(W32GetUserSessionState(v25) + 68876) )
      {
        ObjectDirectory = ReserveUserSessionViews(&Object, &MappedBase);
        if ( ObjectDirectory < 0 )
          goto LABEL_45;
        if ( !InitVideo(v0) )
        {
          ObjectDirectory = DrvDriverFailure();
          MmUnmapViewInSessionSpace(MappedBase);
          ObfDereferenceObject(Object);
          goto LABEL_45;
        }
        MmUnmapViewInSessionSpace(MappedBase);
        ObfDereferenceObject(Object);
        *(_DWORD *)(W32GetUserGdiSessionState(v27) + 32) = 1;
        InputBuffer = 2LL;
        ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 8u, 0LL, 0);
      }
      *(_DWORD *)(W32GetUserSessionState(v26) + 68664) = 1;
      ObjectDirectory = xxxCreateThreadInfo(KeGetCurrentThread());
      if ( ObjectDirectory >= 0 )
      {
        if ( *(_DWORD *)(W32GetUserSessionState(v17) + 2676) )
        {
          v29 = W32GetUserSessionState(v28);
          xxxSystemParametersInfo(0x51u, *(_DWORD *)(v29 + 2676));
          v31 = W32GetUserSessionState(v30);
          xxxSystemParametersInfo(0x52u, *(_DWORD *)(v31 + 2676));
          *(_DWORD *)(W32GetUserSessionState(v32) + 2676) = 0;
        }
        ObjectDirectory = InitializeRemoteSessionOcclusionEvent();
        if ( ObjectDirectory >= 0 )
        {
          if ( !*(_DWORD *)(W32GetUserSessionState(v17) + 68868) || *(_DWORD *)(W32GetUserSessionState(v33) + 68876) )
            LW_BrushInit();
          if ( *(_DWORD *)(W32GetUserSessionState(v34) + 68668)
            || !*(_DWORD *)(W32GetUserSessionState(v35) + 68868)
            || !*(_DWORD *)(W32GetUserSessionState(v36) + 68876)
            || (ObjectDirectory = SetDPIinSetup(v0), ObjectDirectory >= 0) )
          {
            InitLoadResources(0LL);
            FastGetProfileDwordEx(0LL, 51LL, L"ConvertibleSlateMode", 0, 0, &v51, 0LL);
            v38 = *(_QWORD *)(W32GetUserSessionState(v37) + 19928);
            if ( (_DWORD)v51 )
              *(_DWORD *)(v38 + 2236) |= 8u;
            else
              *(_DWORD *)(v38 + 2236) &= ~8u;
            FastGetProfileDwordEx(0LL, 51LL, L"SystemDockMode", 0, 0, &v51, 0LL);
            v40 = *(_QWORD *)(W32GetUserSessionState(v39) + 19928);
            if ( (_DWORD)v51 )
              *(_DWORD *)(v40 + 2236) |= 0x10u;
            else
              *(_DWORD *)(v40 + 2236) &= ~0x10u;
            *(_DWORD *)(W32GetUserSessionState(v40) + 69368) = 5000;
            v17 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v42, v41) + 48);
            v43 = *(void (**)(void))(v17 + 208);
            if ( v43 )
              v43();
          }
        }
      }
    }
    else
    {
      ObjectDirectory = -1073741801;
    }
  }
LABEL_45:
  v44 = W32GetUserSessionState(v17);
  KeSetEvent(*(PRKEVENT *)(v44 + 68640), 1, 0);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v4 = 0;
  }
  v45 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v46 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v47) = v45;
    LOBYTE(v48) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v48,
      v47,
      *(_QWORD *)(v46 + 69400),
      4,
      14,
      25,
      (__int64)&WPP_c6ad2250ef6e3ae3eb9ff75238ab5e56_Traceguids);
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(&v55);
  return (unsigned int)ObjectDirectory;
}
