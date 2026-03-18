/*
 * XREFs of ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C009F448
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1C009E490 (xxxUserPowerCalloutWorker.c)
 * Callees:
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C0010ADC (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C0010BBC (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?CitpLastInputUpdate@@YAXGI@Z @ 0x1C0010D88 (-CitpLastInputUpdate@@YAXGI@Z.c)
 *     ?UpdateAdaptiveSessionState@@YAXXZ @ 0x1C001124C (-UpdateAdaptiveSessionState@@YAXXZ.c)
 *     ?GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x1C0011350 (-GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z.c)
 *     ?GetLastInputTime@CInputGlobals@@QEBA_KXZ @ 0x1C00113C0 (-GetLastInputTime@CInputGlobals@@QEBA_KXZ.c)
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C00114C0 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C0065068 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ?SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@@Z @ 0x1C0065CC0 (-SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@@Z.c)
 *     PowerUnDimMonitor @ 0x1C007A998 (PowerUnDimMonitor.c)
 *     PowerResumeSuspendEvent @ 0x1C0084F90 (PowerResumeSuspendEvent.c)
 *     PostWinlogonMessage @ 0x1C0086360 (PostWinlogonMessage.c)
 *     LeavePowerCrit @ 0x1C00A0000 (LeavePowerCrit.c)
 *     EnterPowerCrit @ 0x1C00A0030 (EnterPowerCrit.c)
 *     PostPlaySoundMessage @ 0x1C00B6720 (PostPlaySoundMessage.c)
 *     EtwTraceStopPowerEventCalloutWorker @ 0x1C00C2DA4 (EtwTraceStopPowerEventCalloutWorker.c)
 *     ?DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C00C342C (-DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     xxxSendMessageBSM @ 0x1C00C3868 (xxxSendMessageBSM.c)
 *     IsSetTimerCoalescingToleranceSupported @ 0x1C00C3CC0 (IsSetTimerCoalescingToleranceSupported.c)
 *     SetTimerCoalescingTolerance @ 0x1C00C3FBC (SetTimerCoalescingTolerance.c)
 *     IsxxxSendMessageBSMSupported @ 0x1C00C4204 (IsxxxSendMessageBSMSupported.c)
 *     ?UpdateGlobalTickCount@CInputGlobals@@QEAA_NW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x1C00C5220 (-UpdateGlobalTickCount@CInputGlobals@@QEAA_NW4INPUT_GLOBALS_TICK_COUNT@@@Z.c)
 *     IsPowerOnGdiSupported @ 0x1C00C52AC (IsPowerOnGdiSupported.c)
 *     PowerOnGdi @ 0x1C00C53FC (PowerOnGdi.c)
 *     IsPowerOffGdiSupported @ 0x1C00C5634 (IsPowerOffGdiSupported.c)
 *     PowerOffGdi @ 0x1C00C5684 (PowerOffGdi.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     ?PowerEvent@Power@InputTraceLogging@@SAXW4_PSPOWEREVENTTYPE@@_K@Z @ 0x1C00D0974 (-PowerEvent@Power@InputTraceLogging@@SAXW4_PSPOWEREVENTTYPE@@_K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D69C0 (memset.c)
 *     ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C01322CC (-ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C0132610 (-PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01327A4 (-PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWERON_LOC@@@Z @ 0x1C01328A0 (-PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWER.c)
 *     ?ShouldEscapeProximity@@YAEXZ @ 0x1C0132CE0 (-ShouldEscapeProximity@@YAEXZ.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C0132E8C (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     PowerDimMonitor @ 0x1C01338E0 (PowerDimMonitor.c)
 *     PowerIsDisplayRequired @ 0x1C0133BC0 (PowerIsDisplayRequired.c)
 *     PowerOffMonitor @ 0x1C0133C20 (PowerOffMonitor.c)
 *     PowerOnMonitor @ 0x1C0133F40 (PowerOnMonitor.c)
 *     EtwTraceIdleActionExpiration @ 0x1C013A9B0 (EtwTraceIdleActionExpiration.c)
 *     McTemplateK0qxq_EtwWriteTransfer @ 0x1C013C5AC (McTemplateK0qxq_EtwWriteTransfer.c)
 *     ProcessDelayedSdc @ 0x1C0233260 (ProcessDelayedSdc.c)
 */

