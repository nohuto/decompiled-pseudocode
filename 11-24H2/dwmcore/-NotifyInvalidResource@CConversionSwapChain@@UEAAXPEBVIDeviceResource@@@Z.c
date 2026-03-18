/*
 * XREFs of ?NotifyInvalidResource@CConversionSwapChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802CB6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18010BE90 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

void __fastcall CConversionSwapChain::NotifyInvalidResource(
        CGlobalDrawingContext **this,
        const struct IDeviceResource *a2,
        __int64 a3)
{
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(this + 30, (__int64)a2, a3);
  CLegacySwapChain::NotifyInvalidResource((CLegacySwapChain *)this, a2);
}
