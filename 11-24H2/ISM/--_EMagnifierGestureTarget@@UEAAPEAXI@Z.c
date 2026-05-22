/*
 * XREFs of ??_EMagnifierGestureTarget@@UEAAPEAXI@Z @ 0x1801AD470
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MagnifierToggleTarget@@UEAA@XZ @ 0x1801AD2D4 (--1MagnifierToggleTarget@@UEAA@XZ.c)
 */

MagnifierGestureTarget *__fastcall MagnifierGestureTarget::`vector deleting destructor'(
        MagnifierGestureTarget *this,
        char a2)
{
  MagnifierToggleTarget::~MagnifierToggleTarget(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
