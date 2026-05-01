/*
 * XREFs of winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_286d0fe4c5dad9546df8d1816c162f02___ @ 0x18076187C
 * Callers:
 *     ??0CachedDataSource@@QEAA@_N0PEAUIAppViewDataSourceAdapter@@AEBUIVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBUIVirtualDesktopDataSource@34567@@Z @ 0x1807624AC (--0CachedDataSource@@QEAA@_N0PEAUIAppViewDataSourceAdapter@@AEBUIVirtualDesktopController@Multit.c)
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     _lambda_286d0fe4c5dad9546df8d1816c162f02_::__lambda_286d0fe4c5dad9546df8d1816c162f02_ @ 0x180762A34 (_lambda_286d0fe4c5dad9546df8d1816c162f02_--__lambda_286d0fe4c5dad9546df8d1816c162f02_.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_286d0fe4c5dad9546df8d1816c162f02___(
        _QWORD *a1,
        winrt::Windows::Foundation::IUnknown *a2)
{
  __int64 v4; // r8
  __int64 v5; // rcx
  _QWORD *v7; // [rsp+30h] [rbp+8h]

  v7 = operator new(0x28uLL);
  v4 = *(_QWORD *)a2;
  *(_QWORD *)a2 = 0LL;
  v7[1] = v4;
  v7[2] = *((_QWORD *)a2 + 1);
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)(v7 + 2));
  v5 = *((_QWORD *)a2 + 2);
  *((_QWORD *)a2 + 2) = 0LL;
  v7[3] = v5;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v7 + 8) = 1;
  *v7 = off_180985910;
  *a1 = v7;
  lambda_286d0fe4c5dad9546df8d1816c162f02_::__lambda_286d0fe4c5dad9546df8d1816c162f02_(a2);
  return a1;
}
