/*
 * XREFs of ?_UpdateCaptureControllerDefaultSDRBoost@CProjectionBorderManager@@AEAAJPEAUHWND__@@M@Z @ 0x1800CFBF8
 * Callers:
 *     ?OnWindowMonitorChanged@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180067420 (-OnWindowMonitorChanged@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoost@CProjectionBorderManager@@AEAAJPEAUHWND__@@@Z @ 0x1800CFB14 (-_UpdateCaptureControllerDefaultSDRBoost@CProjectionBorderManager@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?SetDefaultSDRBoost@CCaptureControllerProxy@@QEAAJM@Z @ 0x1800A85D4 (-SetDefaultSDRBoost@CCaptureControllerProxy@@QEAAJM@Z.c)
 *     CProjectionBorderManager::_ApplyToAllCaptureControllersForCapturedWindow__lambda_1eb49ca778746744b4a6345f153f5572___ @ 0x1800CB3A0 (CProjectionBorderManager--_ApplyToAllCaptureControllersForCapturedWindow__lambda_1eb49ca77874674.c)
 *     ?_GetCaptureControllerForCapturedWindow@CProjectionBorderManager@@AEAAPEAVCCaptureControllerProxy@@PEAUHWND__@@@Z @ 0x1800CF20C (-_GetCaptureControllerForCapturedWindow@CProjectionBorderManager@@AEAAPEAVCCaptureControllerProx.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_uDWMFixMultipleWindowCaptures@@@details@wil@@QEAA_NXZ @ 0x1800D01F8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_uDWMFixMultipleWindowCapt.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CProjectionBorderManager::_UpdateCaptureControllerDefaultSDRBoost(
        struct _RTL_GENERIC_TABLE *this,
        CCaptureControllerProxy *a2,
        double a3)
{
  CCaptureControllerProxy *CaptureControllerForCapturedWindow; // rax

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_uDWMFixMultipleWindowCaptures>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_uDWMFixMultipleWindowCaptures>::GetImpl'::`2'::impl) )
    return CProjectionBorderManager::_ApplyToAllCaptureControllersForCapturedWindow__lambda_1eb49ca778746744b4a6345f153f5572___(
             this,
             a2,
             _mm_cvtsi128_si32(*(__m128i *)&a3));
  CaptureControllerForCapturedWindow = CProjectionBorderManager::_GetCaptureControllerForCapturedWindow(this, (HWND)a2);
  return CCaptureControllerProxy::SetDefaultSDRBoost(CaptureControllerForCapturedWindow, *(float *)&a3);
}
