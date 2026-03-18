/*
 * XREFs of PpmProfileAcDcUpdate @ 0x140A3E764
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x140AC1ED8 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     PpmAcquireLock @ 0x1402045E4 (PpmAcquireLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     PpmCompareAndApplyPolicySettings @ 0x140A3EC4C (PpmCompareAndApplyPolicySettings.c)
 */

__int64 __fastcall PpmProfileAcDcUpdate(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  v3 = dword_140F0B70C;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, a2, a3);
  PopAcquireRwLockExclusive(&PpmIdlePolicyLock);
  v5 = PpmPolicySettingGlobalMask;
  return PpmCompareAndApplyPolicySettings(
           &v5,
           (char *)PpmCurrentProfile[0] + (-(__int64)((_DWORD)v3 != 0) & 0xFFFFFFFFFFFFFE18uLL) + 528,
           &PpmCurrentProfile[0][61 * v3 + 5]);
}
