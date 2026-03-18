/*
 * XREFs of ?GetSnappedShapeRect@CCursorState@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1802B2F28
 * Callers:
 *     ?GetContentBounds@CCursorVisual@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180290020 (-GetContentBounds@CCursorVisual@@UEAAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1802908E0 (-RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCursorState::GetSnappedShapeRect(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  float v3; // xmm3_4
  float v4; // xmm2_4
  float v5; // xmm1_4
  float v6; // xmm3_4
  float v7; // xmm0_4
  float v8; // xmm2_4

  result = a2;
  v3 = *(float *)(a1 + 216);
  v4 = *(float *)(a1 + 212);
  v5 = v3;
  *(_OWORD *)a2 = *(_OWORD *)(a1 + 128);
  v6 = v3 + *(float *)(a2 + 12);
  v7 = v4 + *(float *)a2;
  v8 = v4 + *(float *)(a2 + 8);
  *(float *)(a2 + 4) = v5 + *(float *)(a2 + 4);
  *(float *)(a2 + 12) = v6;
  *(float *)a2 = v7;
  *(float *)(a2 + 8) = v8;
  return result;
}
