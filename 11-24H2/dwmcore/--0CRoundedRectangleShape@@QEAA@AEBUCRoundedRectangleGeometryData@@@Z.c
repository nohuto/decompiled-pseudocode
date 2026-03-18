/*
 * XREFs of ??0CRoundedRectangleShape@@QEAA@AEBUCRoundedRectangleGeometryData@@@Z @ 0x18019D570
 * Callers:
 *     ?GetShapeDataCore@CEllipseGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18019D490 (-GetShapeDataCore@CEllipseGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Create@SharedData@CRoundedRectangleShape@@SAPEAV12@AEBUCRoundedRectangleGeometryData@@@Z @ 0x18019D5D0 (-Create@SharedData@CRoundedRectangleShape@@SAPEAV12@AEBUCRoundedRectangleGeometryData@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CRoundedRectangleShape *__fastcall CRoundedRectangleShape::CRoundedRectangleShape(
        CRoundedRectangleShape *this,
        const struct CRoundedRectangleGeometryData *a2)
{
  struct CRoundedRectangleShape::SharedData *v3; // rax
  CMILRefCountImpl *v4; // rcx
  __int64 (__fastcall *v5)(CMILRefCountImpl *); // rax

  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &CRoundedRectangleShape::`vftable';
  v3 = CRoundedRectangleShape::SharedData::Create(a2);
  *((_QWORD *)this + 2) = v3;
  v4 = v3;
  if ( v3 )
  {
    v5 = **(__int64 (__fastcall ***)(CMILRefCountImpl *))v3;
    if ( v5 == CMILRefCountImpl::AddReference )
      CMILRefCountImpl::AddReference(v4);
    else
      v5(v4);
  }
  return this;
}
