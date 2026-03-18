/*
 * XREFs of ??_ECCompressedSourceBitmap@@UEAAPEAXI@Z @ 0x1801EC430
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCompressedSourceBitmap@@UEAA@XZ @ 0x1801EC470 (--1CCompressedSourceBitmap@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 */

CCompressedSourceBitmap *__fastcall CCompressedSourceBitmap::`vector deleting destructor'(
        CCompressedSourceBitmap *this,
        char a2)
{
  CCompressedSourceBitmap::~CCompressedSourceBitmap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xA8uLL);
  return this;
}
