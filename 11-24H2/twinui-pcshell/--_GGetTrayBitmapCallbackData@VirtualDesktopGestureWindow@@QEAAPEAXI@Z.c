/*
 * XREFs of ??_GGetTrayBitmapCallbackData@VirtualDesktopGestureWindow@@QEAAPEAXI@Z @ 0x18055DA1C
 * Callers:
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@IEAAJPEA_NIUtagRECT@@@Z @ 0x18055E7A4 (-CreateAdjacentDesktop@VirtualDesktopGestureWindow@@IEAAJPEA_NIUtagRECT@@@Z.c)
 *     ?s_GetTrayBitmapResult@VirtualDesktopGestureWindow@@KAXPEAUHWND__@@I_K_J@Z @ 0x180563F60 (-s_GetTrayBitmapResult@VirtualDesktopGestureWindow@@KAXPEAUHWND__@@I_K_J@Z.c)
 *     ?CreateAdjacentDesktop@VirtualDesktopHotKeyWindow@@AEAAJPEA_NPEAUIVirtualDesktop@@V?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@IUtagRECT@@@Z @ 0x180569E88 (-CreateAdjacentDesktop@VirtualDesktopHotKeyWindow@@AEAAJPEA_NPEAUIVirtualDesktop@@V-$shared_any_.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1GetTrayBitmapCallbackData@VirtualDesktopGestureWindow@@QEAA@XZ @ 0x18055CCA0 (--1GetTrayBitmapCallbackData@VirtualDesktopGestureWindow@@QEAA@XZ.c)
 */

VirtualDesktopGestureWindow::GetTrayBitmapCallbackData *__fastcall VirtualDesktopGestureWindow::GetTrayBitmapCallbackData::`scalar deleting destructor'(
        VirtualDesktopGestureWindow::GetTrayBitmapCallbackData *this)
{
  VirtualDesktopGestureWindow::GetTrayBitmapCallbackData::~GetTrayBitmapCallbackData(this);
  operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}
