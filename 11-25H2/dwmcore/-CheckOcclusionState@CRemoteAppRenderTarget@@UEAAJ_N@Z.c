/*
 * XREFs of ?CheckOcclusionState@CRemoteAppRenderTarget@@UEAAJ_N@Z @ 0x18028BAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsVailContainer@@YA_NXZ @ 0x1801ADE98 (-IsVailContainer@@YA_NXZ.c)
 *     ?EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18028BB84 (-EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?SendCompSurfHandle@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18028C7A4 (-SendCompSurfHandle@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?UpdateTransformAndTreeBounds@CRemoteAppRenderTarget@@IEAAXXZ @ 0x18028CA88 (-UpdateTransformAndTreeBounds@CRemoteAppRenderTarget@@IEAAXXZ.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::CheckOcclusionState(CRemoteAppRenderTarget *this)
{
  CRemoteAppRenderTarget *v1; // rdi

  v1 = (CRemoteAppRenderTarget *)((char *)this - 96);
  if ( *((_BYTE *)this + 2532) )
    CRemoteAppRenderTarget::UpdateTransformAndTreeBounds((CRemoteAppRenderTarget *)((char *)this - 96));
  if ( *(int *)(*((_QWORD *)this - 9) + 6288LL) >= 5
    && *((_DWORD *)this + 6)
    && *((_DWORD *)this + 7)
    && (int)CRemoteAppRenderTarget::EnsureSwapChain(v1) >= 0
    && *(_DWORD *)(*((_QWORD *)this - 9) + 6288LL) == 7 )
  {
    if ( *((_BYTE *)this + 2533) )
    {
      IsVailContainer();
      *((_BYTE *)this + 2533) = 0;
    }
    if ( *((_BYTE *)this + 2534) )
      CRemoteAppRenderTarget::SendCompSurfHandle(v1);
  }
  return 142213121LL;
}
