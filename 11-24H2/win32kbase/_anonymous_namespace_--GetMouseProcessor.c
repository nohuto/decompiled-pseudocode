/*
 * XREFs of _anonymous_namespace_::GetMouseProcessor @ 0x140060F70
 * Callers:
 *     HandleInputDestDestruction @ 0x140060EC8 (HandleInputDestDestruction.c)
 *     GenerateMouseMove @ 0x140060F40 (GenerateMouseMove.c)
 *     UpdateGlobalCursorOwner @ 0x140062750 (UpdateGlobalCursorOwner.c)
 *     InitiateWaitForInjectionCompletion @ 0x140062B90 (InitiateWaitForInjectionCompletion.c)
 *     NotifySetPointerGraphicDevice @ 0x140062E20 (NotifySetPointerGraphicDevice.c)
 *     NtUserGetPointerDeviceOrientation @ 0x140062E50 (NtUserGetPointerDeviceOrientation.c)
 *     HasCapture @ 0x140062F70 (HasCapture.c)
 *     IsMouseInterceptEnabled @ 0x1400DE3A0 (IsMouseInterceptEnabled.c)
 *     ForceResetMouseButtonsDownState @ 0x140140C00 (ForceResetMouseButtonsDownState.c)
 *     CheckIntegrityAccessToCapture @ 0x140140FF0 (CheckIntegrityAccessToCapture.c)
 *     NtSetShellCursorState @ 0x14014E690 (NtSetShellCursorState.c)
 *     IsCapturedBySystem @ 0x1401559D0 (IsCapturedBySystem.c)
 *     CancelCapturedMipOverride @ 0x140155F50 (CancelCapturedMipOverride.c)
 *     SynthesizePTPMouseInput @ 0x1401899D0 (SynthesizePTPMouseInput.c)
 *     ?InputCoreProviderCallbackWorker@@YAXXZ @ 0x1401B3FE0 (-InputCoreProviderCallbackWorker@@YAXXZ.c)
 *     NtMITDisableMouseIntercept @ 0x1401B80D0 (NtMITDisableMouseIntercept.c)
 *     NtMITEnableMouseIntercept @ 0x1401B81D0 (NtMITEnableMouseIntercept.c)
 *     NtMITSynthesizeMouseInput @ 0x1401B8CC0 (NtMITSynthesizeMouseInput.c)
 *     ClearLogicalCursorPos @ 0x1402125E0 (ClearLogicalCursorPos.c)
 *     ExecuteMarshaledInterceptRequest @ 0x140212620 (ExecuteMarshaledInterceptRequest.c)
 *     ForceCapture @ 0x1402126F0 (ForceCapture.c)
 *     IsCapturedByThread @ 0x140212F20 (IsCapturedByThread.c)
 *     IsMouseButtonDown @ 0x140212FC0 (IsMouseButtonDown.c)
 *     MouseButtonAction @ 0x140213040 (MouseButtonAction.c)
 *     MouseMove @ 0x140213080 (MouseMove.c)
 *     MoveSizeReadAndClearMouseMoveBoundHitFlags @ 0x1402130C0 (MoveSizeReadAndClearMouseMoveBoundHitFlags.c)
 *     PostMouseInputMessage @ 0x140213164 (PostMouseInputMessage.c)
 *     ReleaseMouseButton @ 0x1402132B0 (ReleaseMouseButton.c)
 *     SetMouseMoveBoundHitFlagsForMoveSize @ 0x140213410 (SetMouseMoveBoundHitFlagsForMoveSize.c)
 *     SetUMInputObservationState @ 0x140213468 (SetUMInputObservationState.c)
 *     SynthesizeMouseInput @ 0x140213510 (SynthesizeMouseInput.c)
 *     UpdateSavedPoint @ 0x140213840 (UpdateSavedPoint.c)
 *     xxxProcessMouseEvent @ 0x1402138E0 (xxxProcessMouseEvent.c)
 *     ?ivHandleMouseInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x140216C00 (-ivHandleMouseInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall anonymous_namespace_::GetMouseProcessor(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(W32GetUserSessionState(a1) + 3144);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  else
    return 0LL;
}
