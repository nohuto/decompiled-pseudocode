/*
 * XREFs of PpmPerfRemoveMaximumOverride @ 0x14074FBC8
 * Callers:
 *     PopPowerRequestCallbackPerfBoostRequired @ 0x140A951D0 (PopPowerRequestCallbackPerfBoostRequired.c)
 * Callees:
 *     PpmAcquireLock @ 0x1403B64F8 (PpmAcquireLock.c)
 *     PpmHeteroHgsCheckContainmentDecision @ 0x140457958 (PpmHeteroHgsCheckContainmentDecision.c)
 *     PpmParkApplyPolicy @ 0x1404ED2F4 (PpmParkApplyPolicy.c)
 *     Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline @ 0x1405D2930 (Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140AC66D0 (PpmPerfUpdateDomainPolicy.c)
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
  if ( (unsigned int)Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline() )
    PpmParkApplyPolicy(v4, v3, v5, v6);
  return PpmPerfUpdateDomainPolicy(0LL);
}
