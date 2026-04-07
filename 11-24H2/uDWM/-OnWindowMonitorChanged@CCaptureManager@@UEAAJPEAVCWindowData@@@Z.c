/*
 * XREFs of ?OnWindowMonitorChanged@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800AF350
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetDefaultSDRBoostForWindow@CCaptureManager@@AEAAJPEAVCWindowData@@PEAM@Z @ 0x1800B3E70 (-_GetDefaultSDRBoostForWindow@CCaptureManager@@AEAAJPEAVCWindowData@@PEAM@Z.c)
 *     ?_GetHostWindowHandleForProxyWindow@CProjectionBorderManager@@AEAAPEAUHWND__@@PEAVCWindowData@@@Z @ 0x1800B3FF0 (-_GetHostWindowHandleForProxyWindow@CProjectionBorderManager@@AEAAPEAUHWND__@@PEAVCWindowData@@@.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoost@CCaptureManager@@AEAAJPEAUHWND__@@M@Z @ 0x1800B4E50 (-_UpdateCaptureControllerDefaultSDRBoost@CCaptureManager@@AEAAJPEAUHWND__@@M@Z.c)
 */

__int64 __fastcall CCaptureManager::OnWindowMonitorChanged(CCaptureManager *this, struct CWindowData *a2)
{
  int DefaultSDRBoostForWindow; // eax
  CProjectionBorderManager *v5; // rcx
  unsigned int v6; // edi
  HWND HostWindowHandleForProxyWindow; // rax
  int updated; // eax
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  float v12; // [rsp+38h] [rbp+10h] BYREF

  if ( !*((_DWORD *)a2 + 114) || *((_QWORD *)a2 + 81) )
    return 0LL;
  v12 = 0.0;
  DefaultSDRBoostForWindow = CCaptureManager::_GetDefaultSDRBoostForWindow(this, a2, &v12);
  v6 = DefaultSDRBoostForWindow;
  if ( DefaultSDRBoostForWindow < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D2,
      (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
      (const char *)(unsigned int)DefaultSDRBoostForWindow);
    return v6;
  }
  HostWindowHandleForProxyWindow = CProjectionBorderManager::_GetHostWindowHandleForProxyWindow(v5, a2);
  updated = CCaptureManager::_UpdateCaptureControllerDefaultSDRBoost(this, HostWindowHandleForProxyWindow, v12);
  v10 = updated;
  if ( updated >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2D5,
    (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
    (const char *)(unsigned int)updated);
  return v10;
}
