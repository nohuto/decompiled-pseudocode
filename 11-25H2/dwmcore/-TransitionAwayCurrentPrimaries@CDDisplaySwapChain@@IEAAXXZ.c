/*
 * XREFs of ?TransitionAwayCurrentPrimaries@CDDisplaySwapChain@@IEAAXXZ @ 0x1801C5A68
 * Callers:
 *     ?EnsureDisplayBuffers@CDDisplaySwapChain@@QEAAJXZ @ 0x1801C5270 (-EnsureDisplayBuffers@CDDisplaySwapChain@@QEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?clear@?$vector@VCDDisplayCachedScanout@@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@QEAAXXZ @ 0x180175730 (-clear@-$vector@VCDDisplayCachedScanout@@V-$allocator@VCDDisplayCachedScanout@@@std@@@std@@QEAAX.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCDDisplaySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCDDisplaySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCDDisplaySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1801C5C14 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCDDisplaySwapChainBuffer@@Uerr_returncode_policy@wi.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1801F91D4 (--$_Emplace_reallocate@V-$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_r.c)
 *     ?ReleaseComputeScribbleResources@CScribbleSwapChain@@IEAAXXZ @ 0x1802187B4 (-ReleaseComputeScribbleResources@CScribbleSwapChain@@IEAAXXZ.c)
 *     ?clear@?$list@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@V?$allocator@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@@2@@std@@QEAAXXZ @ 0x18022B8EC (-clear@-$list@V-$unique_ptr@VCDDisplayAgedCachedScanout@@U-$default_delete@VCDDisplayAgedCachedS.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_InkMPOCapsChange@@@details@wil@@QEAA_NXZ @ 0x18029CF4C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_InkMPOCapsChange@@@details@wil@@Q.c)
 *     ?MarkTransitional@CDDisplaySwapChainBuffer@@QEAAJPEAPEAUIDisplaySurfacePrivate@Core@Display@Devices@Windows@@@Z @ 0x1802C8A98 (-MarkTransitional@CDDisplaySwapChainBuffer@@QEAAJPEAPEAUIDisplaySurfacePrivate@Core@Display@Devi.c)
 */

void __fastcall CDDisplaySwapChain::TransitionAwayCurrentPrimaries(CDDisplayCachedScanout **this)
{
  CDDisplaySwapChainBuffer **v2; // rsi
  CDDisplaySwapChainBuffer **i; // rdi
  CDDisplaySwapChainBuffer *v4; // rcx
  CDDisplayCachedScanout *v5; // rdx
  struct Windows::Devices::Display::Core::IDisplaySurfacePrivate *v6; // rax
  struct Windows::Devices::Display::Core::IDisplaySurfacePrivate *v7; // [rsp+30h] [rbp+8h] BYREF

  CScribbleSwapChain::ReleaseComputeScribbleResources((CScribbleSwapChain *)this);
  v2 = (CDDisplaySwapChainBuffer **)this[59];
  for ( i = (CDDisplaySwapChainBuffer **)this[58]; i != v2; ++i )
  {
    v4 = *i;
    v7 = 0LL;
    CDDisplaySwapChainBuffer::MarkTransitional(v4, &v7);
    v5 = this[62];
    if ( v5 == this[63] )
    {
      std::vector<wil::com_ptr_t<Windows::Devices::Display::Core::IDisplaySurfacePrivate,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<Windows::Devices::Display::Core::IDisplaySurfacePrivate,wil::err_returncode_policy>>(
        this + 61,
        v5,
        &v7);
    }
    else
    {
      v6 = v7;
      v7 = 0LL;
      *(_QWORD *)v5 = v6;
      this[62] = (CDDisplayCachedScanout *)((char *)this[62] + 8);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v7);
  }
  if ( this[58] != this[59] )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CDDisplaySwapChainBuffer,wil::err_returncode_policy>>>();
    this[59] = this[58];
  }
  std::vector<CDDisplayCachedScanout>::clear(this + 37);
  std::list<std::unique_ptr<CDDisplayAgedCachedScanout>>::clear(this + 40);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_InkMPOCapsChange>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_InkMPOCapsChange>::GetImpl'::`2'::impl) )
    *(_BYTE *)(*((_QWORD *)g_pComposition + 77) + 746LL) = 1;
}
