/*
 * XREFs of gsl::final_action__lambda_e470b0f999bb00ee8d8ebdfd9fe2a583___::_final_action__lambda_e470b0f999bb00ee8d8ebdfd9fe2a583___ @ 0x18023B310
 * Callers:
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x18027095C (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 * Callees:
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x180076980 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 */

void __fastcall gsl::final_action__lambda_e470b0f999bb00ee8d8ebdfd9fe2a583___::_final_action__lambda_e470b0f999bb00ee8d8ebdfd9fe2a583___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
    CDrawingContext::PopGpuClipRectInternal(*(CDrawingContext **)a1, 0);
}
