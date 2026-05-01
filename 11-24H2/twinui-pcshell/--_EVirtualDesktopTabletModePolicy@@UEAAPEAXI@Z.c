/*
 * XREFs of ??_EVirtualDesktopTabletModePolicy@@UEAAPEAXI@Z @ 0x1805594A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1VirtualDesktopTabletModePolicy@@UEAA@XZ @ 0x18055943C (--1VirtualDesktopTabletModePolicy@@UEAA@XZ.c)
 */

VirtualDesktopTabletModePolicy *__fastcall VirtualDesktopTabletModePolicy::`vector deleting destructor'(
        VirtualDesktopTabletModePolicy *this,
        char a2)
{
  VirtualDesktopTabletModePolicy::~VirtualDesktopTabletModePolicy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x68);
  return this;
}
