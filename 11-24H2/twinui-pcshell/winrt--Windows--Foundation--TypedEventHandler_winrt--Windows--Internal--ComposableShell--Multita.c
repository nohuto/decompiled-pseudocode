/*
 * XREFs of winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_d61b288df26b99e0330e99e4b6525b65___ @ 0x18069C55C
 * Callers:
 *     ??0CachedDataSource@@QEAA@_N0PEAUIAppViewDataSourceAdapter@@AEBUIVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBUIVirtualDesktopDataSource@34567@@Z @ 0x1802C123C (--0CachedDataSource@@QEAA@_N0PEAUIAppViewDataSourceAdapter@@AEBUIVirtualDesktopController@Multit.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x180293110 (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 *     _lambda_76d1f2626ede3eea74247fb28465c209_::__lambda_76d1f2626ede3eea74247fb28465c209_ @ 0x1802CAE4C (_lambda_76d1f2626ede3eea74247fb28465c209_--__lambda_76d1f2626ede3eea74247fb28465c209_.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_d61b288df26b99e0330e99e4b6525b65___(
        _QWORD *a1,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  _QWORD *v7; // [rsp+30h] [rbp+8h]

  v7 = operator new(0x28uLL);
  winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v7 + 1));
  v4 = *(_QWORD *)a2;
  *(_QWORD *)a2 = 0LL;
  v7[2] = v4;
  v7[3] = *((_QWORD *)a2 + 1);
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(v7 + 3);
  v5 = *((_QWORD *)a2 + 2);
  *((_QWORD *)a2 + 2) = 0LL;
  v7[4] = v5;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *v7 = off_1808C04C8;
  *a1 = v7;
  lambda_76d1f2626ede3eea74247fb28465c209_::__lambda_76d1f2626ede3eea74247fb28465c209_(a2);
  return a1;
}
