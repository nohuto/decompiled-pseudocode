/*
 * XREFs of UserRemoteConnectedSessionUsingWddm @ 0x14004E190
 * Callers:
 *     UserIsWddmConnectedSession @ 0x14004E070 (UserIsWddmConnectedSession.c)
 *     ?CreateWithUserCritHeld@DISPLAYCONFIG_USER_SESSION_STATE@@SA?AV1@XZ @ 0x14004E0AC (-CreateWithUserCritHeld@DISPLAYCONFIG_USER_SESSION_STATE@@SA-AV1@XZ.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1400F6978 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401AE8CC (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     xxxVideoPortCalloutThread @ 0x1401B08D4 (xxxVideoPortCalloutThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UserRemoteConnectedSessionUsingWddm(__int64 a1)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx

  v2 = 0;
  if ( *(_WORD *)(W32GetUserSessionState(a1) + 69008) && *(_WORD *)(W32GetUserSessionState(v1) + 69008) != 0xFFFF )
    return *(_DWORD *)(W32GetUserSessionState(0xFFFFLL) + 68960) != 0;
  return v2;
}
