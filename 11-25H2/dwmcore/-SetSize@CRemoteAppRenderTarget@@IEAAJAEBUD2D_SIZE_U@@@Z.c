/*
 * XREFs of ?SetSize@CRemoteAppRenderTarget@@IEAAJAEBUD2D_SIZE_U@@@Z @ 0x18028C998
 * Callers:
 *     ?ProcessSetSize@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTARGET_SETSIZE@@@Z @ 0x180282AB0 (-ProcessSetSize@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTA.c)
 *     ?ForceFullDirty@CRemoteAppRenderTarget@@UEAAXXZ @ 0x18028BCC0 (-ForceFullDirty@CRemoteAppRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x1800C3F90 (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?IsValid@CCompSwapChain@@UEBAJXZ @ 0x18028BE00 (-IsValid@CCompSwapChain@@UEBAJXZ.c)
 *     ?ReleaseSwapChain@CRemoteAppRenderTarget@@IEAAXXZ @ 0x18028C21C (-ReleaseSwapChain@CRemoteAppRenderTarget@@IEAAXXZ.c)
 *     ?SetSize@CCompSwapChain@@QEAAJAEBUD2D_SIZE_U@@I@Z @ 0x1802D14B8 (-SetSize@CCompSwapChain@@QEAAJAEBUD2D_SIZE_U@@I@Z.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::SetSize(CRemoteAppRenderTarget *this, const struct D2D_SIZE_U *a2)
{
  struct D2D_SIZE_U *v2; // r14
  char v4; // di
  unsigned int v5; // r8d
  int v6; // eax
  unsigned int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct D2D_SIZE_U *)((char *)this + 120);
  if ( a2->width == *((_DWORD *)this + 30) && a2->height == *((_DWORD *)this + 31) )
  {
    v4 = 0;
  }
  else
  {
    v4 = 1;
    *v2 = *a2;
    *((_BYTE *)this + 2628) = 1;
  }
  if ( *(_DWORD *)(*((_QWORD *)this + 3) + 6288LL) == 7
    && *((_QWORD *)this + 22)
    && (int)CCompSwapChain::IsValid(*((CCompSwapChain **)this + 22)) >= 0
    && v2->width
    && *((_DWORD *)this + 31) )
  {
    if ( v4 )
    {
      v5 = 32;
      if ( *((_DWORD *)this + 656) != 2 )
        v5 = 0;
      v6 = CCompSwapChain::SetSize(*((CCompSwapChain **)this + 22), v2, v5);
      v7 = v6;
      if ( v6 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x172,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\remoteapprendertarget.cpp",
          (const char *)(unsigned int)v6);
        return v7;
      }
      CTargetDirtyBase<8>::SetFullDirty((__int64)this + 280);
    }
  }
  else
  {
    CRemoteAppRenderTarget::ReleaseSwapChain(this);
  }
  return 0LL;
}
