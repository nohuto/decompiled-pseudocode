/*
 * XREFs of ??1?$com_ptr@VListenerWindow@@@winrt@@QEAA@XZ @ 0x18029321C
 * Callers:
 *     ??1TouchEdgeGestureManager@@UEAA@XZ @ 0x1800CFA50 (--1TouchEdgeGestureManager@@UEAA@XZ.c)
 *     ?DelayInitialize@TouchEdgeGestureManager@@QEAAXXZ @ 0x1800D2F8C (-DelayInitialize@TouchEdgeGestureManager@@QEAAXXZ.c)
 *     ?get_strong@?$implements@VTouchEdgeGripperHost@@UIInspectable@Foundation@Windows@winrt@@@winrt@@QEAA?AU?$com_ptr@VTouchEdgeGripperHost@@@2@XZ @ 0x1801E8A5C (-get_strong@-$implements@VTouchEdgeGripperHost@@UIInspectable@Foundation@Windows@winrt@@@winrt@@.c)
 *     ??1?$com_ptr@VTouchEdgeGripperHost@@@winrt@@QEAA@XZ @ 0x1802D0DE4 (--1-$com_ptr@VTouchEdgeGripperHost@@@winrt@@QEAA@XZ.c)
 *     _lambda_7c27b082a2d594abdbf5dd9e5359180a_::_lambda_invoker_cdecl_ @ 0x180594770 (_lambda_7c27b082a2d594abdbf5dd9e5359180a_--_lambda_invoker_cdecl_.c)
 *     TouchEdgeGripperHost::CreateGripperWindowAsync$_ResumeCoro$1 @ 0x180594CA0 (TouchEdgeGripperHost--CreateGripperWindowAsync$_ResumeCoro$1.c)
 *     TouchEdgeGripperHost::DismissGripperWindowAsync$_ResumeCoro$1 @ 0x180595230 (TouchEdgeGripperHost--DismissGripperWindowAsync$_ResumeCoro$1.c)
 *     ?EnsureXamlHostThreadStarted@TouchEdgeGripperHost@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180595688 (-EnsureXamlHostThreadStarted@TouchEdgeGripperHost@@AEAAXAEBV-$unique_any_t@V-$unique_storage@U-$.c)
 *     TouchEdgeGripperHost::HideGripperAsync$_ResumeCoro$1 @ 0x1805957F0 (TouchEdgeGripperHost--HideGripperAsync$_ResumeCoro$1.c)
 *     winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_e0b0b8eaa13602b9fabc447bd0975459___::Invoke @ 0x1805959F0 (winrt--impl--delegate_winrt--Windows--System--Threading--TimerElapsedHandler__lambda_e0b0b8eaa13.c)
 *     TouchEdgeGripperHost::NotifyGripperDismissedIfNecessaryAsync$_ResumeCoro$1 @ 0x180595C00 (TouchEdgeGripperHost--NotifyGripperDismissedIfNecessaryAsync$_ResumeCoro$1.c)
 *     TouchEdgeGripperHost::NotifyGripperPressedAsync$_ResumeCoro$1 @ 0x180595E20 (TouchEdgeGripperHost--NotifyGripperPressedAsync$_ResumeCoro$1.c)
 *     TouchEdgeGripperHost::ShowGripperAsync$_ResumeCoro$1 @ 0x180596010 (TouchEdgeGripperHost--ShowGripperAsync$_ResumeCoro$1.c)
 *     _winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs::GetDeferral_::_1_::dtor$0 @ 0x1806D9036 (_winrt--WindowsUdk--UI--Shell--implementation--SearchAppActivatedEventArgs--GetDeferral_--_1_--d.c)
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::MeetAndChatManager_::_1_::dtor$1 @ 0x1806FDDB0 (_winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--MeetAndChatMa_ea_1806FDDB0.c)
 *     __lambda_00799cc444f9312ab8cc556666836ecb_::operator()_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner_const_&_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs_const_&__::_1_::dtor$0 @ 0x180704812 (__lambda_00799cc444f9312ab8cc556666836ecb_--operator()_winrt--Windows--UI--Composition--Internal.c)
 *     _winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager::CreateWithShellViewCoordinatorMap_::_1_::dtor$0 @ 0x180704918 (_winrt--Windows--Internal--Shell--Animations--implementation--EdgeAnimationRelation_ea_180704918.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@VTouchEdgeGripperHost@@@winrt@@AEAAXXZ @ 0x180293140 (-unconditional_release_ref@-$com_ptr@VTouchEdgeGripperHost@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::com_ptr<ListenerWindow>::~com_ptr<ListenerWindow>(_QWORD **a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<TouchEdgeGripperHost>::unconditional_release_ref(a1);
  return result;
}
