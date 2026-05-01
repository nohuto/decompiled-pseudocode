/*
 * XREFs of ??0?$producers_base@UWindowsTracker@factory_implementation@Shell@Internal@Windows@winrt@@V?$tuple@UIActivationFactory@Foundation@Windows@winrt@@UIWindowsTrackerStatics@Shell@Internal@34@@std@@@impl@winrt@@QEAA@XZ @ 0x18065E668
 * Callers:
 *     ??0WindowsTracker@factory_implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18065E68C (--0WindowsTracker@factory_implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??0?$producer_convert@UWindowsTracker@factory_implementation@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@56@X@impl@winrt@@QEAA@XZ @ 0x18065E638 (--0-$producer_convert@UWindowsTracker@factory_implementation@Shell@Internal@Windows@winrt@@UIAct.c)
 *     ??0?$producer_convert@UWindowsTracker@factory_implementation@Shell@Internal@Windows@winrt@@UIWindowsTrackerStatics@3456@X@impl@winrt@@QEAA@XZ @ 0x18065E650 (--0-$producer_convert@UWindowsTracker@factory_implementation@Shell@Internal@Windows@winrt@@UIWin.c)
 */

__int64 __fastcall winrt::impl::producers_base<winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker,std::tuple<winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::IWindowsTrackerStatics>>::producers_base<winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker,std::tuple<winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::IWindowsTrackerStatics>>(
        _QWORD *a1)
{
  __int64 v1; // r8

  winrt::impl::producer_convert<winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker,winrt::Windows::Foundation::IActivationFactory,void>::producer_convert<winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker,winrt::Windows::Foundation::IActivationFactory,void>(a1);
  winrt::impl::producer_convert<winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker,winrt::Windows::Internal::Shell::IWindowsTrackerStatics,void>::producer_convert<winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker,winrt::Windows::Internal::Shell::IWindowsTrackerStatics,void>();
  return v1;
}
