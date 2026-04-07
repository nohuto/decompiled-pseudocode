/*
 * XREFs of ?_SetCaptureControllerContentOffset@CProjectionBorderManager@@AEAAJPEAVCCaptureControllerProxy@@HH@Z @ 0x1800CF870
 * Callers:
 *     ?_UpdateCaptureControllerContentOffsetFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800CF930 (-_UpdateCaptureControllerContentOffsetFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@.c)
 *     ?_UpdateCaptureControllerContentOffsetFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800CF9FC (-_UpdateCaptureControllerContentOffsetFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAV.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetContentOffset@CCaptureControllerProxy@@QEAAJHH@Z @ 0x1800A8570 (-SetContentOffset@CCaptureControllerProxy@@QEAAJHH@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::_SetCaptureControllerContentOffset(
        CProjectionBorderManager *this,
        struct CCaptureControllerProxy *a2,
        unsigned int a3,
        unsigned int a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = CCaptureControllerProxy::SetContentOffset(a2, a3, a4);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x986,
    (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
