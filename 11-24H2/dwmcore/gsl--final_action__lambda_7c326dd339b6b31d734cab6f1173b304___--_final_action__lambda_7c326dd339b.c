/*
 * XREFs of gsl::final_action__lambda_7c326dd339b6b31d734cab6f1173b304___::_final_action__lambda_7c326dd339b6b31d734cab6f1173b304___ @ 0x18020F348
 * Callers:
 *     ?ProduceRealization@CWindowBackgroundBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x1800F4830 (-ProduceRealization@CWindowBackgroundBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRea.c)
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_F@@AEBU4@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801D9FFC (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_.c)
 * Callees:
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x1800FA030 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 */

__int64 __fastcall gsl::final_action__lambda_7c326dd339b6b31d734cab6f1173b304___::_final_action__lambda_7c326dd339b6b31d734cab6f1173b304___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
    return CDrawingContext::PopLayer(*(CDrawingContext **)a1);
  return result;
}
