/*
 * XREFs of ??0CRenderDataInstruction@@QEAA@XZ @ 0x18001F8CC
 * Callers:
 *     ??0CDrawMesh2DInstruction@@AEAA@XZ @ 0x180011ADC (--0CDrawMesh2DInstruction@@AEAA@XZ.c)
 *     ??0CDrawTileImageInstruction@@AEAA@XZ @ 0x180017CFC (--0CDrawTileImageInstruction@@AEAA@XZ.c)
 *     ??0CPushTransformInstruction@@AEAA@XZ @ 0x18001F74C (--0CPushTransformInstruction@@AEAA@XZ.c)
 *     ??0CDrawGeometryInstruction@@AEAA@XZ @ 0x18001F834 (--0CDrawGeometryInstruction@@AEAA@XZ.c)
 *     ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x18001F858 (-Create@CPopInstruction@@SAJPEAPEAV1@@Z.c)
 *     ??0CRectangleInstruction@@AEAA@XZ @ 0x180033794 (--0CRectangleInstruction@@AEAA@XZ.c)
 *     ??0CDrawNineGridInstruction@@IEAA@XZ @ 0x18003A998 (--0CDrawNineGridInstruction@@IEAA@XZ.c)
 *     ??0CDrawVisualTreeInstruction@@AEAA@XZ @ 0x18003E6A8 (--0CDrawVisualTreeInstruction@@AEAA@XZ.c)
 *     ??0CDrawBitmapInstruction@@AEAA@XZ @ 0x180064100 (--0CDrawBitmapInstruction@@AEAA@XZ.c)
 *     ??0CSolidRectangleInstruction@@AEAA@XZ @ 0x18006641C (--0CSolidRectangleInstruction@@AEAA@XZ.c)
 * Callees:
 *     ??0CBaseObject@@QEAA@XZ @ 0x180026794 (--0CBaseObject@@QEAA@XZ.c)
 */

CRenderDataInstruction *__fastcall CRenderDataInstruction::CRenderDataInstruction(CRenderDataInstruction *this)
{
  CRenderDataInstruction *v1; // rcx
  CRenderDataInstruction *result; // rax

  CBaseObject::CBaseObject(this);
  result = v1;
  *(_QWORD *)v1 = &CRenderDataInstruction::`vftable';
  return result;
}
