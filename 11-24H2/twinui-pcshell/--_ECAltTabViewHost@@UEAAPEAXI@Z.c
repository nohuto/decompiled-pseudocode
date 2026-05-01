/*
 * XREFs of ??_ECAltTabViewHost@@UEAAPEAXI@Z @ 0x1804AF5A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAltTabViewHost@@UEAA@XZ @ 0x1804AF430 (--1CAltTabViewHost@@UEAA@XZ.c)
 */

CAltTabViewHost *__fastcall CAltTabViewHost::`vector deleting destructor'(CAltTabViewHost *this, char a2)
{
  CAltTabViewHost::~CAltTabViewHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xE0);
  return this;
}
