/*
 * XREFs of ?NotifyInvalidResource@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@EEAAXPEBVIDeviceResource@@@Z @ 0x180239790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CDeviceResourceTable<CD3DPixelShader,CLinkedShader>::NotifyInvalidResource(
        struct IDeviceResourceNotify *a1,
        CD3DResource *a2)
{
  return CDeviceResourceTable<CD3DPixelShader,CLinkedShader>::ReleaseResource(a1, a2);
}
