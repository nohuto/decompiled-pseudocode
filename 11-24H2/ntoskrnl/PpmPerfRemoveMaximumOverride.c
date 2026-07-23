/*
 * XREFs of PpmPerfRemoveMaximumOverride @ 0x14074DEF8
 * Callers:
 *     PopPowerRequestCallbackPerfBoostRequired @ 0x140A91980 (PopPowerRequestCallbackPerfBoostRequired.c)
 * Callees:
 *     PpmAcquireLock @ 0x1402AE7DC (PpmAcquireLock.c)
 *     PpmHeteroHgsCheckContainmentDecision @ 0x14044C408 (PpmHeteroHgsCheckContainmentDecision.c)
 *     PpmParkApplyPolicy @ 0x1404E4B18 (PpmParkApplyPolicy.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140AC40C8 (PpmPerfUpdateDomainPolicy.c)
 */

__int64 __fastcall PpmPerfRemoveMaximumOverride(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, a2, a3);
  PpmPerfMaxOverrideEnabled = 0;
  PpmHeteroHgsCheckContainmentDecision();
  PpmParkApplyPolicy(v4, v3, v5, v6);
  return PpmPerfUpdateDomainPolicy(0LL);
}
