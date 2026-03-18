/*
 * XREFs of ??_GCVector3Force@@EEAAPEAXI@Z @ 0x18022DD30
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVector3Force@@EEAA@XZ @ 0x18022DD6C (--1CVector3Force@@EEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 */

CVector3Force *__fastcall CVector3Force::`scalar deleting destructor'(CVector3Force *this, char a2)
{
  CVector3Force::~CVector3Force(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x168uLL);
  return this;
}
