/*
 * XREFs of ?ReleaseVisualTree@CRenderTarget@@IEAAXXZ @ 0x1800C1918
 * Callers:
 *     ??1CRenderTarget@@MEAA@XZ @ 0x1800C060C (--1CRenderTarget@@MEAA@XZ.c)
 *     ?SetVisualTree@CRenderTarget@@IEAAXPEAVCVisualTree@@@Z @ 0x1800C1BCC (-SetVisualTree@CRenderTarget@@IEAAXPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?RemoveTreeClient@CVisualTree@@QEAAXPEAVIVisualTreeClient@@@Z @ 0x1800C196C (-RemoveTreeClient@CVisualTree@@QEAAXPEAVIVisualTreeClient@@@Z.c)
 */

void __fastcall CRenderTarget::ReleaseVisualTree(CRenderTarget *this)
{
  CVisualTree *v2; // rcx

  v2 = (CVisualTree *)*((_QWORD *)this + 14);
  if ( v2 )
  {
    CVisualTree::RemoveTreeClient(
      v2,
      (struct IVisualTreeClient *)(((unsigned __int64)this + 88) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 14);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 13);
  }
}
