/*
 * XREFs of ??_ECVirtualDesktopApplicationViewEventListener@@UEAAPEAXI@Z @ 0x180093D70
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVirtualDesktopApplicationViewEventListener@@UEAA@XZ @ 0x1800953BC (--1CVirtualDesktopApplicationViewEventListener@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CVirtualDesktopApplicationViewEventListener *__fastcall CVirtualDesktopApplicationViewEventListener::`vector deleting destructor'(
        CVirtualDesktopApplicationViewEventListener *this,
        char a2)
{
  CVirtualDesktopApplicationViewEventListener::~CVirtualDesktopApplicationViewEventListener(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x60);
  return this;
}
