/*
 * XREFs of ?_UpdateCaptureControllerDefaultSDRBoostFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800B4EB0
 * Callers:
 *     ?_AddDisplayCaptureEntry@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800B2664 (-_AddDisplayCaptureEntry@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBU.c)
 *     ?_AddFilteredDisplayCaptureEntry@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@PEAVCContainerVisualProxy@@@Z @ 0x1800B27DC (-_AddFilteredDisplayCaptureEntry@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerPro.c)
 *     ?_UpdateDisplayCaptureControllerProperties@CCaptureManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800B5214 (-_UpdateDisplayCaptureControllerProperties@CCaptureManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetDefaultSDRBoost@CCaptureControllerProxy@@QEAAJM@Z @ 0x1800A85D4 (-SetDefaultSDRBoost@CCaptureControllerProxy@@QEAAJM@Z.c)
 *     ?GetDisplaySDRWhiteLevel@CDesktopManager@@QEAAJPEAUHMONITOR__@@PEAM@Z @ 0x1800BA400 (-GetDisplaySDRWhiteLevel@CDesktopManager@@QEAAJPEAUHMONITOR__@@PEAM@Z.c)
 */

__int64 __fastcall CCaptureManager::_UpdateCaptureControllerDefaultSDRBoostFromDisplay(
        CCaptureManager *this,
        HMONITOR a2,
        struct CCaptureControllerProxy *a3)
{
  int DisplaySDRWhiteLevel; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  float v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+34h] [rbp+Ch]

  v9 = HIDWORD(this);
  v8 = 0.0;
  DisplaySDRWhiteLevel = CDesktopManager::GetDisplaySDRWhiteLevel(CDesktopManager::s_pDesktopManagerInstance, a2, &v8);
  if ( DisplaySDRWhiteLevel < 0 )
  {
    v5 = 1811LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
      (const char *)(unsigned int)DisplaySDRWhiteLevel);
    return (unsigned int)DisplaySDRWhiteLevel;
  }
  DisplaySDRWhiteLevel = CCaptureControllerProxy::SetDefaultSDRBoost(a3, v8);
  if ( DisplaySDRWhiteLevel < 0 )
  {
    v5 = 1812LL;
    goto LABEL_3;
  }
  return 0LL;
}
