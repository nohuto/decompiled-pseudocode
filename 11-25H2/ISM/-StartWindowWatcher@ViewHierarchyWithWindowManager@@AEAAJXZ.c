/*
 * XREFs of ?StartWindowWatcher@ViewHierarchyWithWindowManager@@AEAAJXZ @ 0x18007DD54
 * Callers:
 *     ??0ViewHierarchyWithWindowManager@@QEAA@XZ @ 0x18004E408 (--0ViewHierarchyWithWindowManager@@QEAA@XZ.c)
 *     ?OnWindowWatcherStopped@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIInspectable@Foundation@67@@Z @ 0x1800A8C90 (-OnWindowWatcherStopped@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@App.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x180026C8C (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ?Removed@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@23456@@Foundation@Windows@3@@Z @ 0x18007DEA8 (-Removed@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWat.c)
 *     ?Added@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@23456@@Foundation@Windows@3@@Z @ 0x18007DEFC (-Added@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatch.c)
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x180091BEC (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 *     ?Start@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800A8E44 (-Start@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatch.c)
 *     ?Stopped@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@3@@Z @ 0x1800A8ED8 (-Stopped@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWat.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewHierarchyWithWindowManager::StartWindowWatcher(ViewHierarchyWithWindowManager *this)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int128 v6; // [rsp+20h] [rbp-18h]
  char *v7; // [rsp+60h] [rbp+28h] BYREF
  char v8; // [rsp+68h] [rbp+30h] BYREF
  char v9; // [rsp+70h] [rbp+38h] BYREF
  char v10; // [rsp+78h] [rbp+40h] BYREF

  *(_QWORD *)&v6 = this;
  *((_QWORD *)&v6 + 1) = ViewHierarchyWithWindowManager::OnWindowAdded;
  v7 = (char *)operator new(0x20uLL);
  winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v7 + 8));
  *(_OWORD *)(v2 + 16) = v6;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v2 = &winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs>,_lambda_66ed2df52651243ff863a12d97446406_>::`vftable';
  v7 = (char *)v2;
  *((_QWORD *)this + 2) = *(_QWORD *)winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher>::Added(
                                       this,
                                       &v8,
                                       &v7);
  winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&v7);
  *(_QWORD *)&v6 = this;
  *((_QWORD *)&v6 + 1) = ViewHierarchyWithWindowManager::OnWindowRemoved;
  v7 = (char *)operator new(0x20uLL);
  winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v7 + 8));
  *(_OWORD *)(v3 + 16) = v6;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v3 = &winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs>,_lambda_66ed2df52651243ff863a12d97446406_>::`vftable';
  v7 = (char *)v3;
  *((_QWORD *)this + 3) = *(_QWORD *)winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher>::Removed(
                                       this,
                                       &v9,
                                       &v7);
  winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&v7);
  *(_QWORD *)&v6 = this;
  *((_QWORD *)&v6 + 1) = &ViewHierarchyWithWindowManager::OnWindowWatcherStopped;
  v7 = (char *)operator new(0x20uLL);
  winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v7 + 8));
  *(_OWORD *)(v4 + 16) = v6;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v4 = &winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher,winrt::Windows::Foundation::IInspectable>,_lambda_1fc43c971fd1247187255afbf1b5936c_>::`vftable';
  v7 = (char *)v4;
  *((_QWORD *)this + 4) = *(_QWORD *)winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher>::Stopped(
                                       this,
                                       &v10,
                                       &v7);
  winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&v7);
  winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher>::Start(this);
  return 0LL;
}
