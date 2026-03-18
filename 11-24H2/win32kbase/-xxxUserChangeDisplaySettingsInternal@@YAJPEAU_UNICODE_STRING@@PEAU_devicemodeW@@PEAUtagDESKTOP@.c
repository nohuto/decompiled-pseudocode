/*
 * XREFs of ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400E5504
 * Callers:
 *     xxxUserChangeDisplaySettings @ 0x1400E4890 (xxxUserChangeDisplaySettings.c)
 * Callees:
 *     ?PreAllocateForPrimaryMonitorChange@@YAHXZ @ 0x14000B480 (-PreAllocateForPrimaryMonitorChange@@YAHXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x140087D30 (GreIncrementDisplaySettingsUniqueness.c)
 *     PowerDimUndimResend @ 0x1400920B8 (PowerDimUndimResend.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x140092790 (McTemplateK0_EtwWriteTransfer.c)
 *     PopAndFreeW32ThreadLock @ 0x1400991CC (PopAndFreeW32ThreadLock.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxInternalInvalidate @ 0x1400A0EE8 (xxxInternalInvalidate.c)
 *     xxxResetDisplayDevice @ 0x1400A2770 (xxxResetDisplayDevice.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C0560 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     DispBrokerGetCurrentMode @ 0x1400C83E0 (DispBrokerGetCurrentMode.c)
 *     IsRemoteConnection @ 0x1400C88B4 (IsRemoteConnection.c)
 *     ?DispBrokerChangeDisplaySettings@@YAJU_LUID@@IPEAU_devicemodeW@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_NAEAW4_DXGK_DIAG_CDS_STAGE@@@Z @ 0x1400C9744 (-DispBrokerChangeDisplaySettings@@YAJU_LUID@@IPEAU_devicemodeW@@IPEAU_DXGK_DISPLAY_SCENARIO_CONT.c)
 *     DrvQueryMDEVPowerState @ 0x1400F7540 (DrvQueryMDEVPowerState.c)
 *     DrvGetAdapterInfoFromGraphicsDevice @ 0x140107A4C (DrvGetAdapterInfoFromGraphicsDevice.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z @ 0x14010FD70 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z.c)
 *     zzzUpdateCursorImage @ 0x140129D00 (zzzUpdateCursorImage.c)
 *     DrvChangeDisplaySettings @ 0x140137250 (DrvChangeDisplaySettings.c)
 *     DrvSetDisplayConfig @ 0x140137640 (DrvSetDisplayConfig.c)
 *     DrvChangeDisplaySettingsPreValidate @ 0x140138FFC (DrvChangeDisplaySettingsPreValidate.c)
 *     SetPointer @ 0x140145A60 (SetPointer.c)
 *     SafeEnableMDEV @ 0x140147E70 (SafeEnableMDEV.c)
 *     DrvSetPruneFlag @ 0x140148A80 (DrvSetPruneFlag.c)
 *     ?TrackFullscreenMode@@YAXH@Z @ 0x14014D6C8 (-TrackFullscreenMode@@YAXH@Z.c)
 *     FreeAllSpbs @ 0x14014EAD8 (FreeAllSpbs.c)
 *     bSetDevDragRect @ 0x140152654 (bSetDevDragRect.c)
 *     SafeDisableMDEV @ 0x140156D70 (SafeDisableMDEV.c)
 *     IszzzUpdateCursorImageSupported @ 0x14015AFEC (IszzzUpdateCursorImageSupported.c)
 *     DrvSetVideoParameters @ 0x14015B8E4 (DrvSetVideoParameters.c)
 *     LogDiagCDS @ 0x140199A8C (LogDiagCDS.c)
 *     xxxUserResetDisplayDevice @ 0x14019E84C (xxxUserResetDisplayDevice.c)
 *     Feature_LogCDSDiagBeforeBroadcast__private_IsEnabledDeviceUsageNoInline @ 0x1401AB9A4 (Feature_LogCDSDiagBeforeBroadcast__private_IsEnabledDeviceUsageNoInline.c)
 *     IsxxxBroadcastDisplaySettingsChangeSupported @ 0x14023B550 (IsxxxBroadcastDisplaySettingsChangeSupported.c)
 *     StopFade @ 0x14023B7CC (StopFade.c)
 *     xxxBroadcastDisplaySettingsChange @ 0x14023B8F8 (xxxBroadcastDisplaySettingsChange.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxUserChangeDisplaySettingsInternal(
        struct _UNICODE_STRING *a1,
        struct _devicemodeW *a2,
        struct tagDESKTOP *a3,
        unsigned int a4,
        void *a5,
        enum _MODE a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  char v8; // si
  bool v9; // bl
  bool v10; // di
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  __int64 v14; // rcx
  bool v15; // bl
  bool v16; // di
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx
  bool v20; // bl
  bool v21; // di
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  bool v25; // bl
  bool v26; // di
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  bool v30; // bl
  bool v31; // di
  __int64 v32; // rax
  int v33; // r8d
  int v34; // edx
  bool v35; // bl
  bool v36; // di
  __int64 v37; // rax
  int v38; // r8d
  int v39; // edx
  bool v40; // bl
  bool v41; // di
  __int64 v42; // rax
  int v43; // r8d
  int v44; // edx
  bool v45; // bl
  bool v46; // di
  __int64 v47; // rax
  int v48; // r8d
  int v49; // edx
  bool v50; // bl
  bool v51; // di
  __int64 v52; // rax
  int v53; // r8d
  int v54; // edx
  bool v55; // bl
  bool v56; // di
  __int64 v57; // rax
  int v58; // r8d
  int v59; // edx
  bool v60; // bl
  bool v61; // di
  __int64 v62; // rax
  int v63; // r8d
  int v64; // edx
  bool v65; // bl
  bool v66; // di
  __int64 v67; // rax
  int v68; // r8d
  int v69; // edx
  bool v70; // bl
  bool v71; // di
  __int64 v72; // rax
  int v73; // r8d
  int v74; // edx
  bool v75; // bl
  bool v76; // di
  __int64 v77; // rax
  int v78; // r8d
  int v79; // edx
  __int64 v80; // rax
  int v81; // ebx
  int v83; // eax
  __int64 v84; // rbx
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rdx
  struct tagDESKTOP *v90; // rdi
  __int64 v91; // rbx
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rdx
  __int64 v97; // rcx
  bool v98; // cf
  __int64 v99; // rcx
  int v100; // ebx
  int CurrentMode; // eax
  __int64 v102; // rcx
  enum _MODE v103; // r13d
  int v104; // edi
  __int64 v105; // rdi
  ULONG TimeIncrement; // eax
  struct _LUID v107; // rcx
  __int64 v108; // r14
  int v109; // edx
  __int64 v110; // r15
  int IsEnabledDeviceUsageNoInline; // eax
  int v112; // r12d
  __int64 v113; // rdx
  __int64 v114; // r8
  __int64 v115; // rcx
  const UNICODE_STRING *v116; // rbx
  int v117; // r14d
  __int64 v118; // rdx
  __int64 v119; // rcx
  int (*v120)(void); // rax
  __int64 v121; // rdx
  __int64 v122; // rcx
  int (*v123)(void); // rax
  __int64 v124; // rcx
  int (*v125)(void); // rax
  __int64 v126; // rax
  int v127; // edi
  __int64 *v128; // rcx
  __int64 **v129; // rax
  __int64 v130; // r15
  __int64 v131; // rax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v132; // r12
  unsigned int v133; // r14d
  __int64 v134; // rbx
  __int64 v135; // rcx
  __int64 v136; // rcx
  __int64 v137; // rcx
  __int64 v138; // rcx
  struct _MDEV *v139; // rdx
  __int64 v140; // rax
  __int64 v141; // rcx
  __int64 v142; // rbx
  __int64 v143; // rcx
  __int64 *v144; // rcx
  __int64 v145; // rdx
  char v146; // bl
  __int64 v147; // rax
  int v148; // [rsp+28h] [rbp-C1h]
  __int64 v149; // [rsp+48h] [rbp-A1h]
  int v150; // [rsp+48h] [rbp-A1h]
  _BYTE v151[4]; // [rsp+98h] [rbp-51h] BYREF
  unsigned int v152[2]; // [rsp+9Ch] [rbp-4Dh] BYREF
  int v153; // [rsp+A4h] [rbp-45h]
  int v154; // [rsp+A8h] [rbp-41h] BYREF
  struct _LUID v155; // [rsp+B0h] [rbp-39h] BYREF
  __int64 v156; // [rsp+B8h] [rbp-31h] BYREF
  __int64 v157; // [rsp+C0h] [rbp-29h] BYREF
  _BYTE v158[16]; // [rsp+C8h] [rbp-21h] BYREF
  __int64 v159; // [rsp+D8h] [rbp-11h]
  char v163; // [rsp+150h] [rbp+67h] BYREF

  v157 = 0LL;
  v163 = 0;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    McTemplateK0_EtwWriteTransfer((__int64)a1, &ChangeDisplayModeStart, 0LL);
  v8 = 1;
  v9 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && _bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v12) = v10;
    LOBYTE(v13) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v13,
      v12,
      *(_QWORD *)(UserSessionState + 69400),
      4,
      14,
      12,
      (__int64)&WPP_2a4b79c955e638d8cf604a8936dc0e34_Traceguids);
  }
  v14 = (__int64)WPP_GLOBAL_Control;
  v15 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && _bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v18) = v16;
    LOBYTE(v19) = v15;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v19,
      v18,
      *(_QWORD *)(v17 + 69400),
      4,
      14,
      13,
      (__int64)&WPP_2a4b79c955e638d8cf604a8936dc0e34_Traceguids);
  }
  v152[0] = a4 & 1;
  if ( (a4 & 1) != 0 )
  {
    v14 = (__int64)WPP_GLOBAL_Control;
    v20 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && _bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v22 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v23) = v21;
      LOBYTE(v24) = v20;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v24,
        v23,
        *(_QWORD *)(v22 + 69400),
        4,
        14,
        14,
        (__int64)&WPP_2a4b79c955e638d8cf604a8936dc0e34_Traceguids);
    }
  }
  if ( (a4 & 2) != 0 )
  {
    v14 = (__int64)WPP_GLOBAL_Control;
    v25 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && _bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v27 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v28) = v26;
      LOBYTE(v29) = v25;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v29,
        v28,
        *(_QWORD *)(v27 + 69400),
        4,
        14,
        15,
        (__int64)&WPP_2a4b79c955e638d8cf604a8936dc0e34_Traceguids);
    }
  }
  v152[1] = a4 & 4;
  if ( (a4 & 4) != 0 )
  {
    v14 = (__int64)WPP_GLOBAL_Control;
    v30 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && _bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v32 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v33) = v31;
      LOBYTE(v34) = v30;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v34,
        v33,
        *(_QWORD *)(v32 + 69400),
        4,
        14,
        16,
        (__int64)&WPP_2a4b79c955e638d8cf604a8936dc0e34_Traceguids);
    }
  }
  if ( (a4 & 8) != 0 )
  {
    v14 = (__int64)WPP_GLOBAL_Control;
    v35 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && _bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v36 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v35 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v37 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v38) = v36;
      LOBYTE(v39) = v35;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v39,
        v38,
        *(_QWORD *)(v37 + 69400),
        4,
        14,
        17,
        (__int64)&WPP_2a4b79c955e638d8cf604a8936dc0e34_Traceguids);
    }
  }
  if ( (a4 & 0x10) != 0 )
  {
    v14 = (__int64)WPP_GLOBAL_Control;
    v40 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && _bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v41 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v40 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v42 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v43) = v41;
      LOBYTE(v44) = v40;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v44,
        v43,
        *(_QWORD *)(v42 + 69400),
        4,
        14,
        18,
        (__int64)&WPP_2a4b79c955e638d8cf604a8936dc0e34_Traceguids);
    }
  }
  v155.LowPart = a4 & 0x40000000;
  if ( (a4 & 0x40000000) != 0 )
  {
    v14 = (__int64)WPP_GLOBAL_Control;
    v45 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && _bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v46 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v45 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v47 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v48) = v46;
      LOBYTE(v49) = v45;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v49,
        v48,
        *(_QWORD *)(v47 + 69400),
        4,
        14,
        19,
        (__int64)&WPP_2a4b79c955e638d8cf604a8936dc0e34_Traceguids);
    }
  }
  v154 = a4 & 0x20000000;
  if ( (a4 & 0x20000000) != 0 )
  {
    v14 = (__int64)WPP_GLOBAL_Control;
    v50 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && _bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v51 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v50 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v52 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v53) = v51;
      LOBYTE(v54) = v50;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v54,
        v53,
        *(_QWORD *)(v52 + 69400),
        4,
        14,
        20,
        (__int64)&WPP_2a4b79c955e638d8cf604a8936dc0e34_Traceguids);
    }
  }
  LODWORD(v156) = a4 & 0x10000000;
  if ( (a4 & 0x10000000) != 0 )
  {
    v14 = (__int64)WPP_GLOBAL_Control;
    v55 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && _bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v56 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v55 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v57 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v58) = v56;
      LOBYTE(v59) = v55;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v59,
        v58,
        *(_QWORD *)(v57 + 69400),
        4,
        14,
        21,
        (__int64)&WPP_2a4b79c955e638d8cf604a8936dc0e34_Traceguids);
    }
  }
  v153 = a4 & 0x20;
  if ( (a4 & 0x20) != 0 )
  {
    v14 = (__int64)WPP_GLOBAL_Control;
    v60 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && _bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v61 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v60 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v62 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v63) = v61;
      LOBYTE(v64) = v60;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v64,
        v63,
        *(_QWORD *)(v62 + 69400),
        4,
        14,
        22,
        (__int64)&WPP_2a4b79c955e638d8cf604a8936dc0e34_Traceguids);
    }
  }
  if ( (a4 & 0x100) != 0 )
  {
    v14 = (__int64)WPP_GLOBAL_Control;
    v65 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && _bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xDu)
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v66 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v65 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v67 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v68) = v66;
      LOBYTE(v69) = v65;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v69,
        v68,
        *(_QWORD *)(v67 + 69400),
        4,
        14,
        23,
        (__int64)&WPP_2a4b79c955e638d8cf604a8936dc0e34_Traceguids);
    }
  }
  if ( (a4 & 0x200) != 0 )
  {
    v14 = (__int64)WPP_GLOBAL_Control;
    v70 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v71 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v70 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v72 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v73) = v71;
      LOBYTE(v74) = v70;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v74,
        v73,
        *(_QWORD *)(v72 + 69400),
        4,
        14,
        24,
        (__int64)&WPP_2a4b79c955e638d8cf604a8936dc0e34_Traceguids);
    }
  }
  if ( (a4 & 0x4000000) != 0 )
  {
    v14 = (__int64)WPP_GLOBAL_Control;
    v75 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v76 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v75 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v77 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v78) = v76;
      LOBYTE(v79) = v75;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v79,
        v78,
        *(_QWORD *)(v77 + 69400),
        4,
        14,
        25,
        (__int64)&WPP_2a4b79c955e638d8cf604a8936dc0e34_Traceguids);
    }
  }
  if ( (a4 & 0x3FFF800) != 0 )
    goto LABEL_154;
  v80 = W32GetUserSessionState(v14);
  if ( (unsigned int)DrvQueryMDEVPowerState(*(_QWORD *)(*(_QWORD *)(v80 + 57008) + 16LL)) )
  {
    if ( *(_DWORD *)(W32GetUserSessionState(v14) + 43316) )
    {
      if ( v153 )
      {
        W32GetUserSessionState(v14);
        v83 = DrvSetVideoParameters(a1, 1);
        goto LABEL_140;
      }
LABEL_193:
      if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        McTemplateK0_EtwWriteTransfer(v14, &ChangeDisplayModeEnd, 0LL);
      return 0xFFFFFFFFLL;
    }
    if ( (a4 & 0x10000008) == 0 || v152[0] )
    {
      v14 = a4 & 0x60000000;
      if ( !(_DWORD)v156 || !(_DWORD)v14 )
      {
        if ( (a4 & 0x80000004) == 0x80000004 )
        {
          if ( (_DWORD)v14 )
            goto LABEL_154;
LABEL_150:
          if ( (a4 & 0x100) != 0 && a4 != 256 || (a4 & 0x200) != 0 && a4 != 512 )
            goto LABEL_154;
          if ( (*(_DWORD *)(W32GetUserSessionState(v14) + 67056) & 0x20000000) != 0 )
          {
            v84 = *(_QWORD *)(W32GetUserGdiSessionState() + 40);
            if ( PsGetCurrentProcess(v86, v85, v87, v88) != v84 || !(unsigned int)IsRemoteConnection(v14, v89) )
              goto LABEL_193;
          }
          v90 = a3;
          if ( !a3 || (*((_DWORD *)a3 + 12) & 8) != 0 )
          {
            v90 = (struct tagDESKTOP *)*((_QWORD *)PtiCurrent(v14) + 62);
            a3 = v90;
          }
          v91 = *(_QWORD *)(W32GetUserGdiSessionState() + 40);
          if ( PsGetCurrentProcess(v93, v92, v94, v95) == v91 )
          {
            if ( !v90 )
              a3 = *(struct tagDESKTOP **)(W32GetUserSessionState(v97) + 19200);
          }
          else if ( v90 != *(struct tagDESKTOP **)(W32GetUserSessionState(v97) + 19200) )
          {
            if ( !v153 )
              goto LABEL_193;
            goto LABEL_171;
          }
          if ( (a4 & 0x100) != 0 )
          {
            v96 = 0LL;
LABEL_168:
            v81 = DrvSetPruneFlag(a1, v96, (unsigned int)a6);
            goto LABEL_131;
          }
          if ( (a4 & 0x200) != 0 )
          {
            LOBYTE(v96) = 1;
            goto LABEL_168;
          }
          v98 = v154 != 0;
          v154 = -v154;
          v99 = v152[1] != 0 ? 0x10 : 0;
          v100 = v152[0] | v99 | ((a4 & 0x4000000) != 0 ? 0x20 : 0) | (v98 ? 8 : 0) | (a4 >> 5) & 4 | ((a4 & 0x10000002) == 0 ? 2 : 0);
          CurrentMode = DispBrokerGetCurrentMode(v99);
          v103 = a6;
          if ( CurrentMode == 3 )
          {
            v156 = 0LL;
            v152[0] = 1;
            W32GetUserSessionState(v102);
            v104 = DrvChangeDisplaySettingsPreValidate(a1, -(v100 & 1), (__int64)&v156, (__int64)v152);
            if ( v104 )
            {
LABEL_245:
              if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
                McTemplateK0_EtwWriteTransfer(v14, &ChangeDisplayModeEnd, 0LL);
              return (unsigned int)v104;
            }
            if ( v152[0] )
            {
              v105 = MEMORY[0xFFFFF78000000320];
              TimeIncrement = KeQueryTimeIncrement();
              v154 = 0;
              v107 = 0LL;
              v108 = v156;
              v109 = -1;
              v110 = v105 * TimeIncrement;
              v155 = 0LL;
              v152[0] = -1;
              if ( v156 )
              {
                DrvGetAdapterInfoFromGraphicsDevice(v156, &v155, v152);
                v107 = v155;
                v109 = v152[0];
              }
              v104 = DispBrokerChangeDisplaySettings(
                       v107,
                       v109,
                       a2,
                       a4,
                       a7,
                       v103 == UserMode,
                       (enum _DXGK_DIAG_CDS_STAGE *)&v154);
              if ( v104 >= 0 )
                TrackFullscreenMode(v152[1]);
              IsEnabledDeviceUsageNoInline = Feature_LogCDSDiagBeforeBroadcast__private_IsEnabledDeviceUsageNoInline();
              v112 = v154;
              if ( IsEnabledDeviceUsageNoInline )
                LogDiagCDS(a1, a2, v108, (unsigned int)v103, v100, v110, v104, v104, v154, 0, 0LL);
              if ( v152[1] && (int)IsxxxBroadcastDisplaySettingsChangeSupported() >= 0 )
                xxxBroadcastDisplaySettingsChange(a3, v113, v114, 0LL);
              if ( (unsigned int)Feature_LogCDSDiagBeforeBroadcast__private_IsEnabledDeviceUsageNoInline() )
              {
                v116 = a1;
              }
              else
              {
                v148 = v100;
                v116 = a1;
                LogDiagCDS(a1, a2, v108, (unsigned int)v103, v148, v110, v104, v104, v112, 0, 0LL);
              }
LABEL_235:
              if ( v104 >= 0 && v153 )
              {
                W32GetUserSessionState(v115);
                v104 = DrvSetVideoParameters(v116, 0);
              }
              v14 = (__int64)WPP_GLOBAL_Control;
              if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
                || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
              {
                v8 = 0;
              }
              v146 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v147 = W32GetUserSessionState(WPP_GLOBAL_Control);
                LODWORD(v149) = v104;
                WPP_RECORDER_AND_TRACE_SF_D(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v8,
                  v146,
                  *(_QWORD *)(v147 + 69400),
                  4u,
                  0xEu,
                  0x1Au,
                  (__int64)&WPP_2a4b79c955e638d8cf604a8936dc0e34_Traceguids,
                  v149);
              }
              goto LABEL_245;
            }
LABEL_191:
            v117 = -__CFSHR__(v100, 2);
            if ( __CFSHR__(v100, 2) )
            {
              if ( !(unsigned int)PreAllocateForPrimaryMonitorChange() )
                goto LABEL_193;
              SetPointer(0LL);
              v14 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v119, v118) + 48);
              v120 = *(int (**)(void))(v14 + 3856);
              if ( v120 && v120() >= 0 )
                FreeAllSpbs();
            }
            if ( *(_QWORD *)(W32GetUserSessionState(v14) + 43040) )
            {
              v122 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v122, v121) + 48);
              v123 = *(int (**)(void))(v122 + 3872);
              if ( v123 )
              {
                if ( v123() >= 0 )
                  StopFade();
              }
            }
            v124 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v122, v121) + 24);
            v125 = *(int (**)(void))(v124 + 2568);
            if ( v125 && v125() >= 0 )
            {
              v126 = W32GetUserSessionState(v124);
              bSetDevDragRect(*(_QWORD *)(*(_QWORD *)(v126 + 57008) + 48LL));
            }
            v127 = -((a4 & 0x40) == 0);
            v128 = *(__int64 **)(W32GetUserSessionState(v124) + 57008);
            v156 = v128[2];
            if ( a3 )
            {
              v129 = (__int64 **)*((_QWORD *)a3 + 1);
              v128 = *v129;
              v130 = **v129;
            }
            else
            {
              LODWORD(v130) = 0;
            }
            v131 = W32GetUserSessionState(v128);
            v132 = a7;
            v150 = v100;
            v116 = a1;
            v104 = DrvChangeDisplaySettings(
                     (_DWORD)a1,
                     *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v131 + 57008) + 104LL) + 80LL),
                     (_DWORD)a2,
                     v130,
                     v103,
                     v156,
                     (__int64)&v157,
                     v127,
                     v150,
                     (__int64)&v163,
                     (__int64)a7);
            Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v158, a3);
            if ( !v117 )
              goto LABEL_232;
            if ( v104 == 2 )
            {
              TrackFullscreenMode(v152[1]);
              if ( v155.LowPart )
              {
                if ( (unsigned int)SafeDisableMDEV(1LL) )
                  SafeEnableMDEV(1LL);
                xxxUserResetDisplayDevice();
              }
              v104 = 0;
              goto LABEL_227;
            }
            if ( v104 )
            {
              if ( v104 >= 0 )
                goto LABEL_227;
              xxxUserResetDisplayDevice();
              if ( !v163 )
                goto LABEL_227;
              v151[0] = 0;
              v139 = *(struct _MDEV **)(*(_QWORD *)(W32GetUserSessionState(v138) + 57008) + 16LL);
              v140 = a3 ? ***((_QWORD ***)a3 + 1) : 0LL;
              if ( (int)DrvSetDisplayConfig(
                          0,
                          0,
                          2447,
                          2,
                          v140,
                          0,
                          0LL,
                          0LL,
                          v139,
                          (__int64)&v157,
                          0LL,
                          0LL,
                          (__int64)v151,
                          0LL,
                          0LL,
                          (__int64)v132,
                          0LL) < 0 )
                goto LABEL_227;
              TrackFullscreenMode(0);
              if ( v151[0] )
                goto LABEL_227;
              v142 = v157;
              v143 = *(_QWORD *)(W32GetUserSessionState(v141) + 57008);
              *(_QWORD *)(v143 + 16) = v142;
              GreIncrementDisplaySettingsUniqueness(v143);
              v155.LowPart = 0;
            }
            else
            {
              v133 = v152[1];
              TrackFullscreenMode(v152[1]);
              v134 = v157;
              v136 = *(_QWORD *)(W32GetUserSessionState(v135) + 57008);
              *(_QWORD *)(v136 + 16) = v134;
              GreIncrementDisplaySettingsUniqueness(v136);
              PowerDimUndimResend(v137);
              v155.LowPart = v133 != 0;
            }
            xxxResetDisplayDevice((__int64)a3, (int *)&v155, 0LL);
            v116 = a1;
LABEL_227:
            if ( a3 )
            {
              v144 = (__int64 *)*((_QWORD *)a3 + 1);
              v145 = *(unsigned int *)(*v144 + 64);
              if ( (v145 & 1) == 0 )
                xxxInternalInvalidate(v144[3], v145);
            }
            SetPointer(1LL);
            if ( (int)IszzzUpdateCursorImageSupported() >= 0 )
              zzzUpdateCursorImage();
LABEL_232:
            if ( v159 != -1 )
              PopAndFreeW32ThreadLock((__int64)v158);
            goto LABEL_235;
          }
          if ( (unsigned int)DispBrokerGetCurrentMode(v102) != 2 )
            goto LABEL_191;
          if ( !v153 )
            goto LABEL_193;
LABEL_171:
          W32GetUserSessionState(v14);
          v83 = DrvSetVideoParameters(a1, 0);
LABEL_140:
          v81 = v83;
          if ( v83 >= 0 )
            goto LABEL_131;
          goto LABEL_193;
        }
        if ( (_DWORD)v14 != 1610612736 )
          goto LABEL_150;
      }
    }
LABEL_154:
    if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      McTemplateK0_EtwWriteTransfer(v14, &ChangeDisplayModeEnd, 0LL);
    return 4294967292LL;
  }
  if ( v153 )
  {
    W32GetUserSessionState(v14);
    v81 = DrvSetVideoParameters(a1, 1);
    if ( v81 >= 0 )
    {
LABEL_131:
      if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        McTemplateK0_EtwWriteTransfer(v14, &ChangeDisplayModeEnd, 0LL);
      return (unsigned int)v81;
    }
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    McTemplateK0_EtwWriteTransfer(v14, &ChangeDisplayModeEnd, 0LL);
  return 4294967291LL;
}
