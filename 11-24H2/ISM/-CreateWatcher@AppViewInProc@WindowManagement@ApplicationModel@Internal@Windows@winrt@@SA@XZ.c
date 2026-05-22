/*
 * XREFs of ?CreateWatcher@AppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@SA@XZ @ 0x180093A68
 * Callers:
 *     ??0ViewHierarchyWithWindowManager@@QEAA@XZ @ 0x18004A884 (--0ViewHierarchyWithWindowManager@@QEAA@XZ.c)
 *     ?OnWindowWatcherStopped@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIInspectable@Foundation@67@@Z @ 0x1800A7790 (-OnWindowWatcherStopped@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@App.c)
 * Callees:
 *     ??$call@P6A?AUAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEBUIAppViewStatics@23456@@Z@?$factory_cache_entry@UAppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIAppViewStatics@23456@@impl@winrt@@QEAA?A_P$$QEAP6A?AUAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@2@AEBUIAppViewStatics@45672@@Z@Z @ 0x180076F04 (--$call@P6A-AUAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEBUIAppV.c)
 *     ?CreateWatcher@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewStatics@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180093AE0 (-CreateWatcher@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewStatics@UIAp.c)
 */

// Hidden C++ exception states: #wind=1
void (__fastcall ***__fastcall winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc::CreateWatcher(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *)))(_QWORD, __int64 *, __int64 *)
{
  const struct winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics *(__fastcall *v3)(const struct winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics *, __int64); // [rsp+48h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_180250BC8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics> )
  {
    winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewStatics<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics>::CreateWatcher(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics>,
      a1);
    _InterlockedDecrement64(&qword_180250BC8);
  }
  else
  {
    _InterlockedDecrement64(&qword_180250BC8);
    v3 = _lambda_bde3f744bf3d16209662d38da0fd875b_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics>::call<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher (*)(winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics const &)>(
      a1,
      (__int64)a1,
      (void (__fastcall **)(__int64, __int64 *))&v3);
  }
  return a1;
}
