/*
 * XREFs of ?SwitchTo@CWin32ApplicationView@@UEAAJXZ @ 0x1801112D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSwitchWindow@CWin32ApplicationView@@QEBAJPEAPEAUHWND__@@@Z @ 0x180111330 (-GetSwitchWindow@CWin32ApplicationView@@QEBAJPEAPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CWin32ApplicationView::SwitchTo(CWin32ApplicationView *this)
{
  int SwitchWindow; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HWND hwnd; // [rsp+38h] [rbp+10h] BYREF

  hwnd = 0LL;
  SwitchWindow = CWin32ApplicationView::GetSwitchWindow(this, &hwnd);
  v2 = SwitchWindow;
  if ( SwitchWindow >= 0 )
  {
    SwitchToThisWindow(hwnd, 1);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBC,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)SwitchWindow);
    return v2;
  }
}
