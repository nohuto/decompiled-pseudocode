/*
 * XREFs of ?UpdateConfigurationValues@GamepadButtonTracker@@QEAAXV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@00@Z @ 0x18036AF88
 * Callers:
 *     ?UpdateGamepadIntervalValues@GamingOverlayExperienceManager@@AEAAXXZ @ 0x18023F420 (-UpdateGamepadIntervalValues@GamingOverlayExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

void __fastcall GamepadButtonTracker::UpdateConfigurationValues(RTL_SRWLOCK *a1, void *a2, void *a3, void *a4)
{
  RTL_SRWLOCK *v8; // [rsp+20h] [rbp-18h] BYREF

  v8 = 0LL;
  wil::AcquireSRWLockExclusive(&v8, a1);
  a1[4].Ptr = a2;
  a1[5].Ptr = a3;
  a1[6].Ptr = a4;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v8);
}
