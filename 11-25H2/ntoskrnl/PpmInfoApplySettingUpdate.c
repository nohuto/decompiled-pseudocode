/*
 * XREFs of PpmInfoApplySettingUpdate @ 0x140965D6C
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x140965708 (PpmSetProfilePolicySetting.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     PpmInfoReleaseLocks @ 0x140965E18 (PpmInfoReleaseLocks.c)
 *     PpmReapplyPerfPolicy @ 0x140A3EE58 (PpmReapplyPerfPolicy.c)
 *     PpmGetPolicyAction @ 0x140A3F1DC (PpmGetPolicyAction.c)
 *     PpmReapplyIdlePolicy @ 0x140A936D0 (PpmReapplyIdlePolicy.c)
 */

__int64 __fastcall PpmInfoApplySettingUpdate(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r11
  int v8; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+28h] [rbp-20h] BYREF

  v8 = 0;
  if ( !(_BYTE)a2 && (!PpmPerfSchedulerDirectedPerfStatesSupported || !PopHeteroSystem || !(_BYTE)a3) )
    return PpmInfoReleaseLocks(a1, a2, a3, a4);
  v5 = *(unsigned __int8 *)(a1 + 36);
  v9 = 0LL;
  *((_QWORD *)&v9 + (v5 >> 6)) |= 1LL << (v5 & 0x3F);
  PpmGetPolicyAction(&v9, &v8);
  if ( (*(_BYTE *)(v7 + 37) & 1) != 0 )
    return PpmReapplyPerfPolicy(&v8);
  PpmReapplyIdlePolicy(v6);
  return PopReleaseRwLock((signed __int64 *)&PpmIdlePolicyLock);
}
