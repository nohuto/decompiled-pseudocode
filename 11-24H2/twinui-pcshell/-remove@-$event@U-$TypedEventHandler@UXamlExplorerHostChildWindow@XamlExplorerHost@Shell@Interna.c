/*
 * XREFs of ?remove@?$event@U?$TypedEventHandler@UXamlExplorerHostChildWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x18045101C
 * Callers:
 *     ??$?RUXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UDesktopWindowXamlSourceTakeFocusRequestedEventArgs@Hosting@Xaml@UI@Microsoft@6@@?$event@U?$TypedEventHandler@UXamlExplorerHostChildWindow_WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@1@AEBUDesktopWindowXamlSourceTakeFocusRequestedEventArgs@Hosting@Xaml@UI@Microsoft@1@@Z @ 0x180450484 (--$-RUXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@w.c)
 *     ?TakeFocusRequested@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXAEBUevent_token@7@@Z @ 0x180450CAC (-TakeFocusRequested@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@She_ea_180450CAC.c)
 *     ?TakeFocusRequested@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXAEBUevent_token@7@@Z @ 0x1804531FC (-TakeFocusRequested@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHo_ea_1804531FC.c)
 *     ??$?RUXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UActivationChangedEventArgs@23456@@?$event@U?$TypedEventHandler@UXamlExplorerHostWindow_WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UActivationChangedEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@1@AEBUActivationChangedEventArgs@45671@@Z @ 0x180454830 (--$-RUXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@.c)
 *     ?remove_ActivationChanged@?$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow_WASDK@34567@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x180455BC0 (-remove_ActivationChanged@-$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHos.c)
 * Callees:
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x18004FA8C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ??4?$com_ptr@U?$event_array@U?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x180055008 (--4-$com_ptr@U-$event_array@U-$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x180055048 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@USearchAppHost@Shell@UI.c)
 *     ??$exchange@U?$com_ptr@U?$event_array@U?$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@_N@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@U12@@std@@YA?AU?$com_ptr@U?$event_array@U?$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@_N@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAU12@$$QEAU12@@Z @ 0x1800BEEA8 (--$exchange@U-$com_ptr@U-$event_array@U-$TypedEventHandler@UISharedDesktopBackgroundVisualWindow.c)
 *     ??$make_event_array@U?$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$com_ptr@U?$event_array@U?$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@Foundation@Windows@winrt@@@impl@winrt@@@1@I@Z @ 0x1801E44BC (--$make_event_array@U-$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@wi.c)
 *     ?get_token@?$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@AEBA?AUevent_token@2@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@2@@Z @ 0x18021AEE0 (-get_token@-$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1802D2A74 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1802D2A8C (__Platform_AcquireSRWLockExclusive.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow,winrt::Windows::Foundation::IInspectable>>::remove(
        __int64 a1,
        PVOID a2)
{
  __int64 v4; // rsi
  RTL_SRWLOCK *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // r15d
  __int64 v9; // rbx
  bool v10; // al
  __int64 *v11; // rax
  __int64 v12; // rcx
  PVOID *v13; // r12
  __int64 *v14; // rdi
  __int64 *v15; // rax
  char v16; // [rsp+20h] [rbp-30h]
  PVOID *v17; // [rsp+28h] [rbp-28h] BYREF
  __int64 v18; // [rsp+30h] [rbp-20h] BYREF
  __int64 v19; // [rsp+38h] [rbp-18h] BYREF
  PVOID v20[2]; // [rsp+40h] [rbp-10h] BYREF

  v4 = 0LL;
  v19 = 0LL;
  v5 = (RTL_SRWLOCK *)(a1 + 16);
  v20[0] = (PVOID)(a1 + 16);
  _Platform_AcquireSRWLockExclusive((PSRWLOCK)(a1 + 16));
  v7 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
  {
    ReleaseSRWLockExclusive_0(v5);
    return;
  }
  v8 = *(_DWORD *)(v7 + 4) - 1;
  v9 = 0LL;
  v18 = 0LL;
  v16 = 0;
  if ( !v8 )
  {
    v10 = *winrt::event<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>::get_token(
             v6,
             v20,
             (PVOID *)(v7 + 8)) == a2;
LABEL_16:
    if ( v10 )
    {
      _Platform_AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
      v15 = std::exchange<winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider,bool>>>,winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider,bool>>>>(
              (__int64 *)&v17,
              (__int64 *)a1,
              &v18);
      winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::Windows::Foundation::Point>>>::operator=(
        &v19,
        v15);
      if ( v17 )
        winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref((__int64 *)&v17);
      ReleaseSRWLockExclusive_0((PSRWLOCK)(a1 + 8));
      v4 = v19;
      v9 = v18;
    }
    goto LABEL_20;
  }
  v11 = winrt::impl::make_event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::GamingOverlay::GameBarWindowControl,enum winrt::Windows::Internal::GamingOverlay::GameBarWindowState>>(
          &v17,
          v8);
  winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::Windows::Foundation::Point>>>::operator=(
    &v18,
    v11);
  if ( v17 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref((__int64 *)&v17);
  v9 = v18;
  v12 = *(_QWORD *)a1;
  v13 = (PVOID *)(*(_QWORD *)a1 + 8LL);
  v17 = (PVOID *)(*(_QWORD *)a1 + 8 * (*(unsigned int *)(*(_QWORD *)a1 + 4LL) + 1LL));
  if ( v13 != v17 )
  {
    v10 = 0;
    v14 = (__int64 *)(v18 + 8);
    while ( 1 )
    {
      if ( v10 )
        goto LABEL_12;
      if ( a2 != *winrt::event<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>::get_token(
                    v12,
                    v20,
                    v13) )
        break;
      v10 = 1;
      v16 = 1;
LABEL_14:
      if ( ++v13 == v17 )
      {
LABEL_15:
        v5 = (RTL_SRWLOCK *)(a1 + 16);
        goto LABEL_16;
      }
    }
    v10 = v16;
LABEL_12:
    if ( !v8 )
      goto LABEL_15;
    winrt::Windows::Foundation::IUnknown::operator=(v14++, (__int64 *)v13);
    --v8;
    v10 = v16;
    goto LABEL_14;
  }
LABEL_20:
  if ( v9 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref(&v18);
  ReleaseSRWLockExclusive_0(v5);
  if ( v4 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref(&v19);
}