__int64 __fastcall xxxUserPowerEventCalloutWorker(struct _WIN32_POWEREVENT_PARAMETERS *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // r15d
  unsigned int v7; // r14d
  struct _EX_RUNDOWN_REF *v8; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // r9d
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 GlobalTickCount; // rbx
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  int v36; // ecx
  int v37; // r9d
  int v38; // r8d
  int v39; // edx
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  BOOL v46; // ebx
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  int v53; // ecx
  int v54; // r9d
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  int v67; // r9d
  enum _MONITOR_DISPLAY_STATE v68; // ecx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rbx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 v93; // rdx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rax
  NTSTATUS v97; // ebx
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 v114; // r9
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r8
  __int64 v118; // r9
  __int64 v119; // rdx
  __int64 v120; // r8
  __int64 v121; // r9
  POWER_MONITOR_REQUEST_REASON v122; // ebx
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // r8
  __int64 v126; // r9
  int v127; // ebx
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // r8
  __int64 v131; // r9
  __int64 v132; // rax
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // r8
  __int64 v136; // r9
  __int64 v137; // rax
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // r8
  __int64 v141; // r9
  __int64 v142; // rax
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // r8
  __int64 v146; // r9
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // r8
  __int64 v150; // r9
  __int64 v151; // rdx
  __int64 v152; // rcx
  __int64 v153; // r8
  __int64 v154; // r9
  __int64 v155; // rax
  __int64 v156; // rdx
  __int64 v157; // rcx
  __int64 v158; // r8
  __int64 v159; // r9
  __int64 v160; // rcx
  __int64 v161; // rdx
  __int64 v162; // rcx
  __int64 v163; // r8
  __int64 v164; // r9
  _BYTE v165[4]; // [rsp+3Ch] [rbp-75h] BYREF
  POWER_MONITOR_REQUEST_REASON v166[2]; // [rsp+40h] [rbp-71h] BYREF
  unsigned __int64 OutputBuffer; // [rsp+48h] [rbp-69h] BYREF
  __int128 InputBuffer; // [rsp+50h] [rbp-61h] BYREF
  _OWORD v169[2]; // [rsp+60h] [rbp-51h] BYREF
  __int64 v170; // [rsp+80h] [rbp-31h]
  _QWORD v171[10]; // [rsp+88h] [rbp-29h] BYREF

  memset(v171, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v171[1]);
  v6 = 0;
  v7 = *(_DWORD *)a1;
  v8 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)a1 + 1);
  v171[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v171[4]) = *((_DWORD *)a1 + 2);
  LODWORD(v171[3]) = 16;
  LOBYTE(v171[6]) = -1;
  memset(v169, 0, sizeof(v169));
  v170 = 0LL;
  OutputBuffer = 0LL;
  InputBuffer = 0LL;
  *(_QWORD *)v166 = 0LL;
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0qxq_EtwWriteTransfer(v3, (unsigned int)&StartPowerEventCalloutWorker, v4, v7, (char)v8, 0);
  if ( !*(_DWORD *)(SGDGetUserSessionState(v3, v2, v4, v5) + 2936) )
  {
    EtwTraceStopPowerEventCalloutWorker(v7, v8, 3221225473LL);
    return 3221225473LL;
  }
  InputTraceLogging::Power::PowerEvent(v7, v8);
  if ( (int)v7 <= 8 )
  {
    if ( v7 != 8 )
    {
      v13 = v7;
      switch ( v7 )
      {
        case 0u:
          if ( !gbNonServiceSession )
          {
            LOBYTE(v11) = 1;
            if ( !(unsigned int)PowerResumeSuspendEvent(0LL, 0LL, v11, v12) )
            {
              LODWORD(InputBuffer) = 0;
              *(_QWORD *)((char *)&InputBuffer + 4) = 7LL;
              WORD6(InputBuffer) = 0;
              UserSessionSwitchLeaveCrit(v13, v10, v11, v12);
              ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &InputBuffer, 0x10u, 0LL, 0);
              LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v165, v43, v44, v45);
            }
          }
          UserSessionSwitchLeaveCrit(v13, v10, v11, v12);
          v46 = ZwPowerInformation(LastSleepTime, 0LL, 0, &OutputBuffer, 8u) == 0;
          LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v165, v47, v48, v49);
          if ( !v46 || gSessionCreationTime < OutputBuffer )
          {
            LOBYTE(v51) = 1;
            LOBYTE(v50) = 1;
            if ( !(unsigned int)PowerResumeSuspendEvent(0LL, v50, v51, v52) )
            {
              *(_QWORD *)&v169[0] = 0x2000000000000010LL;
              if ( (int)IsxxxSendMessageBSMSupported() >= 0 )
                xxxSendMessageBSM(v53, 536, 7, v54, (__int64)v169);
            }
          }
          if ( (int)IsSetTimerCoalescingToleranceSupported() < 0 )
            goto LABEL_146;
          v20 = 0LL;
          goto LABEL_22;
        case 1u:
          v6 = PostWinlogonMessage(0x100u, v8);
          if ( !v6 )
            PostPlaySoundMessage(v8);
          goto LABEL_146;
        case 2u:
          if ( !gbNonServiceSession )
          {
            LODWORD(InputBuffer) = 0;
            *(_QWORD *)((char *)&InputBuffer + 4) = 10LL;
            WORD6(InputBuffer) = 0;
            UserSessionSwitchLeaveCrit(v7 - 2, v10, v11, v12);
            ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &InputBuffer, 0x10u, 0LL, 0);
            LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v165, v40, v41, v42);
          }
          *(_QWORD *)&v169[0] = 0x1000000010LL;
          if ( (int)IsxxxSendMessageBSMSupported() < 0 )
            goto LABEL_146;
          v38 = 10;
          v39 = 536;
          break;
        case 3u:
          *(_QWORD *)&v169[0] = 0x1000000010LL;
          if ( (int)IsxxxSendMessageBSMSupported() < 0 )
            goto LABEL_146;
          v38 = 0;
          v39 = 30;
          break;
        default:
          v14 = v7 - 4;
          if ( v7 != 4 )
          {
            if ( v7 != 5 )
            {
              if ( v7 == 6 )
              {
                if ( (unsigned __int8)CInputGlobals::UpdateGlobalTickCount(*((_QWORD *)&WPP_MAIN_CB.Reserved + 1), 2LL) )
                  EtwTraceIdleActionExpiration(1LL, (unsigned int)giScreenSaveTimeOutMs);
                if ( *(_DWORD *)(SGDGetUserSessionState(v22, v21, v23, v24) + 2952)
                  || (*(_DWORD *)gpsi & 0x200) != 0
                  && (GlobalTickCount = CInputGlobals::GetGlobalTickCount(*((__int64 *)&WPP_MAIN_CB.Reserved + 1), 1),
                      GlobalTickCount != CInputGlobals::GetLastInputTime(*((CInputGlobals **)&WPP_MAIN_CB.Reserved + 1))) )
                {
                  if ( !(unsigned int)PowerIsDisplayRequired() || gbBlockSendInputResets )
                  {
                    if ( gppiScreenSaver )
                    {
                      v26 = *(_DWORD *)(gppiScreenSaver + 12);
                      if ( (v26 & 0x400000) == 0 )
                      {
                        *(_DWORD *)(gppiScreenSaver + 12) = v26 | 0x400000;
                        v27 = *(_QWORD *)(gppiScreenSaver + 336);
                        if ( v27 )
                          ForegroundBoost::SetForegroundPriority(v27, 1);
                      }
                    }
                    else if ( qword_1C0295970 && (int)qword_1C0295970() >= 0 && qword_1C0295978 )
                    {
                      qword_1C0295978();
                    }
                  }
                }
                goto LABEL_146;
              }
              if ( v7 == 7 )
              {
                if ( HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine)
                  || *(_DWORD *)(SGDGetUserSessionState(v7 - 6, v10, v11, v12) + 2960)
                  || !*(_DWORD *)(SGDGetUserSessionState(v16, v15, v17, v18) + 2952) )
                {
                  goto LABEL_146;
                }
                PowerDimMonitor();
                if ( !gProtocolType )
                  UpdateDisplayState(PowerMonitorDim, MonitorRequestReasonMax, 1, v19);
                if ( (int)IsSetTimerCoalescingToleranceSupported() < 0 )
                  goto LABEL_146;
                v20 = 1LL;
                goto LABEL_22;
              }
LABEL_76:
              v6 = -1073741822;
              goto LABEL_146;
            }
            if ( *(_BYTE *)SGDGetUserGdiSessionState(v7 - 5) )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 962LL);
            if ( HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) )
              goto LABEL_146;
            v166[1] = (int)v8;
            PowerOffMonitor((enum POWER_MONITOR_REQUEST_REASON)v8);
            if ( !gProtocolType
              && *(_BYTE *)(SGDGetUserSessionState(v29, v28, v30, v31) + 788)
              && !*(_DWORD *)(SGDGetUserSessionState(v33, v32, v34, v35) + 2956)
              && (int)IsPowerOffGdiSupported() >= 0 )
            {
              PowerOffGdi();
            }
            if ( (int)IsSetTimerCoalescingToleranceSupported() < 0 || v166[1] == MonitorRequestReasonGracePeriod )
              goto LABEL_146;
            v20 = 2LL;
