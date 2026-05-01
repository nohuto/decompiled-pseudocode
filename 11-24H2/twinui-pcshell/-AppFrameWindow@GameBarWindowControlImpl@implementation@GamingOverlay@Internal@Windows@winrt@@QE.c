/*
 * XREFs of ?AppFrameWindow@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA_KXZ @ 0x18036204C
 * Callers:
 *     ?get_AppFrameWindow@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAHPEA_K@Z @ 0x180365260 (-get_AppFrameWindow@-$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Wi.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?GetAppFrameWindow@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAA_KUread_lock_required@wil@@@Z @ 0x180362420 (-GetAppFrameWindow@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::AppFrameWindow(
        RTL_SRWLOCK *this)
{
  __int64 AppFrameWindow; // rbx
  RTL_SRWLOCK *v4; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  wil::AcquireSRWLockExclusive(&v4, this + 22);
  AppFrameWindow = winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::GetAppFrameWindow(this);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v4);
  return AppFrameWindow;
}
