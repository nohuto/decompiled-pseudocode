/*
 * XREFs of ?OnWindowMinimized@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180084680
 * Callers:
 *     <none>
 * Callees:
 *     ?OnWindowVisibilityUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180084730 (-OnWindowVisibilityUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetHostWindowHandleForProxyWindow@CProjectionBorderManager@@AEAAPEAUHWND__@@PEAVCWindowData@@@Z @ 0x1800B3FF0 (-_GetHostWindowHandleForProxyWindow@CProjectionBorderManager@@AEAAPEAUHWND__@@PEAVCWindowData@@@.c)
 *     ?_UpdateCaptureControllerCaptureState@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800CF8B8 (-_UpdateCaptureControllerCaptureState@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::OnWindowMinimized(CProjectionBorderManager *this, struct CWindowData *a2)
{
  HWND HostWindowHandleForProxyWindow; // rax
  int updated; // eax
  unsigned int v6; // edi
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_DWORD *)a2 + 114)
    || *((_QWORD *)a2 + 81)
    || (HostWindowHandleForProxyWindow = CProjectionBorderManager::_GetHostWindowHandleForProxyWindow(this, a2),
        updated = CProjectionBorderManager::_UpdateCaptureControllerCaptureState(
                    this,
                    HostWindowHandleForProxyWindow,
                    0),
        v6 = updated,
        updated >= 0) )
  {
    v8 = CProjectionBorderManager::OnWindowVisibilityUpdated(this, a2);
    v9 = v8;
    if ( v8 >= 0 )
    {
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x42D,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
        (const char *)(unsigned int)v8,
        v10);
      return v9;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x429,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
      (const char *)(unsigned int)updated,
      v10);
    return v6;
  }
}
