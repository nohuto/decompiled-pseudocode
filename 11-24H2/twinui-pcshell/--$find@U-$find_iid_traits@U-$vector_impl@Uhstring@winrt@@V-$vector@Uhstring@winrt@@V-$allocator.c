/*
 * XREFs of ??$find@U?$find_iid_traits@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@@impl@winrt@@@?$interface_list@U?$IVector@Uhstring@winrt@@@Collections@Foundation@Windows@winrt@@U?$IVectorView@Uhstring@winrt@@@2345@U?$IIterable@Uhstring@winrt@@@2345@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@@12@@Z @ 0x180617DB8
 * Callers:
 *     ?find_interface@?$implements@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IVector@Uhstring@winrt@@@Collections@Foundation@Windows@3@U?$IVectorView@Uhstring@winrt@@@5673@U?$IIterable@Uhstring@winrt@@@5673@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x18061BFE0 (-find_interface@-$implements@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhstring@winrt@@V-$allocat.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Foundation::Collections::IVector<winrt::hstring>,winrt::Windows::Foundation::Collections::IVectorView<winrt::hstring>,winrt::Windows::Foundation::Collections::IIterable<winrt::hstring>>::find<winrt::impl::find_iid_traits<winrt::impl::vector_impl<winrt::hstring,std::vector<winrt::hstring>,winrt::impl::single_threaded_collection_base>>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IVector<winrt::hstring>>
    && v1[1] == 0x90CA1C29D50373ACuLL )
  {
    return (*a1 + 16LL) & -(__int64)(*a1 != 0LL);
  }
  else
  {
    return winrt::impl::interface_list<winrt::Windows::Foundation::Collections::IVectorView<winrt::hstring>,winrt::Windows::Foundation::Collections::IIterable<winrt::hstring>>::find<winrt::impl::find_iid_traits<winrt::impl::vector_impl<winrt::hstring,std::vector<winrt::hstring>,winrt::impl::single_threaded_collection_base>>>();
  }
}
