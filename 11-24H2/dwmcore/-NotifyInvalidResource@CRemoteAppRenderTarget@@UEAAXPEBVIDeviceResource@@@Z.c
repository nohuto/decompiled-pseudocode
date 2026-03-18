/*
 * XREFs of ?NotifyInvalidResource@CRemoteAppRenderTarget@@UEAAXPEBVIDeviceResource@@@Z @ 0x180277D40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CRemoteAppRenderTarget::NotifyInvalidResource(
        CRemoteAppRenderTarget *this,
        const struct IDeviceResource *a2)
{
  CRemoteAppRenderTarget::ReleaseSwapChain((CRemoteAppRenderTarget *)((char *)this - 160));
}
