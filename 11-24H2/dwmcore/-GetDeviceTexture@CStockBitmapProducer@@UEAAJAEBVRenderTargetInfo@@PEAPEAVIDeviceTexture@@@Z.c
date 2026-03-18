/*
 * XREFs of ?GetDeviceTexture@CStockBitmapProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18022B180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CStockBitmapProducer::GetDeviceTexture(
        CStockBitmapProducer *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  return CStockBitmapProducer::EnsureDeviceTexture(this, a2, a3);
}
