/*
 * XREFs of ?IsEmpty@CRoundedRectangleShape@@UEBA_NXZ @ 0x1801CD330
 * Callers:
 *     ?CheckClipAllowsOcclusion@COcclusionContext@@AEBAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEA_N@Z @ 0x1800C59D0 (-CheckClipAllowsOcclusion@COcclusionContext@@AEBAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEA_N@Z.c)
 *     ?IsEmpty@CShapePtr@@QEBA_NXZ @ 0x1800C5C50 (-IsEmpty@CShapePtr@@QEBA_NXZ.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800C7090 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z @ 0x180142FF0 (-CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CRoundedRectangleShape::IsEmpty(CRoundedRectangleShape *this)
{
  __int64 v1; // rax
  char v2; // cl
  float v3; // xmm2_4
  float v4; // xmm3_4
  float v5; // xmm1_4
  float v6; // xmm0_4

  v1 = *((_QWORD *)this + 2);
  v2 = 0;
  v3 = *(float *)(v1 + 20);
  v4 = *(float *)(v1 + 16);
  if ( *(_BYTE *)(v1 + 68) )
  {
    v5 = v4 + *(float *)(v1 + 24);
    v6 = v3 + *(float *)(v1 + 28);
  }
  else
  {
    v5 = *(float *)(v1 + 24);
    v6 = *(float *)(v1 + 28);
  }
  if ( v5 <= v4 || v6 <= v3 )
    return 1;
  return v2;
}
