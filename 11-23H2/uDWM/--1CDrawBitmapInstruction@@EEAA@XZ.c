/*
 * XREFs of ??1CDrawBitmapInstruction@@EEAA@XZ @ 0x18004F800
 * Callers:
 *     ??_ECDrawBitmapInstruction@@EEAAPEAXI@Z @ 0x18004F8E0 (--_ECDrawBitmapInstruction@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CDrawBitmapInstruction::~CDrawBitmapInstruction(CDrawBitmapInstruction *this)
{
  CBaseObject *v2; // rcx

  *(_QWORD *)this = &CDrawBitmapInstruction::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 2) = 0LL;
  }
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
