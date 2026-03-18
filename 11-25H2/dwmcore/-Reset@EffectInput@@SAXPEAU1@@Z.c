/*
 * XREFs of ?Reset@EffectInput@@SAXPEAU1@@Z @ 0x1800DDD48
 * Callers:
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180023C04 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?GenerateEffectInput@CBackdropVisualImage@@QEAA?AUEffectInput@@XZ @ 0x1800DDB60 (-GenerateEffectInput@CBackdropVisualImage@@QEAA-AUEffectInput@@XZ.c)
 *     ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18016F850 (-GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 *     ?GetBrushParameters@CBlurredWallpaperBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18029EED0 (-GetBrushParameters@CBlurredWallpaperBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x1800D0080 (--1CDrawListBitmap@@QEAA@XZ.c)
 */

void __fastcall EffectInput::Reset(struct EffectInput *a1)
{
  CDrawListBitmap::~CDrawListBitmap(a1);
  memset_0(a1, 0, 0x70uLL);
}
