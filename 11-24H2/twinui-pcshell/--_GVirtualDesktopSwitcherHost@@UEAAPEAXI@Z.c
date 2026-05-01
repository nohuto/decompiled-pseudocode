/*
 * XREFs of ??_GVirtualDesktopSwitcherHost@@UEAAPEAXI@Z @ 0x1806AAAF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1VirtualDesktopSwitcherHost@@UEAA@XZ @ 0x1806A9FEC (--1VirtualDesktopSwitcherHost@@UEAA@XZ.c)
 */

VirtualDesktopSwitcherHost *__fastcall VirtualDesktopSwitcherHost::`scalar deleting destructor'(
        VirtualDesktopSwitcherHost *this,
        char a2)
{
  VirtualDesktopSwitcherHost::~VirtualDesktopSwitcherHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x218);
  return this;
}
