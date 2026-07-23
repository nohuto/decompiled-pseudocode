/*
 * XREFs of PfpPartitionIterateAndCheckCanAnyDoAccessLogging @ 0x1405CA1DC
 * Callers:
 *     PfpProcessScenarioPhase @ 0x1408F77E8 (PfpProcessScenarioPhase.c)
 *     PfpScenCtxPrefetchWait @ 0x140B5D1E0 (PfpScenCtxPrefetchWait.c)
 * Callees:
 *     PfpPartitionIterate @ 0x14022A280 (PfpPartitionIterate.c)
 */

__int64 PfpPartitionIterateAndCheckCanAnyDoAccessLogging()
{
  unsigned int v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  PfpPartitionIterate((__int64 (__fastcall *)(_QWORD, _QWORD))PfpPartitionCanDoAccessLoggingCallback, 8, (__int64)&v1);
  return v1;
}
