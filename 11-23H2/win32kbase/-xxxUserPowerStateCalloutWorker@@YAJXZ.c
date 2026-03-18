/*
 * XREFs of ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C009E7F8
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1C009E490 (xxxUserPowerCalloutWorker.c)
 * Callees:
 *     ?AddPowerStateLogEntry@@YAXW4_POWER_STATE_LOG_ENTRY_TYPE@@K@Z @ 0x1C0010860 (-AddPowerStateLogEntry@@YAXW4_POWER_STATE_LOG_ENTRY_TYPE@@K@Z.c)
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C00114C0 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     xxxUserSetDisplayConfig @ 0x1C0012540 (xxxUserSetDisplayConfig.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C0065068 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     PowerResumeSuspendEvent @ 0x1C0084F90 (PowerResumeSuspendEvent.c)
 *     LeavePowerCrit @ 0x1C00A0000 (LeavePowerCrit.c)
 *     EnterPowerCrit @ 0x1C00A0030 (EnterPowerCrit.c)
 *     xxxSendMessageBSM @ 0x1C00C3868 (xxxSendMessageBSM.c)
 *     RIMSetSystemInputMode @ 0x1C00C3D8C (RIMSetSystemInputMode.c)
 *     IsxxxSendMessageBSMSupported @ 0x1C00C4204 (IsxxxSendMessageBSMSupported.c)
 *     EtwTraceWinlogonSleepStartEvent @ 0x1C00C4FE0 (EtwTraceWinlogonSleepStartEvent.c)
 *     IsPowerOnGdiSupported @ 0x1C00C52AC (IsPowerOnGdiSupported.c)
 *     PowerOnGdi @ 0x1C00C53FC (PowerOnGdi.c)
 *     DrvStopPresenterView @ 0x1C00C54A8 (DrvStopPresenterView.c)
 *     EtwTraceWinlogonSleepEndEvent @ 0x1C00C5520 (EtwTraceWinlogonSleepEndEvent.c)
 *     IsPowerOffGdiSupported @ 0x1C00C5634 (IsPowerOffGdiSupported.c)
 *     PowerOffGdi @ 0x1C00C5684 (PowerOffGdi.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     ??0PoWin32CalloutDeadlockTracker@@QEAA@W4_POPWIN32CALLOUT_WATCHDOG_STATE_INDEX@@@Z @ 0x1C00D02EC (--0PoWin32CalloutDeadlockTracker@@QEAA@W4_POPWIN32CALLOUT_WATCHDOG_STATE_INDEX@@@Z.c)
 *     ??1PoWin32CalloutDeadlockTracker@@QEAA@XZ @ 0x1C00D0390 (--1PoWin32CalloutDeadlockTracker@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D69C0 (memset.c)
 *     McTemplateK0dq_EtwWriteTransfer @ 0x1C00DF7A4 (McTemplateK0dq_EtwWriteTransfer.c)
 *     xxxSendWinlogonPowerMessage @ 0x1C0132140 (xxxSendWinlogonPowerMessage.c)
 *     PowerOffMonitor @ 0x1C0133C20 (PowerOffMonitor.c)
 *     PowerOnMonitor @ 0x1C0133F40 (PowerOnMonitor.c)
 *     ProcessDelayedSdc @ 0x1C0233260 (ProcessDelayedSdc.c)
 */

