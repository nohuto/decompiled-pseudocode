/*
 * XREFs of ?ClearAllRenderTargets@CVisualSurface@@AEAAXXZ @ 0x180200FD4
 * Callers:
 *     ?ProcessSetRealizationSize@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_SETREALIZATIONSIZE@@@Z @ 0x18018C94C (-ProcessSetRealizationSize@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_.c)
 *     ?SetSourceSize@CVisualSurface@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180200F00 (-SetSourceSize@CVisualSurface@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 * Callees:
 *     ?clear@?$vector@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@QEAAXXZ @ 0x18018DFF4 (-clear@-$vector@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCachedTarge.c)
 */

void __fastcall CVisualSurface::ClearAllRenderTargets(CVisualSurface *this)
{
  __int64 v1; // rbx
  __int64 v2; // rdi

  v1 = *((_QWORD *)this + 11);
  v2 = *((_QWORD *)this + 12);
  while ( v1 != v2 )
  {
    std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::clear((_QWORD *)(*(_QWORD *)v1 + 184LL));
    v1 += 16LL;
  }
}
