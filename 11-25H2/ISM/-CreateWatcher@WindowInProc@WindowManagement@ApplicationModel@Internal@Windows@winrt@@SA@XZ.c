/*
 * XREFs of ?CreateWatcher@WindowInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@SA@XZ @ 0x18004E580
 * Callers:
 *     ??0ViewHierarchyWithWindowManager@@QEAA@XZ @ 0x18004E408 (--0ViewHierarchyWithWindowManager@@QEAA@XZ.c)
 *     ?OnWindowWatcherStopped@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIInspectable@Foundation@67@@Z @ 0x1800A8C90 (-OnWindowWatcherStopped@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@App.c)
 *     ??0CUIHierarchy@@AEAA@XZ @ 0x1800AA054 (--0CUIHierarchy@@AEAA@XZ.c)
 *     ?OnWindowWatcherStopped@CUIHierarchy@@AEAAXUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIInspectable@Foundation@67@@Z @ 0x1800AB110 (-OnWindowWatcherStopped@CUIHierarchy@@AEAAXUWindowWatcher@WindowManagement@ApplicationModel@Inte.c)
 *     ??0MPCTarget@@QEAA@PEAVInputSite@@W4FrameworkViewType@@K@Z @ 0x1800FDD2C (--0MPCTarget@@QEAA@PEAVInputSite@@W4FrameworkViewType@@K@Z.c)
 * Callees:
 *     ?AppModel@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180026A00 (-AppModel@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowMa.c)
 *     ??$call@P6A?AUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEBUIWindowStatics@23456@@Z@?$factory_cache_entry@UWindowInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIWindowStatics@23456@@impl@winrt@@QEAA?A_P$$QEAP6A?AUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@2@AEBUIWindowStatics@45672@@Z@Z @ 0x18004E5F8 (--$call@P6A-AUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEBUIWindo.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowInProc::CreateWatcher(
        _QWORD *a1)
{
  __int64 (__fastcall *v3)(const struct winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics *); // [rsp+48h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_180246BA8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics> )
  {
    winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow>::AppModel(
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>,
      a1);
    _InterlockedDecrement64(&qword_180246BA8);
  }
  else
  {
    _InterlockedDecrement64(&qword_180246BA8);
    v3 = _lambda_ae55d4909240e1fdeaaab3ab1260b561_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>::call<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher (*)(winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics const &)>(
      a1,
      a1,
      &v3);
  }
  return a1;
}
