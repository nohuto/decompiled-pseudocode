/*
 * XREFs of ??_EVirtualDesktopAcessibility@@UEAAPEAXI@Z @ 0x18055B240
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1VirtualDesktopAcessibility@@UEAA@XZ @ 0x18055B184 (--1VirtualDesktopAcessibility@@UEAA@XZ.c)
 */

VirtualDesktopAcessibility *__fastcall VirtualDesktopAcessibility::`vector deleting destructor'(
        VirtualDesktopAcessibility *this,
        char a2)
{
  VirtualDesktopAcessibility::~VirtualDesktopAcessibility(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xF8);
  return this;
}
