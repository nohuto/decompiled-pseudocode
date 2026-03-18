/*
 * XREFs of ?ReleaseD2DResources@CD2DBitmap@@MEAAXXZ @ 0x1801D7400
 * Callers:
 *     ?ReleaseD2DResources@CDeviceTextureTarget@@MEAAXXZ @ 0x180225F30 (-ReleaseD2DResources@CDeviceTextureTarget@@MEAAXXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

void __fastcall CD2DBitmap::ReleaseD2DResources(CD2DBitmap *this)
{
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 13);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 14);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 16);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 17);
}
