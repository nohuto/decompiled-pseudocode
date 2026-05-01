/*
 * XREFs of ?StateChanged@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA?AUevent_token@6@AEBU?$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@Foundation@56@@Z @ 0x180364B9C
 * Callers:
 *     ?add_StateChanged@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAHPEAXPEAUevent_token@3@@Z @ 0x180364FD0 (-add_StateChanged@-$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Wind.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$make_agile_delegate@U?$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@Foundation@Windows@1@AEBU2341@@Z @ 0x180361AF8 (--$make_agile_delegate@U-$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows.c)
 *     ?add_agile@?$event@U?$TypedEventHandler@UXamlExplorerHostWindow_WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UActivationChangedEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@AEAA?AUevent_token@2@U?$TypedEventHandler@UXamlExplorerHostWindow_WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UActivationChangedEventArgs@23456@@Foundation@Windows@2@@Z @ 0x180365034 (-add_agile@-$event@U-$TypedEventHandler@UXamlExplorerHostWindow_WASDK@XamlExplorerHost@Shell@Int.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::StateChanged(
        RTL_SRWLOCK *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 *v6; // rax
  __int64 v8; // [rsp+20h] [rbp-30h] BYREF
  __int64 v9[2]; // [rsp+28h] [rbp-28h] BYREF
  RTL_SRWLOCK *v10; // [rsp+38h] [rbp-18h] BYREF

  v10 = 0LL;
  wil::AcquireSRWLockExclusive(&v10, a1 + 22);
  v8 = *a3;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v8);
  v9[1] = (__int64)&v8;
  v6 = winrt::impl::make_agile_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::GamingOverlay::GameBarWindowControl,enum winrt::Windows::Internal::GamingOverlay::GameBarWindowState>>(
         v9,
         &v8);
  winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::ActivationChangedEventArgs>>::add_agile(
    &a1[10],
    a2,
    v6);
  if ( v8 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v8);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v10);
  return a2;
}
