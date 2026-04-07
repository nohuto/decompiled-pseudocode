/*
 * XREFs of ??1CImmersiveWindowIconic@@MEAA@XZ @ 0x1800C66C4
 * Callers:
 *     ??_ECImmersiveWindowIconic@@MEAAPEAXI@Z @ 0x1800C6710 (--_ECImmersiveWindowIconic@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CImmersiveWindowIconic::~CImmersiveWindowIconic(CImmersiveWindowIconic *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx

  *(_QWORD *)this = &CImmersiveWindowIconic::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 31);
  if ( v2 )
    CBaseObject::Release(v2);
  v3 = (CBaseObject *)*((_QWORD *)this + 32);
  if ( v3 )
    CBaseObject::Release(v3);
  CRenderDataVisual::~CRenderDataVisual((void **)this);
}
