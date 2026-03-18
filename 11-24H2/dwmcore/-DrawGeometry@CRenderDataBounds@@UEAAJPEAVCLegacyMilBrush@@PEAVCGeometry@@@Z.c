/*
 * XREFs of ?DrawGeometry@CRenderDataBounds@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z @ 0x1801E3D90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C3BF0 (-GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?AddBounds@CRenderDataBounds@@IEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801E4228 (-AddBounds@CRenderDataBounds@@IEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

__int64 __fastcall CRenderDataBounds::DrawGeometry(
        CRenderDataBounds *this,
        struct CLegacyMilBrush *a2,
        struct CGeometry *a3)
{
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 && a3 )
  {
    v5 = 0LL;
    CGeometry::GetBoundsSafe(a3, 0LL, (__int64)&v5);
    CRenderDataBounds::AddBounds(this, &v5);
  }
  return 0LL;
}
