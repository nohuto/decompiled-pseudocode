/*
 * XREFs of ?DisableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ @ 0x1801DF02C
 * Callers:
 *     ?Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x180026F44 (-Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z.c)
 *     ?DisableOverlay@CGlobalCompositionSurfaceInfo@@UEAAJ_K@Z @ 0x180060C00 (-DisableOverlay@CGlobalCompositionSurfaceInfo@@UEAAJ_K@Z.c)
 *     ?PreventOverlay@CGlobalCompositionSurfaceInfo@@UEAAX_N@Z @ 0x180291580 (-PreventOverlay@CGlobalCompositionSurfaceInfo@@UEAAX_N@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?DisableIndependentFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x1801DF078 (-DisableIndependentFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ?ResetCustomDuration@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXXZ @ 0x1801DF1C4 (-ResetCustomDuration@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXXZ.c)
 *     ?UnpinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x1801DF230 (-UnpinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::DisableOverlay(
        CGlobalCompositionSurfaceInfo::CBindInfo *this)
{
  CGlobalCompositionSurfaceInfo::CBindInfo::UnpinResources(this, 0);
  CGlobalCompositionSurfaceInfo::CBindInfo::ResetCustomDuration(this);
  if ( *((_BYTE *)this + 180) )
    CGlobalCompositionSurfaceInfo::CBindInfo::DisableIndependentFlip(this);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 24);
  *((_BYTE *)this + 187) = 0;
}
