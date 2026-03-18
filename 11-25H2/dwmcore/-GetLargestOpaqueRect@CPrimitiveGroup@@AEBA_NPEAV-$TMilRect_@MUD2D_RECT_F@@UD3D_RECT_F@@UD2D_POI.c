/*
 * XREFs of ?GetLargestOpaqueRect@CPrimitiveGroup@@AEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180056C2C
 * Callers:
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180055A90 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?CollectOcclusion@CVisual@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180056B20 (-CollectOcclusion@CVisual@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800B8E40 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CPrimitiveGroup::GetLargestOpaqueRect(__int64 a1, float *a2)
{
  bool result; // al
  float v3; // xmm1_4
  float v4; // xmm2_4
  float v5; // xmm0_4
  float v6; // xmm3_4

  result = 0;
  if ( *(_QWORD *)(a1 + 472) && a2 )
  {
    v3 = *(float *)(a1 + 524);
    *a2 = v3;
    v4 = *(float *)(a1 + 528);
    a2[1] = v4;
    v5 = *(float *)(a1 + 532);
    a2[2] = v5;
    v6 = *(float *)(a1 + 536);
    a2[3] = v6;
    if ( v5 > v3 )
      return v6 > v4;
  }
  return result;
}