__int64 xxxUserPowerStateCalloutWorker(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // r13d
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // r14d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r9
  NTSTATUS v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // ebx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rcx
  unsigned int v42; // eax
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  unsigned int v62; // ebx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rdx
  __int64 v77; // r9
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rdx
  __int64 v89; // r9
  NTSTATUS v90; // ebx
  __int64 v91; // rdx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v98; // rcx
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 v103; // rax
  unsigned __int64 v104; // rbx
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // r9
  __int64 v112; // r8
  __int64 v113; // r9
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // r8
  __int64 v117; // r9
  __int64 v118; // rax
  __int64 v119; // rcx
  unsigned int v120; // eax
  __int64 v121; // r8
  __int64 v122; // r9
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // r8
  __int64 v126; // r9
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // r9
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // r8
  __int64 v134; // r9
  __int64 v135; // rax
  int v136; // ecx
  int v137; // r9d
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // r8
  __int64 v141; // r9
  __int64 v142; // r8
  __int64 v143; // r9
  __int64 v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // r8
  __int64 v147; // r9
  __int64 v148; // rax
  __int64 v149; // rcx
  unsigned int v150; // eax
  __int64 v151; // r8
  __int64 v152; // r9
  int v153; // eax
  __int64 v154; // r8
  __int64 v155; // r9
  __int64 v156; // rdx
  __int64 v157; // rcx
  __int64 v158; // r8
  __int64 v159; // r9
  __int64 v160; // rbx
  __int64 v161; // rdx
  __int64 v162; // rcx
  __int64 v163; // r8
  __int64 v164; // r9
  __int64 v165; // rdx
  __int64 v166; // rcx
  __int64 v167; // r8
  __int64 v168; // r9
  int v169; // ebx
  __int64 v170; // rdx
  __int64 v171; // rcx
  __int64 v172; // r8
  __int64 v173; // r9
  __int64 v174; // rax
  __int64 v175; // rdx
  __int64 v176; // r9
  __int64 v177; // rdx
  __int64 v178; // rcx
  __int64 v179; // r8
  __int64 v180; // r9
  __int64 v181; // rdx
  __int64 v182; // rcx
  __int64 v183; // r8
  __int64 v184; // r9
  __int64 v185; // rdx
  __int64 v186; // rcx
  __int64 v187; // r8
  __int64 v188; // r9
  __int64 v189; // rax
  int v190; // ecx
  int v191; // r9d
  __int64 v192; // rdx
  __int64 v193; // rcx
  __int64 v194; // rdx
  __int64 v195; // rcx
  __int64 v196; // r8
  __int64 v197; // r9
  __int64 v198; // rax
  int v199; // ecx
  int v200; // r9d
  __int64 v201; // rdx
  __int64 v202; // rcx
  __int64 v203; // r8
  __int64 v204; // r9
  __int64 v205; // rax
  int v206; // ecx
  int v207; // r9d
  __int64 v208; // rdx
  __int64 v209; // rcx
  __int64 v210; // r8
  __int64 v211; // r9
  __int64 v212; // r8
  __int64 v213; // r9
  __int64 v214; // rdx
  __int64 v215; // rcx
  __int64 v216; // r8
  __int64 v217; // r9
  __int64 v218; // rax
  __int64 v219; // rcx
  unsigned int v220; // eax
  __int64 v221; // r8
  __int64 v222; // r9
  int v223; // edi
  __int64 v224; // rdx
  __int64 v225; // rcx
  __int64 v226; // r8
  __int64 v227; // r9
  signed __int32 v229[8]; // [rsp+8h] [rbp-100h] BYREF
  int SystemInformation; // [rsp+68h] [rbp-A0h]
  _BYTE SystemInformation_4[4]; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int128 SystemInformation_8; // [rsp+70h] [rbp-98h] BYREF
  __int128 v233; // [rsp+80h] [rbp-88h]
  _BYTE v234[8]; // [rsp+90h] [rbp-78h] BYREF
  _DWORD v235[2]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v236; // [rsp+A0h] [rbp-68h]
  __int128 InputBuffer; // [rsp+A8h] [rbp-60h] BYREF
  _OWORD v238[2]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v239[10]; // [rsp+D8h] [rbp-30h] BYREF
  _OWORD v240[2]; // [rsp+128h] [rbp+20h] BYREF
  __int64 v241; // [rsp+148h] [rbp+40h]

  memset(v239, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v239[1]);
  v239[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v239[3]) = 17;
  LOBYTE(v239[6]) = -1;
  v4 = *(unsigned int *)(SGDGetUserSessionState(v1, v0, v2, v3) + 3224);
  v241 = 0LL;
  LODWORD(v239[4]) = v4;
  memset(v240, 0, sizeof(v240));
  InputBuffer = 0LL;
  v236 = 0LL;
  v11 = *(_DWORD *)(SGDGetUserSessionState(v4, v5, v6, v7) + 3224);
  SystemInformation_8 = 0LL;
  v233 = 0LL;
  memset(v238, 0, sizeof(v238));
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0dq_EtwWriteTransfer(v8, &StartPowerStateCalloutWorker, v9, (unsigned int)v11, 0);
  if ( !qword_1C0295960 )
  {
    v12 = -1073741637;
    goto LABEL_107;
  }
  v12 = qword_1C0295960();
  if ( v12 < 0 )
  {
LABEL_107:
    v193 = 5LL;
    goto LABEL_108;
  }
  if ( !qword_1C0295968 )
  {
    v12 = -1073741637;
    goto LABEL_105;
  }
  v15 = qword_1C0295968();
  v12 = v15;
  if ( v15 < 0 )
  {
LABEL_105:
    v193 = 6LL;
LABEL_108:
    v192 = (unsigned int)v12;
    goto LABEL_109;
  }
  if ( !*(_DWORD *)(SGDGetUserSessionState(v14, v13, v9, v10) + 2936) )
  {
    v12 = -2143420409;
    goto LABEL_110;
  }
  if ( v11 <= 10 )
  {
    if ( v11 == 10 )
    {
      if ( *(_BYTE *)SGDGetUserGdiSessionState(v17) )
      {
        SystemInformation = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3663LL);
      }
      v169 = *(_DWORD *)(SGDGetUserSessionState(v166, v165, v167, v168) + 2952);
      v174 = SGDGetUserSessionState(v171, v170, v172, v173);
      *(_DWORD *)(v174 + 3152) = *(_DWORD *)(v174 + 3152) & 0xFFFFFFDF | (v169 != 0 ? 0x20 : 0);
      PowerOffMonitor(MonitorRequestReasonDP);
      if ( (int)IsPowerOffGdiSupported() >= 0 )
        PowerOffGdi();
      goto LABEL_72;
    }
    if ( v11 == 1 )
    {
      EnterPowerCrit(0LL);
      v160 = *((_QWORD *)gptiCurrent + 92);
      *(_QWORD *)(SGDGetUserSessionState(v162, v161, v163, v164) + 3160) = v160;
      goto LABEL_71;
    }
    v19 = (unsigned int)(v11 - 2);
    if ( v11 != 2 )
    {
      if ( v11 == 3 )
      {
        if ( *(_DWORD *)(SGDGetUserSessionState((unsigned int)(v11 - 3), v16, v9, v18) + 3212) == 5 )
          LODWORD(InputBuffer) = 3;
        else
          LODWORD(InputBuffer) = *(_DWORD *)(SGDGetUserSessionState(v85, v84, v86, v87) + 3208);
        if ( !(unsigned int)PowerResumeSuspendEvent(1LL, 0LL, 0LL, v87) )
        {
          *(_QWORD *)((char *)&InputBuffer + 4) = 4LL;
          WORD6(InputBuffer) = 256;
          UserSessionSwitchLeaveCrit(v17, v88, v9, v89);
          PoWin32CalloutDeadlockTracker::PoWin32CalloutDeadlockTracker(v234, 2LL);
          v90 = ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &InputBuffer, 0x10u, 0LL, 0);
          PoWin32CalloutDeadlockTracker::~PoWin32CalloutDeadlockTracker((PoWin32CalloutDeadlockTracker *)v234);
          if ( v90 < 0 )
            AddPowerStateLogEntry(8LL, (unsigned int)v90, v92, v93);
          LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)SystemInformation_4, v91, v92, v93);
        }
      }
      else
      {
        v17 = (unsigned int)(v11 - 5);
        if ( v11 != 5 )
        {
          if ( v11 == 6 )
          {
            if ( qword_1C02958A0 && (int)qword_1C02958A0() >= 0 && qword_1C02958A8 )
              qword_1C02958A8();
            if ( !(unsigned int)PowerResumeSuspendEvent(0LL, 0LL, 0LL, v18) )
            {
              LODWORD(InputBuffer) = 0;
              *(_QWORD *)((char *)&InputBuffer + 4) = 18LL;
              WORD6(InputBuffer) = 1;
              UserSessionSwitchLeaveCrit(v17, v20, v9, v21);
              v22 = ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &InputBuffer, 0x10u, 0LL, 0);
              if ( v22 < 0 )
                AddPowerStateLogEntry(8LL, (unsigned int)v22, v24, v25);
              LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)SystemInformation_4, v23, v24, v25);
            }
          }
          goto LABEL_110;
        }
        CInputGlobals::UpdateLastInputTime(
          *((__int64 *)&WPP_MAIN_CB.Reserved + 1),
          (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
          6u);
        if ( !*(_BYTE *)(SGDGetUserSessionState(v27, v26, v28, v29) + 712) )
          RIMSetSystemInputMode(0LL);
        v34 = *(_DWORD *)(SGDGetUserSessionState(v31, v30, v32, v33) + 3212);
        if ( *(_DWORD *)SGDGetUserSessionState(v36, v35, v37, v38) )
        {
          if ( v34 == 5 )
          {
            memset((char *)v238 + 12, 0, 20);
            *(_QWORD *)&v233 = v238;
            *((_QWORD *)&SystemInformation_8 + 1) = 10LL;
            *((_QWORD *)&v233 + 1) = 32LL;
            *(_QWORD *)&SystemInformation_8 = 0x6B7568430000002DLL;
            LODWORD(v238[1]) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4)) & 0xFFFFFFFE;
            *(_QWORD *)&v238[0] = 0x100000004LL;
            DWORD2(v238[0]) = 4;
            ZwSetSystemInformation(SystemSuperfetchInformation, &SystemInformation_8, 0x20uLL);
          }
          EtwTraceWinlogonSleepEndEvent(1LL);
          AddPowerStateLogEntry(3LL, 262LL, v39, v40);
          v235[1] = 1;
          v236 = 0LL;
          v235[0] = 0;
          LOBYTE(v41) = 1;
          v42 = xxxSendWinlogonPowerMessage(v41, 262LL, v235);
          AddPowerStateLogEntry(4LL, v42, v43, v44);
          EtwTraceWinlogonSleepEndEvent(0LL);
          if ( v34 == 5 )
          {
            v45 = v233;
            *(_DWORD *)(v233 + 16) |= 1u;
            *(_DWORD *)(v45 + 8) = 4;
            ZwSetSystemInformation(SystemSuperfetchInformation, &SystemInformation_8, 0x20uLL);
          }
        }
        if ( (int)IsPowerOnGdiSupported() >= 0 )
          PowerOnGdi(v239, 1LL, 5LL);
        *(_DWORD *)(SGDGetUserSessionState(v47, v46, v48, v49) + 2960) = 0;
        _InterlockedOr(v229, 0);
        if ( *(_DWORD *)(SGDGetUserSessionState(v51, v50, v52, v53) + 2876) )
        {
          *(_DWORD *)(SGDGetUserSessionState(v55, v54, v56, v57) + 2884) = 1;
          v62 = *(_DWORD *)(SGDGetUserSessionState(v59, v58, v60, v61) + 2880);
          *(_DWORD *)(SGDGetUserSessionState(v64, v63, v65, v66) + 2888) = v62;
          EnterPowerCrit(v67);
          *(_DWORD *)(SGDGetUserSessionState(v69, v68, v70, v71) + 2876) = 0;
          *(_DWORD *)(SGDGetUserSessionState(v73, v72, v74, v75) + 2880) = 0;
          LeavePowerCrit();
          PoSetUserPresent(v62);
        }
        else
        {
          *(_DWORD *)(SGDGetUserSessionState(v55, v54, v56, v57) + 2964) = 1;
        }
        *((_QWORD *)&SystemInformation_8 + 1) = 10LL;
        memset((char *)v238 + 12, 0, 20);
        *(_QWORD *)&v233 = v238;
        *((_QWORD *)&v233 + 1) = 32LL;
        *(_QWORD *)&SystemInformation_8 = 0x6B7568430000002DLL;
        LODWORD(v238[1]) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4)) & 0xFFFFFFFE;
        *(_QWORD *)&v238[0] = 0x100000004LL;
        DWORD2(v238[0]) = 6;
        ZwSetSystemInformation(SystemSuperfetchInformation, &SystemInformation_8, 0x20uLL);
        LOBYTE(v76) = 1;
        if ( !(unsigned int)PowerResumeSuspendEvent(0LL, v76, 0LL, v77) && (int)IsxxxSendMessageBSMSupported() >= 0 )
        {
          *(_QWORD *)&v240[0] = 0x2000000000000010LL;
          if ( !(unsigned int)xxxSendMessageBSM(v79, 536, 18, v81, (__int64)v240) )
            AddPowerStateLogEntry(7LL, 18LL, v80, v81);
        }
        v82 = SGDGetUserSessionState(v79, v78, v80, v81);
        *(_DWORD *)(v82 + 12616) |= 2u;
        v83 = v233;
        *(_DWORD *)(v233 + 16) |= 1u;
        *(_DWORD *)(v83 + 8) = 6;
        ZwSetSystemInformation(SystemSuperfetchInformation, &SystemInformation_8, 0x20uLL);
      }
