/*
 * XREFs of ?TileImage@CRenderDataBounds@@UEAAJPEAVCResource@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBUD2D_POINT_2F@@M@Z @ 0x1801E3C00
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800750E0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?AddBounds@CRenderDataBounds@@IEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801E4228 (-AddBounds@CRenderDataBounds@@IEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_.c)
 */

__int64 __fastcall CRenderDataBounds::TileImage(
        __int64 a1,
        __int64 a2,
        const struct D2D_RECT_F *a3,
        __int64 a4,
        int a5)
{
  __int64 v5; // r8
  __int64 v6; // r9

  if ( !IsEmpty(a3) && COERCE_FLOAT(a5 & _xmm) >= 0.0000011920929 )
    CRenderDataBounds::AddBounds(v6, v5);
  return 0LL;
}
