/*
 * XREFs of ?GetLargestOpaqueRect@CPrimitiveGroup@@AEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18010061C
 * Callers:
 *     ?CollectOcclusion@COcclusionContext@@AEAAJPEAVCOcclusionInfo@@PEAVCVisual@@@Z @ 0x1800FEDF0 (-CollectOcclusion@COcclusionContext@@AEAAJPEAVCOcclusionInfo@@PEAVCVisual@@@Z.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800FF480 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?CollectOcclusion@CVisual@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180100510 (-CollectOcclusion@CVisual@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
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
