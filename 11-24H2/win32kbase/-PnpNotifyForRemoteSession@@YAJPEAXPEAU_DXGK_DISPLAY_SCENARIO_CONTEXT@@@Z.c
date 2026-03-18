/*
 * XREFs of ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401ADE38
 * Callers:
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401AE8CC (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     UserRemoteConnectedSessionUsingXddm @ 0x140012F70 (UserRemoteConnectedSessionUsingXddm.c)
 *     DrvUpdateGraphicsDeviceList @ 0x14004D070 (DrvUpdateGraphicsDeviceList.c)
 *     IsxxxSetCsrssThreadDesktopSupported @ 0x140147990 (IsxxxSetCsrssThreadDesktopSupported.c)
 *     xxxSetCsrssThreadDesktop @ 0x140150AF4 (xxxSetCsrssThreadDesktop.c)
 *     DrvNeedToSwitchAdapterForRemoteSession @ 0x1401564FC (DrvNeedToSwitchAdapterForRemoteSession.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x140157B50 (xxxRestoreCsrssThreadDesktop.c)
 *     IsxxxRestoreCsrssThreadDesktopSupported @ 0x14015837C (IsxxxRestoreCsrssThreadDesktopSupported.c)
 *     xxxUserSetDisplayConfig @ 0x1401636C0 (xxxUserSetDisplayConfig.c)
 *     DrvCleanupRemoteGraphicsDevices @ 0x1401C989C (DrvCleanupRemoteGraphicsDevices.c)
 *     DrvUpdateRemoteGraphicsDeviceList @ 0x1401CC938 (DrvUpdateRemoteGraphicsDeviceList.c)
 */

__int64 __fastcall PnpNotifyForRemoteSession(void *a1, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 UserSessionState; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int128 v15; // [rsp+60h] [rbp-18h] BYREF

  v15 = 0LL;
  if ( !(unsigned int)DrvNeedToSwitchAdapterForRemoteSession(a1) )
    return 0LL;
  if ( !(unsigned int)UserRemoteConnectedSessionUsingXddm() )
  {
LABEL_6:
    DrvCleanupRemoteGraphicsDevices();
    DrvUpdateRemoteGraphicsDeviceList();
    if ( (unsigned int)UserRemoteConnectedSessionUsingXddm() )
    {
      UserSessionState = W32GetUserSessionState(v10);
      xxxUserSetDisplayConfig(0, 0LL, 0x88Fu, 2u, *(_QWORD *)(UserSessionState + 19200), 0, 0LL, 0LL, 0LL, a2, 0LL);
      if ( (int)IsxxxRestoreCsrssThreadDesktopSupported(v13, v12) >= 0 )
        xxxRestoreCsrssThreadDesktop((__int64)&v15, v14);
    }
    return 0LL;
  }
  if ( (int)IsxxxSetCsrssThreadDesktopSupported(v4, v3) < 0
    || (v6 = W32GetUserSessionState(v5),
        result = xxxSetCsrssThreadDesktop(*(_QWORD *)(v6 + 19200), (__int64)&v15),
        (int)result >= 0) )
  {
    DrvUpdateGraphicsDeviceList(1);
    v9 = W32GetUserSessionState(v8);
    xxxUserSetDisplayConfig(0, 0LL, 0x88Fu, 1u, *(_QWORD *)(v9 + 19200), 0, 0LL, 0LL, 0LL, a2, 0LL);
    goto LABEL_6;
  }
  return result;
}
