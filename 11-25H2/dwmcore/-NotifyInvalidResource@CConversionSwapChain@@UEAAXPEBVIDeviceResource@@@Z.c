/*
 * XREFs of ?NotifyInvalidResource@CConversionSwapChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802D4960
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180147AD0 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

void __fastcall CConversionSwapChain::NotifyInvalidResource(
        CGlobalDrawingContext **this,
        const struct IDeviceResource *a2)
{
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(this + 30);
  CLegacySwapChain::NotifyInvalidResource((CLegacySwapChain *)this, a2);
}
