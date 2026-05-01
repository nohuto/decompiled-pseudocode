/*
 * XREFs of winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_690d2e9773cc08e07279b20ff14abba4___ @ 0x180289B6C
 * Callers:
 *     ?RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x180079BB0 (-RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     _lambda_690d2e9773cc08e07279b20ff14abba4_::__lambda_690d2e9773cc08e07279b20ff14abba4_ @ 0x18028A088 (_lambda_690d2e9773cc08e07279b20ff14abba4_--__lambda_690d2e9773cc08e07279b20ff14abba4_.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_690d2e9773cc08e07279b20ff14abba4___(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rcx
  _QWORD *v8; // [rsp+30h] [rbp+8h]

  v8 = operator new(0x28uLL);
  v4 = *a2;
  *a2 = 0LL;
  v8[1] = v4;
  v5 = a2[1];
  a2[1] = 0LL;
  v8[2] = v5;
  v6 = a2[2];
  a2[2] = 0LL;
  v8[3] = v6;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v8 + 8) = 1;
  *v8 = off_1809859B0;
  *a1 = v8;
  lambda_690d2e9773cc08e07279b20ff14abba4_::__lambda_690d2e9773cc08e07279b20ff14abba4_(a2);
  return a1;
}
