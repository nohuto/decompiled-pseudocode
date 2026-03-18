/*
 * XREFs of ?GetBorderColor@CCompositionSurfaceBitmap@@QEBA?AU_D3DCOLORVALUE@@XZ @ 0x180069704
 * Callers:
 *     ?RenderRevealBorder@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEBVCShape@@@Z @ 0x1800693EC (-RenderRevealBorder@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@HUtagRECT@@UD2D_POINT.c)
 *     ?HasRevealBorder@CSwapchainRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@PEAU_D3DCOLORVALUE@@@Z @ 0x18006A890 (-HasRevealBorder@CSwapchainRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@PEAU_D3DCOLORVALUE@@@Z.c)
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180236DE0 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 * Callees:
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct _D3DCOLORVALUE *__fastcall CCompositionSurfaceBitmap::GetBorderColor(
        CCompositionSurfaceBitmap *this,
        struct _D3DCOLORVALUE *__return_ptr retstr)
{
  __int64 v2; // rcx
  __int128 *v4; // rax
  __int128 v5; // xmm0
  struct _D3DCOLORVALUE *result; // rax
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF

  v2 = *((_QWORD *)this + 12);
  if ( v2 )
  {
    v4 = (__int128 *)(*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v2 + 464LL))(v2, &v7);
  }
  else
  {
    v4 = &v7;
    v7 = 0LL;
  }
  v5 = *v4;
  result = retstr;
  *(_OWORD *)&retstr->r = v5;
  return result;
}
