/*
 * XREFs of ?Execute@SwitchUserInputNeededState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x18066DF00
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180052F5C (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?SetForegroundToLastRegistedProviderWindow@SwitchConnectStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXAEBUhstring@6@@Z @ 0x18066E904 (-SetForegroundToLastRegistedProviderWindow@SwitchConnectStateBase@implementation@Shell@Internal@.c)
 *     ?SwitchToDesktopForSystem@SwitchConnectStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXAEBUhstring@6@@Z @ 0x18066EF14 (-SwitchToDesktopForSystem@SwitchConnectStateBase@implementation@Shell@Internal@Windows@winrt@@IE.c)
 *     ?RemoteDesktopProviderInfo@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEBA?AU03456@XZ @ 0x18066FAB0 (-RemoteDesktopProviderInfo@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?DismissTransitionScreen@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@AEBW4DismissalReason@TransitionScreen@CloudDesktop@3456@@Z @ 0x180671B24 (-DismissTransitionScreen@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXA.c)
 *     ?ThrowIllegalStateTransition@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXW4CloudPCState@3456@0@Z @ 0x1806726D4 (-ThrowIllegalStateTransition@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IE.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::implementation::SwitchUserInputNeededState::Execute(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3)
{
  __int64 **v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r9
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+50h] [rbp+18h] BYREF
  volatile signed __int32 *v10; // [rsp+58h] [rbp+20h] BYREF

  if ( a3 )
  {
    if ( a3 != 1 && a3 != 99 )
      winrt::Windows::Internal::Shell::implementation::ConnectionStateBase::ThrowIllegalStateTransition(a1, a3, 2LL);
  }
  else
  {
    v5 = (__int64 **)winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::RemoteDesktopProviderInfo(
                       *a2,
                       v8);
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
      v5,
      &v10);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v8);
    winrt::Windows::Internal::Shell::implementation::SwitchConnectStateBase::SwitchToDesktopForSystem(
      (winrt::Windows::Internal::Shell::implementation::SwitchConnectStateBase *)(a1 + 8),
      (const struct winrt::hstring *)&v10);
    v9 = 4;
    winrt::Windows::Internal::Shell::implementation::ConnectionStateBase::DismissTransitionScreen(v6, a2, &v9, v7);
    winrt::Windows::Internal::Shell::implementation::SwitchConnectStateBase::SetForegroundToLastRegistedProviderWindow(
      (winrt::Windows::Internal::Shell::implementation::SwitchConnectStateBase *)(a1 + 8),
      (const struct winrt::hstring *)&v10);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v10);
  }
}
