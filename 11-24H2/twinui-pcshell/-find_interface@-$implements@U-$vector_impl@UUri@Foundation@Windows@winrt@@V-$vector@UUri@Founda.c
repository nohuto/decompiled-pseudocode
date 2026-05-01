/*
 * XREFs of ?find_interface@?$implements@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUri@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@U?$IVectorView@UUri@Foundation@Windows@winrt@@@5673@U?$IIterable@UUri@Foundation@Windows@winrt@@@5673@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1805DC9C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@impl@winrt@@@?$interface_list@U?$IVectorView@UUri@Foundation@Windows@winrt@@@Collections@Foundation@Windows@winrt@@U?$IIterable@UUri@Foundation@Windows@winrt@@@2345@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@12@@Z @ 0x1805C4768 (--$find@U-$find_iid_traits@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUri@Foundati.c)
 */

__int64 __fastcall winrt::implements<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Uri>,winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Foundation::Uri>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Uri>>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  bool v2; // zf
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *a2 == winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Uri>>;
  v5[0] = a1;
  v5[1] = (__int64)a2;
  if ( v2 && a2[1] == 0x4EBC75DD8678B9A7LL )
    return (a1 + 16) & -(__int64)(a1 != 0);
  else
    return winrt::impl::interface_list<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Foundation::Uri>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Uri>>::find<winrt::impl::find_iid_traits<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>>(v5);
}
