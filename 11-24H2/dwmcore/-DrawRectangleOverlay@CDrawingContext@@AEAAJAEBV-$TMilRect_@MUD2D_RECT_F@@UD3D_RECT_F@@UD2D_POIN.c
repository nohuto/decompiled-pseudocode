/*
 * XREFs of ?DrawRectangleOverlay@CDrawingContext@@AEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18024AA64
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x1800D5FC8 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 * Callees:
 *     ?FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x18006B728 (-FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV-$span@$$CBUD2D_RECT_F@@$0-0@gsl@@AEBU_D.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::DrawRectangleOverlay(struct CDrawingContext *a1, __int64 a2)
{
  __int64 v2; // rdx
  char *v3; // r8
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp-18h] BYREF
  __int64 v8; // [rsp+38h] [rbp-10h]

  v7 = 1LL;
  v8 = a2;
  v2 = (g_DirtyRegionColor + 1) / 6;
  g_DirtyRegionColor = (g_DirtyRegionColor + 1) % 6;
  v3 = (char *)&unk_180393E10 + 16 * g_DirtyRegionColor;
  if ( !v8 )
  {
    ((void (__fastcall *)(struct CDrawingContext *, __int64, char *))`gsl::details::get_terminate_handler'::`2'::handler)(
      a1,
      v2,
      v3);
    __debugbreak();
  }
  v4 = CDrawingContext::FillRectanglesWithSolidColor(a1, (__int64)&v7, (__int64)v3);
  v5 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x1872u, 0LL);
  return v5;
}
