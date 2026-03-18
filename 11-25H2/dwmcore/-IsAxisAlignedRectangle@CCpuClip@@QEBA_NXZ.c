/*
 * XREFs of ?IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ @ 0x1801F3784
 * Callers:
 *     ?InsertWorker@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x180090AD0 (-InsertWorker@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttribut.c)
 * Callees:
 *     ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ @ 0x18008B410 (-IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18008B4A0 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x180091460 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 */

char __fastcall CCpuClip::IsAxisAlignedRectangle(CShape **this)
{
  char v2; // bl
  CRectanglesShape **v3; // rcx

  v2 = 0;
  v3 = this + 2;
  if ( *v3 )
    return CShapePtr::IsAxisAlignedRectangle(v3);
  if ( !*this || CShape::IsAxisAlignedRectangle(*this) )
  {
    if ( CMILMatrix::Is2DAxisAlignedPreserving((CMILMatrix *)(this + 4)) )
      return 1;
  }
  return v2;
}
