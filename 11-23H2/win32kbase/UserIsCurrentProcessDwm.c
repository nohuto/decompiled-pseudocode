/*
 * XREFs of UserIsCurrentProcessDwm @ 0x1C001B580
 * Callers:
 *     GreSfmOpenTokenEvent @ 0x1C001B440 (GreSfmOpenTokenEvent.c)
 *     ?DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z @ 0x1C001C770 (-DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z.c)
 *     ?DxgkEngCheckRemoteSessionRemoteAdapterAccess@@YAJU_LUID@@@Z @ 0x1C001E100 (-DxgkEngCheckRemoteSessionRemoteAdapterAccess@@YAJU_LUID@@@Z.c)
 *     ??0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_NI@Z @ 0x1C0023170 (--0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_NI@Z.c)
 *     DrvEnumDisplayDevices @ 0x1C0023B90 (DrvEnumDisplayDevices.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C00246E4 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     NtDCompositionReferenceSharedResourceOnDwmChannel @ 0x1C00318F0 (NtDCompositionReferenceSharedResourceOnDwmChannel.c)
 *     NtUpdateInputSinkTransforms @ 0x1C0031A60 (NtUpdateInputSinkTransforms.c)
 *     NtQueryCompositionInputQueueAndTransform @ 0x1C00326E0 (NtQueryCompositionInputQueueAndTransform.c)
 *     ?CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C0032F98 (-CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C0034688 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C00864C8 (-Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAPEAX@Z @ 0x1C00A3588 (-KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAP.c)
 *     NtQueryCompositionInputSink @ 0x1C00A7190 (NtQueryCompositionInputSink.c)
 *     NtDCompositionSetMaterialProperty @ 0x1C00AF250 (NtDCompositionSetMaterialProperty.c)
 *     NtDCompositionCreateDwmChannel @ 0x1C00B9F60 (NtDCompositionCreateDwmChannel.c)
 *     ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00BD52C (-DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     GreSfmGetNotificationTokens @ 0x1C00CBC90 (GreSfmGetNotificationTokens.c)
 *     NtDCompositionCommitSynchronizationObject @ 0x1C02093D0 (NtDCompositionCommitSynchronizationObject.c)
 *     NtDCompositionDuplicateHandleToProcess @ 0x1C0209650 (NtDCompositionDuplicateHandleToProcess.c)
 *     NtDCompositionUpdatePointerCapture @ 0x1C0209CC0 (NtDCompositionUpdatePointerCapture.c)
 *     NtCompositionInputThread @ 0x1C0231B40 (NtCompositionInputThread.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall UserIsCurrentProcessDwm(__int64 a1, __int64 a2, __int64 a3)
{
  return PsGetCurrentProcess(a1, a2, a3) == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
}
