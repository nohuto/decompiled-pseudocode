/*
 * XREFs of PpmPerfReApplyStates @ 0x140743AA4
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x140202CF8 (PpmCheckCustomRun.c)
 *     PpmAcquireLock @ 0x1402045E4 (PpmAcquireLock.c)
 *     PpmPerfSetAllDomainsToUpdate @ 0x14048810C (PpmPerfSetAllDomainsToUpdate.c)
 *     PpmUpdateProcessorPolicy @ 0x140A56B1C (PpmUpdateProcessorPolicy.c)
 */

void __fastcall PpmPerfReApplyStates(__int64 a1, __int64 a2, unsigned int a3)
{
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, a2, a3);
  PpmPerfSetAllDomainsToUpdate();
  PpmUpdateProcessorPolicy(&PpmAllowedActions, 0LL);
  PpmCheckCustomRun(2LL);
}
