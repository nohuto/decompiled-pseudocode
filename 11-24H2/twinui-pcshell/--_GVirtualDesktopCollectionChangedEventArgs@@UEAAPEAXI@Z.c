/*
 * XREFs of ??_GVirtualDesktopCollectionChangedEventArgs@@UEAAPEAXI@Z @ 0x180497000
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1VirtualDesktopCollectionChangedEventArgs@@UEAA@XZ @ 0x180496F74 (--1VirtualDesktopCollectionChangedEventArgs@@UEAA@XZ.c)
 */

VirtualDesktopCollectionChangedEventArgs *__fastcall VirtualDesktopCollectionChangedEventArgs::`scalar deleting destructor'(
        VirtualDesktopCollectionChangedEventArgs *this,
        char a2)
{
  VirtualDesktopCollectionChangedEventArgs::~VirtualDesktopCollectionChangedEventArgs(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x58);
  return this;
}
