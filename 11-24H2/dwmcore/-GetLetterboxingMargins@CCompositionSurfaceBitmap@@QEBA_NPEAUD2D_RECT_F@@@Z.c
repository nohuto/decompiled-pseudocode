/*
 * XREFs of ?GetLetterboxingMargins@CCompositionSurfaceBitmap@@QEBA_NPEAUD2D_RECT_F@@@Z @ 0x1801E6184
 * Callers:
 *     ?Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18023E7F0 (-Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA.c)
 * Callees:
 *     ?GetLetterboxingMargins@CGlobalCompositionSurfaceInfo@@UEBA_NPEAUD2D_RECT_F@@@Z @ 0x1800D38C0 (-GetLetterboxingMargins@CGlobalCompositionSurfaceInfo@@UEBA_NPEAUD2D_RECT_F@@@Z.c)
 */

char __fastcall CCompositionSurfaceBitmap::GetLetterboxingMargins(
        CCompositionSurfaceBitmap *this,
        struct D2D_RECT_F *a2)
{
  CGlobalCompositionSurfaceInfo *v2; // rcx
  char result; // al
  char (__fastcall *v4)(CGlobalCompositionSurfaceInfo *, struct D2D_RECT_F *); // rax

  v2 = (CGlobalCompositionSurfaceInfo *)*((_QWORD *)this + 12);
  result = 0;
  if ( v2 )
  {
    v4 = *(char (__fastcall **)(CGlobalCompositionSurfaceInfo *, struct D2D_RECT_F *))(*(_QWORD *)v2 + 472LL);
    if ( v4 == CGlobalCompositionSurfaceInfo::GetLetterboxingMargins )
      return CGlobalCompositionSurfaceInfo::GetLetterboxingMargins(v2, a2);
    else
      return v4(v2, a2);
  }
  return result;
}
