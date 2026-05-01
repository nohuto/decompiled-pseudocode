/*
 * XREFs of ??_GVirtualDesktopSwitchAnimator@@UEAAPEAXI@Z @ 0x1805676F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1VirtualDesktopSwitchAnimator@@UEAA@XZ @ 0x1805675E8 (--1VirtualDesktopSwitchAnimator@@UEAA@XZ.c)
 */

VirtualDesktopSwitchAnimator *__fastcall VirtualDesktopSwitchAnimator::`scalar deleting destructor'(
        VirtualDesktopSwitchAnimator *this,
        void *a2)
{
  char v2; // bl

  v2 = (char)a2;
  VirtualDesktopSwitchAnimator::~VirtualDesktopSwitchAnimator(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xE8);
  return this;
}