LABEL_72:
      v12 = v15;
      goto LABEL_110;
    }
    *(_DWORD *)(SGDGetUserSessionState(v19, v16, v9, v18) + 2960) = 1;
    _InterlockedOr(v229, 0);
    if ( !*(_BYTE *)(SGDGetUserSessionState(v95, v94, v96, v97) + 712) )
      RIMSetSystemInputMode(2LL);
    if ( !*(_BYTE *)SGDGetUserGdiSessionState(v98) )
    {
      v103 = SGDGetUserSessionState(v100, v99, v101, v102);
      PowerOffMonitor(*(enum POWER_MONITOR_REQUEST_REASON *)(v103 + 3228));
    }
    v104 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    *(_DWORD *)(SGDGetUserSessionState(0xFFFFF78000000004uLL, v99, v101, v102) + 2992) = v104;
    v110 = *(unsigned int *)SGDGetUserSessionState(v106, v105, v107, v108);
    if ( (_DWORD)v110 != gServiceSessionId )
    {
      EtwTraceWinlogonSleepStartEvent(1LL);
      AddPowerStateLogEntry(3LL, 1LL, v112, v113);
      v118 = SGDGetUserSessionState(v115, v114, v116, v117);
      LOBYTE(v119) = 1;
      v120 = xxxSendWinlogonPowerMessage(v119, 262LL, v118 + 3208);
      AddPowerStateLogEntry(4LL, v120, v121, v122);
      EtwTraceWinlogonSleepStartEvent(0LL);
    }
    LOBYTE(v109) = 1;
    LOBYTE(v110) = 1;
    if ( !(unsigned int)PowerResumeSuspendEvent(v110, v109, 0LL, v111) && (int)IsxxxSendMessageBSMSupported() >= 0 )
    {
      *(_DWORD *)(SGDGetUserSessionState(v124, v123, v125, v126) + 3168) = 16;
      *(_DWORD *)(SGDGetUserSessionState(v128, v127, v129, v130) + 3172) = 536870952;
      v135 = SGDGetUserSessionState(v132, v131, v133, v134);
      if ( !(unsigned int)xxxSendMessageBSM(v136, 536, 4, v137, v135 + 3168) )
        AddPowerStateLogEntry(7LL, 4LL, v125, v126);
    }
    if ( *(_DWORD *)(SGDGetUserSessionState(v124, v123, v125, v126) + 3212) == 5 )
    {
      if ( gProtocolType )
      {
LABEL_69:
        EnterPowerCrit(v139);
        *(_QWORD *)(SGDGetUserSessionState(v157, v156, v158, v159) + 3160) = 0LL;
LABEL_71:
        LeavePowerCrit();
        goto LABEL_72;
      }
      if ( (*(_DWORD *)(SGDGetUserSessionState(v139, v138, v140, v141) + 3216) & 8) != 0 )
      {
        if ( (unsigned __int8)DrvStopPresenterView() )
        {
          if ( grpdeskRitInput )
          {
            v153 = xxxUserSetDisplayConfig(
                     0,
                     0LL,
                     0x88Fu,
                     0,
                     (__int64)grpdeskRitInput,
                     0,
                     0LL,
                     0LL,
                     0LL,
                     (__int64)v239,
                     0LL);
            if ( v153 < 0 )
              AddPowerStateLogEntry(9LL, (unsigned int)v153, v154, v155);
          }
        }
      }
      else
      {
        EtwTraceWinlogonSleepEndEvent(1LL);
        AddPowerStateLogEntry(3LL, 259LL, v142, v143);
        v148 = SGDGetUserSessionState(v145, v144, v146, v147);
        LOBYTE(v149) = 1;
        v150 = xxxSendWinlogonPowerMessage(v149, 259LL, v148 + 3208);
        AddPowerStateLogEntry(4LL, v150, v151, v152);
        EtwTraceWinlogonSleepEndEvent(0LL);
      }
    }
    if ( !gProtocolType && (int)IsPowerOffGdiSupported() >= 0 )
      PowerOffGdi();
    goto LABEL_69;
  }
  if ( v11 == 11 )
  {
    if ( *(_BYTE *)SGDGetUserGdiSessionState(0LL) )
    {
      SystemInformation = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3683LL);
    }
    v223 = 0;
    if ( (int)IsPowerOnGdiSupported() >= 0 )
    {
      PowerOnGdi(v239, 0LL, 2LL);
      v223 = 1;
    }
    v17 = *(unsigned int *)(SGDGetUserSessionState(v225, v224, v226, v227) + 3152);
    if ( (v17 & 0x20) != 0 )
      PowerOnMonitor(MonitorRequestReasonDP);
    if ( v223 )
      ProcessDelayedSdc(v239);
  }
  else if ( v11 == 12 )
  {
    if ( *(_BYTE *)SGDGetUserGdiSessionState((unsigned int)(v11 - 12)) )
    {
      SystemInformation = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3229LL);
    }
    PowerOffMonitor(MonitorRequestReasonSxTransition);
  }
  else
  {
    v17 = (unsigned int)(v11 - 13);
    if ( v11 == 13 )
    {
      if ( *(_BYTE *)SGDGetUserGdiSessionState(v17) )
      {
        SystemInformation = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3248LL);
      }
      v17 = *(unsigned int *)SGDGetUserSessionState(v209, v208, v210, v211);
      if ( (_DWORD)v17 != gServiceSessionId )
      {
        EtwTraceWinlogonSleepStartEvent(1LL);
        AddPowerStateLogEntry(3LL, 263LL, v212, v213);
        v218 = SGDGetUserSessionState(v215, v214, v216, v217);
        LOBYTE(v219) = 1;
        v220 = xxxSendWinlogonPowerMessage(v219, 263LL, v218 + 3208);
        AddPowerStateLogEntry(4LL, v220, v221, v222);
        EtwTraceWinlogonSleepStartEvent(0LL);
      }
      goto LABEL_72;
    }
    if ( v11 != 14 || (int)IsxxxSendMessageBSMSupported() < 0 )
      goto LABEL_110;
    *(_DWORD *)(SGDGetUserSessionState(v17, v175, v9, v176) + 3168) = 16;
    if ( *(_DWORD *)(SGDGetUserSessionState(v178, v177, v179, v180) + 3212) == 5 )
    {
      *(_DWORD *)(SGDGetUserSessionState(v182, v181, v183, v184) + 3172) = 536870952;
      v189 = SGDGetUserSessionState(v186, v185, v187, v188);
      if ( (unsigned int)xxxSendMessageBSM(v190, 536, 4, v191, v189 + 3168) )
        goto LABEL_110;
      v192 = 4LL;
      v193 = 7LL;
      goto LABEL_109;
    }
    *(_DWORD *)(SGDGetUserSessionState(v182, v181, v183, v184) + 3172) = 0x20000000;
    v198 = SGDGetUserSessionState(v195, v194, v196, v197);
    if ( !(unsigned int)xxxSendMessageBSM(v199, 536, 18, v200, v198 + 3168) )
      AddPowerStateLogEntry(7LL, 18LL, v203, v204);
    v205 = SGDGetUserSessionState(v202, v201, v203, v204);
    if ( !(unsigned int)xxxSendMessageBSM(v206, 536, 7, v207, v205 + 3168) )
    {
      v192 = 7LL;
      v193 = 7LL;
LABEL_109:
      AddPowerStateLogEntry(v193, v192, v9, v10);
    }
  }
LABEL_110:
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0dq_EtwWriteTransfer(v17, &StopPowerStateCalloutWorker, v9, (unsigned int)v11, v12);
  return (unsigned int)v12;
}
