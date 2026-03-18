/*
 * XREFs of ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1400E9C80
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1400E96D0 (xxxUserPowerCalloutWorker.c)
 * Callees:
 *     ?GetLastInputTime@CInputGlobals@@QEBA_KXZ @ 0x140068F50 (-GetLastInputTime@CInputGlobals@@QEBA_KXZ.c)
 *     ?GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x140068FB0 (-GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z.c)
 *     ?UpdateGlobalTickCount@CInputGlobals@@QEAA_NW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x14006AE10 (-UpdateGlobalTickCount@CInputGlobals@@QEAA_NW4INPUT_GLOBALS_TICK_COUNT@@@Z.c)
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x14006B090 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     ?SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4ForegroundBoostSource@1@@Z @ 0x14006C430 (-SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4Fore.c)
 *     PowerOnMonitor @ 0x1400906D0 (PowerOnMonitor.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x140090AE4 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     PowerUnDimMonitor @ 0x140090E48 (PowerUnDimMonitor.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140091E28 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     PowerOnGdi @ 0x140092FDC (PowerOnGdi.c)
 *     IsPowerOnGdiSupported @ 0x140093034 (IsPowerOnGdiSupported.c)
 *     CitLastInputUpdate @ 0x1400B4340 (CitLastInputUpdate.c)
 *     PowerOffMonitor @ 0x1400E4300 (PowerOffMonitor.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1400E47A0 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     EnterPowerCrit @ 0x1400E9B80 (EnterPowerCrit.c)
 *     LeavePowerCrit @ 0x1400E9BB0 (LeavePowerCrit.c)
 *     ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1400EA954 (-ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     PowerIsDisplayRequired @ 0x1400EE150 (PowerIsDisplayRequired.c)
 *     ?DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1400F015C (-DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x1400F78E4 (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14010EA98 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     EtwTraceStopPowerEventCalloutWorker @ 0x140113AF0 (EtwTraceStopPowerEventCalloutWorker.c)
 *     McTemplateK0qxq_EtwWriteTransfer @ 0x140113B24 (McTemplateK0qxq_EtwWriteTransfer.c)
 *     SetTimerCoalescingTolerance @ 0x140113BDC (SetTimerCoalescingTolerance.c)
 *     IsSetTimerCoalescingToleranceSupported @ 0x1401144E4 (IsSetTimerCoalescingToleranceSupported.c)
 *     ?PowerEvent@Power@InputTraceLogging@@SAXW4_PSPOWEREVENTTYPE@@_K@Z @ 0x1401265A8 (-PowerEvent@Power@InputTraceLogging@@SAXW4_PSPOWEREVENTTYPE@@_K@Z.c)
 *     PostPlaySoundMessage @ 0x1401298AC (PostPlaySoundMessage.c)
 *     ApiSetPsW32ScreenSaver_Show @ 0x14012A868 (ApiSetPsW32ScreenSaver_Show.c)
 *     xxxSendMessageBSM @ 0x14013F4F0 (xxxSendMessageBSM.c)
 *     PowerDimMonitor @ 0x140141F74 (PowerDimMonitor.c)
 *     IsxxxSendMessageBSMSupported @ 0x140142C8C (IsxxxSendMessageBSMSupported.c)
 *     EtwTraceIdleActionExpiration @ 0x14014AE20 (EtwTraceIdleActionExpiration.c)
 *     IsPowerOffGdiSupported @ 0x1401520B8 (IsPowerOffGdiSupported.c)
 *     PowerOffGdi @ 0x14015B7E0 (PowerOffGdi.c)
 *     PostWinlogonMessage @ 0x140167BB0 (PostWinlogonMessage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A2B00 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1401ADF6C (-PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401AE1FC (-PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWERON_LOC@@@Z @ 0x1401AE390 (-PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWER.c)
 *     ?ShouldEscapeProximity@@YAEXZ @ 0x1401AE51C (-ShouldEscapeProximity@@YAEXZ.c)
 *     ?UpdateAdaptiveSessionState@@YAXXZ @ 0x1401AE6B0 (-UpdateAdaptiveSessionState@@YAXXZ.c)
 *     PowerResumeSuspendEvent @ 0x1401AEDC0 (PowerResumeSuspendEvent.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1401B346C (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     ProcessDelayedSdc @ 0x14023B6F8 (ProcessDelayedSdc.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxUserPowerEventCalloutWorker(struct _WIN32_POWEREVENT_PARAMETERS *a1)
{
  unsigned int v1; // r9d
  unsigned int v3; // r15d
  __int64 v4; // rsi
  __int64 v5; // r13
  unsigned int v6; // r12d
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // r8d
  _DWORD *UserSessionState; // r14
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  _DWORD *v17; // rcx
  struct W32_PUSH_LOCK *v18; // rbx
  __int64 v19; // rcx
  CInputGlobals *v20; // rdi
  __int64 GlobalTickCount; // rbx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  int v30; // ecx
  int v31; // r9d
  int v32; // r8d
  int v33; // edx
  __int64 v34; // r8
  NTSTATUS v35; // ebx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rax
  int v40; // ecx
  int v41; // r9d
  __int64 v42; // rcx
  __int64 v43; // rcx
  enum _MONITOR_DISPLAY_STATE v44; // ecx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v45; // rdx
  __int64 v46; // rcx
  unsigned __int64 v47; // rcx
  __int64 v48; // rbx
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rcx
  bool v54; // zf
  __int64 v55; // rcx
  __int64 v56; // rax
  NTSTATUS v57; // ebx
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // rax
  int v66; // ebx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // rax
  __int64 v78; // rcx
  _BYTE v80[4]; // [rsp+3Ch] [rbp-35h] BYREF
  __int64 v81; // [rsp+40h] [rbp-31h] BYREF
  unsigned __int64 OutputBuffer; // [rsp+48h] [rbp-29h] BYREF
  _BYTE v83[8]; // [rsp+50h] [rbp-21h] BYREF
  __int64 v84; // [rsp+58h] [rbp-19h]
  __int128 InputBuffer; // [rsp+60h] [rbp-11h] BYREF
  _OWORD v86[2]; // [rsp+70h] [rbp-1h] BYREF
  __int64 v87; // [rsp+90h] [rbp+1Fh]

  v1 = *((_DWORD *)a1 + 6);
  v83[0] = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor((CDisplayScenarioContextScope *)v83, 0LL, 0x10u, v1);
  v3 = *((_DWORD *)a1 + 4);
  v4 = *((_QWORD *)a1 + 3);
  v5 = v84;
  memset(v86, 0, sizeof(v86));
  v87 = 0LL;
  v6 = 0;
  OutputBuffer = 0LL;
  InputBuffer = 0LL;
  v81 = 0LL;
  UserSessionState = (_DWORD *)W32GetUserSessionState(v7);
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0qxq_EtwWriteTransfer(v8, (unsigned int)&StartPowerEventCalloutWorker, v9, v3, v4, 0);
  if ( *(_DWORD *)(W32GetUserSessionState(v8) + 2728) )
  {
    InputTraceLogging::Power::PowerEvent(v3, v4);
    if ( (int)v3 > 8 )
    {
      if ( v3 != 9 )
      {
        switch ( v3 )
        {
          case 0xAu:
            if ( *(_BYTE *)W32GetUserGdiSessionState() )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1444LL);
            PowerDisplayBurst((enum POWER_MONITOR_REQUEST_REASON)v4);
            goto LABEL_144;
          case 0xBu:
            if ( !*(_DWORD *)(W32GetUserGdiSessionState() + 36)
              && !UserSessionState[691]
              && UserSessionState[724] == (_DWORD)v4
              && (!*(_BYTE *)W32GetUserGdiSessionState() || *(_DWORD *)(W32GetUserSessionState(v78) + 596)) )
            {
              if ( (_DWORD)v4 == 1 )
              {
                PowerUnDimMonitor(v78);
              }
              else if ( (_DWORD)v4 == 2 )
              {
                PowerDimMonitor();
              }
            }
            goto LABEL_144;
          case 0xCu:
            goto LABEL_97;
          case 0xDu:
            if ( !*(_BYTE *)W32GetUserGdiSessionState() )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1241LL);
            if ( *(_DWORD *)(W32GetUserGdiSessionState() + 36) )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1243LL);
            PowerOnSession((unsigned int)v4);
            break;
          case 0xEu:
            if ( !*(_BYTE *)W32GetUserGdiSessionState() )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1225LL);
            if ( *(_DWORD *)(W32GetUserGdiSessionState() + 36) )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1227LL);
            PowerOffSession((enum POWER_MONITOR_REQUEST_REASON)v4, v45);
            break;
          case 0xFu:
            if ( !*(_BYTE *)W32GetUserGdiSessionState() )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1275LL);
            if ( *(_DWORD *)(W32GetUserGdiSessionState() + 36) || UserSessionState[691] )
              goto LABEL_144;
            if ( v4 == 1 )
            {
              *(_DWORD *)(W32GetUserSessionState(v42) + 596) = 1;
              PowerUnDimMonitor(v43);
              v44 = PowerMonitorOn;
            }
            else
            {
              if ( v4 != 2 )
              {
                if ( v4 )
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1305LL);
                *(_DWORD *)(W32GetUserSessionState(v42) + 596) = 0;
                goto LABEL_144;
              }
              *(_DWORD *)(W32GetUserSessionState(v42) + 596) = 1;
              PowerDimMonitor();
              v44 = PowerMonitorDim;
            }
            UpdateDisplayState(v44, MonitorRequestReasonMax|MonitorRequestReasonPowerButton, 1);
LABEL_144:
            EtwTraceStopPowerEventCalloutWorker(v3, v4, v6);
            v11 = v6;
            goto LABEL_145;
          case 0x10u:
            goto LABEL_97;
          default:
            goto LABEL_73;
        }
        UserSessionSwitchBlock_End();
        goto LABEL_144;
      }
    }
    else if ( v3 != 8 )
    {
      switch ( v3 )
      {
        case 0u:
          if ( !*(_DWORD *)(W32GetUserSessionState(0LL) + 68868) )
          {
            LOBYTE(v34) = 1;
            if ( !(unsigned int)PowerResumeSuspendEvent(0LL, 0LL, v34) )
            {
              LODWORD(InputBuffer) = 0;
              *(_QWORD *)((char *)&InputBuffer + 4) = 7LL;
              WORD6(InputBuffer) = 0;
              LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v80, 1);
              ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &InputBuffer, 0x10u, 0LL, 0);
              LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v80);
            }
          }
          LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v80, 1);
          v35 = ZwPowerInformation(LastSleepTime, 0LL, 0, &OutputBuffer, 8u);
          LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v80);
          if ( v35 || (v39 = W32GetUserSessionState(v37), *(_QWORD *)(v39 + 63504) < OutputBuffer) )
          {
            LOBYTE(v38) = 1;
            LOBYTE(v36) = 1;
            if ( !(unsigned int)PowerResumeSuspendEvent(0LL, v36, v38) )
            {
              *(_QWORD *)&v86[0] = 0x2000000000000010LL;
              if ( (int)IsxxxSendMessageBSMSupported() >= 0 )
                xxxSendMessageBSM(v40, 536, 7, v41, (__int64)v86);
            }
          }
          if ( (int)IsSetTimerCoalescingToleranceSupported() < 0 )
            goto LABEL_144;
          v13 = 0LL;
          goto LABEL_22;
        case 1u:
          v6 = PostWinlogonMessage(256LL, v4);
          if ( !v6 )
            PostPlaySoundMessage(v4);
          goto LABEL_144;
        case 2u:
          if ( !*(_DWORD *)(W32GetUserSessionState(0LL) + 68868) )
          {
            LODWORD(InputBuffer) = 0;
            *(_QWORD *)((char *)&InputBuffer + 4) = 10LL;
            WORD6(InputBuffer) = 0;
            LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v80, 1);
            ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &InputBuffer, 0x10u, 0LL, 0);
            LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v80);
          }
          *(_QWORD *)&v86[0] = 0x1000000010LL;
          if ( (int)IsxxxSendMessageBSMSupported() < 0 )
            goto LABEL_144;
          v32 = 10;
          v33 = 536;
          break;
        case 3u:
          *(_QWORD *)&v86[0] = 0x1000000010LL;
          if ( (int)IsxxxSendMessageBSMSupported() < 0 )
            goto LABEL_144;
          v32 = 0;
          v33 = 30;
          break;
        case 4u:
LABEL_97:
          if ( *(_BYTE *)W32GetUserGdiSessionState() )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1059LL);
          if ( v3 == 16 )
          {
            v47 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
            v48 = (v47 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
            v49 = W32GetUserSessionState(v47);
            CInputGlobals::UpdateLastInputTime(*(struct W32_PUSH_LOCK **)(v49 + 3064), v48, 5u);
            CitLastInputUpdate(5, v48, 0LL, 0);
            if ( UserSessionState[724] )
              UpdateAdaptiveSessionState();
          }
          EnterPowerCrit(v46);
          v51 = W32GetUserSessionState(v50);
          DisarmPowerWatchdog(*(_QWORD *)(v51 + 544));
          LeavePowerCrit(v52);
          if ( v3 == 12 )
            UserSessionSwitchBlock_End();
          if ( !*(_DWORD *)(W32GetUserGdiSessionState() + 36) && !UserSessionState[691] )
          {
            v54 = *(_WORD *)(W32GetUserSessionState(v53) + 69008) == 0;
            HIDWORD(v81) = v4;
            LOBYTE(v81) = v54;
            if ( UserSessionState[695] && v54 && (_DWORD)v4 != 22 )
            {
              if ( (_DWORD)v4 != 1 || !ShouldEscapeProximity() )
              {
                v6 = 0;
                goto LABEL_128;
              }
              UserSessionState[695] = 0;
            }
            v56 = W32GetUserSessionState(v55);
            ArmPowerWatchdog(*(_QWORD *)(v56 + 552), 32LL);
            v57 = ZwPowerInformation((POWER_INFORMATION_LEVEL)68, &v81, 8u, 0LL, 0);
            *(_DWORD *)(W32GetUserSessionState(v58) + 564) = v57;
            v60 = W32GetUserSessionState(v59);
            DisarmPowerWatchdog(*(_QWORD *)(v60 + 552));
            if ( *(_DWORD *)(W32GetUserSessionState(v61) + 564)
              && *(_DWORD *)(W32GetUserSessionState(v62) + 564) != 259
              && *(_DWORD *)(W32GetUserSessionState(v62) + 564) != -1073741823 )
            {
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1165LL);
            }
            if ( *(_DWORD *)(W32GetUserSessionState(v62) + 564) == 259 )
            {
              if ( !*(_BYTE *)(W32GetUserSessionState(v63) + 568) )
              {
                *(_BYTE *)(W32GetUserSessionState(v55) + 568) = 1;
                v65 = W32GetUserSessionState(v64);
                *(_DWORD *)(v65 + 572) = HIDWORD(v81);
                UserSessionSwitchBlock_Start();
              }
              goto LABEL_128;
            }
            if ( *(_DWORD *)(W32GetUserSessionState(v63) + 564) == -1073741823 )
            {
LABEL_128:
              EnterPowerCrit(v55);
              v74 = W32GetUserSessionState(v73);
              --*(_DWORD *)(v74 + 560);
              if ( *(_DWORD *)(W32GetUserSessionState(v75) + 560) )
              {
                v77 = W32GetUserSessionState(v76);
                ArmPowerWatchdog(*(_QWORD *)(v77 + 544), 16LL);
              }
              LeavePowerCrit(v76);
              goto LABEL_144;
            }
            v66 = 0;
            if ( !*(_DWORD *)(W32GetUserGdiSessionState() + 28) && (int)IsPowerOnGdiSupported(v68, v67) >= 0 )
            {
              v70 = W32GetUserSessionState(v69);
              ArmPowerWatchdog(*(_QWORD *)(v70 + 552), 48LL);
              PowerOnGdi(v5, 0LL, 0);
              v72 = W32GetUserSessionState(v71);
              DisarmPowerWatchdog(*(_QWORD *)(v72 + 552));
              v66 = 1;
            }
            PowerOnMonitor(HIDWORD(v81), v5, 0);
            if ( v66 )
              ProcessDelayedSdc(v5);
          }
          if ( (int)IsSetTimerCoalescingToleranceSupported() >= 0 )
            SetTimerCoalescingTolerance(0LL);
          goto LABEL_128;
        case 5u:
          if ( *(_BYTE *)W32GetUserGdiSessionState() )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1016LL);
          if ( *(_DWORD *)(W32GetUserGdiSessionState() + 36) )
            goto LABEL_144;
          HIDWORD(v81) = v4;
          PowerOffMonitor((unsigned int)v4, v5);
          if ( !*(_WORD *)(W32GetUserSessionState(v28) + 69008)
            && *(_BYTE *)(W32GetUserSessionState(v29) + 604)
            && !UserSessionState[690]
            && (int)IsPowerOffGdiSupported() >= 0 )
          {
            PowerOffGdi(v5);
          }
          if ( (int)IsSetTimerCoalescingToleranceSupported() < 0 || HIDWORD(v81) == 17 )
            goto LABEL_144;
          v13 = 2LL;
LABEL_22:
          SetTimerCoalescingTolerance(v13);
          goto LABEL_144;
        case 6u:
          v14 = W32GetUserSessionState(v3 - 6);
          if ( CInputGlobals::UpdateGlobalTickCount(*(_QWORD *)(v14 + 3064), 2) )
          {
            v16 = W32GetUserSessionState(v15);
            EtwTraceIdleActionExpiration(1LL, *(unsigned int *)(v16 + 62856));
          }
          if ( UserSessionState[689]
            || (v17 = *(_DWORD **)(W32GetUserSessionState(v15) + 19928), (*v17 & 0x200) != 0)
            && (v18 = *(struct W32_PUSH_LOCK **)(W32GetUserSessionState(v17) + 3064),
                v20 = *(CInputGlobals **)(W32GetUserSessionState(v19) + 3064),
                GlobalTickCount = CInputGlobals::GetGlobalTickCount(v18, 1),
                GlobalTickCount != CInputGlobals::GetLastInputTime(v20)) )
          {
            if ( !(unsigned int)PowerIsDisplayRequired() || *(_DWORD *)(W32GetUserSessionState(v22) + 19128) )
            {
              if ( *(_QWORD *)(W32GetUserSessionState(v22) + 62864) )
              {
                v24 = *(_QWORD *)(W32GetUserSessionState(v23) + 62864);
                if ( (*(_DWORD *)(v24 + 12) & 0x400000) == 0 )
                {
                  v25 = *(_QWORD *)(W32GetUserSessionState(v24) + 62864);
                  *(_DWORD *)(v25 + 12) |= 0x400000u;
                  v26 = *(_QWORD *)(W32GetUserSessionState(v25) + 62864);
                  if ( *(_QWORD *)(v26 + 336) )
                  {
                    v27 = W32GetUserSessionState(v26);
                    ForegroundBoost::SetForegroundPriority(*(_QWORD *)(*(_QWORD *)(v27 + 62864) + 336LL), 1u, 8u);
                  }
                }
              }
              else
              {
                ApiSetPsW32ScreenSaver_Show();
              }
            }
          }
          goto LABEL_144;
        case 7u:
          if ( *(_DWORD *)(W32GetUserGdiSessionState() + 36) || UserSessionState[691] || !UserSessionState[689] )
            goto LABEL_144;
          PowerDimMonitor();
          if ( !*(_WORD *)(W32GetUserSessionState(v12) + 69008) )
            UpdateDisplayState(PowerMonitorDim, MonitorRequestReasonMax, 1);
          if ( (int)IsSetTimerCoalescingToleranceSupported() < 0 )
            goto LABEL_144;
          v13 = 1LL;
          goto LABEL_22;
        default:
LABEL_73:
          v6 = -1073741822;
          goto LABEL_144;
      }
      xxxSendMessageBSM(v30, v33, v32, v31, (__int64)v86);
      goto LABEL_144;
    }
    UpdateAdaptiveSessionState();
    goto LABEL_144;
  }
  v11 = -1073741823;
  EtwTraceStopPowerEventCalloutWorker(v3, v4, 3221225473LL);
LABEL_145:
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope((CDisplayScenarioContextScope *)v83);
  return v11;
}
