/*
 * XREFs of ?CancelViewFallbackTimer@GamingPosturePositioner@@AEAAXXZ @ 0x1804FB2EC
 * Callers:
 *     ?FallbackWindowActivated@GamingPosturePositioner@@QEAAX_N@Z @ 0x1804FC718 (-FallbackWindowActivated@GamingPosturePositioner@@QEAAX_N@Z.c)
 *     ?HandleViewFallback@GamingPosturePositioner@@AEAAX_N@Z @ 0x180500B10 (-HandleViewFallback@GamingPosturePositioner@@AEAAX_N@Z.c)
 *     ?MakeViewPrimary@GamingPosturePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180502640 (-MakeViewPrimary@GamingPosturePositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?unsubscribe_from_services@GamingPosturePositioner@@UEAAXPEAUIServiceProvider@@@Z @ 0x180509A00 (-unsubscribe_from_services@GamingPosturePositioner@@UEAAXPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?Cancel@?$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180052164 (-Cancel@-$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@W.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ @ 0x180335858 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ.c)
 *     ?CanceledFallbackTimer@GamingPosturePositionerTelemetryProvider@@SAXXZ @ 0x1804FB348 (-CanceledFallbackTimer@GamingPosturePositionerTelemetryProvider@@SAXXZ.c)
 */

void __fastcall GamingPosturePositioner::CancelViewFallbackTimer(GamingPosturePositioner *this)
{
  __int64 *v1; // rbx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 *)((char *)this + 912);
  if ( *((_QWORD *)this + 114) )
  {
    winrt::impl::consume_Windows_System_Threading_IThreadPoolTimer<winrt::Windows::System::Threading::IThreadPoolTimer>::Cancel((__int64 *)this + 114);
    v2 = 0LL;
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(v1, &v2);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v2);
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
      GamingPosturePositionerTelemetryProvider::CanceledFallbackTimer();
  }
}
