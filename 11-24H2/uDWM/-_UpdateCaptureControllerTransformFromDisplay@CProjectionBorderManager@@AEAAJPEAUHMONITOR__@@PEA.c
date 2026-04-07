/*
 * XREFs of ?_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x180094C4C
 * Callers:
 *     ?_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@_N@Z @ 0x1800CE0F8 (-_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerPr.c)
 *     ?_AddFilteredDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@_NPEAVCContainerVisualProxy@@@Z @ 0x1800CE31C (-_AddFilteredDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureCont.c)
 *     ?_UpdateDisplayCaptureControllerProperties@CProjectionBorderManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800CFF2C (-_UpdateDisplayCaptureControllerProperties@CProjectionBorderManager@@AEAAJPEAUCAPTURE_DISPLAY_MA.c)
 * Callees:
 *     ?_SetCaptureControllerOffsetTransform@CProjectionBorderManager@@AEAAJPEAVCCaptureControllerProxy@@HH@Z @ 0x180077410 (-_SetCaptureControllerOffsetTransform@CProjectionBorderManager@@AEAAJPEAVCCaptureControllerProxy.c)
 *     ?GetDisplayRect@CDesktopManager@@QEAAJPEAUHMONITOR__@@AEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x180094D18 (-GetDisplayRect@CDesktopManager@@QEAAJPEAUHMONITOR__@@AEAV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSI.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$UpdateCaptureControllerTransformFromDisplay@NN@WindowFrameLoggingTelemetry@@SAX$$QEAN0@Z @ 0x1800AB92C (--$UpdateCaptureControllerTransformFromDisplay@NN@WindowFrameLoggingTelemetry@@SAX$$QEAN0@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::_UpdateCaptureControllerTransformFromDisplay(
        CProjectionBorderManager *this,
        HMONITOR a2,
        struct CCaptureControllerProxy *a3)
{
  int DisplayRect; // eax
  CProjectionBorderManager *v5; // rcx
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
  DisplayRect = CDesktopManager::GetDisplayRect(CDesktopManager::s_pDesktopManagerInstance, a2, &v12);
  v6 = DisplayRect;
  if ( DisplayRect >= 0 )
  {
    v8 = -v13;
    v9 = -v12;
    v10 = CProjectionBorderManager::_SetCaptureControllerOffsetTransform(v5, a3, -v12, -v13);
    v11 = v10;
    if ( v10 >= 0 )
    {
      v15 = (double)v8;
      v16 = (double)v9;
      WindowFrameLoggingTelemetry::UpdateCaptureControllerTransformFromDisplay<double,double>(&v16, &v15);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8DE,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
        (const char *)(unsigned int)v10,
        v12);
      return v11;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8DB,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
      (const char *)(unsigned int)DisplayRect,
      v12);
    return v6;
  }
}
