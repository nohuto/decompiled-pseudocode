/*
 * XREFs of RtlCopyFromUser @ 0x1401A22E8
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x14009C810 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     NtDCompositionCommitChannel @ 0x1400A5430 (NtDCompositionCommitChannel.c)
 *     NtDCompositionConfirmFrame @ 0x1400B6650 (NtDCompositionConfirmFrame.c)
 *     NtDCompositionGetFrameLegacyTokens @ 0x1400BD900 (NtDCompositionGetFrameLegacyTokens.c)
 *     NtDCompositionGetFrameSurfaceUpdates @ 0x1400BF1A0 (NtDCompositionGetFrameSurfaceUpdates.c)
 *     NtDCompositionGetConnectionBatch @ 0x1400C6860 (NtDCompositionGetConnectionBatch.c)
 *     NtDCompositionWaitForCompositorClock @ 0x1400CE2F0 (NtDCompositionWaitForCompositorClock.c)
 *     NtDCompositionGetStatistics @ 0x1400D17F0 (NtDCompositionGetStatistics.c)
 *     NtDCompositionGetTargetStatistics @ 0x1400EFC70 (NtDCompositionGetTargetStatistics.c)
 *     NtUpdateInputSinkTransforms @ 0x1400F0BF0 (NtUpdateInputSinkTransforms.c)
 *     NtMITSynthesizeKeyboardInput @ 0x1401053D0 (NtMITSynthesizeKeyboardInput.c)
 *     NtDCompositionTelemetrySetApplicationId @ 0x14011BF10 (NtDCompositionTelemetrySetApplicationId.c)
 *     NtDCompositionRegisterThumbnailVisual @ 0x14011D360 (NtDCompositionRegisterThumbnailVisual.c)
 *     NtDCompositionCreateChannel @ 0x14011F760 (NtDCompositionCreateChannel.c)
 *     NtUserDownlevelTouchpad @ 0x140121600 (NtUserDownlevelTouchpad.c)
 *     NtMITCoreMsgKOpenConnectionTo @ 0x140126F90 (NtMITCoreMsgKOpenConnectionTo.c)
 *     NtCompositionSetDropTarget @ 0x14012B7F0 (NtCompositionSetDropTarget.c)
 *     NtUserCreateActivationObject @ 0x14012F500 (NtUserCreateActivationObject.c)
 *     NtUserConfigureActivationObject @ 0x14013A410 (NtUserConfigureActivationObject.c)
 *     NtDCompositionSetBlurredWallpaperSurface @ 0x140146580 (NtDCompositionSetBlurredWallpaperSurface.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x140148D10 (NtDCompositionRegisterVirtualDesktopVisual.c)
 *     NtUserDestroyActivationObject @ 0x140149090 (NtUserDestroyActivationObject.c)
 *     NtUserReportInertia @ 0x14016FA40 (NtUserReportInertia.c)
 *     NtUserSetManipulationInputTarget @ 0x140171460 (NtUserSetManipulationInputTarget.c)
 *     NtUserSystemParametersInfo @ 0x140171AA0 (NtUserSystemParametersInfo.c)
 *     NtDCompositionBeginFrame @ 0x140194290 (NtDCompositionBeginFrame.c)
 *     NtConfigureInputSpace @ 0x1401B7710 (NtConfigureInputSpace.c)
 *     NtMITConfigureVirtualTouchpad @ 0x1401B7DD0 (NtMITConfigureVirtualTouchpad.c)
 *     NtMITPostMouseInputMessage @ 0x1401B8660 (NtMITPostMouseInputMessage.c)
 *     NtMITPostThreadEventMessage @ 0x1401B87E0 (NtMITPostThreadEventMessage.c)
 *     NtMITPostWindowEventMessage @ 0x1401B8950 (NtMITPostWindowEventMessage.c)
 *     NtMITSynthesizeMouseInput @ 0x1401B8CC0 (NtMITSynthesizeMouseInput.c)
 *     NtMITSynthesizeTouchInput @ 0x1401B8EC0 (NtMITSynthesizeTouchInput.c)
 *     NtSetPointerDeviceInputSpace @ 0x1401B9390 (NtSetPointerDeviceInputSpace.c)
 *     NtUserAddVisualIdentifier @ 0x1401B9580 (NtUserAddVisualIdentifier.c)
 *     NtUserCreateSyntheticPointerDevice2 @ 0x1401B9930 (NtUserCreateSyntheticPointerDevice2.c)
 *     NtUserGetExtendedPointerDeviceProperty @ 0x1401BA9F0 (NtUserGetExtendedPointerDeviceProperty.c)
 *     NtUserGetInputContainerId @ 0x1401BAB10 (NtUserGetInputContainerId.c)
 *     NtUserLoadKeyboardLayoutEx @ 0x1401BC420 (NtUserLoadKeyboardLayoutEx.c)
 *     NtUserMapPointsByVisualIdentifier @ 0x1401BC710 (NtUserMapPointsByVisualIdentifier.c)
 *     NtUserPostKeyboardInputMessage @ 0x1401BCB10 (NtUserPostKeyboardInputMessage.c)
 *     NtUserRemoveVisualIdentifier @ 0x1401BCD30 (NtUserRemoveVisualIdentifier.c)
 *     NtUserSetDesktopVisualInputSink @ 0x1401BCDC0 (NtUserSetDesktopVisualInputSink.c)
 *     NtUserSetForegroundRedirectionForActivationObject @ 0x1401BD2E0 (NtUserSetForegroundRedirectionForActivationObject.c)
 *     NtDCompositionCreateBufferCollection @ 0x140222DD0 (NtDCompositionCreateBufferCollection.c)
 *     NtDCompositionDuplicateHandleToProcess @ 0x1402231F0 (NtDCompositionDuplicateHandleToProcess.c)
 *     NtDCompositionSendDwmLpcMessage @ 0x1402235E0 (NtDCompositionSendDwmLpcMessage.c)
 *     NtDesktopCaptureBits @ 0x140223AF0 (NtDesktopCaptureBits.c)
 *     ?EffectHashesCompiled@CConnection@DirectComposition@@QEBA_NPEB_KI@Z @ 0x1402243A0 (-EffectHashesCompiled@CConnection@DirectComposition@@QEBA_NPEB_KI@Z.c)
 *     RtlCopyFromUser$thunk$11487580757436585079 @ 0x140242010 (RtlCopyFromUser$thunk$11487580757436585079.c)
 * Callees:
 *     ProbeForRead_0 @ 0x1401A2356 (ProbeForRead_0.c)
 *     RtlCopyVolatileMemory @ 0x14023F410 (RtlCopyVolatileMemory.c)
 */

__int64 (*__fastcall RtlCopyFromUser(void *a1, void *Src, size_t Size))(void)
{
  __int64 (*result)(void); // rax

  result = _uma_functions;
  if ( _uma_functions )
    return (__int64 (*)(void))_uma_functions();
  if ( Size )
  {
    ProbeForRead_0(Src, Size, 1u);
    return (__int64 (*)(void))RtlCopyVolatileMemory(a1, Src, Size);
  }
  return result;
}
