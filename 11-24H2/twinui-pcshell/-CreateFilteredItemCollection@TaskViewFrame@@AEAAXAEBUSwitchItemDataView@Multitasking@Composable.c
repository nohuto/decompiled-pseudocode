/*
 * XREFs of ?CreateFilteredItemCollection@TaskViewFrame@@AEAAXAEBUSwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@@Z @ 0x1806BA714
 * Callers:
 *     ?RuntimeClassInitialize@TaskViewFrame@@QEAAJW4ALL_UP_VIEW_FLAGS@@PEAUIImmersiveMonitor@@1AEBUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@winrt@@AEBUSwitchItemDataView@6ComposableShell@89winrt@@AEBUIVirtualDesktopDataSource@6ComposableShell@89winrt@@AEBUIVirtualDesktopController@6ComposableShell@89winrt@@PE$AAUIXamlMultitaskingViewController@@PE$AAUIXamlSwitcherWindowInteractionEvents@@PEAUIApplicationViewCollection@@UTaskGroupDataSourceAdapter@TaskGroups@789winrt@@PEAUIRemoteSessionWindowManager@789ABI@@@Z @ 0x1806BBBD8 (-RuntimeClassInitialize@TaskViewFrame@@QEAAJW4ALL_UP_VIEW_FLAGS@@PEAUIImmersiveMonitor@@1AEBUIDe.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??1?$event_revoker@UISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@$MP8type@?$abi@UISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFI@AA@impl@winrt@@QEAA@XZ @ 0x180194940 (--1-$event_revoker@UISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@$MP.c)
 *     ??4?$event_revoker@UISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@$MP8type@?$abi@UISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFI@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x1802B98EC (--4-$event_revoker@UISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@$MP.c)
 *     ?EvaluateItem@?$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView@UISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@UIEvaluateItemEventArgs@23456@@Foundation@Windows@3@@Z @ 0x18069CA2C (-EvaluateItem@-$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView@UISwit.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_e3e19fb8e3910b5b1b332ab74641bcf6___ @ 0x1806B962C (winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Internal--ComposableS_ea_1806B962C.c)
 *     _lambda_e3e19fb8e3910b5b1b332ab74641bcf6_::_lambda_e3e19fb8e3910b5b1b332ab74641bcf6_ @ 0x1806B9DFC (_lambda_e3e19fb8e3910b5b1b332ab74641bcf6_--_lambda_e3e19fb8e3910b5b1b332ab74641bcf6_.c)
 *     _lambda_e3e19fb8e3910b5b1b332ab74641bcf6_::_lambda_e3e19fb8e3910b5b1b332ab74641bcf6__0 @ 0x1806B9E58 (_lambda_e3e19fb8e3910b5b1b332ab74641bcf6_--_lambda_e3e19fb8e3910b5b1b332ab74641bcf6__0.c)
 *     _lambda_e3e19fb8e3910b5b1b332ab74641bcf6_::__lambda_e3e19fb8e3910b5b1b332ab74641bcf6_ @ 0x1806BA0C8 (_lambda_e3e19fb8e3910b5b1b332ab74641bcf6_--__lambda_e3e19fb8e3910b5b1b332ab74641bcf6_.c)
 *     ?CreateView@?$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataSource@USwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1806BB374 (-CreateView@-$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataSource@USwitc.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TaskViewFrame::CreateFilteredItemCollection(
        TaskViewFrame *this,
        const struct winrt::Windows::Internal::ComposableShell::Multitasking::SwitchItemDataView *a2)
{
  __int64 *v3; // rax
  __int64 *v4; // rax
  __int64 v5; // r8
  __int64 *v6; // rax
  __int64 v7[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v8[4]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v9[4]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v10; // [rsp+90h] [rbp+10h] BYREF

  v3 = (__int64 *)winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataSource<winrt::Windows::Internal::ComposableShell::Multitasking::SwitchItemDataView>::CreateView(
                    a2,
                    &v10);
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 11, v3);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
  lambda_e3e19fb8e3910b5b1b332ab74641bcf6_::_lambda_e3e19fb8e3910b5b1b332ab74641bcf6__0(
    v8,
    (__int64 *)this + 2,
    (_QWORD *)this + 13,
    (_QWORD *)this + 14,
    (__int64 *)this + 4);
  v4 = lambda_e3e19fb8e3910b5b1b332ab74641bcf6_::_lambda_e3e19fb8e3910b5b1b332ab74641bcf6_(v9, v8);
  winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_e3e19fb8e3910b5b1b332ab74641bcf6___(
    &v10,
    v4);
  v6 = winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView>::EvaluateItem(
         (__int64 **)this + 11,
         v7,
         v5,
         &v10);
  __4__event_revoker_UISwitchItemDataView_Multitasking_ComposableShell_Internal_Windows_winrt___MP8type___abi_UISwitchItemDataView_Multitasking_ComposableShell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFI_AA_impl_winrt__QEAAAEAU012___QEAU012__Z(
    (__int64 *)this + 25,
    v6);
  __1__event_revoker_UISwitchItemDataView_Multitasking_ComposableShell_Internal_Windows_winrt___MP8type___abi_UISwitchItemDataView_Multitasking_ComposableShell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFI_AA_impl_winrt__QEAA_XZ(v7);
  if ( v10 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v10);
  lambda_e3e19fb8e3910b5b1b332ab74641bcf6_::__lambda_e3e19fb8e3910b5b1b332ab74641bcf6_(v8);
}
