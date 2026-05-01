/*
 * XREFs of ??$make_unique@VCachedDataSource@@AEB_NAEA_NPEAUIAppViewDataSourceAdapter@@AEAUIVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@winrt@@AEAUIVirtualDesktopDataSource@45678@$0A@@std@@YA?AV?$unique_ptr@VCachedDataSource@@U?$default_delete@VCachedDataSource@@@std@@@0@AEB_NAEA_N$$QEAPEAUIAppViewDataSourceAdapter@@AEAUIVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@winrt@@AEAUIVirtualDesktopDataSource@45678@@Z @ 0x1802C11C0
 * Callers:
 *     ?RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x18011963C (-RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     ??0CachedDataSource@@QEAA@_N0PEAUIAppViewDataSourceAdapter@@AEBUIVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBUIVirtualDesktopDataSource@34567@@Z @ 0x1802C123C (--0CachedDataSource@@QEAA@_N0PEAUIAppViewDataSourceAdapter@@AEBUIVirtualDesktopController@Multit.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_unique<CachedDataSource,bool const &,bool &,IAppViewDataSourceAdapter *,winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController &,winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource &,0>(
        _QWORD *a1,
        bool *a2,
        bool *a3,
        struct IAppViewDataSourceAdapter **a4,
        struct winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController *a5,
        struct winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource *a6)
{
  CachedDataSource *v11; // [rsp+50h] [rbp+8h]

  v11 = (CachedDataSource *)operator new(0x38uLL);
  *a1 = CachedDataSource::CachedDataSource(v11, *a2, *a3, *a4, a5, a6);
  return a1;
}
