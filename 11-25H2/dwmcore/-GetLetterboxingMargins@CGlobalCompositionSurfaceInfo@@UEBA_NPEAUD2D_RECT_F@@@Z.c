/*
 * XREFs of ?GetLetterboxingMargins@CGlobalCompositionSurfaceInfo@@UEBA_NPEAUD2D_RECT_F@@@Z @ 0x1800A1870
 * Callers:
 *     ?GetDirtyRegion@CCompositionSurfaceBitmap@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x1800A0970 (-GetDirtyRegion@CCompositionSurfaceBitmap@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z.c)
 *     ?Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801E2D20 (-Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CGlobalCompositionSurfaceInfo::GetLetterboxingMargins(
        CGlobalCompositionSurfaceInfo *this,
        struct D2D_RECT_F *a2)
{
  __int64 v2; // r9
  char v3; // r8

  v2 = *((_QWORD *)this + 26);
  v3 = 0;
  if ( v2
    && ((unsigned int)((__int64)(*((_QWORD *)this + 24) - *((_QWORD *)this + 23)) >> 3) > 1
     || *((_DWORD *)this + 36) == 3) )
  {
    return (*(__int64 (__fastcall **)(_QWORD, struct D2D_RECT_F *, _QWORD))(*(_QWORD *)v2 + 240LL))(
             *((_QWORD *)this + 26),
             a2,
             0LL);
  }
  return v3;
}
