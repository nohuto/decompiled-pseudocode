/*
 * XREFs of ??_EVirtualDesktopGestureWindow@@UEAAPEAXI@Z @ 0x18055DA48
 * Callers:
 *     ??_EVirtualDesktopGestureWindow@@WBA@EAAPEAXI@Z @ 0x18055D890 (--_EVirtualDesktopGestureWindow@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1VirtualDesktopGestureWindow@@UEAA@XZ @ 0x180151F9C (--1VirtualDesktopGestureWindow@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

VirtualDesktopGestureWindow *__fastcall VirtualDesktopGestureWindow::`vector deleting destructor'(
        VirtualDesktopGestureWindow *this,
        char a2)
{
  VirtualDesktopGestureWindow::~VirtualDesktopGestureWindow(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x148);
  return this;
}
