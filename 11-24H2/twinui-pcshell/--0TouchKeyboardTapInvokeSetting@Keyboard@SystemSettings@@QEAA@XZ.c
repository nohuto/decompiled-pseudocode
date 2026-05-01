/*
 * XREFs of ??0TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAA@XZ @ 0x180112AD0
 * Callers:
 *     ??$make@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@$$V@winrt@@YA?A_PXZ @ 0x180111BC8 (--$make@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@$$V@winrt@@YA-A_PXZ.c)
 * Callees:
 *     DeviceConvertibilityHelpers::QueryDeviceConvertibility @ 0x180112BA4 (DeviceConvertibilityHelpers--QueryDeviceConvertibility.c)
 *     ??0?$producers_base@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@V?$tuple@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@UITapInvokeTelemetryDataProvider@23456@UITapInvokeSettingTester@23456@@std@@@impl@winrt@@QEAA@XZ @ 0x180112C90 (--0-$producers_base@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@V-$tuple@UITapInvoke.c)
 *     SystemSettings::Keyboard::LoadSetting @ 0x180112D44 (SystemSettings--Keyboard--LoadSetting.c)
 *     ?CalculateEffectiveSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEBA?AW4TapInvokeSettingValue@TouchKeyboard@Shell@Internal@Windows@winrt@@XZ @ 0x180112DBC (-CalculateEffectiveSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEBA-AW4TapInv.c)
 *     ?SubscribeEvents@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEAAXXZ @ 0x180112E34 (-SubscribeEvents@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEAAXXZ.c)
 *     SystemSettings::Keyboard::LoadPolicy @ 0x1802ADB6C (SystemSettings--Keyboard--LoadPolicy.c)
 */

SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting *__fastcall SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting::TouchKeyboardTapInvokeSetting(
        SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting *this)
{
  winrt::impl::producers_base<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,std::tuple<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSettingTester>>::producers_base<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,std::tuple<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSettingTester>>((char *)this + 16);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *((_QWORD *)this + 1) = 1LL;
  *(_QWORD *)this = &winrt::impl::heap_implements<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting>::`vftable';
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = 1;
  *((_DWORD *)this + 17) = SystemSettings::Keyboard::LoadSetting(-2147483647LL, L"TouchKeyboardTapInvoke");
  *((_DWORD *)this + 18) = SystemSettings::Keyboard::LoadPolicy();
  *((_DWORD *)this + 19) = DeviceConvertibilityHelpers::QueryDeviceConvertibility();
  *((_DWORD *)this + 20) = SystemSettings::Keyboard::LoadSetting(-2147483646LL, L"TouchKeyboardTapInvoke");
  *((_DWORD *)this + 21) = SystemSettings::Keyboard::LoadSetting(-2147483647LL, L"EnableDesktopModeAutoInvoke");
  *((_DWORD *)this + 22) = SystemSettings::Keyboard::LoadSetting(-2147483646LL, L"EnableDesktopModeAutoInvoke");
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  _InterlockedExchange(
    (volatile __int32 *)this + 16,
    SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting::CalculateEffectiveSetting(this));
  SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting::SubscribeEvents(this);
  return this;
}
