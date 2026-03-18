/*
 * XREFs of ?GetClearMode@CDDisplayRenderTarget@@MEBA?AW4Enum@ClearMode@@XZ @ 0x1802810F0
 * Callers:
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x1800C7D98 (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DDisplayDiscard@@@details@wil@@QEAA_NXZ @ 0x180285134 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DDisplayDiscard@@@details@wil@@QE.c)
 */

__int64 CDDisplayRenderTarget::GetClearMode()
{
  return 2
       - (unsigned int)((unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DDisplayDiscard>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DDisplayDiscard>::GetImpl'::`2'::impl) != 0);
}
