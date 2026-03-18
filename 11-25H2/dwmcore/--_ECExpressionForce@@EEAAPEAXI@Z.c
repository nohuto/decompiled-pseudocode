/*
 * XREFs of ??_ECExpressionForce@@EEAAPEAXI@Z @ 0x1802B9500
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     ??1CExpressionForce@@EEAA@XZ @ 0x1802B94D0 (--1CExpressionForce@@EEAA@XZ.c)
 */

CExpressionForce *__fastcall CExpressionForce::`vector deleting destructor'(CExpressionForce *this, char a2)
{
  CExpressionForce::~CExpressionForce(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
