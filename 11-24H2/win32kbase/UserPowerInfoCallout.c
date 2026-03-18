/*
 * XREFs of UserPowerInfoCallout @ 0x1401AEF84
 * Callers:
 *     W32CalloutDispatchWorker @ 0x1400DAD6C (W32CalloutDispatchWorker.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x14006B090 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_POWERTRANSITIONSSTATE@@@?$DomainShared@$$V@@QEAA@XZ @ 0x140091FC0 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_POWERTRANSITIONSSTATE@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     UserLogError @ 0x1400A6760 (UserLogError.c)
 *     CitDisplayRequestChange @ 0x1400B542C (CitDisplayRequestChange.c)
 *     SetPendingInput @ 0x1400E95C0 (SetPendingInput.c)
 *     QueuePowerRequest @ 0x1400E98F0 (QueuePowerRequest.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_THREADLOCK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400EEEC8 (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_THREADLOCK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     EtwTraceDisplayReqChange @ 0x14013D3F0 (EtwTraceDisplayReqChange.c)
 *     ?OnInputSuppressedValueChanged@CBaseInput@@SAX_N@Z @ 0x140141984 (-OnInputSuppressedValueChanged@CBaseInput@@SAX_N@Z.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x14014CEA4 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     ?SendConsoleDisplayWnf@@YAXH@Z @ 0x140152290 (-SendConsoleDisplayWnf@@YAXH@Z.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401A9084 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1401ADF6C (-PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?UpdateAdaptiveSessionState@@YAXXZ @ 0x1401AE6B0 (-UpdateAdaptiveSessionState@@YAXXZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1401B346C (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     IoControl @ 0x140212EF0 (IoControl.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall UserPowerInfoCallout(__int64 a1, __int64 a2, int a3, int *a4, int a5, int *a6)
{
  int v6; // edi
  unsigned int v7; // r14d
  int v10; // r12d
  _DWORD *UserSessionState; // rbx
  __int64 v12; // rcx
  __int64 v13; // rcx
  bool v14; // r15
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // r12d
  int v18; // r12d
  int v19; // r12d
  int v20; // r12d
  int v21; // r12d
  int v22; // r12d
  int v23; // r12d
  __int64 v24; // rcx
  BOOL v25; // r12d
  _QWORD *v26; // rbx
  __int64 v27; // rax
  char v28; // dl
  __int64 v29; // rcx
  _QWORD *v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  _QWORD *v38; // r13
  __int64 v39; // rax
  __int64 v40; // rcx
  _DWORD *v41; // rcx
  int v42; // eax
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rcx
  _QWORD *v46; // r14
  __int64 v47; // rax
  int v48; // ebx
  __int64 v49; // rax
  __int64 v50; // rcx
  _QWORD *v51; // rsi
  __int64 v52; // rax
  int v53; // r13d
  int v54; // esi
  bool v55; // zf
  bool v56; // sf
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rcx
  char v63; // r14
  __int64 v64; // r12
  _QWORD *v65; // rsi
  __int64 v66; // rax
  __int64 v67; // rcx
  _QWORD *v68; // rsi
  __int64 v69; // rax
  __int64 v70; // rcx
  _QWORD *v71; // r13
  __int64 v72; // rax
  _QWORD *v73; // r13
  __int64 v74; // rax
  _QWORD *v75; // r13
  __int64 v76; // rax
  _QWORD *v77; // r13
  __int64 v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rcx
  enum POWER_MONITOR_REQUEST_REASON v81; // ecx
  _QWORD *v82; // rsi
  __int64 v83; // rax
  __int64 v84; // rcx
  __int64 v85; // rcx
  _QWORD *v86; // r13
  __int64 v87; // rax
  _QWORD *v88; // r13
  __int64 v89; // rax
  _QWORD *v90; // r13
  __int64 v91; // rax
  __int64 v92; // rcx
  _QWORD *v93; // r13
  __int64 v94; // rax
  _QWORD *v95; // r13
  __int64 v96; // rax
  _QWORD *v97; // r13
  __int64 v98; // rax
  _QWORD *v99; // rbx
  __int64 v100; // rax
  _QWORD *v101; // r13
  __int64 v102; // rax
  BOOL v103; // eax
  __int64 v104; // rcx
  _QWORD *v106; // [rsp+48h] [rbp-29h] BYREF
  bool v107[4]; // [rsp+50h] [rbp-21h] BYREF
  int v108; // [rsp+54h] [rbp-1Dh]
  int *v109; // [rsp+58h] [rbp-19h]
  __int128 v110; // [rsp+60h] [rbp-11h] BYREF
  __int128 v111; // [rsp+70h] [rbp-1h]

  v6 = 0;
  v109 = a6;
  v7 = 0;
  v110 = 0LL;
  v10 = a1;
  v111 = 0LL;
  UserSessionState = (_DWORD *)W32GetUserSessionState(a1);
  if ( !*(_DWORD *)(W32GetUserSessionState(v12) + 2728) )
    return (unsigned int)-1073741823;
  v14 = 1;
  if ( !v10 && !*(_DWORD *)(W32GetUserGdiSessionState(v13) + 32) )
  {
    v106 = (_QWORD *)W32GetUserSessionState(v13);
    v15 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
            v106,
            1,
            0,
            (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    v106[3] = v15;
    if ( v15 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v15) )
    {
      DestroySharedUserCritDeferredUnlockList((__int64)(v106 + 2468));
      DestroyDeferredUnlockObjectAssignmentList(v106 + 2475);
      DestroyDeferredUnlockObjectAssignmentList(v106 + 2473);
    }
    UserSessionSwitchLeaveCritWithNonPaged();
  }
  if ( !*(_DWORD *)(W32GetUserGdiSessionState(v13) + 32) )
    return (unsigned int)-1073741823;
  if ( !v10 )
  {
    if ( a3 != 20 || !a4 )
      return (unsigned int)-1073741823;
    if ( *(_QWORD *)&GUID_ADAPTIVE_SESSION_STATE_CHANGED.Data1 == *(_QWORD *)a4
      && *(_QWORD *)GUID_ADAPTIVE_SESSION_STATE_CHANGED.Data4 == *((_QWORD *)a4 + 1) )
    {
      v68 = (_QWORD *)W32GetUserSessionState(v16);
      v69 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
              v68,
              1,
              0,
              (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
      v68[3] = v69;
      if ( v69 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v69) )
      {
        DestroySharedUserCritDeferredUnlockList((__int64)(v68 + 2468));
        DestroyDeferredUnlockObjectAssignmentList(v68 + 2475);
        DestroyDeferredUnlockObjectAssignmentList(v68 + 2473);
      }
      if ( !*(_WORD *)(W32GetUserSessionState(v70) + 69008) || UserSessionState[687] )
        UpdateAdaptiveSessionState();
      goto LABEL_121;
    }
    if ( *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data1 == *(_QWORD *)a4
      && *(_QWORD *)GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data4 == *((_QWORD *)a4 + 1) )
    {
      v71 = (_QWORD *)W32GetUserSessionState(v16);
      v72 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
              v71,
              1,
              0,
              (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
      v71[3] = v72;
      if ( v72 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v72) )
      {
        DestroySharedUserCritDeferredUnlockList((__int64)(v71 + 2468));
        DestroyDeferredUnlockObjectAssignmentList(v71 + 2475);
        DestroyDeferredUnlockObjectAssignmentList(v71 + 2473);
      }
      UserSessionState[728] = a4[4];
      goto LABEL_121;
    }
    if ( *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data1 == *(_QWORD *)a4
      && *(_QWORD *)GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data4 == *((_QWORD *)a4 + 1) )
    {
      v73 = (_QWORD *)W32GetUserSessionState(v16);
      v74 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
              v73,
              1,
              0,
              (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
      v73[3] = v74;
      if ( v74 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v74) )
      {
        DestroySharedUserCritDeferredUnlockList((__int64)(v73 + 2468));
        DestroyDeferredUnlockObjectAssignmentList(v73 + 2475);
        DestroyDeferredUnlockObjectAssignmentList(v73 + 2473);
      }
      UserSessionState[726] = a4[4];
      goto LABEL_121;
    }
    if ( *(_QWORD *)&GUID_VIDEO_ALS_OFFSET.Data1 == *(_QWORD *)a4
      && *(_QWORD *)GUID_VIDEO_ALS_OFFSET.Data4 == *((_QWORD *)a4 + 1) )
    {
      v75 = (_QWORD *)W32GetUserSessionState(v16);
      v76 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
              v75,
              1,
              0,
              (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
      v75[3] = v76;
      if ( v76 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v76) )
      {
        DestroySharedUserCritDeferredUnlockList((__int64)(v75 + 2468));
        DestroyDeferredUnlockObjectAssignmentList(v75 + 2475);
        DestroyDeferredUnlockObjectAssignmentList(v75 + 2473);
      }
      LODWORD(v106) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5387);
      UserSessionState[730] = a4[4];
      goto LABEL_121;
    }
    if ( *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 == *(_QWORD *)a4
      && *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4 == *((_QWORD *)a4 + 1)
      || *(_QWORD *)&GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data1 == *(_QWORD *)a4
      && *(_QWORD *)GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data4 == *((_QWORD *)a4 + 1) )
    {
      v77 = (_QWORD *)W32GetUserSessionState(v16);
      v78 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
              v77,
              1,
              0,
              (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
      v77[3] = v78;
      if ( v78 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v78) )
      {
        DestroySharedUserCritDeferredUnlockList((__int64)(v77 + 2468));
        DestroyDeferredUnlockObjectAssignmentList(v77 + 2475);
        DestroyDeferredUnlockObjectAssignmentList(v77 + 2473);
      }
      UserSessionState[693] = a4[4] == 0;
      if ( *(_QWORD *)&GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data1 == *(_QWORD *)a4
        && *(_QWORD *)GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data4 == *((_QWORD *)a4 + 1)
        || *(_BYTE *)W32GetUserGdiSessionState(v79)
        || *(_WORD *)(W32GetUserSessionState(v80) + 69008) )
      {
        goto LABEL_121;
      }
      v81 = MonitorRequestReasonAcDcDisplayBurst;
    }
    else
    {
      if ( *(_QWORD *)&GUID_BATTERY_COUNT.Data1 != *(_QWORD *)a4
        || *(_QWORD *)GUID_BATTERY_COUNT.Data4 != *((_QWORD *)a4 + 1) )
      {
        if ( *(_QWORD *)&GUID_LIDSWITCH_STATE_CHANGE.Data1 == *(_QWORD *)a4
          && *(_QWORD *)GUID_LIDSWITCH_STATE_CHANGE.Data4 == *((_QWORD *)a4 + 1) )
        {
          v86 = (_QWORD *)W32GetUserSessionState(v16);
          v87 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
                  v86,
                  1,
                  0,
                  (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
          v86[3] = v87;
          if ( v87 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v87) )
          {
            DestroySharedUserCritDeferredUnlockList((__int64)(v86 + 2468));
            DestroyDeferredUnlockObjectAssignmentList(v86 + 2475);
            DestroyDeferredUnlockObjectAssignmentList(v86 + 2473);
          }
          DomainShared<>::DomainExclusive<DLT_POWERTRANSITIONSSTATE>::ObjectLock<>::ObjectLock<>((__int64)&v110);
          LOBYTE(v6) = a4[4] != 0;
          UserSessionState[702] = v6;
        }
        else
        {
          if ( *(_QWORD *)&GUID_LIDSWITCH_STATE_RELIABILITY.Data1 == *(_QWORD *)a4
            && *(_QWORD *)GUID_LIDSWITCH_STATE_RELIABILITY.Data4 == *((_QWORD *)a4 + 1) )
          {
            v88 = (_QWORD *)W32GetUserSessionState(v16);
            v89 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
                    v88,
                    1,
                    0,
                    (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
            v88[3] = v89;
            if ( v89 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v89) )
            {
              DestroySharedUserCritDeferredUnlockList((__int64)(v88 + 2468));
              DestroyDeferredUnlockObjectAssignmentList(v88 + 2475);
              DestroyDeferredUnlockObjectAssignmentList(v88 + 2473);
            }
            LOBYTE(v6) = a4[4] != 0;
            UserSessionState[704] = v6;
            goto LABEL_121;
          }
          if ( *(_QWORD *)&GUID_SYSTEM_AWAYMODE.Data1 == *(_QWORD *)a4
            && *(_QWORD *)GUID_SYSTEM_AWAYMODE.Data4 == *((_QWORD *)a4 + 1) )
          {
            v90 = (_QWORD *)W32GetUserSessionState(v16);
            v91 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
                    v90,
                    1,
                    0,
                    (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
            v90[3] = v91;
            if ( v91 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v91) )
            {
              DestroySharedUserCritDeferredUnlockList((__int64)(v90 + 2468));
              DestroyDeferredUnlockObjectAssignmentList(v90 + 2475);
              DestroyDeferredUnlockObjectAssignmentList(v90 + 2473);
            }
            if ( !a4[4] )
            {
              UserSessionState[690] = 0;
              goto LABEL_121;
            }
            if ( *(_BYTE *)W32GetUserGdiSessionState(v92) )
            {
              LODWORD(v106) = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5452);
            }
            UserSessionState[690] = 1;
            LODWORD(v111) = 5;
            *((_QWORD *)&v111 + 1) = 13LL;
            goto LABEL_50;
          }
          if ( *(_QWORD *)&GUID_POWER_SAVING_STATUS.Data1 == *(_QWORD *)a4
            && *(_QWORD *)GUID_POWER_SAVING_STATUS.Data4 == *((_QWORD *)a4 + 1) )
          {
            v93 = (_QWORD *)W32GetUserSessionState(v16);
            v94 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
                    v93,
                    1,
                    0,
                    (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
            v93[3] = v94;
            if ( v94 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v94) )
            {
              DestroySharedUserCritDeferredUnlockList((__int64)(v93 + 2468));
              DestroyDeferredUnlockObjectAssignmentList(v93 + 2475);
              DestroyDeferredUnlockObjectAssignmentList(v93 + 2473);
            }
            UserSessionState[700] = a4[4];
            goto LABEL_121;
          }
          if ( *(_QWORD *)&GUID_ENERGY_SAVER_BRIGHTNESS.Data1 == *(_QWORD *)a4
            && *(_QWORD *)GUID_ENERGY_SAVER_BRIGHTNESS.Data4 == *((_QWORD *)a4 + 1) )
          {
            v95 = (_QWORD *)W32GetUserSessionState(v16);
            v96 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
                    v95,
                    1,
                    0,
                    (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
            v95[3] = v96;
            if ( v96 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v96) )
            {
              DestroySharedUserCritDeferredUnlockList((__int64)(v95 + 2468));
              DestroyDeferredUnlockObjectAssignmentList(v95 + 2475);
              DestroyDeferredUnlockObjectAssignmentList(v95 + 2473);
            }
            UserSessionState[731] = a4[4];
            goto LABEL_121;
          }
          if ( *(_QWORD *)&GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data1 == *(_QWORD *)a4
            && *(_QWORD *)GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data4 == *((_QWORD *)a4 + 1) )
          {
            v97 = (_QWORD *)W32GetUserSessionState(v16);
            v98 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
                    v97,
                    1,
                    0,
                    (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
            v97[3] = v98;
            if ( v98 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v98) )
            {
              DestroySharedUserCritDeferredUnlockList((__int64)(v97 + 2468));
              DestroyDeferredUnlockObjectAssignmentList(v97 + 2475);
              DestroyDeferredUnlockObjectAssignmentList(v97 + 2473);
            }
            UserSessionState[701] = a4[4];
            goto LABEL_121;
          }
          if ( *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 == *(_QWORD *)a4
            && *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4 == *((_QWORD *)a4 + 1) )
          {
            if ( !a4[4] )
              return v7;
            v99 = (_QWORD *)W32GetUserSessionState(v16);
            v100 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
                     v99,
                     1,
                     0,
                     (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
            v99[3] = v100;
            if ( v100 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v100) )
            {
              DestroySharedUserCritDeferredUnlockList((__int64)(v99 + 2468));
              DestroyDeferredUnlockObjectAssignmentList(v99 + 2475);
              DestroyDeferredUnlockObjectAssignmentList(v99 + 2473);
            }
            IoControl(2LL);
            goto LABEL_121;
          }
          if ( *(_QWORD *)&GUID_INPUT_SUPPRESS_REQUESTED.Data1 != *(_QWORD *)a4
            || *(_QWORD *)GUID_INPUT_SUPPRESS_REQUESTED.Data4 != *((_QWORD *)a4 + 1) )
          {
            return (unsigned int)-1073741823;
          }
          v101 = (_QWORD *)W32GetUserSessionState(v16);
          v102 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
                   v101,
                   1,
                   0,
                   (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
          v101[3] = v102;
          if ( v102 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v102) )
          {
            DestroySharedUserCritDeferredUnlockList((__int64)(v101 + 2468));
            DestroyDeferredUnlockObjectAssignmentList(v101 + 2475);
            DestroyDeferredUnlockObjectAssignmentList(v101 + 2473);
          }
          DomainShared<>::DomainExclusive<DLT_POWERTRANSITIONSSTATE>::ObjectLock<>::ObjectLock<>((__int64)&v110);
          v103 = a4[4] != 0;
          UserSessionState[703] = v103;
          UserLogError(-v103 - 2147482947);
          LOBYTE(v104) = a4[4] != 0;
          CBaseInput::OnInputSuppressedValueChanged(v104);
        }
        DomainShared<>::DomainExclusive<DLT_THREADLOCK>::ObjectLock<>::~ObjectLock<>((__int64)&v110);
        goto LABEL_121;
      }
      v82 = (_QWORD *)W32GetUserSessionState(v16);
      v83 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
              v82,
              1,
              0,
              (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
      v82[3] = v83;
      if ( v83 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v83) )
      {
        DestroySharedUserCritDeferredUnlockList((__int64)(v82 + 2468));
        DestroyDeferredUnlockObjectAssignmentList(v82 + 2475);
        DestroyDeferredUnlockObjectAssignmentList(v82 + 2473);
      }
      if ( *(_BYTE *)W32GetUserGdiSessionState(v84)
        || *(_WORD *)(W32GetUserSessionState(v85) + 69008)
        || UserSessionState[693] )
      {
        goto LABEL_121;
      }
      v81 = MonitorRequestReasonBatteryCountChange;
    }
    PowerDisplayBurst(v81);
    goto LABEL_121;
  }
  v17 = v10 - 1;
  if ( !v17 )
  {
    if ( *(_BYTE *)W32GetUserGdiSessionState(v16) )
    {
      LODWORD(v106) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5535);
    }
    if ( a3 == 8 && a4 )
    {
      v63 = *(_BYTE *)a4;
      v64 = a4[1];
      v65 = (_QWORD *)W32GetUserSessionState(v62);
      v66 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
              v65,
              1,
              0,
              (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
      v65[3] = v66;
      if ( v66 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v66) )
      {
        DestroySharedUserCritDeferredUnlockList((__int64)(v65 + 2468));
        DestroyDeferredUnlockObjectAssignmentList(v65 + 2475);
        DestroyDeferredUnlockObjectAssignmentList(v65 + 2473);
      }
      if ( v63 && *(_DWORD *)(W32GetUserSessionState(v67) + 19128) )
      {
        v7 = -1073741823;
      }
      else if ( UserSessionState[691] )
      {
        v7 = 259;
        if ( !**(_BYTE **)(W32GetUserSessionState(v67) + 2720) )
          SetPendingInput(v64);
      }
      else
      {
        LODWORD(v111) = 16;
        *((_QWORD *)&v111 + 1) = v64;
        v7 = QueuePowerRequest(&v110, 0);
      }
      goto LABEL_121;
    }
    return (unsigned int)-1073741811;
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
    if ( *(_BYTE *)W32GetUserGdiSessionState(v16) )
    {
      LODWORD(v106) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5630);
    }
    if ( a3 != 4 || !a4 || a5 != 4 || !v109 )
      return (unsigned int)-1073741811;
    v108 = *a4;
    v51 = (_QWORD *)W32GetUserSessionState(v50);
    v52 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
            v51,
            1,
            0,
            (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    v51[3] = v52;
    if ( v52 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v52) )
    {
      DestroySharedUserCritDeferredUnlockList((__int64)(v51 + 2468));
      DestroyDeferredUnlockObjectAssignmentList(v51 + 2475);
      DestroyDeferredUnlockObjectAssignmentList(v51 + 2473);
    }
    v53 = UserSessionState[722];
    v54 = v53 + v108;
    UserSessionState[722] = v53 + v108;
    if ( v53 == 1 )
    {
      v55 = v54 == 0;
      v56 = v54 < 0;
      if ( v54 )
      {
LABEL_104:
        v107[0] = !v56 && !v55;
        LODWORD(v106) = W32GetCurrentWin32kSessionId();
        ZwUpdateWnfStateData(&WNF_PO_DISPLAY_REQUEST_ACTIVE, v107, 1LL, 0LL, &v106);
        UserSessionSwitchLeaveCritWithNonPaged();
        if ( v53 || v54 != 1 )
        {
          if ( v54 < 0 )
          {
LABEL_110:
            *v109 = v6;
            return v7;
          }
        }
        else if ( UserSessionState[724] == 2 )
        {
          LODWORD(v111) = 4;
          *((_QWORD *)&v111 + 1) = 48LL;
          QueuePowerRequest(&v110, 0);
        }
        v6 = v54;
        goto LABEL_110;
      }
      CitDisplayRequestChange(0LL);
      EtwTraceDisplayReqChange(0LL);
      if ( !*(_WORD *)(W32GetUserSessionState(v57) + 69008) )
        SendConsoleDisplayWnf(0);
      if ( !*(_DWORD *)(W32GetUserSessionState(v58) + 19128) )
      {
        v60 = W32GetUserSessionState(v59);
        CInputGlobals::UpdateLastInputTime(
          *(struct W32_PUSH_LOCK **)(v60 + 3064),
          (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
          0xAu);
      }
    }
    else if ( !v53 && v54 == 1 )
    {
      CitDisplayRequestChange(1LL);
      EtwTraceDisplayReqChange(1LL);
      if ( !*(_WORD *)(W32GetUserSessionState(v61) + 69008) )
        SendConsoleDisplayWnf(1);
    }
    v55 = v54 == 0;
    v56 = v54 < 0;
    goto LABEL_104;
  }
  v19 = v18 - 1;
  if ( v19 )
  {
    v20 = v19 - 1;
    if ( v20 )
    {
      v21 = v20 - 1;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( v22 )
        {
          v23 = v22 - 1;
          if ( v23 )
          {
            if ( v23 == 1 )
            {
              if ( !*(_BYTE *)W32GetUserGdiSessionState(v16) )
              {
                LODWORD(v106) = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5595);
              }
              if ( a3 == 1 && a4 && !a5 && !v109 )
              {
                v25 = *(_BYTE *)a4 != 0;
                v26 = (_QWORD *)W32GetUserSessionState(v24);
                v27 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
                        v26,
                        1,
                        0,
                        (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
                v26[3] = v27;
                if ( v27 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v27) )
                {
                  DestroySharedUserCritDeferredUnlockList((__int64)(v26 + 2468));
                  DestroyDeferredUnlockObjectAssignmentList(v26 + 2475);
                  DestroyDeferredUnlockObjectAssignmentList(v26 + 2473);
                }
                CitDisplayRequestChange(v25);
                EtwTraceDisplayReqChange(v25);
                goto LABEL_121;
              }
              return (unsigned int)-1073741811;
            }
            return (unsigned int)-1073741823;
          }
          if ( !*(_BYTE *)W32GetUserGdiSessionState(v16) )
          {
            LODWORD(v106) = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5869);
          }
          if ( a3 != 4 || !a4 )
            return (unsigned int)-1073741823;
          v28 = 1;
          *((_QWORD *)&v111 + 1) = *a4;
          LODWORD(v111) = 15;
          goto LABEL_33;
        }
        if ( !*(_BYTE *)W32GetUserGdiSessionState(v16) )
        {
          LODWORD(v106) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5836);
        }
        if ( a3 != 8 || !a4 )
          return (unsigned int)-1073741823;
        UserSessionSwitchBlock_Start();
        *((_QWORD *)&v111 + 1) = a4[1];
        LODWORD(v111) = 14;
        if ( *(_BYTE *)a4 )
          LODWORD(v111) = 13;
LABEL_40:
        v28 = 0;
LABEL_33:
        QueuePowerRequest(&v110, v28);
        return v7;
      }
      if ( *(_BYTE *)W32GetUserGdiSessionState(v16) )
      {
        LODWORD(v106) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5809);
      }
      v30 = (_QWORD *)W32GetUserSessionState(v29);
      v31 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
              v30,
              1,
              0,
              (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
      v30[3] = v31;
      if ( v31 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v31) )
      {
        DestroySharedUserCritDeferredUnlockList((__int64)(v30 + 2468));
        DestroyDeferredUnlockObjectAssignmentList(v30 + 2475);
        DestroyDeferredUnlockObjectAssignmentList(v30 + 2473);
      }
      if ( !*(_BYTE *)(W32GetUserSessionState(v32) + 568) )
        goto LABEL_121;
      v34 = *(int *)(W32GetUserSessionState(v33) + 572);
      *(_BYTE *)(W32GetUserSessionState(v35) + 568) = 0;
      *(_DWORD *)(W32GetUserSessionState(v36) + 572) = 0;
      if ( *(int *)(W32GetUserSessionState(v37) + 69112) < 2 )
      {
        LODWORD(v106) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5824);
      }
      LODWORD(v111) = 12;
      *((_QWORD *)&v111 + 1) = v34;
    }
    else
    {
      if ( a3 != 32 || !a4 )
        return (unsigned int)-1073741811;
      v38 = (_QWORD *)W32GetUserSessionState(v16);
      v39 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
              v38,
              1,
              0,
              (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
      v38[3] = v39;
      if ( v39 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v39) )
      {
        DestroySharedUserCritDeferredUnlockList((__int64)(v38 + 2468));
        DestroyDeferredUnlockObjectAssignmentList(v38 + 2475);
        DestroyDeferredUnlockObjectAssignmentList(v38 + 2473);
      }
      UserSessionState[733] = *a4;
      UserSessionState[734] = a4[1];
      UserSessionState[735] = a4[2];
      UserSessionState[736] = a4[3];
      UserSessionState[737] = a4[4];
      UserSessionState[738] = a4[5];
      UserSessionState[739] = a4[6];
      UserSessionState[740] = a4[7];
      v41 = (_DWORD *)W32GetUserSessionState(v40);
      v42 = v41[733];
      v41[726] = v42;
      v41[727] = v42;
      v43 = v41[737];
      v41[728] = v43;
      v41[729] = v43;
      if ( UserSessionState[724] == 1 && UserSessionState[732] != UserSessionState[733] )
      {
        LODWORD(v111) = 11;
        *((_QWORD *)&v111 + 1) = 1LL;
        QueuePowerRequest(&v110, 0);
      }
      if ( UserSessionState[724] != 2 || UserSessionState[732] == UserSessionState[737] )
        goto LABEL_121;
      LODWORD(v111) = 11;
      *((_QWORD *)&v111 + 1) = 2LL;
    }
LABEL_50:
    QueuePowerRequest(&v110, 0);
LABEL_121:
    UserSessionSwitchLeaveCritWithNonPaged();
    return v7;
  }
  if ( *(_BYTE *)W32GetUserGdiSessionState(v16) )
  {
    LODWORD(v106) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5721);
  }
  if ( a3 != 8 || !a4 )
    return (unsigned int)-1073741823;
  v44 = (unsigned int)*a4;
  if ( (_DWORD)v44 )
  {
    v45 = (unsigned int)(v44 - 1);
    if ( !(_DWORD)v45 )
      goto LABEL_74;
    if ( (_DWORD)v45 != 1 )
    {
      LODWORD(v106) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5769);
      return v7;
    }
    v46 = (_QWORD *)W32GetUserSessionState(v45);
    v47 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
            v46,
            1,
            0,
            (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    v46[3] = v47;
    if ( v47 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v47) )
    {
      DestroySharedUserCritDeferredUnlockList((__int64)(v46 + 2468));
      DestroyDeferredUnlockObjectAssignmentList(v46 + 2475);
      DestroyDeferredUnlockObjectAssignmentList(v46 + 2473);
    }
    v48 = UserSessionState[689];
    UserSessionSwitchLeaveCritWithNonPaged();
    v7 = (unsigned __int8)-(v48 != 0);
    v14 = v48 == 0;
    if ( !v48 )
    {
LABEL_74:
      v49 = W32GetUserSessionState(v45);
      CInputGlobals::UpdateLastInputTime(
        *(struct W32_PUSH_LOCK **)(v49 + 3064),
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
        5u);
    }
    if ( !v14 )
      return v7;
    LODWORD(v111) = 4;
    goto LABEL_83;
  }
  if ( !*(_BYTE *)(W32GetUserSessionState(v44) + 528) )
  {
LABEL_82:
    LODWORD(v111) = 5;
LABEL_83:
    *((_QWORD *)&v111 + 1) = a4[1];
    goto LABEL_40;
  }
  if ( UserSessionState[689] || UserSessionState[694] || UserSessionState[695] )
  {
    SetInputMode(1LL);
    goto LABEL_82;
  }
  return v7;
}
