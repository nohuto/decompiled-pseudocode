/*
 * XREFs of ??1CPushTransformInstruction@@EEAA@XZ @ 0x18007028C
 * Callers:
 *     ??_GCPushTransformInstruction@@EEAAPEAXI@Z @ 0x180070240 (--_GCPushTransformInstruction@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CPushTransformInstruction::~CPushTransformInstruction(CPushTransformInstruction *this)
{
  CBaseObject *v2; // rcx

  *(_QWORD *)this = &CPushTransformInstruction::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 2) = 0LL;
  }
  CRenderDataInstruction::~CRenderDataInstruction(this);
}
