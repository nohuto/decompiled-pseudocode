/*
 * XREFs of ?NotifyInvalidResource@CCaptureRenderTarget@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802828E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CCaptureRenderTarget::NotifyInvalidResource(
        CCaptureRenderTarget *this,
        const struct IDeviceResource *a2)
{
  CCaptureRenderTarget::ReleaseRenderingResources((CCaptureRenderTarget *)((char *)this - 2736));
}
