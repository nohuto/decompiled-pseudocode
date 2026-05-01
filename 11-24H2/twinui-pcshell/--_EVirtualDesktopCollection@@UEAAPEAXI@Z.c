/*
 * XREFs of ??_EVirtualDesktopCollection@@UEAAPEAXI@Z @ 0x180496FC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1VirtualDesktopCollection@@UEAA@XZ @ 0x180496F18 (--1VirtualDesktopCollection@@UEAA@XZ.c)
 */

VirtualDesktopCollection *__fastcall VirtualDesktopCollection::`vector deleting destructor'(
        VirtualDesktopCollection *this,
        char a2)
{
  VirtualDesktopCollection::~VirtualDesktopCollection(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x150);
  return this;
}
