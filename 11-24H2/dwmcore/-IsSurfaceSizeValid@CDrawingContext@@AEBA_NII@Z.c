/*
 * XREFs of ?IsSurfaceSizeValid@CDrawingContext@@AEBA_NII@Z @ 0x1800A886C
 * Callers:
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x1800A82C0 (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@U.c)
 *     ?RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1800A8D00 (-RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDrawingContext::IsSurfaceSizeValid(CDrawingContext *this, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // ecx

  v3 = *(_DWORD *)(*((_QWORD *)this + 5) + 960LL);
  if ( v3 >= 0x4000 )
    v3 = 0x4000;
  return a2 <= v3 && a3 <= v3;
}
