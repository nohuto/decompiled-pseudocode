/*
 * XREFs of ??1CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18063F000
 * Callers:
 *     ??1?$module_count_wrapper@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x18063EE80 (--1-$module_count_wrapper@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@@detail.c)
 *     ??_GCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x18063FA18 (--_GCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z.c)
 *     _winrt::impl::heap_implements_wil::details::module_count_wrapper_winrt::Windows::Internal::Shell::implementation::CloudPCComponent___::heap_implements_wil::details::module_count_wrapper_winrt::Windows::Internal::Shell::implementation::CloudPCComponent____::_1_::dtor$1 @ 0x180701859 (_winrt--impl--heap_implements_wil--details--module_count_wrapper_winrt--Windows--In_ea_180701859.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800EEFFC (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::CloudPCComponent::~CloudPCComponent(
        winrt::Windows::Internal::Shell::implementation::CloudPCComponent *this,
        struct wil::details::wnf_subscription_state_base *a2)
{
  wil::details *v3; // rcx
  std::_Ref_count_base *v4; // rcx
  wil::details *v5; // rcx

  v3 = (wil::details *)*((_QWORD *)this + 18);
  if ( v3 )
    wil::details::delete_wnf_subscription_state(v3, a2);
  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 17);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  v5 = (wil::details *)*((_QWORD *)this + 14);
  if ( v5 )
    wil::details::delete_wnf_subscription_state(v5, a2);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::implementation::CloudPCComponent *)((char *)this + 104));
  winrt::immersive_shell_component::~immersive_shell_component(this);
}
