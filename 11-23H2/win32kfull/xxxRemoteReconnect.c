/*
 * XREFs of xxxRemoteReconnect @ 0x1C0131F08
 * Callers:
 *     NtUserRemoteReconnect @ 0x1C0131B70 (NtUserRemoteReconnect.c)
 * Callees:
 *     TransitionCursorSuppressionState @ 0x1C001DAA0 (TransitionCursorSuppressionState.c)
 *     SetPointer @ 0x1C002D490 (SetPointer.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0044724 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     InitKeyboard @ 0x1C0088EB0 (InitKeyboard.c)
 *     RegisterCDROMNotify @ 0x1C009C24C (RegisterCDROMNotify.c)
 *     DrvOcclusionStateChangeNotify @ 0x1C009CAE0 (DrvOcclusionStateChangeNotify.c)
 *     RemoveInputDevices @ 0x1C00A0AB0 (RemoveInputDevices.c)
 *     UnregisterDeviceClassNotifications @ 0x1C00A0BAC (UnregisterDeviceClassNotifications.c)
 *     ?xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00A0CC0 (-xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C00A0E18 (xxxRemoteStopScreenUpdates.c)
 *     SetMouseTrails @ 0x1C00D8380 (SetMouseTrails.c)
 *     DrvCloseRemoteGraphicsDevices @ 0x1C0131980 (DrvCloseRemoteGraphicsDevices.c)
 *     AttachInputDevices @ 0x1C0131AA0 (AttachInputDevices.c)
 *     ?DrvGetRemoteDeviceCount@@YAIXZ @ 0x1C0131B24 (-DrvGetRemoteDeviceCount@@YAIXZ.c)
 *     DrvOpenLocalGraphicsDevices @ 0x1C0131BB0 (DrvOpenLocalGraphicsDevices.c)
 *     RemoteRedrawScreen @ 0x1C0131D40 (RemoteRedrawScreen.c)
 *     GreMultiUserSetDisplayDriverName @ 0x1C01329D4 (GreMultiUserSetDisplayDriverName.c)
 *     GreDrvDisconnect @ 0x1C0134D74 (GreDrvDisconnect.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C0138954 (--0LeaveEnterCrit@@QEAA@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C013897C (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0140A40 (memmove.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 *     GreDrvReconnect @ 0x1C02DC394 (GreDrvReconnect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxRemoteReconnect(unsigned __int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r12
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 RemoteContext; // r13
  _UNKNOWN **v7; // rcx
  _OWORD *v8; // rcx
  _OWORD *v9; // rax
  __int64 v10; // rdx
  _OWORD *v11; // rax
  _OWORD *v12; // rcx
  __int64 v13; // rdx
  __int64 result; // rax
  int Win32kDriverObject; // esi
  int v16; // ebx
  int v17; // ebx
  __int64 v18; // rcx
  wchar_t *v19; // rax
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r12
  void *v24; // rax
  void *v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // eax
  BOOL v29; // r12d
  int v30; // r12d
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // edx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  unsigned int v39; // ebx
  __int64 v40; // rdx
  __int64 v41; // rcx
  void (__fastcall *v42)(__int64, _QWORD); // rdi
  Gre::Base *v43; // rcx
  unsigned int RemoteDeviceCount; // eax
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rcx
  bool v49; // zf
  unsigned int *v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  _UNKNOWN **v54; // r8
  int HandleInformation; // [rsp+28h] [rbp-390h]
  _BYTE v56[4]; // [rsp+60h] [rbp-358h] BYREF
  int v57; // [rsp+64h] [rbp-354h] BYREF
  unsigned __int16 v58; // [rsp+68h] [rbp-350h]
  BOOL v59; // [rsp+6Ch] [rbp-34Ch]
  void *v60; // [rsp+70h] [rbp-348h]
  int v61; // [rsp+78h] [rbp-340h]
  int v62; // [rsp+7Ch] [rbp-33Ch]
  int v63; // [rsp+80h] [rbp-338h]
  int v64; // [rsp+84h] [rbp-334h]
  PVOID Object; // [rsp+88h] [rbp-330h] BYREF
  int v66; // [rsp+94h] [rbp-324h]
  unsigned int v67; // [rsp+98h] [rbp-320h]
  PVOID v68; // [rsp+A0h] [rbp-318h] BYREF
  unsigned __int64 v69; // [rsp+A8h] [rbp-310h]
  _BYTE v70[328]; // [rsp+B8h] [rbp-300h] BYREF
  _BYTE v71[32]; // [rsp+200h] [rbp-1B8h] BYREF
  __int64 v72; // [rsp+220h] [rbp-198h]
  __int64 v73; // [rsp+228h] [rbp-190h]
  __int64 v74; // [rsp+230h] [rbp-188h]
  __int64 v75; // [rsp+238h] [rbp-180h]
  __int64 v76; // [rsp+240h] [rbp-178h]
  __int128 v77; // [rsp+250h] [rbp-168h]
  __int128 v78; // [rsp+260h] [rbp-158h]
  __int128 v79; // [rsp+270h] [rbp-148h]
  __int128 v80; // [rsp+280h] [rbp-138h]
  _BYTE v81[58]; // [rsp+290h] [rbp-128h] BYREF
  __int128 v82; // [rsp+2CAh] [rbp-EEh]
  __int16 v83; // [rsp+2DAh] [rbp-DEh]
  __int128 v84; // [rsp+2DCh] [rbp-DCh]
  int v85; // [rsp+2ECh] [rbp-CCh]
  int v86; // [rsp+2F0h] [rbp-C8h]
  int v87; // [rsp+2F4h] [rbp-C4h]
  unsigned __int16 v88; // [rsp+308h] [rbp-B0h]
  __int64 v89; // [rsp+30Ch] [rbp-ACh]
  int v90; // [rsp+314h] [rbp-A4h]
  int v91; // [rsp+318h] [rbp-A0h]
  int v92; // [rsp+31Ch] [rbp-9Ch]
  int v93; // [rsp+324h] [rbp-94h]
  _BYTE v94[8]; // [rsp+340h] [rbp-78h] BYREF
  GUID ActivityId; // [rsp+348h] [rbp-70h] BYREF
  int v96; // [rsp+358h] [rbp-60h]
  char v97; // [rsp+370h] [rbp-48h]
  __int64 v98; // [rsp+380h] [rbp-38h]

  v69 = a1;
  memset_0(v94, 0, 0x48uLL);
  EtwActivityIdControl(3u, &ActivityId);
  v98 = MEMORY[0xFFFFF78000000014];
  v96 = 22;
  v97 = -1;
  v59 = 0;
  v61 = 0;
  v62 = 0;
  v66 = *(_DWORD *)(SGDGetUserSessionState(v2) + 15936) + 1;
  v64 = 0;
  v63 = 0;
  v58 = gProtocolType;
  memset_0(v71, 0, 0x140uLL);
  v57 = 0;
  v60 = 0LL;
  LODWORD(v3) = 0;
  RemoteContext = GreGetRemoteContext();
  LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v7 = &WPP_RECORDER_INITIALIZED;
  LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v4,
      v5,
      (_DWORD)WPP_GLOBAL_Control,
      4,
      3,
      16,
      (__int64)&WPP_38afe8d8a8303f1671169ac824553c0d_Traceguids);
  if ( PsGetCurrentProcess(v7, v4, v5) != gpepCSRSS )
    return 3221225506LL;
  gdwHydraHint |= 0x20u;
  v8 = (_OWORD *)a1;
  if ( a1 + 320 < a1 || a1 + 320 > MmUserProbeAddress )
    v8 = (_OWORD *)MmUserProbeAddress;
  v9 = v70;
  v10 = 2LL;
  do
  {
    *v9 = *v8;
    v9[1] = v8[1];
    v9[2] = v8[2];
    v9[3] = v8[3];
    v9[4] = v8[4];
    v9[5] = v8[5];
    v9[6] = v8[6];
    v9 += 8;
    *(v9 - 1) = v8[7];
    v8 += 8;
    --v10;
  }
  while ( v10 );
  *v9 = *v8;
  v9[1] = v8[1];
  v9[2] = v8[2];
  v9[3] = v8[3];
  v11 = v71;
  v12 = v70;
  v13 = 2LL;
  do
  {
    *v11 = *v12;
    v11[1] = v12[1];
    v11[2] = v12[2];
    v11[3] = v12[3];
    v11[4] = v12[4];
    v11[5] = v12[5];
    v11[6] = v12[6];
    v11 += 8;
    *(v11 - 1) = v12[7];
    v12 += 8;
    --v13;
  }
  while ( v13 );
  *v11 = *v12;
  v11[1] = v12[1];
  v11[2] = v12[2];
  v11[3] = v12[3];
  if ( gfSessionSwitchBlock )
    return 3221225473LL;
  SetConsoleSwitchInProgress(1LL);
  SetMouseTrails(0);
  gpThinWireCache = ThinWireCache;
  result = PopulateUMKMHandlePair(v74, gRemoteMouseChannelHandlePair);
  if ( (int)result >= 0 )
  {
    result = PopulateUMKMHandlePair(v75, gRemoteKeyboardChannelHandlePair);
    Win32kDriverObject = result;
    if ( (int)result >= 0 )
    {
      gRemoteNumMonitors = *(_DWORD *)(a1 + 20);
      gRemotePrimaryMonitor = *(_DWORD *)(a1 + 24);
      ghRemoteVideoChannel = v72;
      ghRemoteBeepChannel = v73;
      ghRemoteThinwireChannel = v76;
      gRemoteClientKeyboardType = v89;
      *((_DWORD *)&gRemoteClientKeyboardType + 2) = v90;
      v16 = v86;
      *(_DWORD *)(SGDGetUserSessionState(gRemoteClientKeyboardType) + 15912) = v16;
      v17 = v87;
      *(_DWORD *)(SGDGetUserSessionState(v18) + 13820) = v17;
      v67 = gbRemoteFxSession;
      gbRemoteFxSession = v93;
      *(_DWORD *)(RemoteContext + 64) = v93;
      gRemoteTerminalLuid = *(_QWORD *)(a1 + 304);
      gRemoteSessionUseWddm = *(_DWORD *)(a1 + 312);
      gRemoteDisplayDeviceName = *(_OWORD *)(a1 + 162);
      *((_OWORD *)&gRemoteDisplayDeviceName + 1) = *(_OWORD *)(a1 + 178);
      *((_QWORD *)&gRemoteDisplayDeviceName + 4) = *(_QWORD *)(a1 + 194);
      *(_OWORD *)&gstrBaseWinStationName = v77;
      *((_OWORD *)&gstrBaseWinStationName + 1) = v78;
      *((_OWORD *)&gstrBaseWinStationName + 2) = v79;
      *((_OWORD *)&gstrBaseWinStationName + 3) = v80;
      gWinStationInfo = v82;
      *((_WORD *)&gWinStationInfo + 8) = v83;
      *(_OWORD *)((char *)&gWinStationInfo + 20) = v84;
      *((_DWORD *)&gWinStationInfo + 9) = v85;
      v19 = wcschr(gstrBaseWinStationName, 0x23u);
      if ( v19 )
        *v19 = 0;
      if ( gProtocolType )
      {
        FastGetProfileIntW(0LL, 39LL, L"CursorBlinkEnable", 0LL, &v57, 0);
        v21 = gpsi;
        if ( !v57 )
        {
          *(_DWORD *)(gpsi + 2236LL) &= ~4u;
          goto LABEL_24;
        }
      }
      else
      {
        v21 = gpsi;
      }
      *(_DWORD *)(v21 + 2236) |= 4u;
LABEL_24:
      v22 = *(_QWORD *)(RemoteContext + 40);
      if ( v22 )
      {
        v23 = -1LL;
        do
          ++v23;
        while ( *(_WORD *)(v22 + 2 * v23) );
        v3 = v23 + 1;
        v24 = (void *)Win32AllocPoolWithQuotaZInit(2 * v3, 2020897621LL);
        v25 = v24;
        v60 = v24;
        if ( !v24 )
        {
          Win32kDriverObject = -1073741801;
          goto LABEL_75;
        }
        memmove(v24, *(const void **)(RemoteContext + 40), 2 * v3);
      }
      v26 = gVideoFileObject;
      if ( !gVideoFileObject && ghRemoteVideoChannel )
      {
        v68 = 0LL;
        Win32kDriverObject = ObReferenceObjectByHandle(ghRemoteVideoChannel, 0, 0LL, 0, &v68, 0LL);
        if ( Win32kDriverObject >= 0 )
        {
          gVideoFileObject = v68;
          IoGetRelatedDeviceObject((PFILE_OBJECT)v68);
          Object = 0LL;
          Win32kDriverObject = ObReferenceObjectByHandle(ghRemoteThinwireChannel, 0, 0LL, 0, &Object, 0LL);
          gThinwireFileObject = Object;
          if ( Win32kDriverObject >= 0
            && !(unsigned int)GreMultiUserInitSession(
                                RemoteContext,
                                ghRemoteThinwireChannel,
                                gpThinWireCache,
                                gRemoteNumMonitors,
                                gRemotePrimaryMonitor,
                                gVideoFileObject,
                                gThinwireFileObject,
                                8,
                                v81,
                                19,
                                gRemoteDisplayDeviceName) )
          {
            Win32kDriverObject = -1073741823;
          }
        }
      }
      else if ( !ghRemoteVideoChannel
             && !(unsigned int)GreMultiUserInitSession(
                                 RemoteContext,
                                 ghRemoteThinwireChannel,
                                 gpThinWireCache,
                                 gRemoteNumMonitors,
                                 gRemotePrimaryMonitor,
                                 gVideoFileObject,
                                 gThinwireFileObject,
                                 8,
                                 v81,
                                 19,
                                 gRemoteDisplayDeviceName) )
      {
        Win32kDriverObject = -1073741823;
      }
      if ( Win32kDriverObject < 0 )
        goto LABEL_128;
      v27 = ghRemoteBeepChannel;
      if ( ghRemoteBeepChannel )
      {
        Object = 0LL;
        Win32kDriverObject = ObReferenceObjectByHandle(ghRemoteBeepChannel, 0, 0LL, 0, &Object, 0LL);
        gpRemoteBeepDevice = Object;
      }
      if ( Win32kDriverObject < 0 )
      {
LABEL_128:
        v25 = v60;
        goto LABEL_75;
      }
      if ( gnShadowers )
        xxxRemoteStopScreenUpdates(v27, v26, v20);
      v25 = v60;
      if ( v88 == gPreviousProtocolType || !gPreviousProtocolType )
      {
        v29 = 0;
      }
      else
      {
        if ( v60 )
        {
          v28 = GreMultiUserSetDisplayDriverName(RemoteContext, (unsigned int)(v3 - 1), v60);
          v29 = 0;
          if ( !v28 )
            goto LABEL_103;
        }
        else
        {
          v29 = 0;
        }
        Win32kDriverObject = xxxRemoteSetDisconnectDisplayMode(
                               grpdeskRitInput,
                               gProtocolType,
                               (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v94);
        if ( Win32kDriverObject < 0 )
        {
LABEL_75:
          SetMouseTrails(v66);
          v49 = Win32kDriverObject == 0;
          if ( Win32kDriverObject < 0 )
          {
            if ( v59 )
              GreDrvDisconnect(RemoteContext);
            v49 = Win32kDriverObject == 0;
          }
          if ( v49 && !gProtocolType )
          {
            v50 = (unsigned int *)SGDGetUserSessionState(v48);
            RtlSetActiveConsoleId(*v50);
          }
          if ( !gProtocolType )
            DrvNotifySessionStateChange(4LL);
          if ( Win32kDriverObject < 0 )
            CleanupRemoteHandles(RemoteContext);
          SetConsoleSwitchInProgress(0LL);
          LOBYTE(v51) = 1;
          DxgkEngNotifyDisplayChange(v51);
          if ( Win32kDriverObject < 0 )
          {
            v53 = v67;
            gbRemoteFxSession = v67;
            *(_DWORD *)(RemoteContext + 64) = v67;
            if ( v61 )
              UnregisterDeviceClassNotifications();
            if ( v62 )
              DrvCloseGraphicsDevices(1LL);
            if ( v63 )
              SetProtocolType(v58);
            if ( v64 )
              DrvSetGraphicsDevices(v81);
          }
          if ( v25 )
            Win32FreePool(v25);
          if ( !Win32kDriverObject )
          {
            v52 = gProtocolType;
            if ( gProtocolType )
              DrvEscapeRemoteDrivers(
                *(_QWORD *)(gpDispInfo + 16LL),
                gProtocolType,
                *(_QWORD *)(RemoteContext + 40),
                6LL,
                0LL,
                0);
          }
          DrvOcclusionStateChangeNotify(v53, v52);
          DispBrokerAsyncSessionSwitched();
          return (unsigned int)Win32kDriverObject;
        }
        if ( *(_DWORD *)(v69 + 288) )
          DrvCloseRemoteGraphicsDevices();
        if ( v25 && !(unsigned int)GreMultiUserSetDisplayDriverName(RemoteContext, 8LL, v81) )
        {
LABEL_103:
          Win32kDriverObject = -1073741823;
          goto LABEL_75;
        }
      }
      SetProtocolType(v88);
      if ( !gProtocolType )
        DrvNotifySessionStateChange(3LL);
      v63 = 1;
      if ( (unsigned int)UserRemoteConnectedSessionUsingXddm() )
      {
        if ( gProtocolType == gPreviousProtocolType )
        {
          Win32kDriverObject = GreDrvReconnect(RemoteContext);
          LOBYTE(v29) = Win32kDriverObject >= 0;
          v59 = v29;
          v30 = 0;
        }
        else
        {
          v30 = 1;
          Win32kDriverObject = GreDrvConnect(RemoteContext);
          v59 = Win32kDriverObject >= 0;
        }
      }
      else
      {
        v30 = 1;
        if ( !gProtocolType )
        {
          Win32kDriverObject = DrvOpenLocalGraphicsDevices(0LL);
          if ( Win32kDriverObject < 0 )
            goto LABEL_75;
          v62 = 1;
        }
      }
      v64 = 1;
      if ( (unsigned int)DrvSetGraphicsDevices(v81) )
      {
        DispBrokerAsyncSessionSwitched();
        if ( v91 || (v33 = gPreviousProtocolType, gProtocolType != gPreviousProtocolType) || v92 )
        {
          Win32kDriverObject = 0;
          if ( !(unsigned int)DrvIsNotUsingGraphicsDevice(*(_QWORD *)(gpDispInfo + 16LL))
            || (unsigned int)DrvSessionHasAnyGraphicsDevice() )
          {
            if ( v92 || (v34 = 2191LL, !gProtocolType) )
              v34 = 2447LL;
            LOBYTE(HandleInformation) = 0;
            Win32kDriverObject = xxxUserSetDisplayConfig(
                                   0LL,
                                   0LL,
                                   v34,
                                   2LL,
                                   gspdeskShouldBeForeground,
                                   HandleInformation,
                                   0LL,
                                   0LL,
                                   0LL,
                                   v94,
                                   0LL);
            if ( Win32kDriverObject < 0 )
            {
              LOBYTE(v35) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
                         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
              v54 = &WPP_RECORDER_INITIALIZED;
              if ( (_BYTE)v35 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v54) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v35,
                  (_DWORD)v54,
                  17,
                  4,
                  3,
                  17,
                  (__int64)&WPP_38afe8d8a8303f1671169ac824553c0d_Traceguids);
              }
              goto LABEL_75;
            }
          }
        }
        if ( gProtocolType )
        {
          if ( v30
            && !(unsigned int)DrvEscapeRemoteDrivers(
                                *(_QWORD *)(gpDispInfo + 16LL),
                                gProtocolType,
                                *(_QWORD *)(RemoteContext + 40),
                                2LL,
                                gptmrWD,
                                8) )
          {
            Win32kDriverObject = -1073741823;
          }
          AttachInputDevices(0LL);
        }
        else
        {
          if ( gPreviousProtocolType )
            RemoveInputDevices(v33);
          if ( !gpWin32kDriverObject )
            Win32kDriverObject = GetWin32kDriverObject();
          AttachInputDevices(1LL);
          (**(void (__fastcall ***)(PVOID))P)(P);
          LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v56);
          RegisterCDROMNotify();
          v61 = 1;
          LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v56);
        }
        RemoteRedrawScreen(v37, v36, v38);
        InitKeyboard();
        UpdateKeyLights(0LL);
        SetPointer(1LL);
        v39 = gCursorSuppressionState;
        gCursorSuppressionState = 9;
        TransitionCursorSuppressionState(0xAu, 0);
        if ( ((v39 - 1) & 0xFFFFFFFB) != 0 )
          v39 = 2;
        TransitionCursorSuppressionState(v39, 0);
        SetConnectedState(1LL, gbConnectCompleted);
        if ( gProtocolType )
        {
          FastGetProfileIntW(0LL, 39LL, L"CursorBlinkEnable", 0LL, &v57, 0);
          v41 = gpsi;
          if ( !v57 )
          {
            *(_DWORD *)(gpsi + 2236LL) &= ~4u;
            goto LABEL_74;
          }
        }
        else
        {
          v41 = gpsi;
        }
        *(_DWORD *)(v41 + 2236) |= 4u;
LABEL_74:
        v42 = *(void (__fastcall **)(__int64, _QWORD))(DxDdGetDxgkWin32kInterface(v41, v40) + 384);
        RemoteDeviceCount = DrvGetRemoteDeviceCount(v43);
        LOBYTE(v45) = gProtocolType == 0;
        v42(v45, RemoteDeviceCount);
        LOBYTE(v46) = gProtocolType == 0;
        LOBYTE(v47) = 1;
        CitSessionConnectChange(v47, v46);
        v25 = v60;
        goto LABEL_75;
      }
      if ( gnShadowers )
        RemoteRedrawScreen(0LL, v31, v32);
      goto LABEL_103;
    }
  }
  return result;
}
