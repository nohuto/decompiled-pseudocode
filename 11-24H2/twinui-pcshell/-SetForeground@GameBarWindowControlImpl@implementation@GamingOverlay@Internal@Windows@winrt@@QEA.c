/*
 * XREFs of ?SetForeground@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXXZ @ 0x18036437C
 * Callers:
 *     ?SetForeground@GamingOverlayExperienceManager@@UEAAJXZ @ 0x18035A6F0 (-SetForeground@GamingOverlayExperienceManager@@UEAAJXZ.c)
 *     ?SetForeground@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAHXZ @ 0x180364350 (-SetForeground@-$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?SetForegroundInternal@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@@Z @ 0x1803643DC (-SetForegroundInternal@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@wi.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetForeground(
        RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0LL;
  wil::AcquireSRWLockExclusive(&v2, this + 22);
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetForegroundInternal(this);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v2);
}
