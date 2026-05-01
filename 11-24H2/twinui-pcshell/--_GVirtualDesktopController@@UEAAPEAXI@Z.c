/*
 * XREFs of ??_GVirtualDesktopController@@UEAAPEAXI@Z @ 0x18021EE90
 * Callers:
 *     <none>
 * Callees:
 *     ??1VirtualDesktopController@@UEAA@XZ @ 0x1800C0764 (--1VirtualDesktopController@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

VirtualDesktopController *__fastcall VirtualDesktopController::`scalar deleting destructor'(
        VirtualDesktopController *this,
        char a2)
{
  VirtualDesktopController::~VirtualDesktopController(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x98);
  return this;
}
