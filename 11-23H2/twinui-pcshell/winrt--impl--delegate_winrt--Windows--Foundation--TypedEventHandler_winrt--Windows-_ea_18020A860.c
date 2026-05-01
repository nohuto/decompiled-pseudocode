/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting_winrt::Windows::Foundation::IInspectable___lambda_2ff518be94006a07a4ff2e3891cd65cc___::Invoke @ 0x18020A860
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTapInvokeEffectiveSettingChanged@TouchKeyboardExperienceManager@@AEAAXW4TapInvokeSettingValue@TouchKeyboard@Shell@Internal@Windows@winrt@@@Z @ 0x180084F58 (-OnTapInvokeEffectiveSettingChanged@TouchKeyboardExperienceManager@@AEAAXW4TapInvokeSettingValue.c)
 *     ?EffectiveSetting@?$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeSetting@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801BC878 (-EffectiveSetting@-$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeSetting@UITapInvokeSe.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting_winrt::Windows::Foundation::IInspectable___lambda_2ff518be94006a07a4ff2e3891cd65cc___::Invoke(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // eax
  __int64 v4; // r8
  const char *v5; // r9
  __int64 result; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  v2 = *(_QWORD *)(a1 + 8);
  try
  {
    v3 = winrt::impl::consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeSetting<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting>::EffectiveSetting(&v8);
    TouchKeyboardExperienceManager::OnTapInvokeEffectiveSettingChanged(v2, v3, v4, v5);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v7);
  }
  return result;
}
