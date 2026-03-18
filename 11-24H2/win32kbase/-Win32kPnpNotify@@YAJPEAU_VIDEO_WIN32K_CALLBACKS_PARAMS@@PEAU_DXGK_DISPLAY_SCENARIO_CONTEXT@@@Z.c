/*
 * XREFs of ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401AE8CC
 * Callers:
 *     xxxVideoPortCalloutThread @ 0x1401B08D4 (xxxVideoPortCalloutThread.c)
 * Callees:
 *     UserIsRemoteAndNotDisconnectConnection @ 0x140013900 (UserIsRemoteAndNotDisconnectConnection.c)
 *     UserIsConsoleConnection @ 0x140013950 (UserIsConsoleConnection.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x14004CBE0 (DrvSetWddmDeviceMonitorPowerState.c)
 *     DrvUpdateGraphicsDeviceList @ 0x14004D070 (DrvUpdateGraphicsDeviceList.c)
 *     UserIsWddmConnectedSession @ 0x14004E070 (UserIsWddmConnectedSession.c)
 *     UserRemoteConnectedSessionUsingWddm @ 0x14004E190 (UserRemoteConnectedSessionUsingWddm.c)
 *     DxgkEngNotifyDisplayChange @ 0x1400A38F0 (DxgkEngNotifyDisplayChange.c)
 *     DispBrokerGetCurrentMode @ 0x1400C83E0 (DispBrokerGetCurrentMode.c)
 *     DrvLogDiagDisplayChange @ 0x140145870 (DrvLogDiagDisplayChange.c)
 *     DrvIsNotUsingGraphicsDevice @ 0x140146D70 (DrvIsNotUsingGraphicsDevice.c)
 *     IsxxxSetCsrssThreadDesktopSupported @ 0x140147990 (IsxxxSetCsrssThreadDesktopSupported.c)
 *     xxxSetCsrssThreadDesktop @ 0x140150AF4 (xxxSetCsrssThreadDesktop.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x140157B50 (xxxRestoreCsrssThreadDesktop.c)
 *     IsxxxRestoreCsrssThreadDesktopSupported @ 0x14015837C (IsxxxRestoreCsrssThreadDesktopSupported.c)
 *     DrvDisableGraphicsDevices @ 0x14015ADCC (DrvDisableGraphicsDevices.c)
 *     xxxUserSetDisplayConfig @ 0x1401636C0 (xxxUserSetDisplayConfig.c)
 *     PostWinlogonMessage @ 0x140167BB0 (PostWinlogonMessage.c)
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_3__lambda_b4f43b15d51bbb98ecd260a5ad293850___ @ 0x1401A8640 (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_3__lambda_b4f43b15d51bbb98ecd260a5ad293850___.c)
 *     Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x1401A8EC8 (Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline.c)
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401ADE38 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DrvCleanupGraphicsDevices @ 0x1401C96B4 (DrvCleanupGraphicsDevices.c)
 */

