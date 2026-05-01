/*
 * XREFs of winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting_winrt::Windows::Foundation::IInspectable_::TypedEventHandler_winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting_winrt::Windows::Foundation::IInspectable___lambda_2ff518be94006a07a4ff2e3891cd65cc___ @ 0x1802038F0
 * Callers:
 *     ?InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800A5144 (-InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting_winrt::Windows::Foundation::IInspectable_::TypedEventHandler_winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting_winrt::Windows::Foundation::IInspectable___lambda_2ff518be94006a07a4ff2e3891cd65cc___(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v5; // [rsp+30h] [rbp+8h]

  v5 = operator new(0x18uLL);
  v5[1] = a2;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v5 + 4) = 1;
  *v5 = off_1807C6778;
  *a1 = v5;
  return a1;
}
