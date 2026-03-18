/*
 * XREFs of PpmCheckDelayedPeriodicStart @ 0x1404B4F80
 * Callers:
 *     <none>
 * Callees:
 *     PpmCheckCustomRun @ 0x140202CF8 (PpmCheckCustomRun.c)
 *     PpmAcquireLock @ 0x1402045E4 (PpmAcquireLock.c)
 */

void __fastcall PpmCheckDelayedPeriodicStart(int a1, __int64 a2, unsigned int a3)
{
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, a2, a3);
  PpmCheckMakeupCount = a1;
  PpmCheckCustomRun(0LL);
  PpmCheckDelayedStartWorkerQueued = 0;
}
