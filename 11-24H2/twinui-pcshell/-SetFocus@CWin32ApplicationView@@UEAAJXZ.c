/*
 * XREFs of ?SetFocus@CWin32ApplicationView@@UEAAJXZ @ 0x180310B70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSwitchWindow@CWin32ApplicationView@@QEBAJPEAPEAUHWND__@@@Z @ 0x180111330 (-GetSwitchWindow@CWin32ApplicationView@@QEBAJPEAPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CWin32ApplicationView::SetFocus(CWin32ApplicationView *this)
{
  unsigned int v1; // ebx
  int SwitchWindow; // eax
  unsigned int v3; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HWND hWnd; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  hWnd = 0LL;
  SwitchWindow = CWin32ApplicationView::GetSwitchWindow(this, &hWnd);
  v3 = SwitchWindow;
  if ( SwitchWindow >= 0 )
  {
    if ( !SetForegroundWindow(hWnd) )
    {
      v1 = -2147024891;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB6,
        (int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)0x80070005LL);
    }
    return v1;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB4,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)SwitchWindow);
    return v3;
  }
}
