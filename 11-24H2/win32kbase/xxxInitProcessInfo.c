/*
 * XREFs of xxxInitProcessInfo @ 0x140161084
 * Callers:
 *     xxxUserProcessCallout @ 0x140167490 (xxxUserProcessCallout.c)
 *     ?xxxUserProcessInitCallout@@YAJPEAU_W32PROCESS@@PEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@@Z @ 0x1401B2B40 (-xxxUserProcessInitCallout@@YAJPEAU_W32PROCESS@@PEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x140092790 (McTemplateK0_EtwWriteTransfer.c)
 *     GetProcessLuid @ 0x1400A05A0 (GetProcessLuid.c)
 *     WPP_RECORDER_AND_TRACE_SF_dD @ 0x1400AACA4 (WPP_RECORDER_AND_TRACE_SF_dD.c)
 *     CitProcessCallout @ 0x1400B5AC4 (CitProcessCallout.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C0560 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDD @ 0x1400E67B0 (WPP_RECORDER_AND_TRACE_SF_qDD.c)
 *     zzzCalcStartCursorHide @ 0x14011C59C (zzzCalcStartCursorHide.c)
 *     IszzzCalcStartCursorHideSupported @ 0x14011FE0C (IszzzCalcStartCursorHideSupported.c)
 *     Feature_WebThreatDefenseToggle__private_IsEnabledPreCheck @ 0x140132F64 (Feature_WebThreatDefenseToggle__private_IsEnabledPreCheck.c)
 *     WPP_RECORDER_AND_TRACE_SF_qD @ 0x140141E88 (WPP_RECORDER_AND_TRACE_SF_qD.c)
 *     ??1CWinEventNoopDeferral@@QEAA@XZ @ 0x14015CA30 (--1CWinEventNoopDeferral@@QEAA@XZ.c)
 *     ?GetSpriteFillColorOverrideForCurrentProcess@@YAKXZ @ 0x14015CD90 (-GetSpriteFillColorOverrideForCurrentProcess@@YAKXZ.c)
 *     ?xxxCheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x14015D194 (-xxxCheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z.c)
 *     ??0CWinEventNoopDeferral@@QEAA@XZ @ 0x1401A2A8C (--0CWinEventNoopDeferral@@QEAA@XZ.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x1401A2C38 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?SetProcessInitialCapabilities@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1401A369C (-SetProcessInitialCapabilities@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?SetProcessType@@YAXPEAUtagPROCESSINFO@@PEAXW4_PROCESS_IMMERSIVE_TYPE@@PEAU_PS_PKG_CLAIM@@@Z @ 0x1401A3830 (-SetProcessType@@YAXPEAUtagPROCESSINFO@@PEAXW4_PROCESS_IMMERSIVE_TYPE@@PEAU_PS_PKG_CLAIM@@@Z.c)
 *     Feature_ID51538523__private_ReportDeviceUsage @ 0x1401A3C7C (Feature_ID51538523__private_ReportDeviceUsage.c)
 *     Feature_LearningModeSupport__private_IsEnabledDeviceUsageNoInline @ 0x1401A3CE4 (Feature_LearningModeSupport__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline @ 0x1401A3DE0 (Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline @ 0x1401A3E34 (Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDDDD @ 0x1401A440C (WPP_RECORDER_AND_TRACE_SF_DDDDD.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxInitProcessInfo(struct _W32PROCESS *a1, PACCESS_TOKEN Token, unsigned int a3, int a4, __int64 a5)
{
  char v5; // r15
  PACCESS_TOKEN v7; // rsi
  char v8; // r13
  char v9; // al
  __int64 result; // rax
  NTSTATUS InformationToken; // r14d
  char v13; // di
  __int64 v14; // r9
  int v15; // ecx
  char v16; // di
  int v17; // ebx
  __int64 UserSessionState; // rax
  unsigned __int8 ProcessProtection; // al
  CTouchProcessor *v20; // rcx
  char v21; // al
  unsigned __int64 v22; // r15
  int v23; // ebx
  int v24; // edi
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  int v28; // ecx
  unsigned __int8 v29; // al
  int v30; // ebx
  int v31; // edi
  __int64 v32; // rsi
  __int64 v33; // rax
  char v34; // si
  char v35; // r15
  __int64 v36; // rdi
  __int64 v37; // rax
  int SpriteFillColorOverrideForCurrentProcess; // eax
  __int64 v39; // rcx
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  void (__fastcall *v48)(struct _W32PROCESS *); // rax
  __int64 v49; // rcx
  unsigned __int64 v50; // rcx
  int Win32KFilterSet; // eax
  __int64 v52; // rcx
  unsigned __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rcx
  int (*v57)(void); // rax
  __int64 v58; // rdx
  void (__fastcall *v59)(struct _W32PROCESS *); // rax
  char v60; // di
  __int64 v61; // r9
  int v62; // ebx
  __int64 v63; // rcx
  int v64; // [rsp+20h] [rbp-91h]
  __int64 v65; // [rsp+40h] [rbp-71h]
  __int64 v66; // [rsp+48h] [rbp-69h]
  int v67; // [rsp+48h] [rbp-69h]
  __int64 v68; // [rsp+50h] [rbp-61h]
  int v69; // [rsp+58h] [rbp-59h]
  int v70; // [rsp+60h] [rbp-51h]
  char v71; // [rsp+70h] [rbp-41h] BYREF
  char v72; // [rsp+71h] [rbp-40h]
  _BYTE v73[8]; // [rsp+78h] [rbp-39h] BYREF
  __int64 v74; // [rsp+80h] [rbp-31h]
  PVOID v75; // [rsp+88h] [rbp-29h] BYREF
  int v76; // [rsp+90h] [rbp-21h] BYREF
  PVOID P; // [rsp+98h] [rbp-19h] BYREF
  unsigned int v78; // [rsp+A0h] [rbp-11h]
  PACCESS_TOKEN v79; // [rsp+A8h] [rbp-9h]
  __int64 v80; // [rsp+B0h] [rbp-1h]
  PVOID TokenInformation; // [rsp+B8h] [rbp+7h] BYREF
  int v82; // [rsp+C0h] [rbp+Fh]

  v5 = 0;
  v80 = a5;
  v78 = a3;
  TokenInformation = 0LL;
  v7 = Token;
  v82 = 0;
  v8 = 1;
  v9 = *((_BYTE *)a1 + 1208);
  v79 = Token;
  HIDWORD(v75) = 0;
  P = 0LL;
  v76 = 0;
  if ( v9 == 1 )
    return 1073741851LL;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
    McTemplateK0_EtwWriteTransfer((__int64)a1, &InitiateGuiProcessExecution, &W32kControlGuid);
  result = xxxCheckProcessAndSessionState((PEPROCESS *)a1);
  if ( (int)result >= 0 )
  {
    v73[0] = 0;
    v74 = 0LL;
    AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v73);
    *((_BYTE *)a1 + 1208) = 1;
    *((_QWORD *)a1 + 38) = 0LL;
    *((_QWORD *)a1 + 39) = 0LL;
    *((_DWORD *)a1 + 80) = 0;
    *((_DWORD *)a1 + 169) = 3;
    *((_DWORD *)a1 + 170) = 3;
    HIDWORD(TokenInformation) = a4;
    InformationToken = SeQueryInformationToken(v7, TokenIntegrityLevel, &TokenInformation);
    if ( (unsigned int)Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( InformationToken < 0 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
        {
          v8 = 0;
        }
        v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v67 = *((_DWORD *)a1 + 14);
          v14 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 69400);
          WPP_RECORDER_AND_TRACE_SF_dD(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v8,
            v13,
            v14,
            3u,
            8u,
            0x18u,
            (__int64)&WPP_ab198495905d31ffcdd691cf04187f1c_Traceguids,
            InformationToken,
            v67);
        }
        goto LABEL_104;
      }
      v15 = HIDWORD(TokenInformation);
      if ( HIDWORD(TokenInformation) && (_DWORD)TokenInformation != 4096 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
        {
          v8 = 0;
        }
        v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v17 = *((_DWORD *)a1 + 14);
          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
          WPP_RECORDER_AND_TRACE_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v8,
            v16,
            *(_QWORD *)(UserSessionState + 69400),
            3u,
            8u,
            0x19u,
            (__int64)&WPP_ab198495905d31ffcdd691cf04187f1c_Traceguids,
            v17);
        }
        goto LABEL_25;
      }
      *((_DWORD *)a1 + 218) = (_DWORD)TokenInformation;
      *((_DWORD *)a1 + 219) = v15;
      Feature_ID51538523__private_ReportDeviceUsage();
      if ( (unsigned int)PsIsProtectedProcess(*(_QWORD *)a1) )
      {
        ProcessProtection = PsGetProcessProtection(*(_QWORD *)a1);
        *((_DWORD *)a1 + 220) = ((ProcessProtection >> 4) | ((((ProcessProtection & 7) << 8) | (ProcessProtection >> 3) & 1) << 8)) << 8;
      }
      if ( (unsigned int)Feature_LearningModeSupport__private_IsEnabledDeviceUsageNoInline() )
      {
        LODWORD(v75) = 0;
        if ( SeQueryInformationToken(v7, TokenDeviceClaimAttributes|TokenAuditPolicy, &v75) >= 0 )
        {
          if ( (_DWORD)v75 )
            *((_QWORD *)a1 + 102) |= 0x4000000000uLL;
        }
      }
      v20 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) == 0
        || (v21 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v21 = 0;
      }
      v72 = v21;
      v71 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = *((_QWORD *)a1 + 102);
        v23 = *((_DWORD *)a1 + 220);
        v24 = *((_DWORD *)a1 + 219);
        LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        v25 = W32GetUserSessionState(v20);
        LOBYTE(v26) = v71;
        LOBYTE(v27) = v72;
        v70 = (v22 >> 38) & 1;
        v69 = v23;
        LODWORD(v68) = v24;
        WPP_RECORDER_AND_TRACE_SF_DDDDD(*((_QWORD *)WPP_GLOBAL_Control + 3), v27, v26, *(_QWORD *)(v25 + 69400));
        v7 = v79;
      }
    }
    else
    {
      if ( LOBYTE(WPP_MAIN_CB.SectorSize) )
      {
        if ( InformationToken < 0 || (v28 = HIDWORD(TokenInformation)) != 0 && (_DWORD)TokenInformation != 4096 )
        {
LABEL_25:
          if ( v73[0] )
            --*(_DWORD *)(v74 + 28);
          return 3221225473LL;
        }
        *((_DWORD *)a1 + 218) = (_DWORD)TokenInformation;
        *((_DWORD *)a1 + 219) = v28;
        Feature_ID51538523__private_ReportDeviceUsage();
        if ( (unsigned int)PsIsProtectedProcess(*(_QWORD *)a1) )
        {
          v29 = PsGetProcessProtection(*(_QWORD *)a1);
          *((_DWORD *)a1 + 220) = ((v29 >> 4) | ((((v29 & 7) << 8) | (v29 >> 3) & 1) << 8)) << 8;
        }
      }
      if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
      {
        v5 = 1;
      }
      v71 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v30 = *((_DWORD *)a1 + 219);
        v31 = *((_DWORD *)a1 + 218);
        v32 = *(_QWORD *)a1;
        v33 = W32GetUserSessionState(WPP_GLOBAL_Control);
        WPP_RECORDER_AND_TRACE_SF_qDD(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v5,
          v71,
          *(_QWORD *)(v33 + 69400),
          4u,
          0xEu,
          0x1Bu,
          (__int64)&WPP_ab198495905d31ffcdd691cf04187f1c_Traceguids,
          v32,
          v31,
          v30);
        v7 = v79;
      }
      if ( InformationToken < 0 )
      {
LABEL_56:
        if ( HIDWORD(v75) )
        {
          *((_DWORD *)a1 + 3) |= 0x80080000;
          *((_QWORD *)a1 + 102) |= 2uLL;
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) == 0
            || (v34 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v34 = 0;
          }
          v35 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v34 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v36 = *(_QWORD *)a1;
            v37 = W32GetUserSessionState(WPP_GLOBAL_Control);
            HIDWORD(v65) = HIDWORD(v36);
            WPP_RECORDER_AND_TRACE_SF_qD(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v34,
              v35,
              *(_QWORD *)(v37 + 69400),
              v64,
              8u,
              0x1Cu,
              (__int64)&WPP_ab198495905d31ffcdd691cf04187f1c_Traceguids);
          }
          v7 = v79;
        }
        SetProcessType(a1, v7, v78, v80);
        if ( (unsigned int)Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline() )
          SetProcessInitialCapabilities(a1);
        if ( InformationToken < 0
          || (InformationToken = SeQueryInformationToken(v7, TokenAppContainerSid, &P), InformationToken < 0) )
        {
          if ( (unsigned int)Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline() )
          {
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) == 0
              || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
            {
              v8 = 0;
            }
            v60 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v66) = *((_DWORD *)a1 + 14);
              LODWORD(v65) = InformationToken;
              v61 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 69400);
              WPP_RECORDER_AND_TRACE_SF_dD(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v8,
                v60,
                v61,
                3u,
                8u,
                0x1Du,
                (__int64)&WPP_ab198495905d31ffcdd691cf04187f1c_Traceguids,
                v65,
                v66,
                v68,
                v69,
                v70);
            }
            goto LABEL_104;
          }
        }
        else
        {
          if ( *(_QWORD *)P && (int)RtlGetAppContainerSidType(*(_QWORD *)P, &v76) >= 0 )
            *((_DWORD *)a1 + 221) = v76;
          else
            *((_DWORD *)a1 + 221) = 0;
          ExFreePoolWithTag(P, 0);
          P = 0LL;
        }
        SpriteFillColorOverrideForCurrentProcess = GetSpriteFillColorOverrideForCurrentProcess();
        v39 = *(_QWORD *)a1;
        *((_DWORD *)a1 + 271) = SpriteFillColorOverrideForCurrentProcess;
        if ( PsGetProcessWow64Process(v39) )
          *((_DWORD *)a1 + 3) |= 0x80u;
        *((_QWORD *)a1 + 112) = -1LL;
        *((_QWORD *)a1 + 113) = -1LL;
        v41 = *((_DWORD *)a1 + 3);
        if ( (v41 & 0x20) == 0 )
        {
          *((_DWORD *)a1 + 3) = v41 | 0x22;
          v42 = W32GetUserSessionState(v40);
          *(_DWORD *)(v42 + 67056) |= 0x8000000u;
          if ( (int)IszzzCalcStartCursorHideSupported(v44, v43) >= 0 )
          {
            CWinEventNoopDeferral::CWinEventNoopDeferral((CWinEventNoopDeferral *)&v71);
            zzzCalcStartCursorHide(0LL, 0LL);
            CWinEventNoopDeferral::~CWinEventNoopDeferral((CWinEventNoopDeferral *)&v71);
          }
        }
        v45 = *(_QWORD *)(W32GetUserSessionState(v40) + 36424);
        *((_QWORD *)a1 + 46) = v45;
        *(_QWORD *)(W32GetUserSessionState(v45) + 36424) = a1;
        v48 = *(void (__fastcall **)(struct _W32PROCESS *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v47, v46) + 48)
                                                          + 5224LL);
        if ( v48 )
          v48(a1);
        GetProcessLuid(0LL, (PLUID)((char *)a1 + 772));
        *((_DWORD *)a1 + 98) = *(_DWORD *)(W32GetUserSessionState(v49) + 41380);
        *((_DWORD *)a1 + 188) = 0;
        CitProcessCallout((__int64)a1, 1);
        v50 = *((_QWORD *)a1 + 102) & 0xFFFFFFFFFFBE7FFFuLL;
        *((_DWORD *)a1 + 67) = 24592;
        *((_QWORD *)a1 + 102) = v50;
        *((_WORD *)a1 + 136) = 96;
        if ( (v50 & 0x30) == 0x20 )
          *((_QWORD *)a1 + 102) = v50 | 0x100000;
        Win32KFilterSet = PsGetWin32KFilterSet();
        v52 = 0LL;
        if ( Win32KFilterSet == 5 )
          v52 = 0x1000000LL;
        v53 = *((_QWORD *)a1 + 102) & 0xFFFFFFFFF6FFFFFFuLL | v52 & 0xFFFFFFFFF7FFFFFFuLL;
        *((_QWORD *)a1 + 102) = v53;
        v55 = *(_QWORD *)(W32GetUserSessionState(v53) + 19928);
        if ( *(_WORD *)(v55 + 6998) )
        {
          v56 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v55, v54) + 48);
          v57 = *(int (**)(void))(v56 + 1040);
          if ( v57 && v57() >= 0 )
          {
            v59 = *(void (__fastcall **)(struct _W32PROCESS *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v56, v58) + 48)
                                                              + 1048LL);
            if ( v59 )
              v59(a1);
          }
          else
          {
            *((_WORD *)a1 + 136) = *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v56) + 19928) + 6998LL);
          }
        }
        Feature_WebThreatDefenseToggle__private_IsEnabledPreCheck();
        v62 = 0;
        if ( *(_DWORD *)(W32GetUserSessionState(v63) + 42616) )
        {
          if ( !W32GetInputMonitorSessionState() )
            MicrosoftTelemetryAssertTriggeredNoArgsKM();
          v62 = 1;
        }
        *((_DWORD *)a1 + 69) = *((_DWORD *)a1 + 69) & 0xFFFFFFFB | (4 * v62);
        *((_QWORD *)a1 + 137) = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                               * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
LABEL_104:
        if ( v73[0] )
          --*(_DWORD *)(v74 + 28);
        return (unsigned int)InformationToken;
      }
    }
    InformationToken = SeQueryInformationToken(v7, TokenUIAccess, (PVOID *)((char *)&v75 + 4));
    goto LABEL_56;
  }
  return result;
}
