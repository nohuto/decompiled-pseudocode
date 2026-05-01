/*
 * XREFs of ??1TaskViewHost@@UEAA@XZ @ 0x1806A3D8C
 * Callers:
 *     ??_ETaskViewHost@@UEAAPEAXI@Z @ 0x1806A42A0 (--_ETaskViewHost@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x18001D4DC (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180040900 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??1?$event_revoker@UISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@$MP8type@?$abi@UISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFI@AA@impl@winrt@@QEAA@XZ @ 0x180194940 (--1-$event_revoker@UISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@$MP.c)
 *     ??1?$event_revoker@UIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@$MP8type@?$abi@UIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@impl@winrt@@QEAA@XZ @ 0x1802AD654 (--1-$event_revoker@UIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@winr.c)
 *     ??1ShowXamlTaskView@XamlSwitcherTelemetry@@QEAA@XZ @ 0x1802B28C4 (--1ShowXamlTaskView@XamlSwitcherTelemetry@@QEAA@XZ.c)
 *     EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::_EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___ @ 0x1802C565C (EventRegistrationHelpers--EventListener_IVirtualDesktopNotificationService_IVirtual_ea_1802C565C.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802CE7F0 (--1-$com_ptr_t@V-$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_return.c)
 *     ??1?$EventListener@UITabletModeController@@UITabletModeChangeListener@@VTabletModeChangeRegistration@@@EventRegistrationHelpers@@QEAA@XZ @ 0x1804B1014 (--1-$EventListener@UITabletModeController@@UITabletModeChangeListener@@VTabletModeChangeRegistra.c)
 *     ??1?$event_revoker@UIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@winrt@@$MP8type@?$abi@UIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BEI@AA@impl@winrt@@QEAA@XZ @ 0x1806A3CBC (--1-$event_revoker@UIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@winr.c)
 */

void __fastcall TaskViewHost::~TaskViewHost(TaskViewHost *this)
{
  __int64 *v2; // rcx

  wil::com_ptr_t<tip2::details::merged_data<SwitcherTip::_tip_TaskViewShowTest,SwitcherTip::_tip_TaskViewShowTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<SwitcherTip::_tip_TaskViewShowTest,SwitcherTip::_tip_TaskViewShowTest>,wil::err_returncode_policy>((void **)this + 95);
  __1__event_revoker_UIVirtualDesktopCollection_Multitasking_ComposableShell_Internal_Windows_winrt___MP8type___abi_UIVirtualDesktopCollection_Multitasking_ComposableShell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BEI_AA_impl_winrt__QEAA_XZ((__int64 *)this + 91);
  __1__event_revoker_UIVirtualDesktopDataSource_Multitasking_ComposableShell_Internal_Windows_winrt___MP8type___abi_UIVirtualDesktopDataSource_Multitasking_ComposableShell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFA_AA_impl_winrt__QEAA_XZ((__int64 *)this + 89);
  __1__event_revoker_UISwitchItemDataView_Multitasking_ComposableShell_Internal_Windows_winrt___MP8type___abi_UISwitchItemDataView_Multitasking_ComposableShell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFI_AA_impl_winrt__QEAA_XZ((__int64 *)this + 87);
  XamlSwitcherTelemetry::ShowXamlTaskView::~ShowXamlTaskView((TaskViewHost *)((char *)this + 360));
  v2 = (__int64 *)*((_QWORD *)this + 40);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>>(
      v2,
      *((__int64 **)this + 41));
    std::_Deallocate<16,0>(
      *((void **)this + 40),
      (const struct std::nothrow_t *)((*((_QWORD *)this + 42) - *((_QWORD *)this + 40)) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 40) = 0LL;
    *((_QWORD *)this + 41) = 0LL;
    *((_QWORD *)this + 42) = 0LL;
  }
  EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::_EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___((__int64)this + 304);
  EventRegistrationHelpers::EventListener<ITabletModeController,ITabletModeChangeListener,TabletModeChangeRegistration>::~EventListener<ITabletModeController,ITabletModeChangeListener,TabletModeChangeRegistration>((__int64)this + 288);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 34);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 33);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 32);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 31);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 30);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 29);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 28);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 27);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(*((_QWORD *)this + 26));
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((TaskViewHost *)((char *)this + 200));
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((TaskViewHost *)((char *)this + 192));
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((TaskViewHost *)((char *)this + 184));
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((TaskViewHost *)((char *)this + 176));
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((TaskViewHost *)((char *)this + 168));
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((TaskViewHost *)((char *)this + 160));
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((TaskViewHost *)((char *)this + 152));
  *((_DWORD *)this + 37) = -1073741823;
  CMultitaskingViewHostBase<ISnapAssistViewHost>::~CMultitaskingViewHostBase<ISnapAssistViewHost>((__int64)this);
}
