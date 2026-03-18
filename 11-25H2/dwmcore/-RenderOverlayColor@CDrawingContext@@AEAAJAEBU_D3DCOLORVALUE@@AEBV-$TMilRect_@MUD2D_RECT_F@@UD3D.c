/*
 * XREFs of ?RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000DD2C
 * Callers:
 *     ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@PEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18024BB4C (-DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@PEAV-$TMilRect_@HUtagRECT@@UD2D_POINT.c)
 * Callees:
 *     ?Reset@CDrawListEntryBuilder@@QEAAXXZ @ 0x18000DF90 (-Reset@CDrawListEntryBuilder@@QEAAXXZ.c)
 *     ?Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z @ 0x180010FF0 (-Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GenerateDrawListForOverlayColor@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_RECT_F@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListEntryBuilder@@@Z @ 0x18012A860 (-GenerateDrawListForOverlayColor@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_RECT_F@@PEBUD.c)
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DrawListForOverlayColor, 0x198Fu, 0LL);
  }
  else
  {
    v8 = CDrawListEntryBuilder::Render(v4, a1);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x1991u, 0LL);
  }
  CDrawListEntryBuilder::Reset(v4);
  return v7;
}
