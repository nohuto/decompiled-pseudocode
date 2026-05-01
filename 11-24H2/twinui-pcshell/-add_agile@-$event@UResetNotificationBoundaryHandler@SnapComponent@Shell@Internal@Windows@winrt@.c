/*
 * XREFs of ?add_agile@?$event@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@AEAA?AUevent_token@2@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@2@@Z @ 0x1805BAAF8
 * Callers:
 *     ?ResetNotificationBoundary@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SA?AUevent_token@7@AEBUResetNotificationBoundaryHandler@34567@@Z @ 0x1802CB130 (-ResetNotificationBoundary@DesktopSnapLayoutManager@implementation@SnapComponent@Sh_ea_1802CB130.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??4?$com_ptr@U?$event_array@U?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x180055008 (--4-$com_ptr@U-$event_array@U-$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x180055048 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@USearchAppHost@Shell@UI.c)
 *     ??$make_event_array@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$com_ptr@U?$event_array@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@1@I@Z @ 0x18020BD28 (--$make_event_array@U-$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt.c)
 *     ?get_token@?$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@AEBA?AUevent_token@2@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@2@@Z @ 0x18021AEE0 (-get_token@-$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt.c)
 *     ??$exchange@U?$com_ptr@U?$event_array@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@@winrt@@U12@@std@@YA?AU?$com_ptr@U?$event_array@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@@winrt@@AEAU12@$$QEAU12@@Z @ 0x1802C853C (--$exchange@U-$com_ptr@U-$event_array@UResetNotificationBoundaryHandler@SnapComponent@Shell@Inte.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1802D2A74 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1802D2A8C (__Platform_AcquireSRWLockExclusive.c)
 *     ??$copy_n@PEAU?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@Foundation@Windows@winrt@@IPEAU1234@@std@@YAPEAU?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@Foundation@Windows@winrt@@PEAU1234@I0@Z @ 0x180339E88 (--$copy_n@PEAU-$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWind.c)
 */

// Hidden C++ exception states: #wind=3
PVOID *__fastcall winrt::event<winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler>::add_agile(
        __int64 a1,
        PVOID *a2,
        _QWORD *a3)
{
  unsigned int v5; // edx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 *v9; // rax
  __int64 v11; // [rsp+50h] [rbp+30h] BYREF
  __int64 v12; // [rsp+58h] [rbp+38h] BYREF
  PVOID v13; // [rsp+60h] [rbp+40h] BYREF
  RTL_SRWLOCK *v14; // [rsp+68h] [rbp+48h]

  v13 = a3;
  v11 = a1;
  *a2 = 0LL;
  v12 = 0LL;
  v14 = &stru_1808C97C8;
  _Platform_AcquireSRWLockExclusive(&stru_1808C97C8);
  v5 = 1;
  if ( winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::m_resetNotificationBoundary )
    v5 = *(_DWORD *)(winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::m_resetNotificationBoundary
                   + 4)
       + 1;
  winrt::impl::make_event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs>>(
    &v11,
    v5);
  v6 = v11;
  if ( winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::m_resetNotificationBoundary )
    std::copy_n<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs> *,unsigned int,winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs> *>(
      (__int64 *)(winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::m_resetNotificationBoundary
                + 8),
      *(_DWORD *)(winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::m_resetNotificationBoundary
                + 4),
      (__int64 *)(v11 + 8));
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)(v6 + 8LL * *(unsigned int *)(v6 + 4)), a3);
  *a2 = *winrt::event<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>::get_token(
           v7,
           &v13,
           (PVOID *)(v6 + 8LL * *(unsigned int *)(v6 + 4)));
  _Platform_AcquireSRWLockExclusive(&SRWLock);
  v9 = std::exchange<winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler>>,winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler>>>(
         (__int64 *)&v13,
         v8,
         &v11);
  winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::Windows::Foundation::Point>>>::operator=(
    &v12,
    v9);
  if ( v13 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref((__int64 *)&v13);
  ReleaseSRWLockExclusive_0(&SRWLock);
  if ( v11 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref(&v11);
  ReleaseSRWLockExclusive_0(&stru_1808C97C8);
  if ( v12 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref(&v12);
  if ( *a3 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(a3);
  return a2;
}
