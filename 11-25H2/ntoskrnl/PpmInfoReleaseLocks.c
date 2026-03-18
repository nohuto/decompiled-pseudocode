/*
 * XREFs of PpmInfoReleaseLocks @ 0x140965E18
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x140965708 (PpmSetProfilePolicySetting.c)
 *     PpmInfoApplySettingUpdate @ 0x140965D6C (PpmInfoApplySettingUpdate.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PpmReleaseLock @ 0x140204CAC (PpmReleaseLock.c)
 */

LONG __fastcall PpmInfoReleaseLocks(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 37) & 1) != 0 )
    return PpmReleaseLock(&PpmPerfPolicyLock);
  else
    return PopReleaseRwLock((signed __int64 *)&PpmIdlePolicyLock);
}
