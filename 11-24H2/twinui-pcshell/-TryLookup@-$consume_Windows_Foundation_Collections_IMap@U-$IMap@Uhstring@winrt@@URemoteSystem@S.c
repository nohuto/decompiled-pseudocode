/*
 * XREFs of ?TryLookup@?$consume_Windows_Foundation_Collections_IMap@U?$IMap@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@Uhstring@5@URemoteSystem@Shell@Internal@45@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x180651610
 * Callers:
 *     ?CleanUpRemoteSystem@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@@Z @ 0x18064A88C (-CleanUpRemoteSystem@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@.c)
 *     ?GetRemoteSystem@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AURemoteSystem@3456@AEBUhstring@6@@Z @ 0x18064D5A8 (-GetRemoteSystem@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA.c)
 *     ?RemoveWindow@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUWindowId@UI@56@@Z @ 0x18065033C (-RemoveWindow@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA_NA.c)
 * Callees:
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x180050FE0 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     ?check_hresult_allow_bounds@impl@winrt@@YA?AUhresult@2@U32@AEBUslim_source_location@12@@Z @ 0x18033FC74 (-check_hresult_allow_bounds@impl@winrt@@YA-AUhresult@2@U32@AEBUslim_source_location@12@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

winrt *__fastcall winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>::TryLookup(
        __int64 *a1,
        winrt *a2,
        _QWORD *a3)
{
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, _QWORD, void **); // rbx
  void **v7; // rax
  int v8; // eax
  int v10; // [rsp+28h] [rbp-30h] BYREF
  __int128 v11; // [rsp+30h] [rbp-28h]
  int v12; // [rsp+60h] [rbp+8h] BYREF
  winrt *v13; // [rsp+68h] [rbp+10h]

  v13 = a2;
  *(_QWORD *)a2 = 0LL;
  v10 = 0;
  v11 = 0LL;
  v5 = *a1;
  v6 = *(__int64 (__fastcall **)(__int64, _QWORD, void **))(*(_QWORD *)*a1 + 48LL);
  v7 = winrt::put_abi(a2, (struct IUnknown *)a2);
  v8 = v6(v5, *a3, v7);
  winrt::impl::check_hresult_allow_bounds(&v12, v8, (__int64)&v10);
  return a2;
}
