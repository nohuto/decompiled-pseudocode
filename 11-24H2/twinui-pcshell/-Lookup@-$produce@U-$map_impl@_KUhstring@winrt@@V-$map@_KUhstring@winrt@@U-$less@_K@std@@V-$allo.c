/*
 * XREFs of ?Lookup@?$produce@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@_KUhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAH_KPEAPEAX@Z @ 0x18064EA90
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?Lookup@?$map_view_base@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@_KUhstring@3@Ucollection_version@23@@winrt@@QEBA?AUhstring@2@AEB_K@Z @ 0x18064E878 (-Lookup@-$map_view_base@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$less@_K@std@@V.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IMap<unsigned __int64,winrt::hstring>>::Lookup(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v5; // rcx
  winrt::hstring *v6; // rax
  __int64 v7; // rcx
  volatile signed __int32 *v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  *a3 = 0LL;
  v5 = a1 + 24;
  if ( !a1 )
    v5 = 40LL;
  v6 = winrt::map_view_base<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>,unsigned __int64,winrt::hstring,winrt::impl::collection_version>::Lookup(
         v5,
         (winrt::hstring *)&v9,
         &v10);
  v7 = *(_QWORD *)v6;
  *(_QWORD *)v6 = 0LL;
  *a3 = v7;
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v9);
  return 0LL;
}
