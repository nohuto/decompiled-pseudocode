/*
 * XREFs of ??_EGestureServices@@UEAAPEAXI@Z @ 0x18013FCE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1GestureServices@@UEAA@XZ @ 0x18013FB48 (--1GestureServices@@UEAA@XZ.c)
 */

GestureServices *__fastcall GestureServices::`vector deleting destructor'(GestureServices *this, char a2)
{
  GestureServices::~GestureServices(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x148);
  return this;
}
