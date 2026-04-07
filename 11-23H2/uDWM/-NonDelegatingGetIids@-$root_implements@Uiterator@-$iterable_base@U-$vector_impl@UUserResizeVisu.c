/*
 * XREFs of ?NonDelegatingGetIids@?$root_implements@Uiterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@U?$IIterator@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x1800F52F8
 * Callers:
 *     ?GetIids@?$produce_base@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMapView@Uhstring@winrt@@N@Collections@Foundation@Windows@3@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1800F51C0 (-GetIids@-$produce_base@U-$map_impl@Uhstring@winrt@@NV-$map@Uhstring@winrt@@NU-$less@Uhstring@wi.c)
 *     ?GetIids@?$produce_base@Uiterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@U?$IIterator@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1800F51E0 (-GetIids@-$produce_base@Uiterator@-$iterable_base@U-$vector_impl@UUserResizeVisual@Transitions@U.c)
 *     ?GetIids@?$produce_base@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IIterable@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1800FD260 (-GetIids@-$produce_base@U-$map_impl@Uhstring@winrt@@NV-$map@Uhstring@winrt@@NU-$les_ea_1800FD260.c)
 * Callees:
 *     WINRT_IMPL_CoTaskMemAlloc @ 0x18005E075 (WINRT_IMPL_CoTaskMemAlloc.c)
 *     memmove_0 @ 0x180066224 (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::iterable_base<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Udwm::Transitions::UserResizeVisual,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Udwm::Transitions::UserResizeVisual>>::NonDelegatingGetIids(
        __int64 a1,
        unsigned int *a2,
        _QWORD *a3)
{
  unsigned int v5; // eax
  void *v6; // rax
  unsigned int v8; // [rsp+20h] [rbp-18h] BYREF
  void *Src; // [rsp+28h] [rbp-10h]

  (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a1 + 32LL))(a1, &v8);
  v5 = v8;
  if ( v8 )
  {
    *a2 = v8;
    v6 = WINRT_IMPL_CoTaskMemAlloc(16LL * v5);
    *a3 = v6;
    if ( !v6 )
      return 2147942414LL;
    memmove_0(v6, Src, 16LL * v8);
  }
  else
  {
    *a2 = 0;
    *a3 = 0LL;
  }
  return 0LL;
}
