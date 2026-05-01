/*
 * XREFs of winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_76d1f2626ede3eea74247fb28465c209___ @ 0x1806A30D8
 * Callers:
 *     ?RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x1806A51D0 (-RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     _lambda_76d1f2626ede3eea74247fb28465c209_::__lambda_76d1f2626ede3eea74247fb28465c209_ @ 0x1802CAE4C (_lambda_76d1f2626ede3eea74247fb28465c209_--__lambda_76d1f2626ede3eea74247fb28465c209_.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_76d1f2626ede3eea74247fb28465c209___(
        _QWORD *a1,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  _DWORD *v8; // [rsp+30h] [rbp+8h]

  v8 = operator new(0x28uLL);
  v8[2] = 1;
  v4 = *(_QWORD *)a2;
  *(_QWORD *)a2 = 0LL;
  *((_QWORD *)v8 + 2) = v4;
  v5 = *((_QWORD *)a2 + 1);
  *((_QWORD *)a2 + 1) = 0LL;
  *((_QWORD *)v8 + 3) = v5;
  v6 = *((_QWORD *)a2 + 2);
  *((_QWORD *)a2 + 2) = 0LL;
  *((_QWORD *)v8 + 4) = v6;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v8 = off_1808C0FC8;
  *a1 = v8;
  lambda_76d1f2626ede3eea74247fb28465c209_::__lambda_76d1f2626ede3eea74247fb28465c209_(a2);
  return a1;
}
