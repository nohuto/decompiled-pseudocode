/*
 * XREFs of ??0?$producers_base@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@V?$tuple@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@UITapInvokeTelemetryDataProvider@23456@UITapInvokeSettingTester@23456@@std@@@impl@winrt@@QEAA@XZ @ 0x180112C90
 * Callers:
 *     ??0TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAA@XZ @ 0x180112AD0 (--0TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAA@XZ.c)
 * Callees:
 *     ??0?$producer_convert@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeSettingTester@TouchKeyboard@Shell@Internal@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x180112CC0 (--0-$producer_convert@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeSetting.c)
 *     ??0?$producer_convert@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x180112CD8 (--0-$producer_convert@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeTelemet.c)
 *     ??0?$producer_convert@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x180112CF0 (--0-$producer_convert@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITap_ea_180112CF0.c)
 */

__int64 __fastcall winrt::impl::producers_base<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,std::tuple<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSettingTester>>::producers_base<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,std::tuple<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSettingTester>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r8

  winrt::impl::producer_convert<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting,void>::producer_convert<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting,void>(
    a1,
    a2,
    a1);
  winrt::impl::producer_convert<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider,void>::producer_convert<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider,void>(v2 + 8);
  winrt::impl::producer_convert<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSettingTester,void>::producer_convert<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSettingTester,void>(v3 + 16);
  return v4;
}
