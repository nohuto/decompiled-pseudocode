/*
 * XREFs of SystemSettings::Keyboard::ConvertToSettingStringValue @ 0x180470350
 * Callers:
 *     ?get_EffectiveSettingData@?$produce@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180479620 (-get_EffectiveSettingData@-$produce@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITa.c)
 *     ?get_OrganizationSettingData@?$produce@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1804796D0 (-get_OrganizationSettingData@-$produce@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@U.c)
 *     ?get_SystemFallbackSettingData@?$produce@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180479740 (-get_SystemFallbackSettingData@-$produce@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@.c)
 *     ?get_SystemSettingData@?$produce@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1804797B0 (-get_SystemSettingData@-$produce@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapIn.c)
 *     ?get_UserFallbackSettingData@?$produce@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180479820 (-get_UserFallbackSettingData@-$produce@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@U.c)
 *     ?get_UserSettingData@?$produce@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180479890 (-get_UserSettingData@-$produce@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvo.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall SystemSettings::Keyboard::ConvertToSettingStringValue(int a1)
{
  const wchar_t *result; // rax

  if ( a1 == -1 )
    return L"Unset";
  if ( !a1 )
    return L"Never";
  result = L"Always";
  if ( a1 != 2 )
    return L"Auto";
  return result;
}
