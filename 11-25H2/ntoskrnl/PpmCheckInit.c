/*
 * XREFs of PpmCheckInit @ 0x140C1F05C
 * Callers:
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x14036F318 (KiInitializeTimer2.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

char PpmCheckInit()
{
  PpmCheckCurrentPipelineId = 6;
  PpmCheckDpc.TargetInfoAsUlong = 787;
  PpmCheckDpc.DeferredRoutine = (PKDEFERRED_ROUTINE)PpmCheckRun;
  PpmCheckDpc.DeferredContext = 0LL;
  PpmCheckStartDpc.DeferredRoutine = (PKDEFERRED_ROUTINE)PpmCheckPeriodicStart;
  PpmCheckDpc.DpcData = 0LL;
  PpmCheckDpc.ProcessorHistory = 0LL;
  PpmCheckStartDpc.TargetInfoAsUlong = 787;
  PpmCheckStartDpc.DeferredContext = 0LL;
  PpmCheckStartDpc.DpcData = 0LL;
  PpmCheckStartDpc.ProcessorHistory = 0LL;
  *(_QWORD *)&PpmCachedSystemAllowedCpuSet.Count = 2097153LL;
  memset_0(&PpmCachedSystemAllowedCpuSet.8, 0, sizeof(PpmCachedSystemAllowedCpuSet.8));
  PpmCheckExecutionLock = 0LL;
  word_140F09DA2 = 0;
  return KiInitializeTimer2((unsigned __int64)&PpmCheckTimer, (__int64)PpmCheckTimerCallback, 0LL, 12);
}
