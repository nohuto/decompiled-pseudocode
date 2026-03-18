/*
 * XREFs of PpmPerfLatencySensitivityHintWorker @ 0x1404C0B20
 * Callers:
 *     <none>
 * Callees:
 *     PpmCheckCustomRun @ 0x1403B45DC (PpmCheckCustomRun.c)
 *     PpmAcquireLock @ 0x1403B64F8 (PpmAcquireLock.c)
 */

void __fastcall PpmPerfLatencySensitivityHintWorker(__int64 a1, __int64 a2, unsigned int a3)
{
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, a2, a3);
  PpmPerfLatencyBoostQueued = 0;
  PpmCheckCustomRun(3LL);
}
