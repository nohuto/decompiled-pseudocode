/*
 * XREFs of ?ReleaseD2DResources@CDeviceTextureTarget@@MEAAXXZ @ 0x180225F30
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

void __fastcall CDeviceTextureTarget::ReleaseD2DResources(CDeviceTextureTarget *this)
{
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 34);
  CD2DBitmap::ReleaseD2DResources(this);
}
