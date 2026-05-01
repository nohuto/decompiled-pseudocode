/*
 * XREFs of ??1?$test_watcher@V?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180658BB0
 * Callers:
 *     _lambda_d6825c428197dee9c36f361ea1d02b0a_::operator() @ 0x180659730 (_lambda_d6825c428197dee9c36f361ea1d02b0a_--operator().c)
 *     ?HandleConnectionStateChange@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x18066E310 (-HandleConnectionStateChange@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt.c)
 *     ?RecreateDesktopWithViewsAssociation@SwitchConnectStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXAEBUhstring@6@@Z @ 0x18066E55C (-RecreateDesktopWithViewsAssociation@SwitchConnectStateBase@implementation@Shell@Internal@Window.c)
 *     ?ShowTransitionScreen@SwitchConnectingState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@AEBUhstring@6@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@8@@Z @ 0x18066ED90 (-ShowTransitionScreen@SwitchConnectingState@implementation@Shell@Internal@Windows@winrt@@UEAAXAE.c)
 *     ?SwitchToDesktopForSystem@SwitchConnectStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXAEBUhstring@6@@Z @ 0x18066EF14 (-SwitchToDesktopForSystem@SwitchConnectStateBase@implementation@Shell@Internal@Windows@winrt@@IE.c)
 *     ?DismissTransitionScreen@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@AEBW4DismissalReason@TransitionScreen@CloudDesktop@3456@@Z @ 0x180671B24 (-DismissTransitionScreen@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXA.c)
 *     ?HandleConnectionStateChange@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x180671DC0 (-HandleConnectionStateChange@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAA.c)
 *     ?ShowTransitionScreen@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@MEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@AEBUhstring@6@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@8@@Z @ 0x180672540 (-ShowTransitionScreen@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@MEAAXAEBV.c)
 *     __lambda_d6825c428197dee9c36f361ea1d02b0a_::operator()_::_1_::dtor$13 @ 0x180702771 (__lambda_d6825c428197dee9c36f361ea1d02b0a_--operator()_--_1_--dtor$13.c)
 *     _winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::HandleConnectionStateChange_::_1_::dtor$0 @ 0x180703B29 (_winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--HandleConnectionState.c)
 *     _winrt::Windows::Internal::Shell::implementation::SwitchConnectStateBase::RecreateDesktopWithViewsAssociation_::_1_::dtor$0 @ 0x180703B4D (_winrt--Windows--Internal--Shell--implementation--SwitchConnectStateBase--RecreateD_ea_180703B4D.c)
 *     _winrt::Windows::Internal::Shell::implementation::ConnectionStateBase::ThrowIllegalStateTransition_::_1_::dtor$0 @ 0x180703BB9 (_winrt--Windows--Internal--Shell--implementation--ConnectionStateBase--ThrowIllegal_ea_180703BB9.c)
 *     _winrt::Windows::Internal::Shell::implementation::ConnectionStateBase::DismissTransitionScreen_::_1_::dtor$0 @ 0x180703BDD (_winrt--Windows--Internal--Shell--implementation--ConnectionStateBase--DismissTransitionScreen_-.c)
 *     _winrt::Windows::Internal::Shell::implementation::ConnectionStateBase::ShowTransitionScreen_::_1_::dtor$0 @ 0x180703CAC (_winrt--Windows--Internal--Shell--implementation--ConnectionStateBase--ShowTransiti_ea_180703CAC.c)
 * Callees:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1806588D8 (--1-$com_ptr_t@V-$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@Uerr_r.c)
 */

void __fastcall tip2::test_watcher<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>::~test_watcher<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>(
        __int64 a1)
{
  wil::com_ptr_t<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>,wil::err_returncode_policy>((void **)(a1 + 56));
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
