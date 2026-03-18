/*
 * XREFs of ?GetDeviceTexture@?$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealization@@@@WBDI@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802DFEC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IBitmapRealizationMethodsT<CSectionBitmapRealization,IGDIBitmapRealization>::GetDeviceTexture(
        __int64 a1,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  return CSectionBitmapRealization::GetDeviceTexture((CSectionBitmapRealization *)(a1 - 312), a2, a3);
}
