/*
 * XREFs of gsl::final_action__lambda_d9647b2e9e0a0cba02120464dc304150___::_final_action__lambda_d9647b2e9e0a0cba02120464dc304150___ @ 0x18022F190
 * Callers:
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x18026494C (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 *     ?AddShadowToShape@CCursorState@@AEAA?AV?$shared_ptr@VShapeData@CCursorState@@@std@@AEBV23@@Z @ 0x1802B1BBC (-AddShadowToShape@CCursorState@@AEAA-AV-$shared_ptr@VShapeData@CCursorState@@@std@@AEBV23@@Z.c)
 * Callees:
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x1801B0C50 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 */

void __fastcall gsl::final_action__lambda_d9647b2e9e0a0cba02120464dc304150___::_final_action__lambda_d9647b2e9e0a0cba02120464dc304150___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
    CDrawingContext::PopGpuClipRectInternal(*(CDrawingContext **)a1, 0);
}
