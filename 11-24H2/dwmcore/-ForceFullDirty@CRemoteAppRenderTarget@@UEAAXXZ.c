/*
 * XREFs of ?ForceFullDirty@CRemoteAppRenderTarget@@UEAAXXZ @ 0x180280F70
 * Callers:
 *     ?ProcessSetAlphaMode@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTARGET_SETALPHAMODE@@@Z @ 0x180277D98 (-ProcessSetAlphaMode@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPREN.c)
 *     ?ProcessSetClearColor@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTARGET_SETCLEARCOLOR@@@Z @ 0x180277DC8 (-ProcessSetClearColor@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRE.c)
 * Callees:
 *     ?SetSize@CRemoteAppRenderTarget@@IEAAJAEBUD2D_SIZE_U@@@Z @ 0x180281C48 (-SetSize@CRemoteAppRenderTarget@@IEAAJAEBUD2D_SIZE_U@@@Z.c)
 */

void __fastcall CRemoteAppRenderTarget::ForceFullDirty(CRemoteAppRenderTarget *this)
{
  __int64 v2; // rax

  if ( *(_DWORD *)(*((_QWORD *)this - 9) + 6264LL) == 7 )
  {
    v2 = *((_QWORD *)this + 2);
    if ( v2 )
      *(_BYTE *)(v2 + 2629) = 1;
    *(_WORD *)((char *)this + 2533) = 257;
  }
  else
  {
    CRemoteAppRenderTarget::SetSize((CRemoteAppRenderTarget *)((char *)this - 96), (const struct D2D_SIZE_U *)this + 3);
  }
  CTargetDirtyBase<8>::SetFullDirty((__int64)this + 184);
}
