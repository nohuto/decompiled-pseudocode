/*
 * XREFs of ?get_static_lifetime_map@impl@winrt@@YA?AU?$com_ptr@UIStaticLifetimeCollection@impl@winrt@@@2@XZ @ 0x18024A0B4
 * Callers:
 *     ??$make_factory@UXamlApplication@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@XZ @ 0x18016E7F4 (--$make_factory@UXamlApplication@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@.c)
 *     ??$make_factory@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@XZ @ 0x180284D5C (--$make_factory@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@@imp.c)
 *     ??$make_factory@UXamlApplication_WASDK@factory_implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@XZ @ 0x180456408 (--$make_factory@UXamlApplication_WASDK@factory_implementation@WASDK@XamlExplorerHost@Shell@Inter.c)
 *     ??$make_factory@UWindowsTracker@factory_implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@XZ @ 0x18065E46C (--$make_factory@UWindowsTracker@factory_implementation@Shell@Internal@Windows@winrt@@@impl@winrt.c)
 *     ??$make_factory@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@XZ @ 0x180660038 (--$make_factory@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@@impl@winrt.c)
 *     ??$make_factory@UNetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@XZ @ 0x18067014C (--$make_factory@UNetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@@im.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x180050FE0 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801B4B78 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1801F6FB0 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     ??$as@UIStaticLifetimeCollection@impl@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@$0A@@impl@winrt@@YA?AU?$com_ptr@UIStaticLifetimeCollection@impl@winrt@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18021A7E4 (--$as@UIStaticLifetimeCollection@impl@winrt@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@2.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall winrt::impl::get_static_lifetime_map(_QWORD *a1)
{
  __int64 v2; // rsi
  __int64 (__fastcall *v3)(__int64, void **); // rbx
  struct IUnknown *v4; // rdx
  void **v5; // rax
  unsigned int v6; // eax
  unsigned int v8; // [rsp+20h] [rbp-60h] BYREF
  int v9; // [rsp+28h] [rbp-58h] BYREF
  __int128 v10; // [rsp+30h] [rbp-50h]
  __int64 v11[4]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD *v12; // [rsp+60h] [rbp-20h] BYREF
  __int64 (__fastcall ***v13)(_QWORD, void *, _QWORD **); // [rsp+68h] [rbp-18h] BYREF

  v12 = a1;
  winrt::param::hstring::hstring((winrt::param::hstring *)v11, L"Windows.ApplicationModel.Core.CoreApplication");
  v12 = 0LL;
  v9 = 0;
  v10 = 0LL;
  winrt::impl::get_runtime_activation_factory_impl<0>(
    &v8,
    v11,
    (__int64)&winrt::impl::guid_v<winrt::impl::IStaticLifetime>,
    (__int64)&v12);
  winrt::check_hresult(&v8, v8, &v9);
  v2 = (__int64)v12;
  v13 = 0LL;
  v9 = 0;
  v10 = 0LL;
  v3 = *(__int64 (__fastcall **)(__int64, void **))(*v12 + 56LL);
  v5 = winrt::put_abi((winrt *)&v13, v4);
  v6 = v3(v2, v5);
  winrt::check_hresult(&v8, v6, &v9);
  winrt::impl::as<winrt::impl::IStaticLifetimeCollection,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    a1,
    v13);
  if ( v13 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v13);
  if ( v2 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v12);
  return a1;
}
