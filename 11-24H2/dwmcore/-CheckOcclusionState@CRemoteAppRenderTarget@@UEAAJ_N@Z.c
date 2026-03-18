/*
 * XREFs of ?CheckOcclusionState@CRemoteAppRenderTarget@@UEAAJ_N@Z @ 0x180280DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsVailContainer@@YA_NXZ @ 0x18018FD20 (-IsVailContainer@@YA_NXZ.c)
 *     ?EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ @ 0x180280E34 (-EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?SendCompSurfHandle@CRemoteAppRenderTarget@@IEAAJXZ @ 0x180281A54 (-SendCompSurfHandle@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?UpdateTransformAndTreeBounds@CRemoteAppRenderTarget@@IEAAXXZ @ 0x180281D38 (-UpdateTransformAndTreeBounds@CRemoteAppRenderTarget@@IEAAXXZ.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::CheckOcclusionState(CRemoteAppRenderTarget *this)
{
  CRemoteAppRenderTarget *v1; // rdi

  v1 = (CRemoteAppRenderTarget *)((char *)this - 96);
  if ( *((_BYTE *)this + 2532) )
    CRemoteAppRenderTarget::UpdateTransformAndTreeBounds((CRemoteAppRenderTarget *)((char *)this - 96));
  if ( *(int *)(*((_QWORD *)this - 9) + 6264LL) >= 5
    && *((_DWORD *)this + 6)
    && *((_DWORD *)this + 7)
    && (int)CRemoteAppRenderTarget::EnsureSwapChain(v1) >= 0
    && *(_DWORD *)(*((_QWORD *)this - 9) + 6264LL) == 7 )
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
