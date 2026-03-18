/*
 * XREFs of ?Reset@COverlayContext@@QEAAXXZ @ 0x180188FFC
 * Callers:
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180102130 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 *     ?ReleaseSwapChain@CDDisplayRenderTarget@@UEAAXXZ @ 0x180188F50 (-ReleaseSwapChain@CDDisplayRenderTarget@@UEAAXXZ.c)
 *     ??1COverlayContext@@QEAA@XZ @ 0x18024CB74 (--1COverlayContext@@QEAA@XZ.c)
 *     ?ReleaseSwapChain@CLegacyRenderTarget@@UEAAXXZ @ 0x18024E5F0 (-ReleaseSwapChain@CLegacyRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     ?clear@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800F1DD0 (-clear@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     ?Reset@CDirectFlipInfo@@QEAAXXZ @ 0x1801A4110 (-Reset@CDirectFlipInfo@@QEAAXXZ.c)
 *     ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x1802181DC (-ClearDirectFlip@COverlayContext@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAA_NXZ @ 0x180240E28 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@Q.c)
 *     ?ClearHardwareCursor@COverlayContext@@AEAAXXZ @ 0x180269FC4 (-ClearHardwareCursor@COverlayContext@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall COverlayContext::Reset(COverlayContext *this)
{
  __int64 *v1; // rsi
  __int64 v3; // rbx
  __int64 v4; // rbp

  v1 = (__int64 *)((char *)this + 12680);
  v3 = *((_QWORD *)this + 1585);
  v4 = *((_QWORD *)this + 1586);
  while ( v3 != v4 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v3 + 16) + 288LL))(
      *(_QWORD *)(v3 + 16),
      *(_QWORD *)(v3 + 24));
    v3 += 392LL;
  }
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear((__int64 *)this + 11);
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear((__int64 *)this + 798);
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear(v1);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DesktopDWMCursor>::GetImpl'::`2'::impl) )
  {
    COverlayContext::ClearHardwareCursor(this);
    *((_QWORD *)this + 2415) = 0LL;
    *((_QWORD *)this + 2414) = 0LL;
  }
  *((_QWORD *)this + 2402) = 0LL;
  *((_WORD *)this + 9544) = 0;
  *((_WORD *)this + 9604) = 0;
  *((_BYTE *)this + 19585) = 0;
  CDirectFlipInfo::Reset((COverlayContext *)((char *)this + 19400));
  COverlayContext::ClearDirectFlip(this);
  *((_BYTE *)this + 19584) = 0;
}
