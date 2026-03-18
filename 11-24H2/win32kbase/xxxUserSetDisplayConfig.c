/*
 * XREFs of xxxUserSetDisplayConfig @ 0x1401636C0
 * Callers:
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1400EAC08 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400F75AC (-DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESK.c)
 *     xxxDestroyThreadInfo @ 0x14015F444 (xxxDestroyThreadInfo.c)
 *     NtUserSetDisplayConfig @ 0x140170CE0 (NtUserSetDisplayConfig.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1401ABAF0 (xxxDisplayDiagBlackScreenDetected.c)
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401ADE38 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401AE8CC (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1401C9DD0 (DrvDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     ?PreAllocateForPrimaryMonitorChange@@YAHXZ @ 0x14000B480 (-PreAllocateForPrimaryMonitorChange@@YAHXZ.c)
 *     UserIsConsoleConnection @ 0x140013950 (UserIsConsoleConnection.c)
 *     UserReferenceDwmApiPort @ 0x1400243F0 (UserReferenceDwmApiPort.c)
 *     ReferenceDwmApiPort @ 0x140041C90 (ReferenceDwmApiPort.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x140087D30 (GreIncrementDisplaySettingsUniqueness.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140091E28 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     PowerDimUndimResend @ 0x1400920B8 (PowerDimUndimResend.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxInternalInvalidate @ 0x1400A0EE8 (xxxInternalInvalidate.c)
 *     xxxResetDisplayDevice @ 0x1400A2770 (xxxResetDisplayDevice.c)
 *     DispBrokerGetCurrentMode @ 0x1400C83E0 (DispBrokerGetCurrentMode.c)
 *     LogDiagSDC @ 0x1400E51A0 (LogDiagSDC.c)
 *     DrvQueryMDEVPowerState @ 0x1400F7540 (DrvQueryMDEVPowerState.c)
 *     zzzUpdateCursorImage @ 0x140129D00 (zzzUpdateCursorImage.c)
 *     DrvSetDisplayConfig @ 0x140137640 (DrvSetDisplayConfig.c)
 *     SetPointer @ 0x140145A60 (SetPointer.c)
 *     SafeEnableMDEV @ 0x140147E70 (SafeEnableMDEV.c)
 *     ?TrackFullscreenMode@@YAXH@Z @ 0x14014D6C8 (-TrackFullscreenMode@@YAXH@Z.c)
 *     FreeAllSpbs @ 0x14014EAD8 (FreeAllSpbs.c)
 *     bSetDevDragRect @ 0x140152654 (bSetDevDragRect.c)
 *     SafeDisableMDEV @ 0x140156D70 (SafeDisableMDEV.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     xxxUserResetDisplayDevice @ 0x14019E84C (xxxUserResetDisplayDevice.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A2B00 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ?DispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIQEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x1401A8CE4 (-DispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIQEAU_DXGK_DISPLAY_SCENA.c)
 *     Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x1401A8EC8 (Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline.c)
 *     DrvSetDisplayConfigValidateParams @ 0x1401CB440 (DrvSetDisplayConfigValidateParams.c)
 *     LogDiagSDCAccessDenied @ 0x1401CCC50 (LogDiagSDCAccessDenied.c)
 *     DwmAsyncNotifyRotationModeChange @ 0x14023ADD8 (DwmAsyncNotifyRotationModeChange.c)
 *     StopFade @ 0x14023B7CC (StopFade.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxUserSetDisplayConfig(
        unsigned int a1,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        char a6,
        __int64 a7,
        bool *a8,
        _BYTE *a9,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a10,
        _DWORD *a11)
{
  _DWORD *v11; // r15
  __int64 v12; // rsi
  unsigned int v13; // r14d
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 UserSessionState; // rdi
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // rbx
  struct _UNICODE_STRING *v27; // rbx
  struct _UNICODE_STRING *v28; // rax
  unsigned int v29; // ecx
  signed int v30; // edi
  int v31; // r15d
  char v32; // bl
  unsigned int v33; // r12d
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 DxgkWin32kInterface; // rax
  _DWORD *v38; // rdi
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdx
  unsigned int (*v42)(void); // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  int (*v45)(void); // rax
  __int64 v46; // rax
  __int64 v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // rcx
  void (__fastcall *v50)(__int64, _QWORD); // rax
  __int64 v51; // rcx
  __int64 v52; // rcx
  signed int v53; // ecx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rdx
  struct _MDEV *v62; // rdx
  void *v63; // rax
  int v64; // eax
  __int64 v65; // rcx
  struct _MDEV *v66; // rdx
  void *v67; // rax
  _DWORD *v68; // r12
  __int64 *v69; // rdx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rcx
  __int16 v73; // bx
  __int64 v74; // rcx
  __int64 v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // rbx
  __int64 v78; // rcx
  struct _MDEV *v79; // rbx
  __int64 v80; // rcx
  __int64 v81; // rcx
  __int64 v82; // rax
  char v83; // al
  char v85[4]; // [rsp+90h] [rbp-80h] BYREF
  unsigned int v86; // [rsp+94h] [rbp-7Ch] BYREF
  char v87; // [rsp+98h] [rbp-78h] BYREF
  char v88; // [rsp+99h] [rbp-77h] BYREF
  char v89; // [rsp+9Ah] [rbp-76h]
  unsigned int v90; // [rsp+9Ch] [rbp-74h]
  _DWORD *v91; // [rsp+A0h] [rbp-70h]
  _BYTE v92[4]; // [rsp+A8h] [rbp-68h] BYREF
  unsigned int v93; // [rsp+ACh] [rbp-64h] BYREF
  int v94; // [rsp+B0h] [rbp-60h] BYREF
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v95; // [rsp+B8h] [rbp-58h]
  __int64 v96; // [rsp+C0h] [rbp-50h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v97; // [rsp+C8h] [rbp-48h]
  struct _MDEV *v98; // [rsp+D0h] [rbp-40h] BYREF
  bool *v99; // [rsp+D8h] [rbp-38h]
  _BYTE *v100; // [rsp+E0h] [rbp-30h]
  __int64 v101; // [rsp+E8h] [rbp-28h]
  _OWORD v102[2]; // [rsp+F0h] [rbp-20h] BYREF
  __int64 v103; // [rsp+110h] [rbp+0h]

  v11 = a11;
  v12 = a5;
  v96 = a7;
  v13 = a4;
  v99 = a8;
  v100 = a9;
  v97 = a10;
  v103 = 0LL;
  v98 = 0LL;
  v94 = 0;
  v85[0] = 0;
  v87 = 0;
  v88 = 0;
  v86 = 0;
  memset(v102, 0, sizeof(v102));
  v95 = a2;
  v16 = MEMORY[0xFFFFF78000000320];
  v90 = a1;
  v91 = a11;
  v89 = 0;
  v101 = v16 * KeQueryTimeIncrement();
  if ( !a5 || (*(_DWORD *)(a5 + 48) & 8) != 0 )
    v12 = *((_QWORD *)PtiCurrent(v17) + 62);
  UserSessionState = W32GetUserSessionState(v17);
  v20 = *(_QWORD *)(W32GetUserGdiSessionState(v19) + 40);
  if ( PsGetCurrentProcess(v22, v21, v23, v24) == v20 || !a6 || (v13 & 0x10) != 0 )
  {
    if ( !v12 )
      v12 = *(_QWORD *)(UserSessionState + 19200);
  }
  else
  {
    if ( *(_DWORD *)(W32GetUserSessionState(v25) + 62872) )
      v26 = *(_QWORD *)(UserSessionState + 19208);
    else
      v26 = *(_QWORD *)(UserSessionState + 19200);
    if ( v12 != v26 )
    {
      if ( v26 && ObQueryNameInfo(v26) )
        v27 = (struct _UNICODE_STRING *)(ObQueryNameInfo(v26) + 8);
      else
        v27 = 0LL;
      if ( v12 && ObQueryNameInfo(v12) )
        v28 = (struct _UNICODE_STRING *)(ObQueryNameInfo(v12) + 8);
      else
        v28 = 0LL;
      LogDiagSDCAccessDenied(v28, v27);
      v29 = 49;
      v30 = -1073741790;
      v86 = 49;
      goto LABEL_108;
    }
  }
  v31 = a3 & 0x10000;
  if ( ((a3 & 0x10000) != 0) == (v96 != 0) )
  {
    if ( v31 )
    {
      v13 |= 4u;
      if ( (a3 & 0x20000000) != 0 )
        v13 = a4 | 0x14;
      if ( (a3 & 0x10000000) != 0 )
        v13 |= 0x200u;
    }
    v32 = a6;
    v33 = v90;
    v30 = DrvSetDisplayConfigValidateParams(v90, (_DWORD)v95, a3, v13, a6);
    if ( v30 < 0 )
    {
      v11 = v91;
      v29 = 1;
      v86 = 1;
      goto LABEL_109;
    }
    if ( !v31 )
    {
      if ( UserIsConsoleConnection() || (v34 = 2191LL, (a3 & 0x88F) != 0x88F) )
      {
        if ( (v13 & 0xC01) == 0 )
        {
          if ( (unsigned int)DispBrokerGetCurrentMode(v34) == 3 )
          {
            v30 = DispBrokerSetDisplayConfig(v90, v95, a3, v13, v97, a6 != 0);
            if ( v30 >= 0 || (v13 & 0x200) == 0 )
            {
              v29 = 56;
LABEL_39:
              v11 = v91;
              v86 = v29;
              goto LABEL_109;
            }
          }
          else if ( (unsigned int)DispBrokerGetCurrentMode(v35) == 2 )
          {
            v29 = 55;
            v30 = -1073741790;
            goto LABEL_39;
          }
        }
      }
    }
    if ( UserIsConsoleConnection() && v31 )
    {
      if ( v91 )
      {
        LODWORD(v91) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1618LL);
      }
      DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v36);
      (*(void (__fastcall **)(_OWORD *))(DxgkWin32kInterface + 808))(v102);
      v38 = v102;
      v91 = v102;
    }
    else
    {
      v38 = v91;
    }
    if ( (a3 & 0x80) != 0 )
    {
      if ( *(_DWORD *)(W32GetUserSessionState(v36) + 43316) )
      {
        v29 = 27;
LABEL_51:
        v86 = v29;
        v30 = -1073741823;
        goto LABEL_107;
      }
      v40 = W32GetUserSessionState(v39);
      if ( !(unsigned int)DrvQueryMDEVPowerState(*(_QWORD *)(*(_QWORD *)(v40 + 57008) + 16LL)) )
      {
        v29 = 28;
        goto LABEL_51;
      }
      if ( (a3 & 0x20010000) == 0x20010000 && v90 == 1 )
      {
        v42 = *(unsigned int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(536936448LL, v41) + 48) + 3736LL);
        if ( v42 )
        {
          if ( v42() )
          {
            v45 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v44, v43) + 48) + 4248LL);
            if ( v45 )
            {
              if ( v45() >= 0 )
              {
                v46 = ReferenceDwmApiPort();
                DwmAsyncNotifyRotationModeChange(v46, 1LL);
                v47 = UserReferenceDwmApiPort();
                LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v92, 1);
                v50 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v49, v48) + 48)
                                                             + 4224LL);
                if ( v50 )
                  v50(v47, 0LL);
                LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v92);
                v89 = 1;
                if ( *(_DWORD *)(W32GetUserSessionState(v51) + 43316) )
                {
                  v53 = 27;
LABEL_64:
                  v86 = v53;
                  v30 = -1073741823;
                  goto LABEL_106;
                }
                v54 = W32GetUserSessionState(v52);
                if ( !(unsigned int)DrvQueryMDEVPowerState(*(_QWORD *)(*(_QWORD *)(v54 + 57008) + 16LL)) )
                {
                  v53 = 28;
                  goto LABEL_64;
                }
                v32 = a6;
              }
            }
          }
        }
      }
      if ( !(unsigned int)PreAllocateForPrimaryMonitorChange() )
      {
        v29 = 53;
        v30 = -1073741823;
        v86 = 53;
        goto LABEL_105;
      }
      SetPointer(0LL, v55);
      FreeAllSpbs(v57, v56);
      if ( *(_QWORD *)(W32GetUserSessionState(v58) + 43040) )
        StopFade();
      v60 = W32GetUserSessionState(v59);
      bSetDevDragRect(*(_QWORD *)(*(_QWORD *)(v60 + 57008) + 48LL), v61);
    }
    v62 = *(struct _MDEV **)(*(_QWORD *)(W32GetUserSessionState(v36) + 57008) + 16LL);
    if ( v12 )
      v63 = ***(void ****)(v12 + 8);
    else
      v63 = 0LL;
    v64 = DrvSetDisplayConfig(
            v90,
            v95,
            a3,
            v13 | 0x140,
            v63,
            v32,
            v96,
            0LL,
            v62,
            &v98,
            (unsigned int *)&v94,
            (signed int *)&v86,
            v85,
            &v87,
            &v88,
            (__int64)v97,
            v38);
    v30 = v64;
    if ( (a3 & 0x80) == 0 )
    {
      v29 = v86;
      goto LABEL_105;
    }
    if ( v64 >= 0 )
    {
      v68 = v91;
    }
    else
    {
      if ( !v87 || v31 || v96 )
        goto LABEL_85;
      v66 = *(struct _MDEV **)(*(_QWORD *)(W32GetUserSessionState(v65) + 57008) + 16LL);
      v67 = v12 ? ***(void ****)(v12 + 8) : 0LL;
      v68 = v91;
      v64 = DrvSetDisplayConfig(
              0,
              0LL,
              0x98Fu,
              0x102u,
              v67,
              0,
              0LL,
              0LL,
              v66,
              &v98,
              0LL,
              0LL,
              v85,
              0LL,
              0LL,
              (__int64)v97,
              v91);
      if ( v64 < 0 )
        goto LABEL_85;
    }
    v30 = v64;
    if ( (v13 & 0x200) != 0 )
    {
      v72 = *(_QWORD *)(W32GetSessionState(v65) + 88);
      v73 = *(_WORD *)(v72 + 1080);
      v74 = *(_QWORD *)(W32GetUserSessionState(v72) + 19928);
      *(_WORD *)(v74 + 6998) = v73;
      v75 = *(_QWORD *)(W32GetUserSessionState(v74) + 19928);
      ++*(_WORD *)(v75 + 7014);
      v77 = *(_QWORD *)(W32GetUserSessionState(v75) + 36424);
      if ( v77 )
      {
        do
        {
          v76 = *(_QWORD *)(W32GetUserSessionState(v76) + 19928);
          *(_WORD *)(v77 + 272) = *(_WORD *)(v76 + 6998);
          v77 = *(_QWORD *)(v77 + 368);
        }
        while ( v77 );
        v68 = v91;
      }
    }
    TrackFullscreenMode(0LL);
    if ( !v85[0] )
    {
      v79 = v98;
      v80 = *(_QWORD *)(W32GetUserSessionState(v78) + 57008);
      *(_QWORD *)(v80 + 16) = v79;
      GreIncrementDisplaySettingsUniqueness(v80);
      PowerDimUndimResend(v81);
      v93 = (v31 != 0 ? 4 : 0) | ((v13 & 0x10 | HIBYTE(a3) & 8) >> 3);
      if ( (unsigned int)Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline() )
        v93 = v93 & 0xFFFFFFF7 | (8 * (v88 & 1));
      v30 = xxxResetDisplayDevice(v12, (int *)&v93, (__int64)v68);
      if ( v30 < 0 )
        v86 = 36;
      goto LABEL_86;
    }
    if ( (v13 & 4) != 0 )
    {
LABEL_86:
      if ( v12 )
      {
        v69 = *(__int64 **)(v12 + 8);
        if ( (*(_DWORD *)(*v69 + 64) & 1) == 0 )
          xxxInternalInvalidate(v69[3], (__int64)v69);
      }
      SetPointer(1LL, (__int64)v69);
      zzzUpdateCursorImage(v71, v70);
      v29 = v86;
LABEL_105:
      if ( !v89 )
        goto LABEL_107;
LABEL_106:
      v82 = ReferenceDwmApiPort();
      DwmAsyncNotifyRotationModeChange(v82, 0LL);
      v29 = v86;
      goto LABEL_107;
    }
    if ( (unsigned int)SafeDisableMDEV(1LL) )
      SafeEnableMDEV(1LL);
LABEL_85:
    xxxUserResetDisplayDevice();
    goto LABEL_86;
  }
  v30 = -1073741811;
  v29 = 1;
  v86 = 1;
LABEL_107:
  v11 = v91;
LABEL_108:
  v33 = v90;
LABEL_109:
  if ( v99 )
    *v99 = v29 - 27 <= 1;
  v83 = v85[0];
  if ( v100 )
    *v100 = v85[0];
  if ( v30 >= 0 && v29 == 29 )
    v30 = -1073741266;
  LogDiagSDC(v33, (__int64)v95, a3, v30, v94, v29, v101, v83, v11);
  return (unsigned int)v30;
}
