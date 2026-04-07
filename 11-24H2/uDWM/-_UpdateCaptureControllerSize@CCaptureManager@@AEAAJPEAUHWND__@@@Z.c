/*
 * XREFs of ?_UpdateCaptureControllerSize@CCaptureManager@@AEAAJPEAUHWND__@@@Z @ 0x1800B4F2C
 * Callers:
 *     ?OnWindowSizeUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800AF6F0 (-OnWindowSizeUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$UpdateCaptureControllerSize@AEAPEAUHWND__@@@WindowFrameLoggingTelemetry@@SAXAEAPEAUHWND__@@@Z @ 0x1800AB8D0 (--$UpdateCaptureControllerSize@AEAPEAUHWND__@@@WindowFrameLoggingTelemetry@@SAXAEAPEAUHWND__@@@Z.c)
 *     CCaptureManager::_ApplyToAllCaptureControllersForCapturedWindow__lambda_1fcba4880ccd8dafbc3b3bfa9dcec5f3___ @ 0x1800ABB44 (CCaptureManager--_ApplyToAllCaptureControllersForCapturedWindow__lambda_1fcba4880ccd8dafbc3b3bfa.c)
 */

__int64 __fastcall CCaptureManager::_UpdateCaptureControllerSize(CCaptureManager *this, __int64 *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  int v7[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v8; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  WindowFrameLoggingTelemetry::UpdateCaptureControllerSize<HWND__ * &>((__int64 *)&v10);
  LOBYTE(v10) = 0;
  *(_QWORD *)v7 = this;
  v8 = a2;
  v4 = CCaptureManager::_ApplyToAllCaptureControllersForCapturedWindow__lambda_1fcba4880ccd8dafbc3b3bfa9dcec5f3___(
         (__int64)this,
         a2,
         (__int64)v7,
         &v10);
  if ( v4 < 0 )
  {
    v5 = 517LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  if ( !(_BYTE)v10 )
  {
    v4 = -2147024809;
    v5 = 518LL;
    goto LABEL_3;
  }
  return 0LL;
}
