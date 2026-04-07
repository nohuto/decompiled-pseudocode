/*
 * XREFs of ?GetView@?$produce@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@Uhstring@winrt@@N@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1800FD7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180020494 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,double>>::GetView(
        __int64 a1,
        __int64 *a2)
{
  __int64 v3; // r8
  __int64 v4; // rbx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3 = (a1 - 16) & -(__int64)(a1 != 0);
  v4 = (v3 & -(__int64)(v3 != -40)) + 24;
  v6 = v4;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  *a2 = v4;
  return 0LL;
}