LABEL_22:
            SetTimerCoalescingTolerance(v20);
            goto LABEL_146;
          }
LABEL_100:
          if ( *(_BYTE *)SGDGetUserGdiSessionState(v14) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1005LL);
          if ( v7 == 16 )
          {
            v71 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
            CInputGlobals::UpdateLastInputTime(*((__int64 *)&WPP_MAIN_CB.Reserved + 1), v71, 5u);
            CitpLastInputUpdate(0x20u, v71);
            if ( *(_DWORD *)(SGDGetUserSessionState(v73, v72, v74, v75) + 3080) )
              UpdateAdaptiveSessionState();
          }
          EnterPowerCrit(v70);
          v80 = SGDGetUserSessionState(v77, v76, v78, v79);
          DisarmPowerWatchdog(*(_QWORD *)(v80 + 728));
          LeavePowerCrit();
          if ( v7 == 12 )
            UserSessionSwitchBlock_End();
          if ( HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine)
            || *(_DWORD *)(SGDGetUserSessionState(v82, v81, v83, v84) + 2960) )
          {
            goto LABEL_128;
          }
          v166[1] = (int)v8;
          LOBYTE(v166[0]) = gProtocolType == 0;
          if ( *(_DWORD *)(SGDGetUserSessionState(v86, v85, v87, v88) + 2976)
            && LOBYTE(v166[0])
            && v166[1] != MonitorRequestReasonNearProximity )
          {
            if ( v166[1] != MonitorRequestReasonPowerButton || !ShouldEscapeProximity() )
              goto LABEL_130;
            *(_DWORD *)(SGDGetUserSessionState(v90, v93, v94, v95) + 2976) = 0;
          }
          v96 = SGDGetUserSessionState(v90, v89, v91, v92);
          ArmPowerWatchdog(*(_QWORD *)(v96 + 736), 32LL);
          v97 = ZwPowerInformation((POWER_INFORMATION_LEVEL)68, v166, 8u, 0LL, 0);
          *(_DWORD *)(SGDGetUserSessionState(v99, v98, v100, v101) + 748) = v97;
          v106 = SGDGetUserSessionState(v103, v102, v104, v105);
          DisarmPowerWatchdog(*(_QWORD *)(v106 + 736));
          if ( *(_DWORD *)(SGDGetUserSessionState(v108, v107, v109, v110) + 748)
            && *(_DWORD *)(SGDGetUserSessionState(v112, v111, v113, v114) + 748) != 259
            && *(_DWORD *)(SGDGetUserSessionState(v112, v111, v113, v114) + 748) != -1073741823 )
          {
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1111LL);
          }
          if ( *(_DWORD *)(SGDGetUserSessionState(v112, v111, v113, v114) + 748) == 259 )
          {
            if ( !*(_BYTE *)(SGDGetUserSessionState(v116, v115, v117, v118) + 752) )
            {
              *(_BYTE *)(SGDGetUserSessionState(v90, v119, v120, v121) + 752) = 1;
              v122 = v166[1];
              *(_DWORD *)(SGDGetUserSessionState(v124, v123, v125, v126) + 756) = v122;
              UserSessionSwitchBlock_Start();
            }
            goto LABEL_130;
          }
          if ( *(_DWORD *)(SGDGetUserSessionState(v116, v115, v117, v118) + 748) != -1073741823 )
          {
            v127 = 0;
            if ( !gbGDIOn && (int)IsPowerOnGdiSupported() >= 0 )
            {
              v132 = SGDGetUserSessionState(v129, v128, v130, v131);
              ArmPowerWatchdog(*(_QWORD *)(v132 + 736), 48LL);
              PowerOnGdi(v171, 0LL, 0LL);
              v137 = SGDGetUserSessionState(v134, v133, v135, v136);
              DisarmPowerWatchdog(*(_QWORD *)(v137 + 736));
              v127 = 1;
            }
            PowerOnMonitor(v166[1]);
            if ( v127 )
              ProcessDelayedSdc(v171);
LABEL_128:
            if ( (int)IsSetTimerCoalescingToleranceSupported() >= 0 )
              SetTimerCoalescingTolerance(0LL);
          }
