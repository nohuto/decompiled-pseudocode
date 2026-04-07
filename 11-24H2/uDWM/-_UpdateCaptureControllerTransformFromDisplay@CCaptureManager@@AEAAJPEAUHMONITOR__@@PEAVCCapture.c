/*
 * XREFs of ?_UpdateCaptureControllerTransformFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800B5024
 * Callers:
 *     ?_AddDisplayCaptureEntry@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800B2664 (-_AddDisplayCaptureEntry@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBU.c)
 *     ?_AddFilteredDisplayCaptureEntry@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@PEAVCContainerVisualProxy@@@Z @ 0x1800B27DC (-_AddFilteredDisplayCaptureEntry@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerPro.c)
 *     ?_UpdateDisplayCaptureControllerProperties@CCaptureManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800B5214 (-_UpdateDisplayCaptureControllerProperties@CCaptureManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1.c)
 * Callees:
 *     ?GetDisplayRect@CDesktopManager@@QEAAJPEAUHMONITOR__@@AEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x180094D18 (-GetDisplayRect@CDesktopManager@@QEAAJPEAUHMONITOR__@@AEAV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSI.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$UpdateCaptureControllerTransformFromDisplay@NN@WindowFrameLoggingTelemetry@@SAX$$QEAN0@Z @ 0x1800AB92C (--$UpdateCaptureControllerTransformFromDisplay@NN@WindowFrameLoggingTelemetry@@SAX$$QEAN0@Z.c)
 *     ?_SetCaptureControllerOffsetTransform@CCaptureManager@@AEAAJPEAVCCaptureControllerProxy@@HHM@Z @ 0x1800B4500 (-_SetCaptureControllerOffsetTransform@CCaptureManager@@AEAAJPEAVCCaptureControllerProxy@@HHM@Z.c)
 */

__int64 __fastcall CCaptureManager::_UpdateCaptureControllerTransformFromDisplay(
        CCaptureManager *this,
        HMONITOR a2,
        struct CCaptureControllerProxy *a3)
{
  CCaptureManager *v4; // rcx
  int DisplayRect; // ebx
  __int64 v6; // rdx
  int v8; // edi
  int v9; // esi
  int v10; // [rsp+30h] [rbp-28h] BYREF
  int v11; // [rsp+34h] [rbp-24h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  double v13; // [rsp+60h] [rbp+8h] BYREF
  double v14; // [rsp+78h] [rbp+20h] BYREF

  v13 = *(double *)&this;
  DisplayRect = CDesktopManager::GetDisplayRect((__int64)CDesktopManager::s_pDesktopManagerInstance, a2, &v10);
  if ( DisplayRect < 0 )
  {
    v6 = 1776LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
      (const char *)(unsigned int)DisplayRect);
    return (unsigned int)DisplayRect;
  }
  v8 = -v11;
  v9 = -v10;
  DisplayRect = CCaptureManager::_SetCaptureControllerOffsetTransform(v4, a3, -v10, -v11, LODWORD(FLOAT_1_0));
  if ( DisplayRect < 0 )
  {
    v6 = 1779LL;
    goto LABEL_3;
  }
  v13 = (double)v8;
  v14 = (double)v9;
  WindowFrameLoggingTelemetry::UpdateCaptureControllerTransformFromDisplay<double,double>(
    (__int64 *)&v14,
    (__int64 *)&v13);
  return 0LL;
}
