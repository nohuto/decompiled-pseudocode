/*
 * XREFs of ??_GMagnifierToggleTarget@@UEAAPEAXI@Z @ 0x1801A5EE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MagnifierToggleTarget@@UEAA@XZ @ 0x1801A5CC4 (--1MagnifierToggleTarget@@UEAA@XZ.c)
 */

MagnifierToggleTarget *__fastcall MagnifierToggleTarget::`scalar deleting destructor'(
        MagnifierToggleTarget *this,
        char a2)
{
  MagnifierToggleTarget::~MagnifierToggleTarget(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
