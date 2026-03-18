/*
 * XREFs of ??_ECComplexShape@@UEAAPEAXI@Z @ 0x1802641A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     ??1CComplexShape@@UEAA@XZ @ 0x180264170 (--1CComplexShape@@UEAA@XZ.c)
 */

CComplexShape *__fastcall CComplexShape::`vector deleting destructor'(CComplexShape *this, char a2)
{
  CComplexShape::~CComplexShape(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
