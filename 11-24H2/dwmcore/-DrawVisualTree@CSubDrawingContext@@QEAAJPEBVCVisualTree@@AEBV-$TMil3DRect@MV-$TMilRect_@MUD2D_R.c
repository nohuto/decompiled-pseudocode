/*
 * XREFs of ?DrawVisualTree@CSubDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEBVCOcclusionContext@@@Z @ 0x1800F6810
 * Callers:
 *     ?DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800F6564 (-DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_R.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x1800D5FC8 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 *     ?Initialize@CSubDrawingContext@@AEAAJXZ @ 0x1800F6434 (-Initialize@CSubDrawingContext@@AEAAJXZ.c)
 *     ?EndFrame@CSubDrawingContext@@AEAAX_N@Z @ 0x1800F68F8 (-EndFrame@CSubDrawingContext@@AEAAX_N@Z.c)
 *     ?BeginFrame@CSubDrawingContext@@AEAAJAEBVCMILMatrix@@@Z @ 0x1800F6B18 (-BeginFrame@CSubDrawingContext@@AEAAJAEBVCMILMatrix@@@Z.c)
 */

__int64 __fastcall CSubDrawingContext::DrawVisualTree(
        CDrawingContext **this,
        struct CVisualTree *a2,
        float *a3,
        const struct CMILMatrix *a4,
        COcclusionContext *a5)
{
  int v9; // eax
  int v10; // ebx
  int v11; // eax
  int v13; // eax

  if ( this[1] || (v13 = CSubDrawingContext::Initialize((CSubDrawingContext *)this), v10 = v13, v13 >= 0) )
  {
    v9 = CSubDrawingContext::BeginFrame((CSubDrawingContext *)this, a4);
    v10 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x27u, 0LL);
    }
    else
    {
      v11 = CDrawingContext::DrawVisualTree(this[1], a2, a3, a5, 0, *((_BYTE *)*this + 7938), 0LL);
      v10 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x32u, 0LL);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x24u, 0LL);
  }
  CSubDrawingContext::EndFrame((CSubDrawingContext *)this, v10 < 0);
  return (unsigned int)v10;
}
