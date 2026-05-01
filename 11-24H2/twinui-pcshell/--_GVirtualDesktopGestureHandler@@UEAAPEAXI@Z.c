/*
 * XREFs of ??_GVirtualDesktopGestureHandler@@UEAAPEAXI@Z @ 0x180152050
 * Callers:
 *     <none>
 * Callees:
 *     ??1VirtualDesktopGestureHandler@@UEAA@XZ @ 0x18015208C (--1VirtualDesktopGestureHandler@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

VirtualDesktopGestureHandler *__fastcall VirtualDesktopGestureHandler::`scalar deleting destructor'(
        VirtualDesktopGestureHandler *this,
        char a2)
{
  VirtualDesktopGestureHandler::~VirtualDesktopGestureHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1B0);
  return this;
}
