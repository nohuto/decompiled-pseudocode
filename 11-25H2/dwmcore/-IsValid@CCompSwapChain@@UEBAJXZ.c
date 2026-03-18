/*
 * XREFs of ?IsValid@CCompSwapChain@@UEBAJXZ @ 0x18028BE00
 * Callers:
 *     ?EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18028BB84 (-EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?SetSize@CRemoteAppRenderTarget@@IEAAJAEBUD2D_SIZE_U@@@Z @ 0x18028C998 (-SetSize@CRemoteAppRenderTarget@@IEAAJAEBUD2D_SIZE_U@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompSwapChain::IsValid(CCompSwapChain *this)
{
  if ( *((_QWORD *)this + 10) )
    return *(_DWORD *)(*((_QWORD *)this + 7) + 1112LL) != 0 ? 0x8898008D : 0;
  else
    return 2291662989LL;
}
