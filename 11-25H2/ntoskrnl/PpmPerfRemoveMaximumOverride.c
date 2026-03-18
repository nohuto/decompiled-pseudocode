/*
 * XREFs of PpmPerfRemoveMaximumOverride @ 0x140743AF8
 * Callers:
 *     PopPowerRequestCallbackPerfBoostRequired @ 0x140A910B0 (PopPowerRequestCallbackPerfBoostRequired.c)
 * Callees:
 *     PpmAcquireLock @ 0x1402045E4 (PpmAcquireLock.c)
 *     PpmHeteroHgsCheckContainmentDecision @ 0x1404AF124 (PpmHeteroHgsCheckContainmentDecision.c)
 *     PpmParkApplyPolicy @ 0x1404E9D84 (PpmParkApplyPolicy.c)
 *     Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline @ 0x1405CE05C (Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140A69270 (PpmPerfUpdateDomainPolicy.c)
 */

__int64 __fastcall PpmPerfRemoveMaximumOverride(__int64 a1, __int64 a2, unsigned int a3)
{
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, a2, a3);
  PpmPerfMaxOverrideEnabled = 0;
  PpmHeteroHgsCheckContainmentDecision();
  if ( (unsigned int)Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline() )
    PpmParkApplyPolicy();
  return PpmPerfUpdateDomainPolicy(0LL);
}
