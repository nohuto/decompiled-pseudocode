/*
 * XREFs of ??_ECSecondaryCrossAdapterDirectBitmap@@UEAAPEAXI@Z @ 0x18020A490
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSecondaryD2DBitmap@@UEAA@XZ @ 0x18020A4CC (--1CSecondaryD2DBitmap@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

CSecondaryCrossAdapterDirectBitmap *__fastcall CSecondaryCrossAdapterDirectBitmap::`vector deleting destructor'(
        CSecondaryCrossAdapterDirectBitmap *this,
        char a2)
{
  CSecondaryD2DBitmap::~CSecondaryD2DBitmap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x148uLL);
  return this;
}
