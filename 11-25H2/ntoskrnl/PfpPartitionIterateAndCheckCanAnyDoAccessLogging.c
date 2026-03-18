/*
 * XREFs of PfpPartitionIterateAndCheckCanAnyDoAccessLogging @ 0x1405C849C
 * Callers:
 *     PfpProcessScenarioPhase @ 0x1408EA25C (PfpProcessScenarioPhase.c)
 *     PfpScenCtxPrefetchWait @ 0x140B4B200 (PfpScenCtxPrefetchWait.c)
 * Callees:
 *     PfpPartitionIterate @ 0x140301540 (PfpPartitionIterate.c)
 */

__int64 PfpPartitionIterateAndCheckCanAnyDoAccessLogging()
{
  unsigned int v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  PfpPartitionIterate((__int64)PfpPartitionCanDoAccessLoggingCallback, 8, (__int64)&v1);
  return v1;
}
