/*
 * XREFs of xxxRemoteConnect @ 0x140167F90
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x140017264 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     InitLoadResources @ 0x14005548C (InitLoadResources.c)
 *     FastGetProfileIntW @ 0x14009FA20 (FastGetProfileIntW.c)
 *     DxgkEngNotifyDisplayChange @ 0x1400A38F0 (DxgkEngNotifyDisplayChange.c)
 *     GreMultiUserInitSession @ 0x1400B8380 (GreMultiUserInitSession.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C0560 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?DispBrokerAsyncSessionStateChanged@@YAJQEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400C7110 (-DispBrokerAsyncSessionStateChanged@@YAJQEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     CleanupRemoteHandles @ 0x1400C8580 (CleanupRemoteHandles.c)
 *     IsRemoteConnection @ 0x1400C88B4 (IsRemoteConnection.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1400F0FD0 (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     SetConsoleSwitchInProgress @ 0x140141A70 (SetConsoleSwitchInProgress.c)
 *     SetProtocolType @ 0x140144520 (SetProtocolType.c)
 *     PopulateUMKMHandlePair @ 0x1401477C0 (PopulateUMKMHandlePair.c)
 *     ?HYDRA_HINT@@YAXW4HydraHint@@@Z @ 0x1401483DC (-HYDRA_HINT@@YAXW4HydraHint@@@Z.c)
 *     SetConnectedState @ 0x14014C310 (SetConnectedState.c)
 *     SetConnectCompletedState @ 0x14014C390 (SetConnectCompletedState.c)
 *     DrvEscapeRemoteDrivers @ 0x1401539E0 (DrvEscapeRemoteDrivers.c)
 *     GreDxgkSessionConnected @ 0x14015C0F0 (GreDxgkSessionConnected.c)
 *     ??4?$SGRDPgptmrWD@PEAU_KTIMER@@@@QEAAAEAPEAU_KTIMER@@AEBQEAU1@@Z @ 0x14019E4BC (--4-$SGRDPgptmrWD@PEAU_KTIMER@@@@QEAAAEAPEAU_KTIMER@@AEBQEAU1@@Z.c)
 *     LW_BrushInit @ 0x14019E880 (LW_BrushInit.c)
 *     wcschr @ 0x1401A0348 (wcschr.c)
 *     InitVideo @ 0x1401B2E18 (InitVideo.c)
 *     GreDrvConnect @ 0x1401CE420 (GreDrvConnect.c)
 *     xxxRemoteConsoleShadowStart @ 0x14023B984 (xxxRemoteConsoleShadowStart.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall xxxRemoteConnect(__int64 a1, int a2, wchar_t *a3, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  char v4; // bl
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 (*v13)(void); // rax
  __int64 result; // rax
  char v15; // si
  __int64 UserSessionState; // rax
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  NTSTATUS v24; // esi
  int v25; // ebx
  __int64 v26; // rcx
  int v27; // ebx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rbx
  wchar_t *v32; // rax
  int v33; // ebx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  void *v40; // rcx
  CTouchProcessor *v41; // rcx
  struct _FILE_OBJECT *v42; // rcx
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  void *v44; // rcx
  struct _DEVICE_OBJECT *v45; // r14
  NTSTATUS v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rcx
  int (*v50)(void); // rax
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rcx
  char v59; // si
  char v60; // r14
  int CurrentWin32kSessionId; // ebx
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rcx
  unsigned int v68; // eax
  __int64 v69; // rdx
  __int64 v70; // rcx
  int (*v71)(void); // rax
  void (*v72)(void); // rax
  __int64 v73; // rcx
  __int64 v74; // rbx
  unsigned __int16 v75; // di
  __int64 v76; // rax
  __int64 v77; // rcx
  unsigned __int16 *v78; // [rsp+40h] [rbp-30h]
  PVOID Object; // [rsp+60h] [rbp-10h] BYREF
  __int64 v80; // [rsp+68h] [rbp-8h] BYREF
  ULONG Value; // [rsp+B0h] [rbp+40h] BYREF
  int v82; // [rsp+B8h] [rbp+48h]

  v82 = a2;
  v4 = 0;
  Value = 0;
  v8 = *(_QWORD *)(W32GetSessionState(a1) + 88) + 2856LL;
  v12 = W32GetUserSessionState(v9) + 68696;
  if ( *(_DWORD *)a1 )
  {
    v13 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v11, v10) + 48) + 520LL);
    if ( !v13 )
      return 3221225659LL;
    result = v13();
    if ( (int)result >= 0 )
      return xxxRemoteConsoleShadowStart(a1, a3, a4);
    return result;
  }
  if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0 )
  {
    v4 = *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  }
  v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    WPP_RECORDER_AND_TRACE_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v4,
      v15,
      *(_QWORD *)(UserSessionState + 69400),
      4u,
      0xEu,
      0xAu,
      (__int64)&WPP_ec5e2c53dfcc36548c6a0eb8ddc0ffc9_Traceguids,
      a3);
  }
  HYDRA_HINT(8LL);
  v18 = *(_QWORD *)(W32GetUserGdiSessionState(v17) + 40);
  if ( PsGetCurrentProcess(v20, v19, v21, v22) != v18 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( *(_DWORD *)(W32GetUserGdiSessionState(v23) + 36) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( *(_DWORD *)(v12 + 412) )
    return 3221225473LL;
  SetConsoleSwitchInProgress(1LL);
  *(_QWORD *)(v12 + 488) = v12 + 512;
  result = PopulateUMKMHandlePair(*(_QWORD *)(a1 + 48), (_OWORD *)(v12 + 200));
  if ( (int)result >= 0 )
  {
    result = PopulateUMKMHandlePair(*(_QWORD *)(a1 + 56), (_OWORD *)(v12 + 216));
    v24 = result;
    if ( (int)result >= 0 )
    {
      *(_DWORD *)(v12 + 192) = *(_DWORD *)(a1 + 20);
      *(_DWORD *)(v12 + 196) = *(_DWORD *)(a1 + 24);
      *(_QWORD *)(v12 + 184) = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(v12 + 232) = *(_QWORD *)(a1 + 40);
      *(_QWORD *)(v12 + 248) = *(_QWORD *)(a1 + 64);
      SetProtocolType(*(unsigned __int16 *)(a1 + 264));
      *(_WORD *)(v12 + 608) = *(_WORD *)(a1 + 264);
      *(_QWORD *)(v12 + 400) = *(_QWORD *)(a1 + 268);
      *(_DWORD *)(v12 + 408) = *(_DWORD *)(a1 + 276);
      v25 = *(_DWORD *)(a1 + 240);
      *(_DWORD *)(W32GetUserSessionState(v26) + 16272) = v25;
      v27 = *(_DWORD *)(a1 + 244);
      *(_DWORD *)(W32GetUserSessionState(v28) + 14036) = v27;
      *(_QWORD *)(v12 + 256) = *(_QWORD *)(a1 + 304);
      *(_DWORD *)(v12 + 264) = *(_DWORD *)(a1 + 312);
      *(_DWORD *)(v12 + 308) = *(_DWORD *)(v12 + 192);
      *(_OWORD *)(v12 + 268) = *(_OWORD *)(a1 + 162);
      *(_OWORD *)(v12 + 284) = *(_OWORD *)(a1 + 178);
      *(_QWORD *)(v12 + 300) = *(_QWORD *)(a1 + 194);
      v30 = W32GetUserSessionState(v29);
      *(_OWORD *)(v30 + 63600) = *(_OWORD *)(a1 + 202);
      v31 = v30 + 64160;
      *(_WORD *)(v30 + 63616) = *(_WORD *)(a1 + 218);
      *(_OWORD *)(v30 + 63620) = *(_OWORD *)(a1 + 220);
      *(_DWORD *)(v30 + 63636) = *(_DWORD *)(a1 + 236);
      memset((void *)(v30 + 64160), 0, 0x40uLL);
      *(_OWORD *)v31 = *(_OWORD *)(a1 + 80);
      *(_OWORD *)(v31 + 16) = *(_OWORD *)(a1 + 96);
      *(_OWORD *)(v31 + 32) = *(_OWORD *)(a1 + 112);
      *(_OWORD *)(v31 + 48) = *(_OWORD *)(a1 + 128);
      v32 = wcschr((const wchar_t *)v31, 0x23u);
      if ( v32 )
        *v32 = 0;
      v33 = *(_DWORD *)(v12 + 176);
      *(_DWORD *)(v12 + 176) = *(_DWORD *)(a1 + 292);
      *(_DWORD *)(v8 + 64) = *(_DWORD *)(a1 + 292);
      LODWORD(v80) = v33;
      if ( *(_DWORD *)(a1 + 292) )
        *(_QWORD *)(v8 + 68) = *(_QWORD *)(a1 + 296);
      SetConnectedState(1LL, *(_DWORD *)(v12 + 320));
      if ( !(unsigned int)IsRemoteConnection(v35, v34)
        || (FastGetProfileIntW(0LL, 39LL, (__int64)L"CursorBlinkEnable", 0, &Value, 0), Value) )
      {
        v38 = W32GetUserSessionState(v36);
        *(_DWORD *)(*(_QWORD *)(v38 + 19928) + 2236LL) |= 4u;
      }
      else
      {
        v37 = W32GetUserSessionState(v36);
        *(_DWORD *)(*(_QWORD *)(v37 + 19928) + 2236LL) &= ~4u;
      }
      v39 = *(_QWORD *)(v12 + 472);
      if ( v39 || (v40 = *(void **)(v12 + 184)) == 0LL )
      {
        if ( *(_QWORD *)(v12 + 184)
          || (unsigned int)GreMultiUserInitSession(
                             v8,
                             *(_QWORD *)(v12 + 248),
                             *(_QWORD *)(v12 + 488),
                             *(_DWORD *)(v12 + 192),
                             *(_DWORD *)(v12 + 196),
                             v39,
                             *(_QWORD *)(v12 + 480),
                             v82,
                             a3,
                             19,
                             (unsigned __int16 *)(v12 + 268)) )
        {
          goto LABEL_40;
        }
      }
      else
      {
        Object = 0LL;
        v24 = ObReferenceObjectByHandle(v40, 0, 0LL, 0, &Object, 0LL);
        if ( v24 < 0 )
          goto LABEL_61;
        v42 = (struct _FILE_OBJECT *)Object;
        *(_QWORD *)(v12 + 472) = Object;
        RelatedDeviceObject = IoGetRelatedDeviceObject(v42);
        v44 = *(void **)(v12 + 248);
        v45 = RelatedDeviceObject;
        Object = 0LL;
        v46 = ObReferenceObjectByHandle(v44, 0, 0LL, 0, &Object, 0LL);
        v41 = (CTouchProcessor *)Object;
        v24 = v46;
        *(_QWORD *)(v12 + 480) = Object;
        if ( v46 < 0 )
          goto LABEL_61;
        if ( (unsigned int)GreMultiUserInitSession(
                             v8,
                             *(_QWORD *)(v12 + 248),
                             *(_QWORD *)(v12 + 488),
                             *(_DWORD *)(v12 + 192),
                             *(_DWORD *)(v12 + 196),
                             *(_QWORD *)(v12 + 472),
                             (__int64)v41,
                             v82,
                             a3,
                             19,
                             (unsigned __int16 *)(v12 + 268)) )
        {
          if ( (unsigned int)IsRemoteConnection((__int64)v41, v47) )
          {
            v24 = GreDeviceIoControlImpl(v45, 0x381004u, 0LL, 0, 0LL, 0, (unsigned int *)&Object, 0, 1);
            if ( v24 < 0 )
              goto LABEL_61;
            v24 = GreDrvConnect(v8);
          }
          if ( v24 >= 0 )
          {
LABEL_40:
            v41 = *(CTouchProcessor **)(v12 + 232);
            if ( v41 )
            {
              Object = 0LL;
              v24 = ObReferenceObjectByHandle(v41, 0, 0LL, 0, &Object, 0LL);
              *(_QWORD *)(v12 + 240) = Object;
              if ( v24 < 0 )
                goto LABEL_61;
            }
            if ( !*(_DWORD *)(v12 + 172) || *(_DWORD *)(W32GetUserGdiSessionState(v41) + 32) )
            {
              LOBYTE(v58) = (unsigned int)IsRemoteConnection((__int64)v41, v39) == 0;
              GreDxgkSessionConnected(v58);
              v41 = WPP_GLOBAL_Control;
              if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
                || (v59 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
              {
                v59 = 0;
              }
              v60 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v59 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
                v63 = W32GetUserSessionState(v62);
                LODWORD(v78) = CurrentWin32kSessionId;
                WPP_RECORDER_AND_TRACE_SF_D(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v59,
                  v60,
                  *(_QWORD *)(v63 + 69400),
                  4u,
                  0xEu,
                  0xBu,
                  (__int64)&WPP_ec5e2c53dfcc36548c6a0eb8ddc0ffc9_Traceguids,
                  v78);
                v33 = v80;
              }
              v24 = 0;
              goto LABEL_61;
            }
            if ( InitVideo(a4) )
            {
              v50 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v49, v48) + 48) + 536LL);
              if ( (!v50 || v50() < 0 || (unsigned int)LW_BrushInit())
                && (InitLoadResources(0LL),
                    v80 = Win32AllocPoolZInitImpl(64LL, 0x40uLL, 0x744B7355u),
                    SGRDPgptmrWD<_KTIMER *>::operator=(v51, &v80),
                    *(_QWORD *)(W32GetUserSessionState(v52) + 69200)) )
              {
                v53 = W32GetUserSessionState(v41);
                KeInitializeTimerEx(*(PKTIMER *)(v53 + 69200), SynchronizationTimer);
                LOBYTE(v56) = (unsigned int)IsRemoteConnection(v55, v54) == 0;
                GreDxgkSessionConnected(v56);
                *(_DWORD *)(W32GetUserGdiSessionState(v57) + 32) = 1;
              }
              else
              {
                v24 = -1073741801;
              }
              goto LABEL_61;
            }
            SetConnectedState(0LL, 0);
            goto LABEL_46;
          }
LABEL_61:
          v64 = W32GetUserSessionState(v41);
          KeSetEvent(*(PRKEVENT *)(v64 + 68640), 1, 0);
          if ( v24 )
          {
            if ( v24 < 0 )
            {
              *(_DWORD *)(v12 + 176) = v33;
              *(_DWORD *)(v8 + 64) = v33;
              CleanupRemoteHandles((_QWORD *)v8);
            }
          }
          else
          {
            if ( !*(_WORD *)(W32GetUserSessionState(v65) + 69008) )
            {
              v68 = W32GetCurrentWin32kSessionId();
              RtlSetActiveConsoleId(v68);
            }
            v70 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v67, v66) + 48);
            v71 = *(int (**)(void))(v70 + 552);
            if ( v71 )
            {
              if ( v71() >= 0 )
              {
                v70 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v70, v69) + 48);
                v72 = *(void (**)(void))(v70 + 560);
                if ( v72 )
                  v72();
              }
            }
            if ( (unsigned int)IsRemoteConnection(v70, v69) )
            {
              v74 = *(_QWORD *)(v8 + 40);
              v75 = *(_WORD *)(v12 + 312);
              v76 = W32GetUserSessionState(v73);
              DrvEscapeRemoteDrivers(*(_QWORD *)(*(_QWORD *)(v76 + 57008) + 16LL), v75, v74, 6u, 0LL, 0);
            }
            SetConnectCompletedState(1LL);
          }
          SetConsoleSwitchInProgress(0LL);
          DispBrokerAsyncSessionStateChanged(a4);
          LOBYTE(v77) = 1;
          DxgkEngNotifyDisplayChange(v77);
          return (unsigned int)v24;
        }
      }
LABEL_46:
      v24 = -1073741823;
      goto LABEL_61;
    }
  }
  return result;
}
