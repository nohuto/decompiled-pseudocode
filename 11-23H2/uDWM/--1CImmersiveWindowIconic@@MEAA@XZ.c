/*
 * XREFs of ??1CImmersiveWindowIconic@@MEAA@XZ @ 0x1800C45A0
 * Callers:
 *     ??_ECImmersiveWindowIconic@@MEAAPEAXI@Z @ 0x1800C45F0 (--_ECImmersiveWindowIconic@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CImmersiveWindowIconic::~CImmersiveWindowIconic(CImmersiveWindowIconic *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx

  *(_QWORD *)this = &CImmersiveWindowIconic::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 37);
  if ( v2 )
    CBaseObject::Release(v2);
  v3 = (CBaseObject *)*((_QWORD *)this + 38);
  if ( v3 )
    CBaseObject::Release(v3);
  CRenderDataVisual::~CRenderDataVisual((CBaseObject **)this);
}
