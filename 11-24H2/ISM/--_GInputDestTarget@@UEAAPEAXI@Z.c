/*
 * XREFs of ??_GInputDestTarget@@UEAAPEAXI@Z @ 0x1800F5B90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1InputDestTarget@@UEAA@XZ @ 0x1800F5B24 (--1InputDestTarget@@UEAA@XZ.c)
 */

InputDestTarget *__fastcall InputDestTarget::`scalar deleting destructor'(InputDestTarget *this, char a2)
{
  InputDestTarget::~InputDestTarget(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x50);
  return this;
}
