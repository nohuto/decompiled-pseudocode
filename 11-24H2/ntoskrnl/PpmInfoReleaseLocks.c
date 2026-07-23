/*
 * XREFs of PpmInfoReleaseLocks @ 0x1409A4174
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x1409A3A64 (PpmSetProfilePolicySetting.c)
 *     PpmInfoApplySettingUpdate @ 0x1409A40C8 (PpmInfoApplySettingUpdate.c)
 * Callees:
 *     PpmReleaseLock @ 0x1402AE140 (PpmReleaseLock.c)
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 */

LONG __fastcall PpmInfoReleaseLocks(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 37) & 1) != 0 )
    return PpmReleaseLock(&PpmPerfPolicyLock);
  else
    return PopReleaseRwLock((signed __int64 *)&PpmIdlePolicyLock);
}
