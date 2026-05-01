/*
 * XREFs of ?find_interface@?$implements@Uiterator@?$iterable_base@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@_KUhstring@winrt@@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@_KUhstring@winrt@@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1806542A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@Uiterator@?$iterable_base@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@_KUhstring@winrt@@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@@impl@winrt@@@?$interface_list@U?$IIterator@U?$IKeyValuePair@_KUhstring@winrt@@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@Uiterator@?$iterable_base@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@_KUhstring@winrt@@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@@12@@Z @ 0x18064698C (--$find@U-$find_iid_traits@Uiterator@-$iterable_base@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhst.c)
 */

__int64 __fastcall winrt::implements<winrt::iterable_base<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned __int64,winrt::hstring>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned __int64,winrt::hstring>>>::find_interface(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  return winrt::impl::interface_list<winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned __int64,winrt::hstring>>>::find<winrt::impl::find_iid_traits<winrt::iterable_base<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned __int64,winrt::hstring>,winrt::impl::collection_version>::iterator>>(v3);
}
