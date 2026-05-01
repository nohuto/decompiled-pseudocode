/*
 * XREFs of ?Execute@SwitchConnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x18066DA40
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180052F5C (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?Get@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$com_ptr@UIVirtualDesktop@@@6@AEBUhstring@6@@Z @ 0x18066AC38 (-Get@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA-AU-$com_ptr@UIVir.c)
 *     ?SetForegroundToLastRegistedProviderWindow@SwitchConnectStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXAEBUhstring@6@@Z @ 0x18066E904 (-SetForegroundToLastRegistedProviderWindow@SwitchConnectStateBase@implementation@Shell@Internal@.c)
 *     ?RemoteDesktopProviderInfo@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEBA?AU03456@XZ @ 0x18066FAB0 (-RemoteDesktopProviderInfo@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?DismissTransitionScreen@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@AEBW4DismissalReason@TransitionScreen@CloudDesktop@3456@@Z @ 0x180671B24 (-DismissTransitionScreen@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXA.c)
 *     ?ThrowIllegalStateTransition@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXW4CloudPCState@3456@0@Z @ 0x1806726D4 (-ThrowIllegalStateTransition@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectedState::Execute(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3)
{
  __int64 **v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 **v9; // rax
  volatile signed __int32 *v10; // rbx
  __int64 v11; // rcx
  volatile signed __int32 *v12; // [rsp+20h] [rbp-40h] BYREF
  volatile signed __int32 *v13; // [rsp+28h] [rbp-38h] BYREF
  __int128 v14; // [rsp+30h] [rbp-30h] BYREF
  __int128 v15; // [rsp+40h] [rbp-20h] BYREF

  if ( a3 )
  {
    if ( a3 != 2 && a3 != 99 )
      winrt::Windows::Internal::Shell::implementation::ConnectionStateBase::ThrowIllegalStateTransition(a1, a3, 1LL);
  }
  else
  {
    v6 = (__int64 **)winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::RemoteDesktopProviderInfo(
                       *a2,
                       &v14);
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
      v6,
      &v12);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
    LODWORD(v13) = 3;
    winrt::Windows::Internal::Shell::implementation::ConnectionStateBase::DismissTransitionScreen(v7, a2, &v13, v8);
    winrt::Windows::Internal::Shell::implementation::SwitchConnectStateBase::SetForegroundToLastRegistedProviderWindow(
      (winrt::Windows::Internal::Shell::implementation::SwitchConnectStateBase *)(a1 + 8),
      (const struct winrt::hstring *)&v12);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v12);
  }
  if ( *(_QWORD *)(a1 + 96) && a3 != 99 )
  {
    v9 = (__int64 **)winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::RemoteDesktopProviderInfo(
                       *a2,
                       &v14);
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
      v9,
      &v13);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
    winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection::Get(
      *(RTL_SRWLOCK **)(a1 + 16),
      (__int64 *)&v12,
      (__int64 *)&v13);
    v10 = v12;
    if ( v12 )
    {
      v14 = 0LL;
      if ( (*(int (__fastcall **)(volatile signed __int32 *, __int128 *))(*(_QWORD *)v12 + 32LL))(v12, &v14) >= 0 )
      {
        v15 = v14;
        v11 = *(_QWORD *)(a1 + 96);
        if ( !v11 )
        {
          std::_Xbad_function_call();
          __debugbreak();
        }
        (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v11 + 16LL))(v11, &v15);
      }
    }
    if ( v10 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v12);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v13);
  }
}
