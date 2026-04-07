/*
 * XREFs of ?Split@?$produce@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMapView@Uhstring@winrt@@N@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAPEAX0@Z @ 0x1800FED10
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800470D0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IMapView<winrt::hstring,double>>::Split(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2,
        winrt::Windows::Foundation::IUnknown *a3)
{
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = a1;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)a3 = 0LL;
  if ( a2 != (winrt::Windows::Foundation::IUnknown *)&v6 )
  {
    if ( *(_QWORD *)a2 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref(a2);
    *(_QWORD *)a2 = 0LL;
  }
  if ( a3 != (winrt::Windows::Foundation::IUnknown *)&v6 )
  {
    if ( *(_QWORD *)a3 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref(a3);
    *(_QWORD *)a3 = 0LL;
  }
  return 0LL;
}