__int64 __fastcall Win32kPnpNotify(struct _VIDEO_WIN32K_CALLBACKS_PARAMS *a1, struct _GUID *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // r14
  int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r15
  PVOID PhysDisp; // rbx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rcx
  int v37; // ebx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // [rsp+60h] [rbp-38h] BYREF
  __int64 v41; // [rsp+68h] [rbp-30h]
  char v42; // [rsp+B0h] [rbp+18h] BYREF

  UserSessionState = W32GetUserSessionState(a1);
  v7 = 0;
  if ( !*(_DWORD *)(UserSessionState + 2756) )
    DrvSetWddmDeviceMonitorPowerState((__int64)a1->PhysDisp, 1, 1, a2);
  if ( (int)IsxxxSetCsrssThreadDesktopSupported(v5, v4) < 0 || *(_QWORD *)(W32GetUserSessionState(v8) + 19200) )
  {
    DrvLogDiagDisplayChange((__int64)a1, 6);
    v12 = *(_QWORD *)(W32GetUserSessionState(v11) + 57008);
    v13 = *(_QWORD *)(v12 + 16);
    if ( a1->Param )
    {
      if ( (unsigned int)UserIsWddmConnectedSession(v12) )
      {
        v41 = 0LL;
        v40 = 0LL;
        *(_DWORD *)(*(_QWORD *)(W32GetSessionState(v25) + 88) + 1180LL) = 0;
        DrvUpdateGraphicsDeviceList(1);
        if ( (unsigned int)DispBrokerGetCurrentMode(v26) )
        {
          if ( *(_DWORD *)(W32GetUserGdiSessionState(v28) + 28)
            && !(unsigned int)Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline() )
          {
            W32GetUserSessionState(v35);
            v7 = DispBroker::DispBrokerClient::AsyncMessageNoAlloc_3__lambda_b4f43b15d51bbb98ecd260a5ad293850___(
                   v36,
                   (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a2);
          }
        }
        else if ( (int)IsxxxSetCsrssThreadDesktopSupported(v28, v27) < 0
               || (v30 = W32GetUserSessionState(v29),
                   v7 = xxxSetCsrssThreadDesktop(*(_QWORD *)(v30 + 19200), (__int64)&v40),
                   v7 >= 0) )
        {
          v31 = W32GetUserSessionState(v29);
          v7 = xxxUserSetDisplayConfig(
                 0,
                 0LL,
                 0x88Fu,
                 6u,
                 *(_QWORD *)(v31 + 19200),
                 0,
                 0LL,
                 0LL,
                 0LL,
                 (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a2,
                 0LL);
          if ( (int)IsxxxRestoreCsrssThreadDesktopSupported(v33, v32) >= 0 )
            xxxRestoreCsrssThreadDesktop((__int64)&v40, v34);
        }
      }
      v37 = PnpNotifyForRemoteSession(0LL, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a2);
      if ( (unsigned int)UserIsRemoteAndNotDisconnectConnection() )
        v7 = v37;
    }
    else
    {
      PhysDisp = a1->PhysDisp;
      DrvDisableGraphicsDevices((__int64)PhysDisp);
      if ( !(unsigned int)DrvIsNotUsingGraphicsDevice(v13) )
      {
        if ( (unsigned int)UserIsWddmConnectedSession(v15) )
        {
          v41 = 0LL;
          v40 = 0LL;
          if ( (int)IsxxxSetCsrssThreadDesktopSupported(v17, v16) < 0
            || (v19 = W32GetUserSessionState(v18),
                v7 = xxxSetCsrssThreadDesktop(*(_QWORD *)(v19 + 19200), (__int64)&v40),
                v7 >= 0) )
          {
            v42 = 0;
            v20 = W32GetUserSessionState(v18);
            v7 = xxxUserSetDisplayConfig(
                   0,
                   0LL,
                   0x88Fu,
                   0x406u,
                   *(_QWORD *)(v20 + 19200),
                   0,
                   0LL,
                   0LL,
                   &v42,
                   (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a2,
                   0LL);
            if ( v7 < 0 )
            {
              v23 = W32GetUserSessionState(v22);
              v7 = xxxUserSetDisplayConfig(
                     0,
                     0LL,
                     0x88Fu,
                     1u,
                     *(_QWORD *)(v23 + 19200),
                     0,
                     0LL,
                     0LL,
                     0LL,
                     (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a2,
                     0LL);
            }
            else if ( a1->SurpriseRemoval && v42 )
            {
              DxgkEngNotifyDisplayChange(0LL);
            }
            if ( (int)IsxxxRestoreCsrssThreadDesktopSupported(v22, v21) >= 0 )
              xxxRestoreCsrssThreadDesktop((__int64)&v40, v24);
          }
        }
      }
      PnpNotifyForRemoteSession(PhysDisp, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a2);
      if ( v7 >= 0 )
        DrvCleanupGraphicsDevices(PhysDisp);
      if ( (unsigned int)UserIsRemoteAndNotDisconnectConnection() )
        DrvUpdateGraphicsDeviceList(1);
      if ( a1->LockUserSession )
        PostWinlogonMessage(1027LL);
    }
    if ( UserIsConsoleConnection() && !*(_DWORD *)(UserSessionState + 2756)
      || (unsigned int)UserRemoteConnectedSessionUsingWddm(v38) && *(_DWORD *)(W32GetUserSessionState(v39) + 69116) )
    {
      DrvSetWddmDeviceMonitorPowerState(0LL, 4, 1, a2);
    }
    return (unsigned int)v7;
  }
  else
  {
    *(_BYTE *)(W32GetUserGdiSessionState(v9) + 20) = 0;
    return 3221225473LL;
  }
}
