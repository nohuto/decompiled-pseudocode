/*
 * XREFs of ??0?$produce@VLaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@impl@winrt@@QEAA@XZ @ 0x18029D578
 * Callers:
 *     ??0?$producer@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@UIDashboardActivator@3456@X@impl@winrt@@QEAA@XZ @ 0x18029D560 (--0-$producer@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@UIDashboardActiva.c)
 * Callees:
 *     ??0?$produce_base@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@UIDashboardActivator@3456@X@impl@winrt@@QEAA@XZ @ 0x18029D59C (--0-$produce_base@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@UIDashboardAc.c)
 */

_QWORD *winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler,winrt::Windows::Foundation::IInspectable>::produce<winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler,winrt::Windows::Foundation::IInspectable>()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  winrt::impl::produce_base<winrt::Windows::Internal::Shell::implementation::DashboardActivator,winrt::Windows::Internal::Shell::IDashboardActivator,void>::produce_base<winrt::Windows::Internal::Shell::implementation::DashboardActivator,winrt::Windows::Internal::Shell::IDashboardActivator,void>();
  result = v0;
  *v0 = &winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::DashboardActivator,winrt::Windows::Internal::Shell::IDashboardActivator>::`vftable';
  return result;
}
