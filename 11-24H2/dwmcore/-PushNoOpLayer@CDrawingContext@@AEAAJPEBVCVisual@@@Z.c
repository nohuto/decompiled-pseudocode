/*
 * XREFs of ?PushNoOpLayer@CDrawingContext@@AEAAJPEBVCVisual@@@Z @ 0x1800A6ACC
 * Callers:
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x1800A82C0 (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@U.c)
 *     ?RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1800A8D00 (-RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?Push@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@CDrawingContext@@@Z @ 0x18001DA30 (-Push@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@.c)
 */

__int64 __fastcall CDrawingContext::PushNoOpLayer(CDrawingContext *this, const struct CVisual *a2)
{
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  *((_QWORD *)&v3 + 1) = a2;
  *(_QWORD *)&v3 = 7LL;
  return CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((__int64)this + 264, &v3);
}
