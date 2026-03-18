/*
 * XREFs of ?DoesSurfaceHaveBorder@CRenderingTechnique@@QEBA_NI@Z @ 0x18022B394
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18001A9F4 (-GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 * Callees:
 *     <none>
 */

char __fastcall CRenderingTechnique::DoesSurfaceHaveBorder(CRenderingTechnique *this, unsigned int a2)
{
  __int64 v2; // rdx
  char result; // al

  v2 = 44LL * a2;
  result = 0;
  if ( *((_BYTE *)this + v2 + 88) || *((_BYTE *)this + v2 + 89) )
    return 1;
  return result;
}
