/*
 * XREFs of ??_GSystemCursorController2@@UEAAPEAXI@Z @ 0x1800F6500
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SystemCursorController2@@UEAA@XZ @ 0x1800F6428 (--1SystemCursorController2@@UEAA@XZ.c)
 */

SystemCursorController2 *__fastcall SystemCursorController2::`scalar deleting destructor'(
        SystemCursorController2 *this,
        char a2)
{
  SystemCursorController2::~SystemCursorController2(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xA0);
  return this;
}
