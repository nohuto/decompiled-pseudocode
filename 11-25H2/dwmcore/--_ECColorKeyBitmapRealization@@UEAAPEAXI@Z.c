/*
 * XREFs of ??_ECColorKeyBitmapRealization@@UEAAPEAXI@Z @ 0x1801FB500
 * Callers:
 *     <none>
 * Callees:
 *     ??1CColorKeyBitmapRealization@@UEAA@XZ @ 0x1801FB53C (--1CColorKeyBitmapRealization@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 */

CColorKeyBitmapRealization *__fastcall CColorKeyBitmapRealization::`vector deleting destructor'(
        CColorKeyBitmapRealization *this,
        char a2)
{
  CColorKeyBitmapRealization::~CColorKeyBitmapRealization(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x68uLL);
  return this;
}
