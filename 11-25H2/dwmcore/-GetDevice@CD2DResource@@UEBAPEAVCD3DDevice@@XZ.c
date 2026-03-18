/*
 * XREFs of ?GetDevice@CD2DResource@@UEBAPEAVCD3DDevice@@XZ @ 0x1800131A0
 * Callers:
 *     ?GetD2DBrush@CLinearGradientBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@PEAPEAUID2D1Brush@@@Z @ 0x180012CD0 (-GetD2DBrush@CLinearGradientBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@PEAPEAUID2D1Brush@@.c)
 *     ?FindExistingGradient@CGradientSource@@IEAA_NPEAVCD3DDevice@@_NAEBVRetrievalParams@1@@Z @ 0x180013040 (-FindExistingGradient@CGradientSource@@IEAA_NPEAVCD3DDevice@@_NAEBVRetrievalParams@1@@Z.c)
 *     ?GetCurrentD2DRadialGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1RadialGradientBrush@@@Z @ 0x18019F500 (-GetCurrentD2DRadialGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1RadialGr.c)
 * Callees:
 *     <none>
 */

struct CD3DDevice *__fastcall CD2DResource::GetDevice(CD2DResource *this)
{
  __int64 v1; // rcx
  struct CD3DDevice *result; // rax

  v1 = *(_QWORD *)(*((_QWORD *)this + 5) + 24LL);
  result = (struct CD3DDevice *)(v1 - 16);
  if ( !v1 )
    return 0LL;
  return result;
}
