/*
 * XREFs of ?_UpdateCaptureControllerCaptureState@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800B4AF0
 * Callers:
 *     ?OnWindowMinimized@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800AF2A0 (-OnWindowMinimized@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowRestored@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800AF640 (-OnWindowRestored@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowStyleChanged@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800AF880 (-OnWindowStyleChanged@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowVisibilityUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800AF970 (-OnWindowVisibilityUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$UpdateCaptureControllerCaptureState@AEAPEAUHWND__@@AEA_N@WindowFrameLoggingTelemetry@@SAXAEAPEAUHWND__@@AEA_N@Z @ 0x1800AB7FC (--$UpdateCaptureControllerCaptureState@AEAPEAUHWND__@@AEA_N@WindowFrameLoggingTelemetry@@SAXAEAP.c)
 *     CCaptureManager::_ApplyToAllCaptureControllersForCapturedWindow__lambda_3b681005738073340410bc45254aa71c___ @ 0x1800ABC14 (CCaptureManager--_ApplyToAllCaptureControllersForCapturedWindow__lambda_3b681005738073340410bc45.c)
 */

__int64 __fastcall CCaptureManager::_UpdateCaptureControllerCaptureState(CCaptureManager *this, __int64 a2, char a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF
  char v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = a3;
  v10 = a2;
  WindowFrameLoggingTelemetry::UpdateCaptureControllerCaptureState<HWND__ * &,bool &>(&v10, &v11);
  v11 = 0;
  v6 = CCaptureManager::_ApplyToAllCaptureControllersForCapturedWindow__lambda_3b681005738073340410bc45254aa71c___(
         (__int64)this,
         a2,
         a3,
         &v11);
  if ( v6 < 0 )
  {
    v7 = 550LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  if ( !v11 )
  {
    v6 = -2147024809;
    v7 = 551LL;
    goto LABEL_3;
  }
  return 0LL;
}
