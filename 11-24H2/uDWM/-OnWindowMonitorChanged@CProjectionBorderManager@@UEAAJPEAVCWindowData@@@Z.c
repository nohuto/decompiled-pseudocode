/*
 * XREFs of ?OnWindowMonitorChanged@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180067420
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetHostWindowHandleForProxyWindow@CProjectionBorderManager@@AEAAPEAUHWND__@@PEAVCWindowData@@@Z @ 0x1800B3FF0 (-_GetHostWindowHandleForProxyWindow@CProjectionBorderManager@@AEAAPEAUHWND__@@PEAVCWindowData@@@.c)
 *     ?_GetDefaultSDRBoostForWindow@CProjectionBorderManager@@AEAAJPEAVCWindowData@@PEAM@Z @ 0x1800CF3D0 (-_GetDefaultSDRBoostForWindow@CProjectionBorderManager@@AEAAJPEAVCWindowData@@PEAM@Z.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoost@CProjectionBorderManager@@AEAAJPEAUHWND__@@M@Z @ 0x1800CFBF8 (-_UpdateCaptureControllerDefaultSDRBoost@CProjectionBorderManager@@AEAAJPEAUHWND__@@M@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::OnWindowMonitorChanged(
        CProjectionBorderManager *this,
        struct CWindowData *a2)
{
  int DefaultSDRBoostForWindow; // eax
  CProjectionBorderManager *v6; // rcx
  unsigned int v7; // edi
  HWND HostWindowHandleForProxyWindow; // rax
  int updated; // eax
  unsigned int v10; // ebx
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  float v13; // [rsp+38h] [rbp+10h] BYREF

  if ( !*((_DWORD *)a2 + 114) || *((_QWORD *)a2 + 81) )
    return 0LL;
  v13 = 0.0;
  DefaultSDRBoostForWindow = CProjectionBorderManager::_GetDefaultSDRBoostForWindow(this, a2, &v13);
  v7 = DefaultSDRBoostForWindow;
  if ( DefaultSDRBoostForWindow < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x451,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
      (const char *)(unsigned int)DefaultSDRBoostForWindow,
      v11);
    return v7;
  }
  HostWindowHandleForProxyWindow = CProjectionBorderManager::_GetHostWindowHandleForProxyWindow(v6, a2);
  updated = CProjectionBorderManager::_UpdateCaptureControllerDefaultSDRBoost(this, HostWindowHandleForProxyWindow, v13);
  v10 = updated;
  if ( updated >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x454,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
    (const char *)(unsigned int)updated,
    v11);
  return v10;
}
