/*
 * XREFs of ?IsEmpty@CRectanglesShape@@UEBA_NXZ @ 0x1801C22A0
 * Callers:
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x180015130 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ?IsEmpty@CShapePtr@@QEBA_NXZ @ 0x180057910 (-IsEmpty@CShapePtr@@QEBA_NXZ.c)
 *     ?CheckClipAllowsOcclusion@COcclusionContext@@AEBAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEA_N@Z @ 0x180058150 (-CheckClipAllowsOcclusion@COcclusionContext@@AEBAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEA_N@Z.c)
 *     ?CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z @ 0x18005A960 (-CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18008B5B0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x1800A6FE0 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@Z @ 0x1800E24E0 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@.c)
 * Callees:
 *     <none>
 */

bool __fastcall CRectanglesShape::IsEmpty(CRectanglesShape *this)
{
  float *v1; // rdx
  __int64 v2; // rax

  v1 = (float *)*((_QWORD *)this + 2);
  v2 = (__int64)(*((_QWORD *)this + 3) - (_QWORD)v1) >> 4;
  return !v2 || v2 == 1 && (v1[2] <= *v1 || v1[3] <= v1[1]);
}
