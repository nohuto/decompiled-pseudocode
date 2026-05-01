/*
 * XREFs of ??$find@U?$find_iid_traits@Uiterator@?$iterable_base@U?$map_impl@IUhstring@winrt@@V?$map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@IUhstring@winrt@@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@@impl@winrt@@@?$interface_list@U?$IIterator@U?$IKeyValuePair@IUhstring@winrt@@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@Uiterator@?$iterable_base@U?$map_impl@IUhstring@winrt@@V?$map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@IUhstring@winrt@@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@@12@@Z @ 0x180646914
 * Callers:
 *     ?find_interface@?$implements@Uiterator@?$iterable_base@U?$map_impl@IUhstring@winrt@@V?$map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@IUhstring@winrt@@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@IUhstring@winrt@@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180654240 (-find_interface@-$implements@Uiterator@-$iterable_base@U-$map_impl@IUhstring@winrt@@V-$map@IUhst.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned int,winrt::hstring>>>::find<winrt::impl::find_iid_traits<winrt::iterable_base<winrt::impl::map_impl<unsigned int,winrt::hstring,std::map<unsigned int,winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned int,winrt::hstring>,winrt::impl::collection_version>::iterator>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::uncloaked_iids<winrt::impl::interface_list<winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<unsigned int,winrt::hstring>>>>::value
    && v1[1] == 0xE889BEBF3C456291uLL )
  {
    return (*a1 + 16LL) & -(__int64)(*a1 != 0LL);
  }
  else
  {
    return 0LL;
  }
}
