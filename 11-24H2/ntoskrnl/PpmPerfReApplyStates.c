/*
 * XREFs of PpmPerfReApplyStates @ 0x14074FB74
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x1403B45DC (PpmCheckCustomRun.c)
 *     PpmAcquireLock @ 0x1403B64F8 (PpmAcquireLock.c)
 *     PpmPerfSetAllDomainsToUpdate @ 0x1404579A4 (PpmPerfSetAllDomainsToUpdate.c)
 *     PpmUpdateProcessorPolicy @ 0x140A5A6D8 (PpmUpdateProcessorPolicy.c)
 */

void __fastcall PpmPerfReApplyStates(__int64 a1, __int64 a2, unsigned int a3)
{
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, a2, a3);
  PpmPerfSetAllDomainsToUpdate();
  PpmUpdateProcessorPolicy(&PpmAllowedActions, 0LL);
  PpmCheckCustomRun(2LL);
}
