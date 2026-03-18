/*
 * XREFs of ?ProcessUpdateTargetBounds@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_UPDATETARGETBOUNDS@@@Z @ 0x18028EC9C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?UpdateTransformAndTreeBounds@COffScreenRenderTarget@@MEAAXXZ @ 0x1800C4400 (-UpdateTransformAndTreeBounds@COffScreenRenderTarget@@MEAAXXZ.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::ProcessUpdateTargetBounds(
        CIndirectSwapchainRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_UPDATETARGETBOUNDS *a3)
{
  _DWORD *v3; // rdx

  v3 = (_DWORD *)((char *)this + 2836);
  if ( *((_DWORD *)this + 708) != *((_DWORD *)a3 + 4) || *v3 != *((_DWORD *)a3 + 5) )
    *((_BYTE *)this + 2801) = 1;
  *((_DWORD *)this + 52) = COERCE_UNSIGNED_INT((float)*((int *)a3 + 2)) ^ _xmm;
  *((_DWORD *)this + 53) = COERCE_UNSIGNED_INT((float)*((int *)a3 + 3)) ^ _xmm;
  *((_DWORD *)this + 708) = *((_DWORD *)a3 + 4);
  *v3 = *((_DWORD *)a3 + 5);
  COffScreenRenderTarget::UpdateTransformAndTreeBounds(this);
  return 0LL;
}
