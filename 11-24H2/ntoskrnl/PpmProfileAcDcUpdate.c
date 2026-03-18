/*
 * XREFs of PpmProfileAcDcUpdate @ 0x140A46B88
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x140A3AD08 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     PpmAcquireLock @ 0x1403B64F8 (PpmAcquireLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     PpmCompareAndApplyPolicySettings @ 0x140A4706C (PpmCompareAndApplyPolicySettings.c)
 */

__int64 __fastcall PpmProfileAcDcUpdate(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 *v4; // r9
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF

  v3 = dword_140F0BA4C;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, a2, a3);
  PopAcquireRwLockExclusive(&PpmIdlePolicyLock);
  v4 = PpmCurrentProfile[0];
  v6 = PpmPolicySettingGlobalMask;
  LOBYTE(v4) = 1;
  return ((__int64 (__fastcall *)(__int128 *, char *, __int64 *, __int64 *))PpmCompareAndApplyPolicySettings)(
           &v6,
           (char *)PpmCurrentProfile[0] + (-(__int64)((_DWORD)v3 != 0) & 0xFFFFFFFFFFFFFE18uLL) + 528,
           &PpmCurrentProfile[0][61 * v3 + 5],
           v4);
}
