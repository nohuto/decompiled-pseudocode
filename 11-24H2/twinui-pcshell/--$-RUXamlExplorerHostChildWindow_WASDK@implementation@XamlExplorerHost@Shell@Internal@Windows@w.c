/*
 * XREFs of ??$?RUXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UDesktopWindowXamlSourceTakeFocusRequestedEventArgs@Hosting@Xaml@UI@Microsoft@6@@?$event@U?$TypedEventHandler@UXamlExplorerHostChildWindow_WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@1@AEBUDesktopWindowXamlSourceTakeFocusRequestedEventArgs@Hosting@Xaml@UI@Microsoft@1@@Z @ 0x180450484
 * Callers:
 *     ?OnTakeFocusRequested@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXAEBUDesktopWindowXamlSource@Hosting@Xaml@UI@67@AEBUDesktopWindowXamlSourceTakeFocusRequestedEventArgs@9Xaml@UI@67@@Z @ 0x180450A50 (-OnTakeFocusRequested@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal.c)
 *     ?OnTakeFocusRequested@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXAEBUDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@7@AEBUDesktopWindowXamlSourceTakeFocusRequestedEventArgs@9Xaml@UI@Microsoft@7@@Z @ 0x180452730 (-OnTakeFocusRequested@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@In.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x180055048 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@USearchAppHost@Shell@UI.c)
 *     ?get_token@?$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@AEBA?AUevent_token@2@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@2@@Z @ 0x18021AEE0 (-get_token@-$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1802D2A74 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1802D2A8C (__Platform_AcquireSRWLockExclusive.c)
 *     ??$invoke@U?$TypedEventHandler@UXamlExplorerHostChildWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@34@UDesktopWindowXamlSourceTakeFocusRequestedEventArgs@Hosting@Xaml@UI@34@@impl@winrt@@YA_NAEBU?$TypedEventHandler@UXamlExplorerHostChildWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@1@AEBUXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@41@AEBUDesktopWindowXamlSourceTakeFocusRequestedEventArgs@Hosting@Xaml@UI@41@@Z @ 0x18045076C (--$invoke@U-$TypedEventHandler@UXamlExplorerHostChildWindow@XamlExplorerHost@Shell@Internal@Wind.c)
 *     ?remove@?$event@U?$TypedEventHandler@UXamlExplorerHostChildWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x18045101C (-remove@-$event@U-$TypedEventHandler@UXamlExplorerHostChildWindow@XamlExplorerHost@Shell@Interna.c)
 */

void __fastcall winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Foundation::IInspectable>>::operator()<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK,winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSourceTakeFocusRequestedEventArgs>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rbx
  volatile signed __int32 *v7; // rax
  volatile signed __int32 *v8; // rsi
  PVOID *v9; // rbp
  PVOID *i; // rdi
  __int64 v11; // rcx
  PVOID *token; // rax
  volatile signed __int32 *v13; // [rsp+20h] [rbp-38h] BYREF
  PVOID v14; // [rsp+28h] [rbp-30h] BYREF

  v6 = 0LL;
  v13 = 0LL;
  _Platform_AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
  v7 = *(volatile signed __int32 **)a1;
  v8 = 0LL;
  if ( *(_QWORD *)a1 )
  {
    v13 = *(volatile signed __int32 **)a1;
    _InterlockedIncrement(v7);
    v8 = v7;
    v6 = (__int64)v13;
  }
  ReleaseSRWLockExclusive_0((PSRWLOCK)(a1 + 8));
  if ( v8 )
  {
    v9 = (PVOID *)&v8[2 * *((unsigned int *)v8 + 1) + 2];
    for ( i = (PVOID *)(v8 + 2); i != v9; ++i )
    {
      if ( !(unsigned __int8)winrt::impl::invoke<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow,winrt::Windows::Foundation::IInspectable>,winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow,winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSourceTakeFocusRequestedEventArgs>(
                               i,
                               a2,
                               a3) )
      {
        token = winrt::event<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>::get_token(
                  v11,
                  &v14,
                  i);
        winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow,winrt::Windows::Foundation::IInspectable>>::remove(
          a1,
          *token);
      }
    }
  }
  if ( v6 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref((__int64 *)&v13);
}
