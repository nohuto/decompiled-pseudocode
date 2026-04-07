/*
 * XREFs of ?_UpdateCaptureControllerCaptureState@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800CF8B8
 * Callers:
 *     ?OnWindowMinimized@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180084680 (-OnWindowMinimized@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowVisibilityUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180084730 (-OnWindowVisibilityUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowRestored@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180094AA0 (-OnWindowRestored@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowStyleChanged@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800CC230 (-OnWindowStyleChanged@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?_PauseOrResumeWindowCapture@CProjectionBorderManager@@AEAAJPEAVCCaptureControllerProxy@@_N@Z @ 0x18008A4A0 (-_PauseOrResumeWindowCapture@CProjectionBorderManager@@AEAAJPEAVCCaptureControllerProxy@@_N@Z.c)
 *     ??$UpdateCaptureControllerCaptureState@AEAPEAUHWND__@@AEA_N@WindowFrameLoggingTelemetry@@SAXAEAPEAUHWND__@@AEA_N@Z @ 0x1800AB7FC (--$UpdateCaptureControllerCaptureState@AEAPEAUHWND__@@AEA_N@WindowFrameLoggingTelemetry@@SAXAEAP.c)
 *     CProjectionBorderManager::_ApplyToAllCaptureControllersForCapturedWindow__lambda_0a031fc84a3403955d1fdc9ab3d99773___ @ 0x1800CB270 (CProjectionBorderManager--_ApplyToAllCaptureControllersForCapturedWindow__lambda_0a031fc84a34039.c)
 *     ?_GetCaptureControllerForCapturedWindow@CProjectionBorderManager@@AEAAPEAVCCaptureControllerProxy@@PEAUHWND__@@@Z @ 0x1800CF20C (-_GetCaptureControllerForCapturedWindow@CProjectionBorderManager@@AEAAPEAVCCaptureControllerProx.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_uDWMFixMultipleWindowCaptures@@@details@wil@@QEAA_NXZ @ 0x1800D01F8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_uDWMFixMultipleWindowCapt.c)
 */

__int64 __fastcall CProjectionBorderManager::_UpdateCaptureControllerCaptureState(
        struct _RTL_GENERIC_TABLE *this,
        CCaptureControllerProxy *a2,
        char a3)
{
  struct CCaptureControllerProxy *CaptureControllerForCapturedWindow; // rax
  struct _RTL_CRITICAL_SECTION *v8; // rcx
  CCaptureControllerProxy *v9; // [rsp+38h] [rbp+10h] BYREF
  char v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = a3;
  v9 = a2;
  WindowFrameLoggingTelemetry::UpdateCaptureControllerCaptureState<HWND__ * &,bool &>((__int64 *)&v9, &v10);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_uDWMFixMultipleWindowCaptures>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_uDWMFixMultipleWindowCaptures>::GetImpl'::`2'::impl) )
    return CProjectionBorderManager::_ApplyToAllCaptureControllersForCapturedWindow__lambda_0a031fc84a3403955d1fdc9ab3d99773___(
             this,
             a2,
             a3);
  CaptureControllerForCapturedWindow = CProjectionBorderManager::_GetCaptureControllerForCapturedWindow(this, (HWND)a2);
  return CProjectionBorderManager::_PauseOrResumeWindowCapture(v8, CaptureControllerForCapturedWindow, a3);
}
