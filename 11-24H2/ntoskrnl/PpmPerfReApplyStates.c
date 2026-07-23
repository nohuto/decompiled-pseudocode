/*
 * XREFs of PpmPerfReApplyStates @ 0x14074DEA4
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmAcquireLock @ 0x1402AE7DC (PpmAcquireLock.c)
 *     PpmCheckCustomRun @ 0x14044C05C (PpmCheckCustomRun.c)
 *     PpmPerfSetAllDomainsToUpdate @ 0x14044C454 (PpmPerfSetAllDomainsToUpdate.c)
 *     PpmUpdateProcessorPolicy @ 0x140A51F98 (PpmUpdateProcessorPolicy.c)
 */

void __fastcall PpmPerfReApplyStates(__int64 a1, __int64 a2, unsigned int a3)
{
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, a2, a3);
  PpmPerfSetAllDomainsToUpdate();
  PpmUpdateProcessorPolicy(&PpmAllowedActions, 0LL);
  PpmCheckCustomRun(2LL);
}
