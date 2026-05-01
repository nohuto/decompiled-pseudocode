/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::hstring___lambda_d5b01ac3cd59fca883f981d906b097ab___::Invoke @ 0x1805D3EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800549EC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?TaskbarDashboardButtonSettingChanged@DashboardManager@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1805D80C4 (-TaskbarDashboardButtonSettingChanged@DashboardManager@implementation@Shell@Internal@Windows@win.c)
 *     ?get@?$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x1805DCAFC (-get@-$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::hstring___lambda_d5b01ac3cd59fca883f981d906b097ab___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rsi
  volatile signed __int32 **v5; // rdi
  winrt::Windows::Internal::Shell::implementation::DashboardManager *v6; // rbx
  __int64 result; // rax
  _BYTE v8[8]; // [rsp+20h] [rbp-38h] BYREF
  volatile signed __int32 **v9; // [rsp+28h] [rbp-30h]
  __int64 *v10; // [rsp+30h] [rbp-28h]
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF
  winrt::Windows::Internal::Shell::implementation::DashboardManager *v13; // [rsp+78h] [rbp+20h] BYREF

  v12 = a3;
  v4 = a1 + 16;
  try
  {
    v5 = (volatile signed __int32 **)winrt::hstring::hstring((winrt::hstring *)v8, (const struct winrt::hstring *)&v12);
    v9 = v5;
    v11 = a2;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v11);
    v10 = &v11;
    winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>::get(v4, &v13);
    v6 = v13;
    if ( v13 )
      winrt::Windows::Internal::Shell::implementation::DashboardManager::TaskbarDashboardButtonSettingChanged(v13);
    if ( v6 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v13);
    if ( v11 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v11);
    winrt::handle_type<winrt::impl::hstring_traits>::close(v5);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v11) = *winrt::to_hresult(&v11);
    return (unsigned int)v11;
  }
  return result;
}
