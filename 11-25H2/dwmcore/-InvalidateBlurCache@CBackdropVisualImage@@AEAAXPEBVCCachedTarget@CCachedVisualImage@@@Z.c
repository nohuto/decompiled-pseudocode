/*
 * XREFs of ?InvalidateBlurCache@CBackdropVisualImage@@AEAAXPEBVCCachedTarget@CCachedVisualImage@@@Z @ 0x18003F7FC
 * Callers:
 *     ?InvalidateAllBlurCaches@CBackdropVisualImage@@AEAAXXZ @ 0x18000ABF8 (-InvalidateAllBlurCaches@CBackdropVisualImage@@AEAAXXZ.c)
 *     ?OnCachedTargetInvalidated@CBackdropVisualImage@@EEAAXPEBVCCachedTarget@CCachedVisualImage@@@Z @ 0x18000CE10 (-OnCachedTargetInvalidated@CBackdropVisualImage@@EEAAXPEBVCCachedTarget@CCachedVisualImage@@@Z.c)
 * Callees:
 *     ?erase@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCBlurredBackdropCache@@@2@V?$basic_iterator@QEAVCBlurredBackdropCache@@@2@@Z @ 0x18003FAA0 (-erase@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBackdropCac.c)
 *     ?InvalidateCachedBlur@CBlurredBackdropCache@@QEAA_NPEBVCBackdropVisualImage@@AEBVRenderTargetInfo@@_N@Z @ 0x18003FC5C (-InvalidateCachedBlur@CBlurredBackdropCache@@QEAA_NPEBVCBackdropVisualImage@@AEBVRenderTargetInf.c)
 *     ?last@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x180040288 (-last@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache.c)
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x180040318 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCach.c)
 *     ?clear_region@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800405F8 (-clear_region@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBack.c)
 *     ?GetRenderTargetInfo@CCachedTarget@CCachedVisualImage@@QEBA?AVRenderTargetInfo@@XZ @ 0x180144390 (-GetRenderTargetInfo@CCachedTarget@CCachedVisualImage@@QEBA-AVRenderTargetInfo@@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_StaleBackdropCacheFix@@@details@wil@@QEAA_NXZ @ 0x18024CCD0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_StaleBackdropCacheFix@@@details@w.c)
 *     ?InvalidateCachedBlur@CBlurredBackdropCache@@QEAA_NPEBVCBackdropVisualImage@@PEBX@Z @ 0x18024D260 (-InvalidateCachedBlur@CBlurredBackdropCache@@QEAA_NPEBVCBackdropVisualImage@@PEBX@Z.c)
 *     ?IsProtected@CDeviceTextureTarget@@WJI@EBA_NXZ @ 0x1802D6E70 (-IsProtected@CDeviceTextureTarget@@WJI@EBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CBackdropVisualImage::InvalidateBlurCache(
        CBackdropVisualImage *this,
        const struct CCachedVisualImage::CCachedTarget *a2)
{
  __int64 v4; // rcx
  __int64 (__fastcall *v5)(__int64); // rax
  char IsProtected; // al
  __int64 v7; // rbx
  CBlurredBackdropCache **v8; // rbx
  bool v9; // bp
  CBlurredBackdropCache **v10; // rbx
  _BYTE v11[56]; // [rsp+20h] [rbp-38h] BYREF
  CBlurredBackdropCache **v12; // [rsp+70h] [rbp+18h] BYREF
  char v13; // [rsp+78h] [rbp+20h] BYREF

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_StaleBackdropCacheFix>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_StaleBackdropCacheFix>::GetImpl'::`2'::impl) )
  {
    v8 = (CBlurredBackdropCache **)detail::pointer_buffer_impl<CBlurredBackdropCache *>::first((char *)this + 2160);
    while ( v8 != (CBlurredBackdropCache **)detail::pointer_buffer_impl<CBlurredBackdropCache *>::last((char *)this + 2160) )
    {
      if ( CBlurredBackdropCache::InvalidateCachedBlur(*v8, this, a2) )
      {
        v7 = ((__int64)v8 - detail::pointer_buffer_impl<CBlurredBackdropCache *>::first((char *)this + 2160)) >> 3;
        detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *>>::clear_region(
          (char *)this + 2160,
          v7,
          1LL);
        v8 = (CBlurredBackdropCache **)(detail::pointer_buffer_impl<CBlurredBackdropCache *>::first((char *)this + 2160)
                                      + 8 * v7);
      }
      else
      {
        ++v8;
      }
    }
  }
  else
  {
    CCachedVisualImage::CCachedTarget::GetRenderTargetInfo(a2, v11);
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 1) + 144LL))(*((_QWORD *)a2 + 1));
    v5 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 160LL);
    if ( v5 == CDeviceTextureTarget::IsProtected )
      IsProtected = CDeviceTextureTarget::IsProtected(v4);
    else
      IsProtected = v5(v4);
    v9 = IsProtected == 0;
    v10 = (CBlurredBackdropCache **)detail::pointer_buffer_impl<CBlurredBackdropCache *>::first((char *)this + 2160);
    while ( v10 != (CBlurredBackdropCache **)detail::pointer_buffer_impl<CBlurredBackdropCache *>::last((char *)this + 2160) )
    {
      if ( CBlurredBackdropCache::InvalidateCachedBlur(*v10, this, (const struct RenderTargetInfo *)v11, v9) )
      {
        v12 = v10;
        v10 = *(CBlurredBackdropCache ***)detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *>>::erase(
                                            (char *)this + 2160,
                                            &v13,
                                            &v12);
      }
      else
      {
        ++v10;
      }
    }
  }
}
