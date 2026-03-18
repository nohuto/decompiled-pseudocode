/*
 * XREFs of gsl::final_action__lambda_ed3bd09926e7b8e6838ccb85fcb486b1___::_final_action__lambda_ed3bd09926e7b8e6838ccb85fcb486b1___ @ 0x1802903AC
 * Callers:
 *     ?ProduceRealization@CStockBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x1802904A0 (-ProduceRealization@CStockBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CC.c)
 * Callees:
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800D8BD0 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 */

__int64 __fastcall gsl::final_action__lambda_ed3bd09926e7b8e6838ccb85fcb486b1___::_final_action__lambda_ed3bd09926e7b8e6838ccb85fcb486b1___(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
    return CDrawingContext::PopRenderTargetInternal(*(CDrawingContext **)a1, 0LL, a3);
  return result;
}
