/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::hstring___lambda_3e6690ebfd5912eedaaffd7303d678cc___::Invoke @ 0x18023EA70
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1800D9200 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?TaskbarDashboardButtonSettingChanged@DashboardManager@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x180698468 (-TaskbarDashboardButtonSettingChanged@DashboardManager@implementation@Shell@Internal@Windows@win.c)
 *     ?get@?$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x180698EA8 (-get@-$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::hstring___lambda_3e6690ebfd5912eedaaffd7303d678cc___::Invoke(
        __int64 a1)
{
  __int64 result; // rax
  winrt::Windows::Internal::Shell::implementation::DashboardManager *v2; // [rsp+30h] [rbp+8h] BYREF

  winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>::get(a1 + 8, &v2);
  try
  {
    if ( v2 )
      winrt::Windows::Internal::Shell::implementation::DashboardManager::TaskbarDashboardButtonSettingChanged(v2);
    if ( v2 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v2);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v2);
  }
  return result;
}
