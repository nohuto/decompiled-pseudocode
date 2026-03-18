/*
 * XREFs of ??_GCSecondaryCrossAdapterIndirectBitmap@@UEAAPEAXI@Z @ 0x1802DA4C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     ??1CSecondaryCrossAdapterIndirectBitmap@@UEAA@XZ @ 0x1802DA494 (--1CSecondaryCrossAdapterIndirectBitmap@@UEAA@XZ.c)
 */

CSecondaryCrossAdapterIndirectBitmap *__fastcall CSecondaryCrossAdapterIndirectBitmap::`scalar deleting destructor'(
        CSecondaryCrossAdapterIndirectBitmap *this,
        char a2)
{
  CSecondaryCrossAdapterIndirectBitmap::~CSecondaryCrossAdapterIndirectBitmap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
