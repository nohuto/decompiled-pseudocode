/*
 * XREFs of ??_ECColorKeyBitmap@@MEAAPEAXI@Z @ 0x1801FA6A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CColorKeyBitmap@@MEAA@XZ @ 0x1801FA6E0 (--1CColorKeyBitmap@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 */

CColorKeyBitmap *__fastcall CColorKeyBitmap::`vector deleting destructor'(CColorKeyBitmap *this, char a2)
{
  CColorKeyBitmap::~CColorKeyBitmap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x90uLL);
  return this;
}
