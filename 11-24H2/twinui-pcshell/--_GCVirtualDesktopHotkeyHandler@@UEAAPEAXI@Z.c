/*
 * XREFs of ??_GCVirtualDesktopHotkeyHandler@@UEAAPEAXI@Z @ 0x18055A310
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CVirtualDesktopHotkeyHandler@@UEAA@XZ @ 0x18055A290 (--1CVirtualDesktopHotkeyHandler@@UEAA@XZ.c)
 */

CVirtualDesktopHotkeyHandler *__fastcall CVirtualDesktopHotkeyHandler::`scalar deleting destructor'(
        CVirtualDesktopHotkeyHandler *this,
        char a2)
{
  CVirtualDesktopHotkeyHandler::~CVirtualDesktopHotkeyHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x60);
  return this;
}
