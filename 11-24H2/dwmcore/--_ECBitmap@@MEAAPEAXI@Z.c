/*
 * XREFs of ??_ECBitmap@@MEAAPEAXI@Z @ 0x1802559D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBitmap@@MEAA@XZ @ 0x180200D90 (--1CBitmap@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall CBitmap::`vector deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this,
        char a2)
{
  CBitmap::~CBitmap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
