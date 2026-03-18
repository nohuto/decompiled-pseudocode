/*
 * XREFs of UserIsWddmConnectedSession @ 0x14004E070
 * Callers:
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x140023B1C (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     UpdateGraphicsDeviceList @ 0x14004CAB0 (UpdateGraphicsDeviceList.c)
 *     DrvSetMonitorPowerState @ 0x14004CB90 (DrvSetMonitorPowerState.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x14004CBE0 (DrvSetWddmDeviceMonitorPowerState.c)
 *     DrvUpdateGraphicsDeviceList @ 0x14004D070 (DrvUpdateGraphicsDeviceList.c)
 *     EngQueryW32kCddInterface @ 0x14004DE90 (EngQueryW32kCddInterface.c)
 *     GreSuspendDirectDraw @ 0x140087130 (GreSuspendDirectDraw.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1400F6978 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     DrvSetDisplayConfig @ 0x140137640 (DrvSetDisplayConfig.c)
 *     DrvChangeDisplaySettingsPreValidate @ 0x140138FFC (DrvChangeDisplaySettingsPreValidate.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x14016B770 (NtUserDisplayConfigGetDeviceInfo.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x14016BDA0 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserFunctionalizeDisplayConfig @ 0x14016C1F0 (NtUserFunctionalizeDisplayConfig.c)
 *     NtUserQueryDisplayConfig @ 0x14016F580 (NtUserQueryDisplayConfig.c)
 *     NtUserSetDisplayConfig @ 0x140170CE0 (NtUserSetDisplayConfig.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140176D8C (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1401ABAF0 (xxxDisplayDiagBlackScreenDetected.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401AE8CC (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     xxxVideoPortCalloutThread @ 0x1401B08D4 (xxxVideoPortCalloutThread.c)
 *     DrvSetDisplayConfigValidateParams @ 0x1401CB440 (DrvSetDisplayConfigValidateParams.c)
 * Callees:
 *     UserRemoteConnectedSessionUsingWddm @ 0x14004E190 (UserRemoteConnectedSessionUsingWddm.c)
 */

__int64 __fastcall UserIsWddmConnectedSession(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !*(_WORD *)(W32GetUserSessionState(a1) + 69008) || (unsigned int)UserRemoteConnectedSessionUsingWddm() )
    return 1;
  return v1;
}
