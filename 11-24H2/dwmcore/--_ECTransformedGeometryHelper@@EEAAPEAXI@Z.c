/*
 * XREFs of ??_ECTransformedGeometryHelper@@EEAAPEAXI@Z @ 0x18019D2B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTransformedGeometryHelper@@EEAA@XZ @ 0x18019D430 (--1CTransformedGeometryHelper@@EEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

CTransformedGeometryHelper *__fastcall CTransformedGeometryHelper::`vector deleting destructor'(
        CTransformedGeometryHelper *this,
        char a2)
{
  CTransformedGeometryHelper::~CTransformedGeometryHelper(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x40uLL);
  return this;
}
