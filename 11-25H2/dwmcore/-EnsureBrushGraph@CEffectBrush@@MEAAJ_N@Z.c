/*
 * XREFs of ?EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z @ 0x1800724A0
 * Callers:
 *     ?Draw@CSurfaceRenderStrategy@CSurfaceBrush@@UEBAJPEAV2@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180072230 (-Draw@CSurfaceRenderStrategy@CSurfaceBrush@@UEBAJPEAV2@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800D2B10 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?Draw@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800D3ED0 (-Draw@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18014C600 (-RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?Build@CBrushRenderingGraphBuilder@@SAJPEAVCBrush@@PEAPEAVCBrushRenderingGraph@@@Z @ 0x18007123C (-Build@CBrushRenderingGraphBuilder@@SAJPEAVCBrush@@PEAPEAVCBrushRenderingGraph@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x180133FE8 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CalculateIsOpaque@CEffectBrush@@AEBA_NXZ @ 0x180210DD0 (-CalculateIsOpaque@CEffectBrush@@AEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CEffectBrush::EnsureBrushGraph(struct CBrushRenderingGraph **this, char a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  char IsOpaque; // al
  char v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0;
  if ( !a2
    || (IsOpaque = (*((__int64 (__fastcall **)(struct CBrushRenderingGraph **, _QWORD, char *))*this + 39))(
                     this,
                     0LL,
                     &v7)) != 0 )
  {
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(this + 10);
    v3 = CBrushRenderingGraphBuilder::Build((struct CBrush *)this, this + 10);
    v4 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x2Du, 0LL);
      return v4;
    }
    IsOpaque = CEffectBrush::CalculateIsOpaque((CEffectBrush *)this);
  }
  *((_BYTE *)this + 184) = IsOpaque;
  return 0;
}
