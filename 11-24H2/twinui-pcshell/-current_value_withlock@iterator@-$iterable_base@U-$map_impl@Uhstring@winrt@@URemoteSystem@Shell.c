/*
 * XREFs of ?current_value_withlock@iterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@AEBA?AU?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@XZ @ 0x1806534D0
 * Callers:
 *     ?Current@iterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@QEBA?AU?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@XZ @ 0x18064B694 (-Current@iterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windo.c)
 *     ?GetMany@iterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@QEAAIU?$array_view@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@3@@Z @ 0x18064D1B0 (-GetMany@iterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windo.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800549EC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     ??0?$heap_implements@U?$key_value_pair@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@impl@winrt@@@impl@winrt@@QEAA@Uhstring@2@URemoteSystem@Shell@Internal@Windows@2@@Z @ 0x1806487F0 (--0-$heap_implements@U-$key_value_pair@U-$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Inte.c)
 */

// Hidden C++ exception states: #wind=2
unsigned __int64 *__fastcall winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator::current_value_withlock(
        __int64 a1,
        unsigned __int64 *a2)
{
  __int64 v3; // rbx
  _QWORD *v4; // rdi
  volatile signed __int32 **v5; // rax
  _QWORD *v6; // rax
  char v8; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 *v9; // [rsp+58h] [rbp+10h] BYREF
  _QWORD *v10; // [rsp+60h] [rbp+18h]
  __int64 *v11; // [rsp+68h] [rbp+20h]

  v9 = a2;
  v3 = *(_QWORD *)(a1 + 40);
  v4 = operator new(0x28uLL);
  v10 = v4;
  v11 = (__int64 *)&v9;
  v9 = *(unsigned __int64 **)(v3 + 40);
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v9);
  v5 = (volatile signed __int32 **)winrt::hstring::hstring(
                                     (winrt::hstring *)&v8,
                                     (const struct winrt::hstring *)(v3 + 32));
  v6 = winrt::impl::heap_implements<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::heap_implements<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>(
         v4,
         v5,
         (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
  *a2 = (unsigned __int64)(v6 + 2) & -(__int64)(v6 != 0LL);
  return a2;
}
