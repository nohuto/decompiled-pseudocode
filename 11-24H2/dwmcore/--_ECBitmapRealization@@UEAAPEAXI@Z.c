/*
 * XREFs of ??_ECBitmapRealization@@UEAAPEAXI@Z @ 0x1802D6A90
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBitmapRealization@@UEAA@XZ @ 0x180201564 (--1CBitmapRealization@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

CBitmapRealization *__fastcall CBitmapRealization::`vector deleting destructor'(CBitmapRealization *this, char a2)
{
  CBitmapRealization::~CBitmapRealization(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
