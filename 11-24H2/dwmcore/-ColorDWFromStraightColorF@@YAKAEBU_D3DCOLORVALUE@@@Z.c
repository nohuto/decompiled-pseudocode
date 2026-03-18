/*
 * XREFs of ?ColorDWFromStraightColorF@@YAKAEBU_D3DCOLORVALUE@@@Z @ 0x180162A50
 * Callers:
 *     ?Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x180052D80 (-Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?EmitGeometry@CCpuClipAntialiasBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z @ 0x1801607F0 (-EmitGeometry@CCpuClipAntialiasBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z.c)
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveVertexAttributesDesc@@PEBUD2D_POINT_3F@@PEBUD2D_POINT_2F@@IAEBV?$span@$$CBH$0?0@gsl@@@Z @ 0x180244320 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveVertexAttributesDesc@@PEBUD2D_POINT_3F@@PEBUD2D.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ColorDWFromStraightColorF(const struct _D3DCOLORVALUE *a1)
{
  float v1; // xmm0_4
  unsigned int v2; // edx
  float v3; // xmm0_4
  float v4; // xmm0_4
  float v6; // [rsp+8h] [rbp+8h]
  float v7; // [rsp+20h] [rbp+20h]

  v1 = (float)(a1->a * 255.0) + 6291456.25;
  v2 = (LODWORD(v1) & 0xFFFFFFFE) << 8;
  v3 = (float)(a1->b * 255.0) + 6291456.25;
  v7 = v3;
  v4 = (float)(a1->g * 255.0) + 6291456.25;
  v6 = (float)(a1->r * 255.0) + 6291456.25;
  return ((LODWORD(v7) & 0xFFFFFFFE | v2) << 15) | ((int)(((int)(LODWORD(v6) << 10) >> 8) | ((LODWORD(v4) & 0xFFFFFFFE) << 10)) >> 3);
}
