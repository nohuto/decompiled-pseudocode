/*
 * XREFs of xxxRemoteDisconnect @ 0x1401DF3C8
 * Callers:
 *     NtUserRemoteDisconnect @ 0x1401DF390 (NtUserRemoteDisconnect.c)
 * Callees:
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140065000 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     IsRemoteConnection @ 0x140131CF0 (IsRemoteConnection.c)
 *     PowerOnGdi @ 0x140134F50 (PowerOnGdi.c)
 *     PowerOffGdi @ 0x140135140 (PowerOffGdi.c)
 *     xxxRemoteStopScreenUpdates @ 0x1401DF978 (xxxRemoteStopScreenUpdates.c)
 *     ?HYDRA_HINT@@YAXW4HydraHint@@@Z @ 0x1401DFCE4 (-HYDRA_HINT@@YAXW4HydraHint@@@Z.c)
 *     GreDxgkSessionDisconnected @ 0x1401DFD0C (GreDxgkSessionDisconnected.c)
 *     GreDxgkPreSessionDisconnected @ 0x1401DFD3C (GreDxgkPreSessionDisconnected.c)
 *     ?xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401DFD98 (-xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     UnregisterDeviceClassNotifications @ 0x1401DFF30 (UnregisterDeviceClassNotifications.c)
 *     RemoveInputDevices @ 0x1401E0020 (RemoveInputDevices.c)
 *     RemoteRedrawScreen @ 0x1401E03FC (RemoteRedrawScreen.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x1402190C0 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     GreDrvDisconnect @ 0x1402634A4 (GreDrvDisconnect.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x14026E498 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     AutoRotationUpdateRegistry @ 0x140270E40 (AutoRotationUpdateRegistry.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 xxxRemoteDisconnect()
{
  unsigned int v0; // edi
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v1; // r14
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int16 v4; // r15
  __int64 v5; // rcx
  __int64 RemoteContext; // r12
  int v7; // r13d
  char v8; // bl
  bool v9; // si
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // esi
  __int64 v33; // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  bool v39; // r15
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  unsigned __int16 v43; // bx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  int **v59; // rcx
  int v60; // ebx
  __int64 v61; // rdx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 UserSessionState; // rax
  int v66; // r8d
  int v67; // edx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rax
  _BYTE v72[2]; // [rsp+40h] [rbp-40h] BYREF
  __int16 v73; // [rsp+42h] [rbp-3Eh]
  unsigned __int8 v74[8]; // [rsp+48h] [rbp-38h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v75; // [rsp+50h] [rbp-30h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+58h] [rbp-28h] BYREF
  GUID ActivityId; // [rsp+60h] [rbp-20h] BYREF

  v0 = 0;
  v74[0] = 0;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  DisplayScenarioContextEnsureAndAssociate(&ActivityId, 0x15u, 0, &v75, v74);
  v1 = v75;
  Timeout.QuadPart = 0LL;
  v4 = *(_WORD *)(W32GetUserSessionState(v3, v2) + 69008);
  v73 = v4;
  RemoteContext = GreGetRemoteContext();
  v7 = 0;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (v5 = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), (v5 & 4) == 0)
    || (v8 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v8 = 0;
  }
  v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(v5, *(_QWORD *)&WPP_GLOBAL_Control);
    LOBYTE(v66) = v9;
    LOBYTE(v67) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v67,
      v66,
      *(_QWORD *)(UserSessionState + 69416),
      4,
      3,
      15,
      (__int64)&WPP_30f900ad07153b515057d0b02bb8d839_Traceguids);
  }
  v10 = *(_QWORD *)(W32GetUserGdiSessionState(v5) + 40);
  if ( PsGetCurrentProcess(v11) == v10 )
  {
    if ( *(_DWORD *)(W32GetUserSessionState(v13, v12) + 69012) )
    {
      if ( *(_DWORD *)(W32GetUserSessionState(v15, v14) + 18724) )
      {
        if ( *(_WORD *)(W32GetUserSessionState(v17, v16) + 69008) && !(unsigned int)UserIsWddmConnectedSession() )
        {
          GreDxgkPreSessionDisconnected(0LL);
          GreDxgkSessionDisconnected(0LL);
        }
        HYDRA_HINT(16LL);
        v20 = W32GetUserSessionState(v19, v18);
        memset_0((void *)(v20 + 64160), 0, 0x40uLL);
        if ( !*(_DWORD *)(W32GetUserSessionState(v22, v21) + 69108) )
        {
          if ( !*(_WORD *)(W32GetUserSessionState(v24, v23) + 69008)
            && !*(_DWORD *)(W32GetUserGdiSessionState(v25) + 28) )
          {
            v7 = 1;
            PowerOnGdi(v1, 1LL, 4u);
          }
          SetConsoleSwitchInProgress(1LL);
          if ( !*(_QWORD *)(W32GetUserSessionState(v27, v26) + 63024) )
          {
            Timeout.QuadPart = -3000000000LL;
            LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v72, 1);
            v70 = W32GetUserSessionState(v69, v68);
            KeWaitForSingleObject(*(PVOID *)(v70 + 62848), WrUserRequest, 0, 0, &Timeout);
            LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v72);
          }
          if ( *(_QWORD *)(W32GetUserSessionState(v29, v28) + 63024) )
          {
            v32 = xxxRemoteStopScreenUpdates();
            if ( v32 < 0 )
              goto LABEL_15;
            if ( *(_DWORD *)(W32GetUserSessionState(v31, v30) + 69160) )
            {
              v71 = W32GetUserSessionState(v36, v35);
              RemoteRedrawScreen(v71 + 19208);
            }
            if ( !(unsigned int)UserIsWddmConnectedSession() )
            {
              GreDrvDisconnect(RemoteContext);
              goto LABEL_34;
            }
            v39 = *(_WORD *)(W32GetUserSessionState(v38, v37) + 69008) == 0;
            LOBYTE(v40) = v39;
            GreDxgkPreSessionDisconnected(v40);
            v43 = *(_WORD *)(W32GetUserSessionState(v42, v41) + 69008);
            v46 = W32GetUserSessionState(v45, v44);
            v47 = xxxRemoteSetDisconnectDisplayMode(*(struct tagDESKTOP **)(v46 + 19200), v43, v1);
            LOBYTE(v48) = v39;
            v32 = v47;
            GreDxgkSessionDisconnected(v48);
            if ( v32 >= 0 )
            {
              DrvCloseGraphicsDevices(v39);
              v4 = v73;
LABEL_34:
              *(_WORD *)(W32GetUserSessionState(v52, v51) + 69304) = v4;
              if ( !*(_WORD *)(W32GetUserSessionState(v54, v53) + 69304) )
              {
                UnregisterDeviceClassNotifications();
                RemoveInputDevices();
              }
              OPMDestroyAllProtectedOutputs();
              SetConnectedState(0LL, 0LL);
              AutoRotationUpdateRegistry();
              CitSessionConnectChange(0LL, 0LL);
              if ( !v4 )
                DrvSetGraphicsDevices(L"TSDDD");
              if ( IsRemoteConnection(v56, v55) )
              {
                v59 = *(int ***)(W32GetUserSessionState(v58, v57) + 57008);
                v60 = **v59;
                *(_DWORD *)(W32GetUserSessionState(v59, v61) + 69004) = v60;
                W32GetUserSessionState(v63, v62);
              }
              CleanupRemoteHandles(RemoteContext);
              goto LABEL_15;
            }
            v64 = W32GetUserSessionState(v50, v49);
            RemoteRedrawScreen(v64 + 19208);
          }
          else
          {
            v32 = -1073741823;
          }
LABEL_15:
          SetConsoleSwitchInProgress(0LL);
          if ( v32 < 0 && v7 == 1 )
            PowerOffGdi(v1, v33);
          DispBrokerAsyncSessionStateChanged(v1);
          if ( v74[0] )
            DisplayScenarioContextDissociate(&v75);
          return (unsigned int)v32;
        }
        v0 = -1073741267;
      }
      else
      {
        v0 = -1073741823;
      }
    }
    CDisplayScenarioContextScope::~CDisplayScenarioContextScope((CDisplayScenarioContextScope *)v74);
    return v0;
  }
  if ( v74[0] )
    DisplayScenarioContextDissociate(&v75);
  return 3221225506LL;
}
