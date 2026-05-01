/*
 * XREFs of ??_ECVirtualDesktopManager@@UEAAPEAXI@Z @ 0x180552DE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CVirtualDesktopManager@@UEAA@XZ @ 0x18055266C (--1CVirtualDesktopManager@@UEAA@XZ.c)
 */

CVirtualDesktopManager *__fastcall CVirtualDesktopManager::`vector deleting destructor'(
        CVirtualDesktopManager *this,
        char a2)
{
  CVirtualDesktopManager::~CVirtualDesktopManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x130);
  return this;
}
