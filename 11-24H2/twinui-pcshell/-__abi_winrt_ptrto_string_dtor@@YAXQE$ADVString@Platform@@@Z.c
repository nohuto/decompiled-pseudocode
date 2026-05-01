/*
 * XREFs of ?__abi_winrt_ptrto_string_dtor@@YAXQE$ADVString@Platform@@@Z @ 0x1802BB818
 * Callers:
 *     _XamlAllUpViewController::CreateVirtualDesktopContextMenuItems_::_1_::dtor$10 @ 0x1806D7DEB (_XamlAllUpViewController--CreateVirtualDesktopContextMenuItems_--_1_--dtor$10.c)
 *     _Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop::Name::get_::_1_::dtor$0 @ 0x1806D7DFD (_Windows--Internal--ComposableShell--Multitasking--IVirtualDesktop--Name--get_--_1_--dtor$0.c)
 *     _XamlAllUpViewController::[IXamlMultitaskingViewController]::GetContextMenu_::_1_::dtor$9 @ 0x1806DAD6A (_XamlAllUpViewController--[IXamlMultitaskingViewController]--GetContextMenu_--_1_--dtor$9.c)
 *     _XamlGamingTaskViewHost::CreateGamingTaskBarViewModelAsync$_ResumeCoro$1_::_1_::dtor$4 @ 0x180704B1C (_XamlGamingTaskViewHost--CreateGamingTaskBarViewModelAsync$_ResumeCoro$1_--_1_--dtor$4.c)
 *     _VirtualDesktopSwitcherHost::CreateXaml_::_1_::dtor$3 @ 0x18070594E (_VirtualDesktopSwitcherHost--CreateXaml_--_1_--dtor$3.c)
 *     _XamlAllUpViewController::CreateVirtualDesktopContextMenuItems_::_1_::dtor$20 @ 0x180705987 (_XamlAllUpViewController--CreateVirtualDesktopContextMenuItems_--_1_--dtor$20.c)
 *     _VirtualDesktopSwitcherHost::CreateXaml_::_1_::dtor$11 @ 0x1807059E4 (_VirtualDesktopSwitcherHost--CreateXaml_--_1_--dtor$11.c)
 *     _TaskViewFrame::CreateTaskViewTimelineControl_::_1_::dtor$14 @ 0x180705A17 (_TaskViewFrame--CreateTaskViewTimelineControl_--_1_--dtor$14.c)
 *     _XamlAllUpViewController::[IXamlMultitaskingViewController]::GetContextMenu_::_1_::dtor$10 @ 0x180706196 (_XamlAllUpViewController--[IXamlMultitaskingViewController]--GetContextMenu_--_1_--dtor$10.c)
 *     _XamlAllUpViewController::GetResourceString_::_1_::dtor$1 @ 0x180706205 (_XamlAllUpViewController--GetResourceString_--_1_--dtor$1.c)
 *     _XamlAllUpViewController::GetTabletModeContextMenuItemString_::_1_::dtor$3 @ 0x180706262 (_XamlAllUpViewController--GetTabletModeContextMenuItemString_--_1_--dtor$3.c)
 *     _TaskViewFrame::CreateTaskViewTimelineControl_::_1_::dtor$19 @ 0x180706682 (_TaskViewFrame--CreateTaskViewTimelineControl_--_1_--dtor$19.c)
 *     _TaskViewFrame::CreateTaskViewTimelineControl_::_1_::dtor$8 @ 0x1807066BE (_TaskViewFrame--CreateTaskViewTimelineControl_--_1_--dtor$8.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall __abi_winrt_ptrto_string_dtor(HSTRING string)
{
  return WindowsDeleteString_0(string);
}
