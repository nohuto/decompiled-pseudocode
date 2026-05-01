/*
 * XREFs of ??$make_agile_delegate@U?$TypedEventHandler@UXamlExplorerHostChildWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$TypedEventHandler@UXamlExplorerHostChildWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@1@AEBU2341@@Z @ 0x180228C40
 * Callers:
 *     ?add@?$event@U?$TypedEventHandler@UXamlExplorerHostChildWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$TypedEventHandler@UXamlExplorerHostChildWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@2@@Z @ 0x1801EE75C (-add@-$event@U-$TypedEventHandler@UXamlExplorerHostChildWindow@XamlExplorerHost@Shell@Internal@W.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??0_lambda_1d99fdbe0740601814aa3a75b33e3225_@@QEAA@$$QEAU?$com_ptr@UIAgileReference@impl@winrt@@@winrt@@AEBUguid@2@@Z @ 0x18032C518 (--0_lambda_1d99fdbe0740601814aa3a75b33e3225_@@QEAA@$$QEAU-$com_ptr@UIAgileReference@impl@winrt@@.c)
 *     ?get_agile_reference@impl@winrt@@YA?AUhresult@2@AEBUguid@2@PEAXPEAPEAX@Z @ 0x180336EB0 (-get_agile_reference@impl@winrt@@YA-AUhresult@2@AEBUguid@2@PEAXPEAPEAX@Z.c)
 *     ??$?0V_lambda_696e55b5c83fa1642a7f32e95ed8167b_@@@?$TypedEventHandler@UXamlExplorerHostChildWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@QEAA@V_lambda_696e55b5c83fa1642a7f32e95ed8167b_@@@Z @ 0x1804503E8 (--$-0V_lambda_696e55b5c83fa1642a7f32e95ed8167b_@@@-$TypedEventHandler@UXamlExplorerHostChildWind.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall winrt::impl::make_agile_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow,winrt::Windows::Foundation::IInspectable>>(
        __int64 *a1,
        __int64 *a2)
{
  void (__fastcall ***v4)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 v5; // rax
  __int64 v7; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v8[24]; // [rsp+28h] [rbp-38h] BYREF
  __int64 v9; // [rsp+40h] [rbp-20h] BYREF
  __int128 v10; // [rsp+48h] [rbp-18h] BYREF

  v4 = (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))*a2;
  if ( *a2 && (v7 = 0LL, (**v4)(v4, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v7), v7) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v7);
    *a1 = *a2;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a1);
  }
  else
  {
    v10 = winrt::impl::guid_v<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow,winrt::Windows::Foundation::IInspectable>>;
    v9 = 0LL;
    winrt::impl::get_agile_reference(&v7, &v10, *a2, &v9);
    if ( v9 )
    {
      v5 = _lambda_1d99fdbe0740601814aa3a75b33e3225_::_lambda_1d99fdbe0740601814aa3a75b33e3225_(v8, &v9, &v10);
      winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow,winrt::Windows::Foundation::IInspectable>::TypedEventHandler<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow,winrt::Windows::Foundation::IInspectable>(
        a1,
        v5);
    }
    else
    {
      *a1 = *a2;
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a1);
    }
    if ( v9 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v9);
  }
  return a1;
}
