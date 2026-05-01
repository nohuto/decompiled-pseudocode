/*
 * XREFs of ?Show@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXXZ @ 0x180364A0C
 * Callers:
 *     ?Show@GamingOverlayExperienceManager@@UEAAJXZ @ 0x18023EBD0 (-Show@GamingOverlayExperienceManager@@UEAAJXZ.c)
 *     ?OnTryShowViewEventShared@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180355DF4 (-OnTryShowViewEventShared@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInter.c)
 *     ?Show@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAHXZ @ 0x1803649E0 (-Show@-$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@U.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?ShowInternal@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@@Z @ 0x180364A70 (-ShowInternal@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAA.c)
 */

void __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::Show(
        RTL_SRWLOCK *this)
{
  __int64 v2; // rdx
  char v3; // [rsp+20h] [rbp-28h]
  RTL_SRWLOCK *v4; // [rsp+28h] [rbp-20h] BYREF

  v4 = 0LL;
  wil::AcquireSRWLockExclusive(&v4, this + 22);
  LOBYTE(v2) = v3;
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::ShowInternal(this, v2);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v4);
}
