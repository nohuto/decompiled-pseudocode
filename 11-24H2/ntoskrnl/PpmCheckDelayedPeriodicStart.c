/*
 * XREFs of PpmCheckDelayedPeriodicStart @ 0x14044BD70
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x1402AE7DC (PpmAcquireLock.c)
 *     PpmCheckCustomRun @ 0x14044C05C (PpmCheckCustomRun.c)
 */

__int64 __fastcall PpmCheckDelayedPeriodicStart(int a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, a2, a3);
  PpmCheckMakeupCount = a1;
  result = PpmCheckCustomRun(0LL);
  PpmCheckDelayedStartWorkerQueued = 0;
  return result;
}
