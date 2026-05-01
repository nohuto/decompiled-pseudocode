/*
 * XREFs of ?Lookup@?$produce@U?$map_impl@IUhstring@winrt@@V?$map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@IUhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAPEAX@Z @ 0x18064E910
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?Lookup@?$map_view_base@U?$map_impl@IUhstring@winrt@@V?$map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@IUhstring@3@Ucollection_version@23@@winrt@@QEBA?AUhstring@2@AEBI@Z @ 0x18064E75C (-Lookup@-$map_view_base@U-$map_impl@IUhstring@winrt@@V-$map@IUhstring@winrt@@U-$less@I@std@@V-$a.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::map_impl<unsigned int,winrt::hstring,std::map<unsigned int,winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IMap<unsigned int,winrt::hstring>>::Lookup(
        __int64 a1,
        int a2,
        _QWORD *a3)
{
  __int64 v5; // rcx
  winrt::hstring *v6; // rax
  __int64 v7; // rcx
  __int64 result; // rax
  volatile signed __int32 *v9; // [rsp+30h] [rbp+8h] BYREF
  int v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  *a3 = 0LL;
  v5 = a1 + 24;
  if ( !a1 )
    v5 = 40LL;
  try
  {
    v6 = winrt::map_view_base<winrt::impl::map_impl<unsigned int,winrt::hstring,std::map<unsigned int,winrt::hstring>,winrt::impl::single_threaded_collection_base>,unsigned int,winrt::hstring,winrt::impl::collection_version>::Lookup(
           v5,
           (winrt::hstring *)&v9,
           &v10);
    v7 = *(_QWORD *)v6;
    *(_QWORD *)v6 = 0LL;
    *a3 = v7;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v9);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v9);
  }
  return result;
}
