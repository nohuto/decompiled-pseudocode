/*
 * XREFs of ??1?$com_ptr@U?$event_array@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@QEAA@XZ @ 0x180050F44
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::UpdateTabsForWindow_::_1_::dtor$29 @ 0x1806CC9CE (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--UpdateTabsForWindo_ea_1806CC9CE.c)
 *     _winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::TaskGroupsComponent_::_1_::dtor$14 @ 0x1806D4506 (_winrt--Windows--Internal--Shell--TaskGroups--implementation--TaskGroupsComponent--_ea_1806D4506.c)
 *     _winrt::event_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost_winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs___::operator()_winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent_winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs__::_1_::dtor$0 @ 0x1806D4B42 (_winrt--event_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Internal--Shell--Tas.c)
 *     _winrt::event_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost_winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs___::remove_::_1_::dtor$0 @ 0x1806D7DC7 (_winrt--event_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Interna_ea_1806D7DC7.c)
 *     _winrt::event_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost_winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs___::remove_::_1_::dtor$2 @ 0x1806D7DD9 (_winrt--event_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Interna_ea_1806D7DD9.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::WindowTabHost_::_1_::dtor$17 @ 0x1806D91FC (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--WindowTabHost_--_1_--dtor$17.c)
 *     _winrt::event_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost_winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs___::add_agile_::_1_::dtor$1 @ 0x1806F434A (_winrt--event_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Interna_ea_1806F434A.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x180051504 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@UIWindowTabExtension@Sh.c)
 */

__int64 __fastcall winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs>>>::~com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs>>>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>>::unconditional_release_ref();
  return result;
}
