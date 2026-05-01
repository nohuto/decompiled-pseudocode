/*
 * XREFs of ?GetScaleFactor@VirtualDesktopGestureWindow@@QEAAIXZ @ 0x1805603B0
 * Callers:
 *     ?Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z @ 0x18026AA58 (-Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z.c)
 *     ?Commit@VirtualDesktopGestureWindow@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@IM_N@Z @ 0x18055E2D8 (-Commit@VirtualDesktopGestureWindow@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@IM_N@Z.c)
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@IEAAJPEA_NIUtagRECT@@@Z @ 0x18055E7A4 (-CreateAdjacentDesktop@VirtualDesktopGestureWindow@@IEAAJPEA_NIUtagRECT@@@Z.c)
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@QEAAJPEA_NIH@Z @ 0x18055F5EC (-CreateAdjacentDesktop@VirtualDesktopGestureWindow@@QEAAJPEA_NIH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktopGestureWindow::GetScaleFactor(VirtualDesktopGestureWindow *this)
{
  HWND ShellWindow; // rax

  ShellWindow = GetShellWindow();
  return (unsigned int)GetDpiForWindow(ShellWindow) / 0x60;
}
