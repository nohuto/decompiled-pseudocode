/*
 * XREFs of ?GetDirtyRegion@CSwapchainRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x180173270
 * Callers:
 *     <none>
 * Callees:
 *     ?HasRenderingRealization@CBitmapRenderStrategy@@SA_NPEAVIBitmapResource@@@Z @ 0x18004DE60 (-HasRenderingRealization@CBitmapRenderStrategy@@SA_NPEAVIBitmapResource@@@Z.c)
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@QEBA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D2090 (-CalcImageTransform@CCompositionSurfaceBitmap@@QEBA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x1800FB0F0 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     ?GetDirtyRegionFromSurface@CSurfaceRenderStrategy@CSurfaceBrush@@KA_NPEBV2@PEBVCMILMatrix@@AEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x180173764 (-GetDirtyRegionFromSurface@CSurfaceRenderStrategy@CSurfaceBrush@@KA_NPEBV2@PEBVCMILMatrix@@AEBUD.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

bool __fastcall CSwapchainRenderStrategy::GetDirtyRegion(
        CSwapchainRenderStrategy *this,
        const struct CSurfaceBrush *a2,
        struct D2D_SIZE_F *a3,
        struct CRectanglesShape *a4)
{
  CCompositionSurfaceBitmap *v4; // rsi
  const struct CMILMatrix *v8; // rbx
  struct Windows::Foundation::Numerics::float4x4 *v9; // r8
  bool v11; // al
  __m128 v12[4]; // [rsp+20h] [rbp-98h] BYREF
  int v13; // [rsp+60h] [rbp-58h]
  __int128 v14; // [rsp+70h] [rbp-48h] BYREF

  v4 = (CCompositionSurfaceBitmap *)*((_QWORD *)a2 + 16);
  v8 = 0LL;
  if ( CBitmapRenderStrategy::HasRenderingRealization((struct IBitmapResource *)(((unsigned __int64)v4 + 72) & -(__int64)(v4 != 0LL))) )
  {
    v13 = 0;
    v14 = 0LL;
    if ( !(unsigned __int8)CCompositionSurfaceBitmap::CalcImageTransform(v4, (float *)a3, (__int64)v12, &v14) )
      return CSurfaceBrush::CSurfaceRenderStrategy::GetDirtyRegionFromSurface(a2, v8, a3, a4);
    v11 = Windows::Foundation::Numerics::invert((Windows::Foundation::Numerics *)v12, v12, v9);
    LOWORD(v13) = v13 & 0xC003;
    if ( v11 )
    {
      v8 = (const struct CMILMatrix *)v12;
      return CSurfaceBrush::CSurfaceRenderStrategy::GetDirtyRegionFromSurface(a2, v8, a3, a4);
    }
  }
  return 0;
}
