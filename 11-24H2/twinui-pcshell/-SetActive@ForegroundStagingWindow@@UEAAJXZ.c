/*
 * XREFs of ?SetActive@ForegroundStagingWindow@@UEAAJXZ @ 0x180215AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ForegroundStagingWindow::SetActive(HWND *this)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( SetForegroundWindow(this[3]) )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x46,
    (int)"pcshell\\twinui\\MultitaskingView\\inc\\ForegroundStagingWindow.h",
    (const char *)0x80070005LL);
  return 2147942405LL;
}
