/*
 * XREFs of gsl::final_action__lambda_88cfa773221f8f0f13642871a04a878f___::_final_action__lambda_88cfa773221f8f0f13642871a04a878f___ @ 0x18026FE60
 * Callers:
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x18027095C (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 * Callees:
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180085F60 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 */

_BYTE *__fastcall gsl::final_action__lambda_88cfa773221f8f0f13642871a04a878f___::_final_action__lambda_88cfa773221f8f0f13642871a04a878f___(
        __int64 a1)
{
  _BYTE *result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    result = *(_BYTE **)a1;
    if ( **(_BYTE **)a1 )
      return (_BYTE *)CDrawingContext::PopLayer(*(CDrawingContext **)(a1 + 8));
  }
  return result;
}
