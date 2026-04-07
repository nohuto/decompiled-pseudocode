/*
 * XREFs of ?_UpdateCaptureControllerContentOffsetFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800B4B88
 * Callers:
 *     ?_AddDisplayCaptureEntry@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800B2664 (-_AddDisplayCaptureEntry@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBU.c)
 *     ?_AddFilteredDisplayCaptureEntry@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@PEAVCContainerVisualProxy@@@Z @ 0x1800B27DC (-_AddFilteredDisplayCaptureEntry@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerPro.c)
 *     ?_UpdateDisplayCaptureControllerProperties@CCaptureManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800B5214 (-_UpdateDisplayCaptureControllerProperties@CCaptureManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1.c)
 * Callees:
 *     ?GetDisplayRect@CDesktopManager@@QEAAJPEAUHMONITOR__@@AEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x180094D18 (-GetDisplayRect@CDesktopManager@@QEAAJPEAUHMONITOR__@@AEAV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSI.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$UpdateCaptureControllerTransformFromDisplay@NN@WindowFrameLoggingTelemetry@@SAX$$QEAN0@Z @ 0x1800AB92C (--$UpdateCaptureControllerTransformFromDisplay@NN@WindowFrameLoggingTelemetry@@SAX$$QEAN0@Z.c)
 *     ?_SetCaptureControllerContentOffset@CCaptureManager@@AEAAJPEAVCCaptureControllerProxy@@HH@Z @ 0x1800B44B8 (-_SetCaptureControllerContentOffset@CCaptureManager@@AEAAJPEAVCCaptureControllerProxy@@HH@Z.c)
 */

__int64 __fastcall CCaptureManager::_UpdateCaptureControllerContentOffsetFromDisplay(
        CCaptureManager *this,
        HMONITOR a2,
        struct CCaptureControllerProxy *a3)
{
  int DisplayRect; // eax
  CCaptureManager *v5; // rcx
  unsigned int v6; // ebx
  int v8; // ebx
  int v9; // edi
  int v10; // eax
  unsigned int v11; // esi
  int v12; // [rsp+20h] [rbp-18h] BYREF
  int v13; // [rsp+24h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  double v15; // [rsp+40h] [rbp+8h] BYREF
  double v16; // [rsp+58h] [rbp+20h] BYREF

  v15 = *(double *)&this;
  DisplayRect = CDesktopManager::GetDisplayRect((__int64)CDesktopManager::s_pDesktopManagerInstance, a2, &v12);
  v6 = DisplayRect;
  if ( DisplayRect >= 0 )
  {
    v8 = v13;
    v9 = v12;
    v10 = CCaptureManager::_SetCaptureControllerContentOffset(v5, a3, v12, v13);
    v11 = v10;
    if ( v10 >= 0 )
    {
      v15 = (double)-v8;
      v16 = (double)-v9;
      WindowFrameLoggingTelemetry::UpdateCaptureControllerTransformFromDisplay<double,double>(
        (__int64 *)&v16,
        (__int64 *)&v15);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x705,
        (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
        (const char *)(unsigned int)v10);
      return v11;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x702,
      (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
      (const char *)(unsigned int)DisplayRect);
    return v6;
  }
}
