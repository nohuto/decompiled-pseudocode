/*
 * XREFs of ?ReleaseD3DResources@CExternalD3DRenderer@@EEAAXXZ @ 0x1802B7FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CExternalD3DRenderer::ReleaseD3DResources(CExternalD3DRenderer *this)
{
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 15);
}
