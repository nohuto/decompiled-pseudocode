/*
 * XREFs of ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1400EAC08
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1400E96D0 (xxxUserPowerCalloutWorker.c)
 * Callees:
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x14006B090 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     PowerOnMonitor @ 0x1400906D0 (PowerOnMonitor.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140091E28 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     xxxSendWinlogonPowerMessage @ 0x140092060 (xxxSendWinlogonPowerMessage.c)
 *     PowerOnGdi @ 0x140092FDC (PowerOnGdi.c)
 *     IsPowerOnGdiSupported @ 0x140093034 (IsPowerOnGdiSupported.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     McTemplateK0dq_EtwWriteTransfer @ 0x1400E0740 (McTemplateK0dq_EtwWriteTransfer.c)
 *     PowerOffMonitor @ 0x1400E4300 (PowerOffMonitor.c)
 *     EnterPowerCrit @ 0x1400E9B80 (EnterPowerCrit.c)
 *     LeavePowerCrit @ 0x1400E9BB0 (LeavePowerCrit.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x1400F78E4 (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     IsCurrentSessionHostServiceSession @ 0x140100C78 (IsCurrentSessionHostServiceSession.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14010EA98 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     RIMSetSystemInputMode @ 0x14011D91C (RIMSetSystemInputMode.c)
 *     IsCurrentSessionServiceSession @ 0x14012AA48 (IsCurrentSessionServiceSession.c)
 *     ?AddPowerStateLogEntry@@YAXW4_POWER_STATE_LOG_ENTRY_TYPE@@K@Z @ 0x14012B784 (-AddPowerStateLogEntry@@YAXW4_POWER_STATE_LOG_ENTRY_TYPE@@K@Z.c)
 *     xxxSendMessageBSM @ 0x14013F4F0 (xxxSendMessageBSM.c)
 *     IsxxxSendMessageBSMSupported @ 0x140142C8C (IsxxxSendMessageBSMSupported.c)
 *     EtwTraceWinlogonSleepStartEvent @ 0x14014C7F0 (EtwTraceWinlogonSleepStartEvent.c)
 *     DrvStopPresenterView @ 0x14014E53C (DrvStopPresenterView.c)
 *     IsPowerOffGdiSupported @ 0x1401520B8 (IsPowerOffGdiSupported.c)
 *     EtwTraceWinlogonSleepEndEvent @ 0x140154D30 (EtwTraceWinlogonSleepEndEvent.c)
 *     PowerOffGdi @ 0x14015B7E0 (PowerOffGdi.c)
 *     xxxUserSetDisplayConfig @ 0x1401636C0 (xxxUserSetDisplayConfig.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A2B00 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     PowerResumeSuspendEvent @ 0x1401AEDC0 (PowerResumeSuspendEvent.c)
 *     IoControl @ 0x140212EF0 (IoControl.c)
 *     ProcessDelayedSdc @ 0x14023B6F8 (ProcessDelayedSdc.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxUserPowerStateCalloutWorker(__int64 a1)
{
  __int64 UserSessionState; // rax
  __int64 v2; // rdi
  unsigned int v3; // r9d
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r13
  int v8; // esi
  __int64 (*v9)(void); // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ebx
  __int64 (*v13)(void); // rax
  __int64 v14; // rcx
  int v15; // r15d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  int (*v20)(void); // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  void (*v23)(void); // rax
  NTSTATUS v24; // eax
  __int64 v25; // rax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned int v30; // eax
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  unsigned int v35; // ebx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rdx
  int v42; // ecx
  int v43; // r9d
  __int64 v44; // rax
  NTSTATUS v45; // eax
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  unsigned int v49; // eax
  __int64 v50; // rcx
  int v51; // r9d
  unsigned int v52; // eax
  __int64 v53; // rax
  __int64 v54; // rcx
  int v55; // eax
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rcx
  int v60; // r9d
  bool v61; // zf
  __int64 v62; // rdx
  int v63; // ecx
  int v64; // r9d
  unsigned int v65; // eax
  __int64 v66; // rdx
  __int64 v67; // rcx
  int v68; // esi
  __int64 v69; // rcx
  signed __int32 v71[8]; // [rsp+8h] [rbp-100h] BYREF
  __int64 OutputBufferLength; // [rsp+28h] [rbp-E0h]
  __int64 v73; // [rsp+30h] [rbp-D8h]
  __int64 v74; // [rsp+48h] [rbp-C0h]
  __int64 v75; // [rsp+50h] [rbp-B8h]
  __int64 v76; // [rsp+58h] [rbp-B0h]
  _BYTE SystemInformation[4]; // [rsp+68h] [rbp-A0h] BYREF
  int SystemInformation_4; // [rsp+6Ch] [rbp-9Ch]
  __int128 SystemInformation_8; // [rsp+70h] [rbp-98h] BYREF
  __int128 v80; // [rsp+80h] [rbp-88h]
  int v81; // [rsp+90h] [rbp-78h]
  _DWORD v82[2]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v83; // [rsp+A0h] [rbp-68h]
  _BYTE v84[8]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v85; // [rsp+B0h] [rbp-58h]
  __int128 InputBuffer; // [rsp+B8h] [rbp-50h] BYREF
  _OWORD v87[2]; // [rsp+C8h] [rbp-40h] BYREF
  _OWORD v88[2]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v89; // [rsp+108h] [rbp+0h]

  UserSessionState = W32GetUserSessionState(a1);
  v2 = UserSessionState + 368;
  v3 = *(_DWORD *)(UserSessionState + 3040);
  v84[0] = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor((CDisplayScenarioContextScope *)v84, 0LL, 0x11u, v3);
  v7 = v85;
  v83 = 0LL;
  memset(v88, 0, sizeof(v88));
  v89 = 0LL;
  InputBuffer = 0LL;
  v8 = *(_DWORD *)(v2 + 2672);
  *(_DWORD *)(v2 + 2672) = 15;
  v81 = v8;
  SystemInformation_8 = 0LL;
  v80 = 0LL;
  memset(v87, 0, sizeof(v87));
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
  {
    LODWORD(OutputBufferLength) = 0;
    McTemplateK0dq_EtwWriteTransfer(v5, &StartPowerStateCalloutWorker, v6, v8, OutputBufferLength);
  }
  v9 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 48) + 2264LL);
  if ( !v9 )
  {
    v12 = -1073741637;
    goto LABEL_107;
  }
  v12 = v9();
  if ( v12 < 0 )
  {
LABEL_107:
    v69 = 5LL;
    goto LABEL_108;
  }
  v13 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v11, v10) + 48) + 2272LL);
  if ( !v13 )
  {
    v12 = -1073741637;
    goto LABEL_105;
  }
  v15 = v13();
  v12 = v15;
  if ( v15 < 0 )
  {
LABEL_105:
    v69 = 6LL;
LABEL_108:
    AddPowerStateLogEntry(v69, (unsigned int)v12);
    goto LABEL_109;
  }
  if ( !*(_DWORD *)(W32GetUserSessionState(v14) + 2728) )
  {
    v12 = -2143420409;
    goto LABEL_109;
  }
  if ( v8 > 10 )
  {
    if ( v8 == 11 )
    {
      if ( *(_BYTE *)W32GetUserGdiSessionState(0LL) )
      {
        SystemInformation_4 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3987LL);
      }
      v68 = 0;
      if ( (int)IsPowerOnGdiSupported(v67, v66) >= 0 )
      {
        PowerOnGdi(v7, 0LL, 2u);
        v68 = 1;
      }
      if ( (*(_DWORD *)(v2 + 2600) & 0x20) != 0 )
        PowerOnMonitor(19LL, v7, 2u);
      if ( v68 )
        ProcessDelayedSdc(v7);
      goto LABEL_109;
    }
    if ( v8 == 12 )
    {
      if ( *(_BYTE *)W32GetUserGdiSessionState((unsigned int)(v8 - 12)) )
      {
        SystemInformation_4 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3532LL);
      }
      PowerOffMonitor(20LL, v7);
      goto LABEL_109;
    }
    v17 = (unsigned int)(v8 - 13);
    if ( v8 == 13 )
    {
      if ( *(_BYTE *)W32GetUserGdiSessionState(v17) )
      {
        SystemInformation_4 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3551LL);
      }
      if ( !(unsigned int)IsCurrentSessionServiceSession() )
      {
        EtwTraceWinlogonSleepStartEvent(1LL);
        AddPowerStateLogEntry(3LL, 263LL);
        v65 = xxxSendWinlogonPowerMessage(1, 0x107u, v2 + 2656);
        AddPowerStateLogEntry(4LL, v65);
        EtwTraceWinlogonSleepStartEvent(0LL);
      }
      goto LABEL_92;
    }
    if ( v8 != 14 )
      goto LABEL_109;
    if ( (int)IsxxxSendMessageBSMSupported() < 0 )
      goto LABEL_92;
    v61 = *(_DWORD *)(v2 + 2660) == 5;
    *(_DWORD *)(v2 + 2616) = 16;
    OutputBufferLength = v2 + 2616;
    if ( v61 )
    {
      *(_DWORD *)(v2 + 2620) = 536870952;
      if ( (unsigned int)xxxSendMessageBSM(v17, 536, 4, v60, OutputBufferLength) )
      {
LABEL_92:
        v12 = v15;
        goto LABEL_109;
      }
      v62 = 4LL;
    }
    else
    {
      *(_DWORD *)(v2 + 2620) = 0x20000000;
      if ( !(unsigned int)xxxSendMessageBSM(v17, 536, 18, v60, OutputBufferLength) )
        AddPowerStateLogEntry(7LL, 18LL);
      if ( (unsigned int)xxxSendMessageBSM(v63, 536, 7, v64, v2 + 2616) )
        goto LABEL_92;
      v62 = 7LL;
    }
    AddPowerStateLogEntry(7LL, v62);
    goto LABEL_92;
  }
  switch ( v8 )
  {
    case 10:
      if ( *(_BYTE *)W32GetUserGdiSessionState(v17) )
      {
        SystemInformation_4 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3967LL);
      }
      *(_DWORD *)(v2 + 2600) = (*(_DWORD *)(v2 + 2388) != 0 ? 0x20 : 0) | *(_DWORD *)(v2 + 2600) & 0xFFFFFFDF;
      PowerOffMonitor(19LL, v7);
      if ( (int)IsPowerOffGdiSupported() >= 0 )
        PowerOffGdi(v7);
      goto LABEL_109;
    case 1:
      EnterPowerCrit(0LL);
      v59 = *((_QWORD *)PtiCurrent(v58) + 96);
      *(_QWORD *)(v2 + 2608) = v59;
      LeavePowerCrit(v59);
      goto LABEL_109;
    case 2:
      *(_DWORD *)(v2 + 2396) = 1;
      _InterlockedOr(v71, 0);
      if ( !*(_BYTE *)(W32GetUserSessionState(0LL) + 528) )
        RIMSetSystemInputMode(2LL);
      if ( !*(_BYTE *)W32GetUserGdiSessionState(v46) )
        PowerOffMonitor(*(unsigned int *)(v2 + 2676), v7);
      *(_DWORD *)(v2 + 2428) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      if ( !(unsigned int)IsCurrentSessionServiceSession() )
      {
        EtwTraceWinlogonSleepStartEvent(1LL);
        AddPowerStateLogEntry(3LL, 1LL);
        v49 = xxxSendWinlogonPowerMessage(1, 0x106u, v2 + 2656);
        AddPowerStateLogEntry(4LL, v49);
        EtwTraceWinlogonSleepStartEvent(0LL);
      }
      LOBYTE(v47) = 1;
      LOBYTE(v48) = 1;
      if ( !(unsigned int)PowerResumeSuspendEvent(v48, v47, 0LL) && (int)IsxxxSendMessageBSMSupported() >= 0 )
      {
        *(_DWORD *)(v2 + 2620) = 536870952;
        *(_DWORD *)(v2 + 2616) = 16;
        if ( !(unsigned int)xxxSendMessageBSM(v50, 536, 4, v51, v2 + 2616) )
          AddPowerStateLogEntry(7LL, 4LL);
      }
      if ( *(_DWORD *)(v2 + 2660) == 5 && !*(_WORD *)(W32GetUserSessionState(v50) + 69008) )
      {
        if ( (*(_DWORD *)(v2 + 2664) & 8) != 0 )
        {
          if ( (unsigned __int8)DrvStopPresenterView() )
          {
            if ( *(_QWORD *)(W32GetUserSessionState(v50) + 19200) )
            {
              v53 = W32GetUserSessionState(v50);
              v76 = 0LL;
              v75 = v7;
              v74 = 0LL;
              v54 = *(_QWORD *)(v53 + 19200);
              LOBYTE(v73) = 0;
              v55 = xxxUserSetDisplayConfig(0LL, 0LL, 2191LL, 0LL, v54, v73, 0LL, 0LL, 0LL, v7, 0LL);
              if ( v55 < 0 )
                AddPowerStateLogEntry(9LL, (unsigned int)v55);
            }
          }
        }
        else
        {
          EtwTraceWinlogonSleepEndEvent(1LL);
          AddPowerStateLogEntry(3LL, 259LL);
          v52 = xxxSendWinlogonPowerMessage(1, 0x103u, v2 + 2656);
          AddPowerStateLogEntry(4LL, v52);
          EtwTraceWinlogonSleepEndEvent(0LL);
        }
      }
      if ( !*(_WORD *)(W32GetUserSessionState(v50) + 69008) && (int)IsPowerOffGdiSupported() >= 0 )
        PowerOffGdi(v7);
      EnterPowerCrit(v56);
      *(_QWORD *)(v2 + 2608) = 0LL;
      LeavePowerCrit(v57);
      goto LABEL_92;
  }
  v19 = (unsigned int)(v8 - 3);
  if ( v8 != 3 )
  {
    v17 = (unsigned int)(v8 - 5);
    if ( v8 == 5 )
    {
      v25 = W32GetUserSessionState(v17);
      CInputGlobals::UpdateLastInputTime(
        *(struct W32_PUSH_LOCK **)(v25 + 3064),
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
        6u);
      if ( !*(_BYTE *)(W32GetUserSessionState(v26) + 528) )
        RIMSetSystemInputMode(0LL);
      SystemInformation_4 = *(_DWORD *)(v2 + 2660);
      v27 = IsCurrentSessionHostServiceSession();
      v29 = 0LL;
      if ( !v27 )
      {
        if ( SystemInformation_4 == 5 )
        {
          memset((char *)v87 + 12, 0, 20);
          *(_QWORD *)&v80 = v87;
          *((_QWORD *)&SystemInformation_8 + 1) = 10LL;
          *((_QWORD *)&v80 + 1) = 32LL;
          *(_QWORD *)&SystemInformation_8 = 0x6B7568430000002DLL;
          LODWORD(v87[1]) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4)) & 0xFFFFFFFE;
          *(_QWORD *)&v87[0] = 0x100000004LL;
          DWORD2(v87[0]) = 4;
          ZwSetSystemInformation(SystemSuperfetchInformation, &SystemInformation_8, 0x20uLL);
        }
        EtwTraceWinlogonSleepEndEvent(1LL);
        AddPowerStateLogEntry(3LL, 262LL);
        v83 = 0LL;
        v82[0] = 0;
        v82[1] = 1;
        v30 = xxxSendWinlogonPowerMessage(1, 0x106u, (__int64)v82);
        AddPowerStateLogEntry(4LL, v30);
        EtwTraceWinlogonSleepEndEvent(0LL);
        if ( SystemInformation_4 == 5 )
        {
          v31 = v80;
          *(_DWORD *)(v80 + 16) |= 1u;
          *(_DWORD *)(v31 + 8) = 4;
          ZwSetSystemInformation(SystemSuperfetchInformation, &SystemInformation_8, 0x20uLL);
        }
      }
      if ( (int)IsPowerOnGdiSupported(v29, v28) >= 0 )
        PowerOnGdi(v7, 1LL, 5u);
      *(_DWORD *)(v2 + 2396) = 0;
      _InterlockedOr(v71, 0);
      if ( *(_DWORD *)(W32GetUserSessionState(v32) + 2692) )
      {
        *(_DWORD *)(W32GetUserSessionState(v33) + 2700) = 1;
        v35 = *(_DWORD *)(W32GetUserSessionState(v34) + 2696);
        *(_DWORD *)(W32GetUserSessionState(v36) + 2704) = v35;
        EnterPowerCrit(v37);
        *(_DWORD *)(W32GetUserSessionState(v38) + 2692) = 0;
        *(_DWORD *)(W32GetUserSessionState(v39) + 2696) = 0;
        LeavePowerCrit(v40);
        PoSetUserPresent(v35);
      }
      else
      {
        *(_DWORD *)(v2 + 2400) = 1;
      }
      *(_QWORD *)&v87[0] = 0x100000004LL;
      memset((char *)v87 + 12, 0, 20);
      *(_QWORD *)&v80 = v87;
      *((_QWORD *)&SystemInformation_8 + 1) = 10LL;
      *((_QWORD *)&v80 + 1) = 32LL;
      LODWORD(v87[1]) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4)) & 0xFFFFFFFE;
      *(_QWORD *)&SystemInformation_8 = 0x6B7568430000002DLL;
      DWORD2(v87[0]) = 6;
      ZwSetSystemInformation(SystemSuperfetchInformation, &SystemInformation_8, 0x20uLL);
      LOBYTE(v41) = 1;
      if ( !(unsigned int)PowerResumeSuspendEvent(0LL, v41, 0LL) && (int)IsxxxSendMessageBSMSupported() >= 0 )
      {
        *(_QWORD *)&v88[0] = 0x2000000000000010LL;
        if ( !(unsigned int)xxxSendMessageBSM(v42, 536, 18, v43, (__int64)v88) )
          AddPowerStateLogEntry(7LL, 18LL);
      }
      IoControl(2LL);
      v44 = v80;
      *(_DWORD *)(v80 + 16) |= 1u;
      *(_DWORD *)(v44 + 8) = 6;
      ZwSetSystemInformation(SystemSuperfetchInformation, &SystemInformation_8, 0x20uLL);
    }
    else
    {
      if ( v8 != 6 )
        goto LABEL_109;
      v20 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v17, v16) + 48) + 2072LL);
      if ( v20 )
      {
        if ( v20() >= 0 )
        {
          v23 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v22, v21) + 48) + 2080LL);
          if ( v23 )
            v23();
        }
      }
      if ( !(unsigned int)PowerResumeSuspendEvent(0LL, 0LL, 0LL) )
      {
        LODWORD(InputBuffer) = 0;
        *(_QWORD *)((char *)&InputBuffer + 4) = 18LL;
        WORD6(InputBuffer) = 1;
        LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)SystemInformation, 1);
        v24 = ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &InputBuffer, 0x10u, 0LL, 0);
        if ( v24 < 0 )
          AddPowerStateLogEntry(8LL, (unsigned int)v24);
        LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)SystemInformation);
      }
    }
    goto LABEL_92;
  }
  if ( *(_DWORD *)(v2 + 2660) == 5 )
    LODWORD(InputBuffer) = 3;
  else
    LODWORD(InputBuffer) = *(_DWORD *)(v2 + 2656);
  LOBYTE(v19) = 1;
  if ( !(unsigned int)PowerResumeSuspendEvent(v19, 0LL, 0LL) )
  {
    *(_QWORD *)((char *)&InputBuffer + 4) = 4LL;
    WORD6(InputBuffer) = 256;
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)SystemInformation, 1);
    v45 = ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &InputBuffer, 0x10u, 0LL, 0);
    if ( v45 < 0 )
      AddPowerStateLogEntry(8LL, (unsigned int)v45);
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)SystemInformation);
  }
LABEL_109:
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
  {
    LODWORD(OutputBufferLength) = v12;
    McTemplateK0dq_EtwWriteTransfer(v17, &StopPowerStateCalloutWorker, v18, v81, OutputBufferLength);
  }
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope((CDisplayScenarioContextScope *)v84);
  return (unsigned int)v12;
}
