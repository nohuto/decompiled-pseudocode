/*
 * XREFs of ?OnWindowTransformUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800AF910
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetHostWindowHandleForProxyWindow@CProjectionBorderManager@@AEAAPEAUHWND__@@PEAVCWindowData@@@Z @ 0x1800B3FF0 (-_GetHostWindowHandleForProxyWindow@CProjectionBorderManager@@AEAAPEAUHWND__@@PEAVCWindowData@@@.c)
 *     ?_UpdateCaptureControllerTransform@CCaptureManager@@AEAAJPEAUHWND__@@@Z @ 0x1800B4FBC (-_UpdateCaptureControllerTransform@CCaptureManager@@AEAAJPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CCaptureManager::OnWindowTransformUpdated(CCaptureManager *this, struct CWindowData *a2)
{
  HWND HostWindowHandleForProxyWindow; // rax
  CCaptureManager *v3; // r8
  int updated; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_DWORD *)a2 + 114) )
    return 0LL;
  if ( *((_QWORD *)a2 + 81) )
    return 0LL;
  HostWindowHandleForProxyWindow = CProjectionBorderManager::_GetHostWindowHandleForProxyWindow(this, a2);
  updated = CCaptureManager::_UpdateCaptureControllerTransform(v3, HostWindowHandleForProxyWindow);
  v5 = updated;
  if ( updated >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x29A,
    (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
    (const char *)(unsigned int)updated);
  return v5;
}
