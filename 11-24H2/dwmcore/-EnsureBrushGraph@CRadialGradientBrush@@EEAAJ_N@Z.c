/*
 * XREFs of ?EnsureBrushGraph@CRadialGradientBrush@@EEAAJ_N@Z @ 0x1802A2C40
 * Callers:
 *     <none>
 * Callees:
 *     ?Build@CBrushRenderingGraphBuilder@@SAJPEAVCBrush@@PEAPEAVCBrushRenderingGraph@@@Z @ 0x18004708C (-Build@CBrushRenderingGraphBuilder@@SAJPEAVCBrush@@PEAPEAVCBrushRenderingGraph@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x18008F428 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CRadialGradientBrush::EnsureBrushGraph(CInteractionContextWrapper **this, char a2)
{
  unsigned int v2; // ebx
  int v4; // eax

  v2 = 0;
  if ( !a2 || this[21] != this[22] )
  {
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(this + 10);
    v4 = CBrushRenderingGraphBuilder::Build((struct CBrush *)this, this + 10);
    v2 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x15Cu, 0LL);
  }
  return v2;
}
