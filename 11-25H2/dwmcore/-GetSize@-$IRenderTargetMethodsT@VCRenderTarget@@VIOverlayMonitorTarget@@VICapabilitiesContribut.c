/*
 * XREFs of ?GetSize@?$IRenderTargetMethodsT@VCRenderTarget@@VIOverlayMonitorTarget@@VICapabilitiesContributorTarget@@@@UEBA?AUD2D_SIZE_U@@XZ @ 0x180205340
 * Callers:
 *     ?GetSize@?$IRenderTargetMethodsT@VCRenderTarget@@VIOverlayMonitorTarget@@VICapabilitiesContributorTarget@@@@WEI@EBA?AUD2D_SIZE_U@@XZ @ 0x180281CC0 (-GetSize@-$IRenderTargetMethodsT@VCRenderTarget@@VIOverlayMonitorTarget@@VICapabili_ea_180281CC0.c)
 *     ?GetSize@?$IRenderTargetMethodsT@VCRenderTarget@@VIOverlayMonitorTarget@@VICapabilitiesContributorTarget@@@@WFA@EBA?AUD2D_SIZE_U@@XZ @ 0x180281CD0 (-GetSize@-$IRenderTargetMethodsT@VCRenderTarget@@VIOverlayMonitorTarget@@VICapabili_ea_180281CD0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall IRenderTargetMethodsT<CRenderTarget,IOverlayMonitorTarget,ICapabilitiesContributorTarget>::GetSize(
        __int64 a1,
        _QWORD *a2)
{
  *a2 = *(_QWORD *)(a1 + 24);
  return a2;
}
