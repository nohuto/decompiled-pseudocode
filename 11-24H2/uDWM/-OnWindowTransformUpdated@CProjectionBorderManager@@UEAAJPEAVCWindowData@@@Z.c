/*
 * XREFs of ?OnWindowTransformUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180074640
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetHostWindowHandleForProxyWindow@CProjectionBorderManager@@AEAAPEAUHWND__@@PEAVCWindowData@@@Z @ 0x1800B3FF0 (-_GetHostWindowHandleForProxyWindow@CProjectionBorderManager@@AEAAPEAUHWND__@@PEAVCWindowData@@@.c)
 *     ?_UpdateCaptureControllerTransform@CProjectionBorderManager@@AEAAJPEAUHWND__@@@Z @ 0x1800CFDF0 (-_UpdateCaptureControllerTransform@CProjectionBorderManager@@AEAAJPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::OnWindowTransformUpdated(
        CProjectionBorderManager *this,
        struct CWindowData *a2)
{
  HWND HostWindowHandleForProxyWindow; // rax
  CProjectionBorderManager *v4; // r8
  int updated; // eax
  unsigned int v6; // ebx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_DWORD *)a2 + 114) )
    return 0LL;
  if ( *((_QWORD *)a2 + 81) )
    return 0LL;
  HostWindowHandleForProxyWindow = CProjectionBorderManager::_GetHostWindowHandleForProxyWindow(this, a2);
  updated = CProjectionBorderManager::_UpdateCaptureControllerTransform(v4, HostWindowHandleForProxyWindow);
  v6 = updated;
  if ( updated >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x419,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
    (const char *)(unsigned int)updated,
    v7);
  return v6;
}
