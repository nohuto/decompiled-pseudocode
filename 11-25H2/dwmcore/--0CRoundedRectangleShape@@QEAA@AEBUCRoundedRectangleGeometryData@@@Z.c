/*
 * XREFs of ??0CRoundedRectangleShape@@QEAA@AEBUCRoundedRectangleGeometryData@@@Z @ 0x18005AF80
 * Callers:
 *     ?GetShapeDataCore@CEllipseGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1801D9DC0 (-GetShapeDataCore@CEllipseGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?Create@SharedData@CRoundedRectangleShape@@SAPEAV12@AEBUCRoundedRectangleGeometryData@@@Z @ 0x18005A1B0 (-Create@SharedData@CRoundedRectangleShape@@SAPEAV12@AEBUCRoundedRectangleGeometryData@@@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CRoundedRectangleShape *__fastcall CRoundedRectangleShape::CRoundedRectangleShape(
        CRoundedRectangleShape *this,
        const struct CRoundedRectangleGeometryData *a2)
{
  struct CRoundedRectangleShape::SharedData *v3; // rax
  CMILRefCountImpl *v4; // rcx
  unsigned int (__fastcall *v5)(CMILRefCountImpl *__hidden); // rax

  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &CRoundedRectangleShape::`vftable';
  v3 = CRoundedRectangleShape::SharedData::Create(a2);
  *((_QWORD *)this + 2) = v3;
  v4 = v3;
  if ( v3 )
  {
    v5 = **(unsigned int (__fastcall ***)(CMILRefCountImpl *__hidden))v3;
    if ( v5 == CMILRefCountImpl::AddReference )
      CMILRefCountImpl::AddReference(v4);
    else
      v5(v4);
  }
  return this;
}
