/*
 * XREFs of ?OnWindowStyleChanged@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800AF880
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetHostWindowHandleForProxyWindow@CProjectionBorderManager@@AEAAPEAUHWND__@@PEAVCWindowData@@@Z @ 0x1800B3FF0 (-_GetHostWindowHandleForProxyWindow@CProjectionBorderManager@@AEAAPEAUHWND__@@PEAVCWindowData@@@.c)
 *     ?_UpdateCaptureControllerCaptureState@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800B4AF0 (-_UpdateCaptureControllerCaptureState@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z.c)
 */

__int64 __fastcall CCaptureManager::OnWindowStyleChanged(CCaptureManager *this, struct CWindowData *a2)
{
  HWND HostWindowHandleForProxyWindow; // rax
  bool v3; // r8
  CCaptureManager *v4; // r9
  int updated; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_DWORD *)a2 + 114) )
    return 0LL;
  if ( *((_QWORD *)a2 + 81) )
    return 0LL;
  HostWindowHandleForProxyWindow = CProjectionBorderManager::_GetHostWindowHandleForProxyWindow(this, a2);
  updated = CCaptureManager::_UpdateCaptureControllerCaptureState(v4, HostWindowHandleForProxyWindow, v3);
  v6 = updated;
  if ( updated >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4E0,
    (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
    (const char *)(unsigned int)updated);
  return v6;
}
