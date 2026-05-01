/*
 * XREFs of ??_ECVirtualDesktopComponent@@UEAAPEAXI@Z @ 0x180235E30
 * Callers:
 *     ??_ECVirtualDesktopComponent@@WCI@EAAPEAXI@Z @ 0x18054C580 (--_ECVirtualDesktopComponent@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CVirtualDesktopComponent@@UEAA@XZ @ 0x1802B016C (--1CVirtualDesktopComponent@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CVirtualDesktopComponent *__fastcall CVirtualDesktopComponent::`vector deleting destructor'(
        CVirtualDesktopComponent *this,
        char a2)
{
  CVirtualDesktopComponent::~CVirtualDesktopComponent(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x128);
  return this;
}
