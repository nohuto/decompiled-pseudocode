/*
 * XREFs of ??0WindowsTracker@factory_implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18065E68C
 * Callers:
 *     ??$create_and_initialize@UWindowsTracker@factory_implementation@Shell@Internal@Windows@winrt@@$$V@impl@winrt@@YAPEAUWindowsTracker@factory_implementation@Shell@Internal@Windows@1@XZ @ 0x18065E0EC (--$create_and_initialize@UWindowsTracker@factory_implementation@Shell@Internal@Windows@winrt@@$$.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ??0?$producers_base@UWindowsTracker@factory_implementation@Shell@Internal@Windows@winrt@@V?$tuple@UIActivationFactory@Foundation@Windows@winrt@@UIWindowsTrackerStatics@Shell@Internal@34@@std@@@impl@winrt@@QEAA@XZ @ 0x18065E668 (--0-$producers_base@UWindowsTracker@factory_implementation@Shell@Internal@Windows@winrt@@V-$tupl.c)
 *     ??0WindowsTracker@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18065E724 (--0WindowsTracker@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker *__fastcall winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker::WindowsTracker(
        winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker *this)
{
  _QWORD *v3; // [rsp+38h] [rbp+10h]

  winrt::impl::producers_base<winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker,std::tuple<winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::IWindowsTrackerStatics>>::producers_base<winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker,std::tuple<winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::IWindowsTrackerStatics>>((_QWORD *)this + 2);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *((_QWORD *)this + 1) = 1LL;
  *(_QWORD *)this = &winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker::`vftable';
  v3 = operator new(0x80uLL);
  memset_0(v3, 0, 0x80uLL);
  winrt::Windows::Internal::Shell::implementation::WindowsTracker::WindowsTracker((winrt::Windows::Internal::Shell::implementation::WindowsTracker *)v3);
  *v3 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::WindowsTracker>::`vftable';
  *((_QWORD *)this + 4) = v3 + 2;
  return this;
}
