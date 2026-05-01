/*
 * XREFs of ?RemoveAt@?$produce@U?$vector_impl@URect@Foundation@Windows@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@URect@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHI@Z @ 0x180480890
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAt@?$vector_base@U?$vector_impl@URect@Foundation@Windows@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@URect@Foundation@Windows@3@@winrt@@QEAAXI@Z @ 0x1804808C4 (-RemoveAt@-$vector_base@U-$vector_impl@URect@Foundation@Windows@winrt@@V-$vector@URect@Foundatio.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::Windows::Foundation::Rect,std::vector<winrt::Windows::Foundation::Rect>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Rect>>::RemoveAt(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = a1 + 24;
  if ( !a1 )
    v2 = 40LL;
  winrt::vector_base<winrt::impl::vector_impl<winrt::Windows::Foundation::Rect,std::vector<winrt::Windows::Foundation::Rect>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Rect>::RemoveAt(v2);
  return 0LL;
}
