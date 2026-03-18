/*
 * XREFs of ?GetMeshCacheManager@@YAPEAVCMeshCacheManager@@XZ @ 0x180177818
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800C7090 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@@Z @ 0x180176590 (-Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAn.c)
 * Callees:
 *     <none>
 */

struct CMeshCacheManager *GetMeshCacheManager(void)
{
  struct CMeshCacheManager *result; // rax

  result = 0LL;
  if ( g_pComposition )
    return (struct CMeshCacheManager *)*((_QWORD *)g_pComposition + 84);
  return result;
}
