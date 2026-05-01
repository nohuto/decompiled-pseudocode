/*
 * XREFs of ?ReplaceAll@?$produce@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUri@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAPEAX@Z @ 0x1805D5B70
 * Callers:
 *     <none>
 * Callees:
 *     ?ReplaceAll@?$vector_base@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUri@Foundation@Windows@3@@winrt@@QEAAXU?$array_view@$$CBUUri@Foundation@Windows@winrt@@@2@@Z @ 0x1805D5BBC (-ReplaceAll@-$vector_base@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUri@Foundatio.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Uri>>::ReplaceAll(
        __int64 a1,
        int a2,
        __int64 a3)
{
  __int64 v4; // rcx
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]

  v4 = a1 + 24;
  if ( !a1 )
    v4 = 40LL;
  v6 = a3;
  v7 = a2;
  winrt::vector_base<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Uri>::ReplaceAll(
    v4,
    &v6);
  return 0LL;
}
