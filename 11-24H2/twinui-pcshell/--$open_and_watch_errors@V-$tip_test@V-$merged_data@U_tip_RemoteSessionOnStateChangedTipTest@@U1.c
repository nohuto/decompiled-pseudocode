/*
 * XREFs of ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x18066C6C0
 * Callers:
 *     ?HandleConnectionStateChange@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x18066E310 (-HandleConnectionStateChange@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt.c)
 *     ?RecreateDesktopWithViewsAssociation@SwitchConnectStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXAEBUhstring@6@@Z @ 0x18066E55C (-RecreateDesktopWithViewsAssociation@SwitchConnectStateBase@implementation@Shell@Internal@Window.c)
 *     ?ShowTransitionScreen@SwitchConnectingState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@AEBUhstring@6@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@8@@Z @ 0x18066ED90 (-ShowTransitionScreen@SwitchConnectingState@implementation@Shell@Internal@Windows@winrt@@UEAAXAE.c)
 *     ?SwitchToDesktopForSystem@SwitchConnectStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXAEBUhstring@6@@Z @ 0x18066EF14 (-SwitchToDesktopForSystem@SwitchConnectStateBase@implementation@Shell@Internal@Windows@winrt@@IE.c)
 *     ?DismissTransitionScreen@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@AEBW4DismissalReason@TransitionScreen@CloudDesktop@3456@@Z @ 0x180671B24 (-DismissTransitionScreen@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXA.c)
 *     ?HandleConnectionStateChange@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x180671DC0 (-HandleConnectionStateChange@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAA.c)
 *     ?ShowTransitionScreen@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@MEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@AEBUhstring@6@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@8@@Z @ 0x180672540 (-ShowTransitionScreen@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@MEAAXAEBV.c)
 *     ?ThrowIllegalStateTransition@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXW4CloudPCState@3456@0@Z @ 0x1806726D4 (-ThrowIllegalStateTransition@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IE.c)
 * Callees:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1806588D8 (--1-$com_ptr_t@V-$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@Uerr_r.c)
 *     ?watch_errors@?$tip_test@V?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@@2@XZ @ 0x18065DDE8 (-watch_errors@-$tip_test@V-$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@ti.c)
 *     ?open_helper@?$tip_test@V?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@@tip2@@AEAA_NPEAU_GUID@@@Z @ 0x18066F880 (-open_helper@-$tip_test@V-$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip.c)
 */

__int64 __fastcall tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>>(
        __int64 a1)
{
  void *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  tip2::tip_test<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>::open_helper(&v3);
  tip2::tip_test<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>>::watch_errors(
    &v3,
    a1);
  wil::com_ptr_t<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>,wil::err_returncode_policy>(&v3);
  return a1;
}
