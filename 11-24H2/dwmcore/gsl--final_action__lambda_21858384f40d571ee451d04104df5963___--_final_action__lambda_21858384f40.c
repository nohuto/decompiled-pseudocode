/*
 * XREFs of gsl::final_action__lambda_21858384f40d571ee451d04104df5963___::_final_action__lambda_21858384f40d571ee451d04104df5963___ @ 0x180284DEC
 * Callers:
 *     ?EnsureDeviceTexture@CStockBitmapProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801C7C60 (-EnsureDeviceTexture@CStockBitmapProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?AddShadowToShape@CCursorState@@AEAA?AV?$shared_ptr@VShapeData@CCursorState@@@std@@AEBV23@@Z @ 0x1802B1BBC (-AddShadowToShape@CCursorState@@AEAA-AV-$shared_ptr@VShapeData@CCursorState@@@std@@AEBV23@@Z.c)
 * Callees:
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x180056D30 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 */

__int64 __fastcall gsl::final_action__lambda_21858384f40d571ee451d04104df5963___::_final_action__lambda_21858384f40d571ee451d04104df5963___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
    return CDrawingContext::EndFrame(*(CD3DDevice ***)a1);
  return result;
}
