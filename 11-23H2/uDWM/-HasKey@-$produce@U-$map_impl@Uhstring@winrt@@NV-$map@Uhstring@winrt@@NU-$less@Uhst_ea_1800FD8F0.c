/*
 * XREFs of ?HasKey@?$produce@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMapView@Uhstring@winrt@@N@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAXPEA_N@Z @ 0x1800FD8F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Find@Uhstring@winrt@@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@1@AEBUhstring@winrt@@@Z @ 0x1800FB940 (--$_Find@Uhstring@winrt@@@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@NU-$less@Uhstring@winrt@@@std@.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IMapView<winrt::hstring,double>>::HasKey(
        __int64 a1,
        __int64 a2,
        bool *a3)
{
  __int64 v3; // rdi
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v3 = (a1 - 24) & -(__int64)(a1 != 0);
  *a3 = std::_Tree<std::_Tmap_traits<winrt::hstring,double,std::less<winrt::hstring>,std::allocator<std::pair<winrt::hstring const,double>>,0>>::_Find<winrt::hstring>(
          (v3 & -(__int64)(v3 != -40)) + 48,
          (__int64)&v5) != *(_QWORD *)((v3 & -(__int64)(v3 != -40)) + 0x30);
  return 0LL;
}
