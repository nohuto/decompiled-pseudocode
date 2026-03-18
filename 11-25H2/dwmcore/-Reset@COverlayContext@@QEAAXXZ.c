/*
 * XREFs of ?Reset@COverlayContext@@QEAAXXZ @ 0x18020F4BC
 * Callers:
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18013DBE0 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 *     ?ReleaseSwapChain@CDDisplayRenderTarget@@UEAAXXZ @ 0x18020F410 (-ReleaseSwapChain@CDDisplayRenderTarget@@UEAAXXZ.c)
 *     ??1COverlayContext@@QEAA@XZ @ 0x180257F44 (--1COverlayContext@@QEAA@XZ.c)
 *     ?ReleaseSwapChain@CLegacyRenderTarget@@UEAAXXZ @ 0x180259AC0 (-ReleaseSwapChain@CLegacyRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     ?clear@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18002DC40 (-clear@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     ?Reset@CDirectFlipInfo@@QEAAXXZ @ 0x180103560 (-Reset@CDirectFlipInfo@@QEAAXXZ.c)
 *     ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x18020F584 (-ClearDirectFlip@COverlayContext@@AEAAXXZ.c)
 *     ?DisableHardwareCursor@COverlayContext@@AEAAXXZ @ 0x18020F5D0 (-DisableHardwareCursor@COverlayContext@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall COverlayContext::Reset(COverlayContext *this)
{
  __int64 *v1; // rsi
  __int64 v3; // rbx
  __int64 v4; // rbp

  v1 = (__int64 *)((char *)this + 12936);
  v3 = *((_QWORD *)this + 1617);
  v4 = *((_QWORD *)this + 1618);
  while ( v3 != v4 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v3 + 16) + 288LL))(
      *(_QWORD *)(v3 + 16),
      *(_QWORD *)(v3 + 24));
    v3 += 400LL;
  }
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear((__int64 *)this + 11);
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear((__int64 *)this + 814);
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear(v1);
  COverlayContext::DisableHardwareCursor(this);
  *((_QWORD *)this + 2450) = 0LL;
  *((_WORD *)this + 9736) = 0;
  *((_WORD *)this + 9796) = 0;
  *((_BYTE *)this + 19775) = 0;
  CDirectFlipInfo::Reset((COverlayContext *)((char *)this + 19632));
  COverlayContext::ClearDirectFlip(this);
  *((_BYTE *)this + 19774) = 0;
}
