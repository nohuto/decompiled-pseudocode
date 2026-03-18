/*
 * XREFs of PpmPerfLatencySensitivityHintWorker @ 0x1404C26D0
 * Callers:
 *     <none>
 * Callees:
 *     PpmCheckCustomRun @ 0x140202CF8 (PpmCheckCustomRun.c)
 *     PpmAcquireLock @ 0x1402045E4 (PpmAcquireLock.c)
 */

void __fastcall PpmPerfLatencySensitivityHintWorker(__int64 a1, __int64 a2, unsigned int a3)
{
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, a2, a3);
  PpmPerfLatencyBoostQueued = 0;
  PpmCheckCustomRun(3LL);
}
