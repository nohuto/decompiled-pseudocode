/*
 * XREFs of ?UpdateEffectiveSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEAAXXZ @ 0x180477D68
 * Callers:
 *     ?UpdateOrganizationSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAAXXZ @ 0x180477EDC (-UpdateOrganizationSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAAXXZ.c)
 *     ?UpdateUserSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEAA_NW4TapInvokeSettingValue@TouchKeyboard@Shell@Internal@Windows@winrt@@@Z @ 0x180477F08 (-UpdateUserSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEAA_NW4TapInvokeSetti.c)
 * Callees:
 *     ?CalculateEffectiveSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEBA?AW4TapInvokeSettingValue@TouchKeyboard@Shell@Internal@Windows@winrt@@XZ @ 0x180112DBC (-CalculateEffectiveSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEBA-AW4TapInv.c)
 *     ??$?RUTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@$$T@?$event@U?$TypedEventHandler@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEB$$T@Z @ 0x1804685E8 (--$-RUTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@$$T@-$event@U-$TypedEventHandler@UI.c)
 */

void __fastcall SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting::UpdateEffectiveSetting(
        SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting *this)
{
  __int32 v1; // eax
  __int64 v2; // r9

  v1 = SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting::CalculateEffectiveSetting((__int64)this);
  if ( v1 != _InterlockedExchange((volatile __int32 *)(v2 + 64), v1) )
    winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting,winrt::Windows::Foundation::IInspectable>>::operator()<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,std::nullptr_t>(
      v2 + 40,
      v2);
}
