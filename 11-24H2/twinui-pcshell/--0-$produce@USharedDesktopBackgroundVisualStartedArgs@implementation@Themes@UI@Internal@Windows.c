/*
 * XREFs of ??0?$produce@USharedDesktopBackgroundVisualStartedArgs@implementation@Themes@UI@Internal@Windows@winrt@@UISharedDesktopBackgroundVisualStartedArgs@34567@@impl@winrt@@QEAA@XZ @ 0x180608794
 * Callers:
 *     ??0?$producer@USharedDesktopBackgroundVisualStartedArgs@implementation@Themes@UI@Internal@Windows@winrt@@UISharedDesktopBackgroundVisualStartedArgs@34567@X@impl@winrt@@QEAA@XZ @ 0x180608818 (--0-$producer@USharedDesktopBackgroundVisualStartedArgs@implementation@Themes@UI@Internal@Window.c)
 * Callees:
 *     ??0?$produce_base@UWindowsTracker@factory_implementation@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@56@X@impl@winrt@@QEAA@XZ @ 0x1805FA710 (--0-$produce_base@UWindowsTracker@factory_implementation@Shell@Internal@Windows@winrt@@UIActivat.c)
 */

_QWORD *__fastcall winrt::impl::produce<winrt::Windows::Internal::UI::Themes::implementation::SharedDesktopBackgroundVisualStartedArgs,winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualStartedArgs>::produce<winrt::Windows::Internal::UI::Themes::implementation::SharedDesktopBackgroundVisualStartedArgs,winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualStartedArgs>(
        _QWORD *a1)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  winrt::impl::produce_base<winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker,winrt::Windows::Foundation::IActivationFactory,void>::produce_base<winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker,winrt::Windows::Foundation::IActivationFactory,void>(a1);
  result = v1;
  *v1 = &winrt::impl::produce<winrt::Windows::Internal::UI::Themes::implementation::SharedDesktopBackgroundVisualStartedArgs,winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualStartedArgs>::`vftable';
  return result;
}
