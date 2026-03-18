/*
 * XREFs of ??_ECScalarForce@@EEAAPEAXI@Z @ 0x1802AF820
 * Callers:
 *     <none>
 * Callees:
 *     ??1CScalarForce@@EEAA@XZ @ 0x18021ED3C (--1CScalarForce@@EEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

CScalarForce *__fastcall CScalarForce::`vector deleting destructor'(CScalarForce *this, char a2)
{
  CScalarForce::~CScalarForce(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
