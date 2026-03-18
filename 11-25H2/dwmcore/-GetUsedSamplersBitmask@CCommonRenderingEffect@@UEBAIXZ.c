/*
 * XREFs of ?GetUsedSamplersBitmask@CCommonRenderingEffect@@UEBAIXZ @ 0x180047E80
 * Callers:
 *     ??0CReconstructableDrawListEntry@@IEAA@AEBUReconstructableDrawListEntryParams@@PEAVCWarpRenderingEffect@@$$QEAV?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@V?$span@$$CBUPrimitiveUVDesc@@$0?0@gsl@@@Z @ 0x180046190 (--0CReconstructableDrawListEntry@@IEAA@AEBUReconstructableDrawListEntryParams@@PEAVCWarpRenderin.c)
 *     ?Create@CReconstructableDrawListEntry@@SAJAEBUReconstructableDrawListEntryParams@@PEAPEAV1@@Z @ 0x180046710 (-Create@CReconstructableDrawListEntry@@SAJAEBUReconstructableDrawListEntryParams@@PEAPEAV1@@Z.c)
 *     ?AppendReconstructableEntry@CDrawListEntryBuilder@@AEAAJAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N2PEBUPrimitiveVertexAttributesDesc@@I@Z @ 0x180047920 (-AppendReconstructableEntry@CDrawListEntryBuilder@@AEAAJAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N2PE.c)
 *     ?EmitGeometry@CMegaRectBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@@Z @ 0x180163A80 (-EmitGeometry@CMegaRectBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@@Z.c)
 *     ?ComputeColorAndUV@CDrawListEntryBuilder@@AEBAXPEBUPrimitiveVertexAttributesDesc@@V?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@V?$StridedSpan@UVertexAAFixup_UVxN@@@@@Z @ 0x18016B8E0 (-ComputeColorAndUV@CDrawListEntryBuilder@@AEBAXPEBUPrimitiveVertexAttributesDesc@@V-$StridedSpan.c)
 *     ?AppendCpuClipAntialiasEntry@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@_NPEA_N@Z @ 0x180192810 (-AppendCpuClipAntialiasEntry@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCommonRenderingEffect::GetUsedSamplersBitmask(CCommonRenderingEffect *this)
{
  __int64 result; // rax

  result = (*((_QWORD *)this + 3) != 0LL) | 2u;
  if ( !*((_QWORD *)this + 6) )
    return *((_QWORD *)this + 3) != 0LL;
  return result;
}
