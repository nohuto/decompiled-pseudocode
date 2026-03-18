/*
 * XREFs of ?NotifyInvalidResource@CLegacySwapChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802C9DB0
 * Callers:
 *     ?NotifyInvalidResource@CConversionSwapChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802CB6F0 (-NotifyInvalidResource@CConversionSwapChain@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ReleaseComputeScribbleResources@CScribbleSwapChain@@IEAAXXZ @ 0x18020F1AC (-ReleaseComputeScribbleResources@CScribbleSwapChain@@IEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync@@@details@wil@@QEAA_NXZ @ 0x180242760 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync.c)
 *     ?NotifyInvalid@?$CDeviceResourceT@VIRenderTargetBitmap@@@@QEAAXXZ @ 0x18024E78C (-NotifyInvalid@-$CDeviceResourceT@VIRenderTargetBitmap@@@@QEAAXXZ.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@IVCFlipAwayFence@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIVCFlipAwayFence@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x1802CA31C (-clear@-$_Hash@V-$_Umap_traits@IVCFlipAwayFence@@V-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CLegacySwapChain::NotifyInvalidResource(CLegacySwapChain *this, const struct IDeviceResource *a2)
{
  CScribbleSwapChain *v2; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = (CLegacySwapChain *)((char *)this - 280);
  v4 = (__int64)this - 280;
  if ( this != (CLegacySwapChain *)280 )
    (*(void (__fastcall **)(char *, const struct IDeviceResource *))(*(_QWORD *)v2 + 8LL))((char *)this - 280, a2);
  CScribbleSwapChain::ReleaseComputeScribbleResources(v2);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 1);
  (*(void (__fastcall **)(CScribbleSwapChain *))(*(_QWORD *)v2 + 64LL))(v2);
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync>::GetImpl'::`2'::impl) )
    std::_Hash<std::_Umap_traits<unsigned int,CFlipAwayFence,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CFlipAwayFence>>,0>>::clear((char *)this + 144);
  CDeviceResourceT<IRenderTargetBitmap>::NotifyInvalid((_QWORD *)this - 32);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v4);
}
