/*
 * XREFs of ?StartAppViewWatcher@ViewHierarchyWithWindowManager@@AEAAJXZ @ 0x180091C8C
 * Callers:
 *     ??0ViewHierarchyWithWindowManager@@QEAA@XZ @ 0x18004A884 (--0ViewHierarchyWithWindowManager@@QEAA@XZ.c)
 *     ?OnWindowWatcherStopped@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIInspectable@Foundation@67@@Z @ 0x1800A7790 (-OnWindowWatcherStopped@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@App.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18002724C (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ?Removed@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@23456@@Foundation@Windows@3@@Z @ 0x18007DD68 (-Removed@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWat.c)
 *     ?Added@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@23456@@Foundation@Windows@3@@Z @ 0x18007DDBC (-Added@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatch.c)
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x180091D8C (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 *     ?Start@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewWatcher@UIAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180091DA0 (-Start@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewWatcher@UIAppViewWat.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewHierarchyWithWindowManager::StartAppViewWatcher(ViewHierarchyWithWindowManager *this)
{
  __int64 **v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int128 v6; // [rsp+20h] [rbp-28h]
  char *v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  v2 = (__int64 **)((char *)this + 8);
  *(_QWORD *)&v6 = this;
  *((_QWORD *)&v6 + 1) = ViewHierarchyWithWindowManager::OnAppViewAdded;
  v7 = (char *)operator new(0x20uLL);
  winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v7 + 8));
  *(_OWORD *)(v3 + 16) = v6;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v3 = &winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewChangedEventArgs>,_lambda_e811ed625de1c9f36d6dae6db721db2b_>::`vftable';
  v7 = (char *)v3;
  *((_QWORD *)this + 5) = *winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher>::Added(
                             v2,
                             &v8,
                             (__int64 *)&v7);
  winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&v7);
  *(_QWORD *)&v6 = this;
  *((_QWORD *)&v6 + 1) = ViewHierarchyWithWindowManager::OnAppViewRemoved;
  v7 = (char *)operator new(0x20uLL);
  winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v7 + 8));
  *(_OWORD *)(v4 + 16) = v6;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v4 = &winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewChangedEventArgs>,_lambda_e811ed625de1c9f36d6dae6db721db2b_>::`vftable';
  v7 = (char *)v4;
  *((_QWORD *)this + 6) = *winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher>::Removed(
                             v2,
                             &v9,
                             (__int64 *)&v7);
  winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&v7);
  winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewWatcher<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher>::Start(v2);
  return 0LL;
}
