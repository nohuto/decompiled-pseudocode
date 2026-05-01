/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x180070E3C
 * Callers:
 *     ?UnsubscribeFromServices@HolographicPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x180070D00 (-UnsubscribeFromServices@HolographicPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$T@Z @ 0x180070E1C (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@w.c)
 *     ?UnsubscribeFromServices@CApplicationViewManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18014BB20 (-UnsubscribeFromServices@CApplicationViewManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?UnsubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1802151EC (-UnsubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UnsubscribeFromServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180217000 (-UnsubscribeFromServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?UnsubscribeFromServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z @ 0x18024D6C0 (-UnsubscribeFromServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?Shutdown@ConnectedStandbyHelper@@QEAAXXZ @ 0x1802CFC10 (-Shutdown@ConnectedStandbyHelper@@QEAAXXZ.c)
 *     ??1TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UEAA@XZ @ 0x18046D0A8 (--1TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UEAA@XZ.c)
 *     ?OnGamingPostureChanged@GamingPosturePositioner@@AEAAJH@Z @ 0x180503C88 (-OnGamingPostureChanged@GamingPosturePositioner@@AEAAJH@Z.c)
 *     ?unsubscribe_from_services@GamingPosturePositioner@@UEAAXPEAUIServiceProvider@@@Z @ 0x180509A00 (-unsubscribe_from_services@GamingPosturePositioner@@UEAAXPEAUIServiceProvider@@@Z.c)
 *     ?UnsubscribeFromServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x180514B40 (-UnsubscribeFromServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?unsubscribe_from_services@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1806071A0 (-unsubscribe_from_services@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEA.c)
 *     ?unsubscribe_from_services@CopilotHotkeyManager@@UEAAXPEAUIServiceProvider@@@Z @ 0x180638090 (-unsubscribe_from_services@CopilotHotkeyManager@@UEAAXPEAUIServiceProvider@@@Z.c)
 *     ?unsubscribe_from_services@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x180643B10 (-unsubscribe_from_services@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAAXPE.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
        void (__fastcall ****a1)(_QWORD, __int64),
        void (__fastcall ***a2)(_QWORD, __int64))
{
  void (__fastcall ***v2)(_QWORD, __int64); // rsi
  DWORD LastError; // ebx

  v2 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    (**v2)(v2, 1LL);
    SetLastError(LastError);
  }
  *a1 = a2;
}
