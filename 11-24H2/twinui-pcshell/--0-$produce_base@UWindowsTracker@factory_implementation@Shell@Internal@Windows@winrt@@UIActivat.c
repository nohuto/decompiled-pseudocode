/*
 * XREFs of ??0?$produce_base@UWindowsTracker@factory_implementation@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@56@X@impl@winrt@@QEAA@XZ @ 0x1805FA710
 * Callers:
 *     ??0?$produce@VWindowRegistration@@UIClosable@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x1805FA6EC (--0-$produce@VWindowRegistration@@UIClosable@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ.c)
 *     ??0?$produce@USharedDesktopBackgroundVisualStartedArgs@implementation@Themes@UI@Internal@Windows@winrt@@UISharedDesktopBackgroundVisualStartedArgs@34567@@impl@winrt@@QEAA@XZ @ 0x180608794 (--0-$produce@USharedDesktopBackgroundVisualStartedArgs@implementation@Themes@UI@Internal@Windows.c)
 *     ??0?$produce@UWindowsTracker@factory_implementation@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@56@@impl@winrt@@QEAA@XZ @ 0x18065E5A8 (--0-$produce@UWindowsTracker@factory_implementation@Shell@Internal@Windows@winrt@@UIActivationFa.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall winrt::impl::produce_base<winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker,winrt::Windows::Foundation::IActivationFactory,void>::produce_base<winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker,winrt::Windows::Foundation::IActivationFactory,void>(
        _QWORD *a1)
{
  *a1 = &winrt::impl::produce_base<WindowRegistration,winrt::Windows::Foundation::IClosable,void>::`vftable';
  return a1;
}
