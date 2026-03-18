/*
 * XREFs of DispBrokerGetCurrentMode @ 0x1400C83E0
 * Callers:
 *     DrvGetDisplayConfigBufferSizesAndLeaveUserCrit @ 0x140023600 (DrvGetDisplayConfigBufferSizesAndLeaveUserCrit.c)
 *     DrvQueryDisplayConfigAndLeaveUserCrit @ 0x140023794 (DrvQueryDisplayConfigAndLeaveUserCrit.c)
 *     ?ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEA_N@Z @ 0x14008D810 (-ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAU.c)
 *     ?DispBrokerUpdateKernelDisplayPolicies@@YAXXZ @ 0x1400C7B00 (-DispBrokerUpdateKernelDisplayPolicies@@YAXXZ.c)
 *     DrvGetDisplayConfigBufferSizesInternal @ 0x1400C8194 (DrvGetDisplayConfigBufferSizesInternal.c)
 *     DrvQueryDisplayConfigInternal @ 0x1400C82C8 (DrvQueryDisplayConfigInternal.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400E5504 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     DrvSetDisplayConfig @ 0x140137640 (DrvSetDisplayConfig.c)
 *     xxxUserSetDisplayConfig @ 0x1401636C0 (xxxUserSetDisplayConfig.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401AE8CC (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DrvIsModeChangeHandledByDispBroker@@YA_NXZ @ 0x1401C84B0 (-DrvIsModeChangeHandledByDispBroker@@YA_NXZ.c)
 *     DrvSetDisplayConfigValidateParams @ 0x1401CB440 (DrvSetDisplayConfigValidateParams.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DispBrokerGetCurrentMode(__int64 a1)
{
  unsigned int *v1; // rcx

  v1 = *(unsigned int **)(W32GetUserSessionState(a1) + 57056);
  if ( *((_BYTE *)v1 + 8) )
    return v1[1];
  else
    return *v1;
}
