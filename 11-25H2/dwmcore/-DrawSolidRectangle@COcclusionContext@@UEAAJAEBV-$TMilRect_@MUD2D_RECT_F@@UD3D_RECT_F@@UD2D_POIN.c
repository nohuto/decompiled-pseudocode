/*
 * XREFs of ?DrawSolidRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x1801FB110
 * Callers:
 *     <none>
 * Callees:
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x180285A08 (-CollectRectangleForOcclusion@COcclusionContext@@AEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@.c)
 */

__int64 __fastcall COcclusionContext::DrawSolidRectangle(__int64 a1, __int64 a2, __int64 a3)
{
  if ( !*(_DWORD *)(a1 + 1712) && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a3 + 12) - 1.0) & _xmm) < 0.0000011920929 )
    COcclusionContext::CollectRectangleForOcclusion(a1, a2, 0LL, 0LL);
  return 0LL;
}
