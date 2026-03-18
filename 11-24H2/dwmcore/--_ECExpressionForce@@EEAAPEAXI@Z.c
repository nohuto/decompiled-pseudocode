/*
 * XREFs of ??_ECExpressionForce@@EEAAPEAXI@Z @ 0x1802AF910
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     ??1CExpressionForce@@EEAA@XZ @ 0x1802AF8E0 (--1CExpressionForce@@EEAA@XZ.c)
 */

CExpressionForce *__fastcall CExpressionForce::`vector deleting destructor'(CExpressionForce *this, char a2)
{
  CExpressionForce::~CExpressionForce(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
