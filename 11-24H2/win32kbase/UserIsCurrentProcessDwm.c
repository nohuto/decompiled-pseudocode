/*
 * XREFs of UserIsCurrentProcessDwm @ 0x140024300
 * Callers:
 *     ?DrvCheckRemoteSessionRemoteAdapterAccess@@YAJU_LUID@@@Z @ 0x1400136B8 (-DrvCheckRemoteSessionRemoteAdapterAccess@@YAJU_LUID@@@Z.c)
 *     ?DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z @ 0x140013DF0 (-DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z.c)
 *     DrvEnumDisplayDevices @ 0x140018880 (DrvEnumDisplayDevices.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x14001A960 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x140023B1C (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     NtQueryCompositionInputSink @ 0x14004A590 (NtQueryCompositionInputSink.c)
 *     ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAPEAX@Z @ 0x14006B490 (-KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAP.c)
 *     NtDCompositionUpdatePointerCapture @ 0x14006CCC0 (NtDCompositionUpdatePointerCapture.c)
 *     ??0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_NI@Z @ 0x14006D1CC (--0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_NI@Z.c)
 *     GreSfmOpenTokenEvent @ 0x140087600 (GreSfmOpenTokenEvent.c)
 *     GreSfmGetNotificationTokens @ 0x140087980 (GreSfmGetNotificationTokens.c)
 *     ?CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1400B3DCC (-CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     NtDCompositionGetFrameLegacyTokens @ 0x1400BD900 (NtDCompositionGetFrameLegacyTokens.c)
 *     NtDCompositionGetFrameSurfaceUpdates @ 0x1400BF1A0 (NtDCompositionGetFrameSurfaceUpdates.c)
 *     NtQueryCompositionInputQueueAndTransform @ 0x1400D8B80 (NtQueryCompositionInputQueueAndTransform.c)
 *     NtUpdateInputSinkTransforms @ 0x1400F0BF0 (NtUpdateInputSinkTransforms.c)
 *     ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x14013F550 (-DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     NtUserCheckProcessSession @ 0x14016B6A0 (NtUserCheckProcessSession.c)
 *     NtDCompositionBeginFrame @ 0x140194290 (NtDCompositionBeginFrame.c)
 *     NtDCompositionCommitSynchronizationObject @ 0x140222CB0 (NtDCompositionCommitSynchronizationObject.c)
 *     NtDCompositionDuplicateHandleToProcess @ 0x1402231F0 (NtDCompositionDuplicateHandleToProcess.c)
 *     ?Create@CConnection@DirectComposition@@SAJ_NPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x140224048 (-Create@CConnection@DirectComposition@@SAJ_NPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 UserIsCurrentProcessDwm()
{
  __int64 v0; // rbx

  v0 = *(_QWORD *)(W32GetUserSessionState() + 70808);
  return PsGetCurrentProcess() == v0;
}
