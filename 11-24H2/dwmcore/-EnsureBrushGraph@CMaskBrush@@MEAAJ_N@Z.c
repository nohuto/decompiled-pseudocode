/*
 * XREFs of ?EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z @ 0x18021CF70
 * Callers:
 *     <none>
 * Callees:
 *     ?Build@CBrushRenderingGraphBuilder@@SAJPEAVCBrush@@PEAPEAVCBrushRenderingGraph@@@Z @ 0x18004708C (-Build@CBrushRenderingGraphBuilder@@SAJPEAVCBrush@@PEAPEAVCBrushRenderingGraph@@@Z.c)
 *     ?IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x18004F9B0 (-IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x18008F428 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CMaskBrush::EnsureBrushGraph(CInteractionContextWrapper **this, char a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  bool v6; // [rsp+48h] [rbp+10h] BYREF

  if ( (!a2 || (unsigned __int8)CMaskBrush::IsReadyToDraw((CMaskBrush *)this, 0LL, &v6))
    && (Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(this + 10),
        v3 = CBrushRenderingGraphBuilder::Build((struct CBrush *)this, this + 10),
        v4 = v3,
        v3 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, 0x14Bu, 0LL);
  }
  else
  {
    return 0;
  }
  return v4;
}
