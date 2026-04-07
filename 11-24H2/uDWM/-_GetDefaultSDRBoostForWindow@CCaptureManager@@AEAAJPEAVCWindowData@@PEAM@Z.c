/*
 * XREFs of ?_GetDefaultSDRBoostForWindow@CCaptureManager@@AEAAJPEAVCWindowData@@PEAM@Z @ 0x1800B3E70
 * Callers:
 *     ?OnWindowMonitorChanged@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800AF350 (-OnWindowMonitorChanged@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoost@CCaptureManager@@AEAAJPEAUHWND__@@@Z @ 0x1800B4D6C (-_UpdateCaptureControllerDefaultSDRBoost@CCaptureManager@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDisplaySDRWhiteLevel@CDesktopManager@@QEAAJPEAUHMONITOR__@@PEAM@Z @ 0x1800BA400 (-GetDisplaySDRWhiteLevel@CDesktopManager@@QEAAJPEAUHMONITOR__@@PEAM@Z.c)
 */

__int64 __fastcall CCaptureManager::_GetDefaultSDRBoostForWindow(CCaptureManager *this, HMONITOR *a2, float *a3)
{
  int DisplaySDRWhiteLevel; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  DisplaySDRWhiteLevel = CDesktopManager::GetDisplaySDRWhiteLevel(
                           CDesktopManager::s_pDesktopManagerInstance,
                           a2[48],
                           a3);
  v4 = DisplaySDRWhiteLevel;
  if ( DisplaySDRWhiteLevel >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7D2,
    (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
    (const char *)(unsigned int)DisplaySDRWhiteLevel);
  return v4;
}