LABEL_130:
          EnterPowerCrit(v90);
          v142 = SGDGetUserSessionState(v139, v138, v140, v141);
          --*(_DWORD *)(v142 + 744);
          SGDGetUserSessionState(v144, v143, v145, v146);
          if ( *(_DWORD *)(SGDGetUserSessionState(v148, v147, v149, v150) + 744) )
          {
            v155 = SGDGetUserSessionState(v152, v151, v153, v154);
            ArmPowerWatchdog(*(_QWORD *)(v155 + 728), 16LL);
          }
          LeavePowerCrit();
          goto LABEL_146;
      }
      xxxSendMessageBSM(v36, v39, v38, v37, (__int64)v169);
      goto LABEL_146;
    }
LABEL_145:
    UpdateAdaptiveSessionState();
    goto LABEL_146;
  }
  switch ( v7 )
  {
    case 9u:
      goto LABEL_145;
    case 0xAu:
      if ( *(_BYTE *)SGDGetUserGdiSessionState(0LL) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1387LL);
      PowerDisplayBurst((enum POWER_MONITOR_REQUEST_REASON)v8);
      goto LABEL_146;
    case 0xBu:
      if ( !HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine)
        && !*(_DWORD *)(SGDGetUserSessionState(v7 - 11, v10, v11, v12) + 2960)
        && *(_DWORD *)(SGDGetUserSessionState(v157, v156, v158, v159) + 3080) == (_DWORD)v8
        && (!*(_BYTE *)SGDGetUserGdiSessionState(v160)
         || *(_DWORD *)(SGDGetUserSessionState(v162, v161, v163, v164) + 780)) )
      {
        if ( (_DWORD)v8 == 1 )
        {
          PowerUnDimMonitor(v162, v161, v163, v164);
        }
        else if ( (_DWORD)v8 == 2 )
        {
          PowerDimMonitor();
        }
      }
      goto LABEL_146;
  }
  v14 = v7 - 12;
  switch ( v7 )
  {
    case 0xCu:
      goto LABEL_100;
    case 0xDu:
      if ( !*(_BYTE *)SGDGetUserGdiSessionState(v7 - 13) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1187LL);
      if ( HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1189LL);
      PowerOnSession((unsigned int)v8);
      goto LABEL_94;
    case 0xEu:
      if ( !*(_BYTE *)SGDGetUserGdiSessionState(v7 - 14) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1171LL);
      if ( HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1173LL);
      PowerOffSession((enum POWER_MONITOR_REQUEST_REASON)v8, v69);
LABEL_94:
      UserSessionSwitchBlock_End();
      goto LABEL_146;
  }
  v14 = v7 - 15;
  if ( v7 != 15 )
  {
    if ( v7 != 16 )
      goto LABEL_76;
    goto LABEL_100;
  }
  if ( !*(_BYTE *)SGDGetUserGdiSessionState(v14) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1221LL);
  if ( HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) || *(_DWORD *)(SGDGetUserSessionState(v56, v55, v57, v58) + 2960) )
    goto LABEL_146;
  if ( v8 == (struct _EX_RUNDOWN_REF *)1 )
  {
    *(_DWORD *)(SGDGetUserSessionState(v60, v59, v61, v62) + 780) = 1;
    PowerUnDimMonitor(v64, v63, v65, v66);
    v68 = PowerMonitorOn;
  }
  else
  {
    if ( v8 != (struct _EX_RUNDOWN_REF *)2 )
    {
      if ( v8 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1251LL);
      *(_DWORD *)(SGDGetUserSessionState(v60, v59, v61, v62) + 780) = 0;
      goto LABEL_146;
    }
    *(_DWORD *)(SGDGetUserSessionState(v60, v59, v61, v62) + 780) = 1;
    PowerDimMonitor();
    v68 = PowerMonitorDim;
  }
  UpdateDisplayState(v68, MonitorRequestReasonMax|MonitorRequestReasonPowerButton, 1, v67);
LABEL_146:
  EtwTraceStopPowerEventCalloutWorker(v7, v8, v6);
  return v6;
}
