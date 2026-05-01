/*
 * XREFs of ?current_value_withlock@iterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@U12@V?$map@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@AEBA?AU?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@3@XZ @ 0x18033FCFC
 * Callers:
 *     ?GetMany@iterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@U12@V?$map@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@QEAAIU?$array_view@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@3@@Z @ 0x18033DBB8 (-GetMany@iterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@U12@V-$map@Uhstring@winrt@@U12@U-$.c)
 *     ?get_Current@?$produce@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@U12@V?$map@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x18033FEF0 (-get_Current@-$produce@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@U12@V-$map@Uhstring.c)
 * Callees:
 *     ??$make@U?$key_value_pair@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@impl@winrt@@AEBUhstring@3@AEBU43@@winrt@@YA?A_PAEBUhstring@0@0@Z @ 0x180207A74 (--$make@U-$key_value_pair@U-$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@w.c)
 */

__int64 *__fastcall winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::hstring,std::map<winrt::hstring,winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>,winrt::impl::collection_version>::iterator::current_value_withlock(
        __int64 a1,
        __int64 *a2)
{
  winrt::make<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>,winrt::hstring const &,winrt::hstring const &>(
    a2,
    (struct winrt::hstring *)(*(_QWORD *)(a1 + 40) + 32LL),
    (struct winrt::hstring *)(*(_QWORD *)(a1 + 40) + 40LL));
  return a2;
}
