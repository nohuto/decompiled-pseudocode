/*
 * XREFs of ?TryGetInstallStatus@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AUMeetAndChatInstallStatus@3456@XZ @ 0x1805F6FF0
 * Callers:
 *     ?TryGetInstallStatus@?$produce@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UIMeetAndChatManager@3456@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1805F6FA0 (-TryGetInstallStatus@-$produce@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180120A50 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1801343EC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?Status@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180288C5C (-Status@-$consume_Windows_Foundation_IAsyncInfo@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@.c)
 *     ??$create_and_initialize@UMeetAndChatInstallStatus@implementation@Shell@Internal@Windows@winrt@@W4AsyncStatus@Foundation@56@AEAUMeetAndChatInstallProgress@MeetAndChat@3456@AEAUMeetAndChatInstallResult@MeetAndChat@3456@@impl@winrt@@YAPEAUMeetAndChatInstallStatus@implementation@Shell@Internal@Windows@1@$$QEAW4AsyncStatus@Foundation@61@AEAUMeetAndChatInstallProgress@MeetAndChat@4561@AEAUMeetAndChatInstallResult@MeetAndChat@4561@@Z @ 0x1805F1794 (--$create_and_initialize@UMeetAndChatInstallStatus@implementation@Shell@Internal@Windows@winrt@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::TryGetInstallStatus(
        __int64 a1,
        __int64 *a2)
{
  _QWORD *v4; // rax
  __int64 **v5; // rdx
  __int64 v6; // rax
  char v7; // bl
  char v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v10; // [rsp+48h] [rbp+10h] BYREF
  RTL_SRWLOCK *v11; // [rsp+50h] [rbp+18h] BYREF

  v10 = a2;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(&v11, (RTL_SRWLOCK *)(a1 + 112));
  if ( *(_QWORD *)(a1 + 264) )
  {
    LODWORD(v10) = winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperation<bool>>::Status((__int64 (__fastcall ****)(_QWORD, __int64 *, __int64 *))(a1 + 264));
    v4 = winrt::impl::create_and_initialize<winrt::Windows::Internal::Shell::implementation::MeetAndChatInstallStatus,enum winrt::Windows::Foundation::AsyncStatus,winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress &,winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult &>(
           (unsigned int *)&v10,
           a1 + 240,
           (_QWORD *)(a1 + 256));
    v5 = (__int64 **)&v9;
    v6 = (unsigned __int64)(v4 + 2) & -(__int64)(v4 != 0LL);
    v7 = 13;
  }
  else
  {
    v5 = &v10;
    v6 = 0LL;
    v7 = 6;
  }
  *v5 = 0LL;
  *a2 = v6;
  if ( (v7 & 2) != 0 )
  {
    v7 &= ~2u;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
  }
  if ( (v7 & 1) != 0 )
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v11);
  return a2;
}
