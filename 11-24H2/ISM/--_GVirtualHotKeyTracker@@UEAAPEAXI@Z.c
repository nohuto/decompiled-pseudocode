/*
 * XREFs of ??_GVirtualHotKeyTracker@@UEAAPEAXI@Z @ 0x1801B0880
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1VirtualHotKeyTracker@@UEAA@XZ @ 0x1801B080C (--1VirtualHotKeyTracker@@UEAA@XZ.c)
 */

char **__fastcall VirtualHotKeyTracker::`scalar deleting destructor'(char **this, char a2)
{
  VirtualHotKeyTracker::~VirtualHotKeyTracker(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
