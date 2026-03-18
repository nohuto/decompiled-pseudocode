/*
 * XREFs of ?RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180139F24
 * Callers:
 *     ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@PEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180242F58 (-DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@PEAV-$TMilRect_@HUtagRECT@@UD2D_POINT.c)
 * Callees:
 *     ?GenerateDrawListForOverlayColor@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_RECT_F@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListEntryBuilder@@@Z @ 0x18001B0B0 (-GenerateDrawListForOverlayColor@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_RECT_F@@PEBUD.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Reset@CDrawListEntryBuilder@@QEAAXXZ @ 0x18013A190 (-Reset@CDrawListEntryBuilder@@QEAAXXZ.c)
 *     ?Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z @ 0x18013D1F0 (-Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CDrawingContext::RenderOverlayColor(
        struct CDrawingContext *a1,
        const struct _D3DCOLORVALUE *a2,
        const struct D2D_RECT_F *a3,
        const struct D2D_MATRIX_3X2_F *a4)
{
  CDrawListEntryBuilder *v4; // rdi
  int DrawListForOverlayColor; // eax
  unsigned int v7; // ebx
  int v8; // eax

  v4 = (struct CDrawingContext *)((char *)a1 + 3440);
  DrawListForOverlayColor = CDrawingContext::GenerateDrawListForOverlayColor(
                              a1,
                              a2,
                              a3,
                              a4,
                              (struct CDrawingContext *)((char *)a1 + 3440));
  v7 = DrawListForOverlayColor;
  if ( DrawListForOverlayColor < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DrawListForOverlayColor, 0x19B7u, 0LL);
  }
  else
  {
    v8 = CDrawListEntryBuilder::Render(v4, a1);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x19B9u, 0LL);
  }
  CDrawListEntryBuilder::Reset(v4);
  return v7;
}
