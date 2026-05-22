/*
 * XREFs of ??_ESystemCursorService2@@UEAAPEAXI@Z @ 0x1800F7754
 * Callers:
 *     ??_ESystemCursorService2@@W7EAAPEAXI@Z @ 0x1800F7610 (--_ESystemCursorService2@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SystemCursorService2@@UEAA@XZ @ 0x1800F73CC (--1SystemCursorService2@@UEAA@XZ.c)
 */

SystemCursorService2 *__fastcall SystemCursorService2::`vector deleting destructor'(
        SystemCursorService2 *this,
        char a2)
{
  SystemCursorService2::~SystemCursorService2(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x110);
  return this;
}
