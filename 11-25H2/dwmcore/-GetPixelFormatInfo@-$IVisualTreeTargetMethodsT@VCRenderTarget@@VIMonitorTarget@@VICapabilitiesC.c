/*
 * XREFs of ?GetPixelFormatInfo@?$IVisualTreeTargetMethodsT@VCRenderTarget@@VIMonitorTarget@@VICapabilitiesContributorTarget@@@@UEBA?AUPixelFormatInfo@@XZ @ 0x1802816F0
 * Callers:
 *     ?GetPixelFormatInfo@?$IVisualTreeTargetMethodsT@VCRenderTarget@@VIMonitorTarget@@VICapabilitiesContributorTarget@@@@WFA@EBA?AUPixelFormatInfo@@XZ @ 0x180281710 (-GetPixelFormatInfo@-$IVisualTreeTargetMethodsT@VCRenderTarget@@VIMonitorTarget@@VI_ea_180281710.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IVisualTreeTargetMethodsT<CRenderTarget,IMonitorTarget,ICapabilitiesContributorTarget>::GetPixelFormatInfo(
        __int64 a1,
        __int64 a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 56);
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(a2 + 8) = v2;
  return a2;
}
