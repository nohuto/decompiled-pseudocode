/*
 * XREFs of PfpPartitionIterateAndCheckCanAnyDoAccessLogging @ 0x1405CCA6C
 * Callers:
 *     PfpProcessScenarioPhase @ 0x14093289C (PfpProcessScenarioPhase.c)
 *     PfpScenCtxPrefetchWait @ 0x140B5B170 (PfpScenCtxPrefetchWait.c)
 * Callees:
 *     PfpPartitionIterate @ 0x140274CF0 (PfpPartitionIterate.c)
 */

__int64 PfpPartitionIterateAndCheckCanAnyDoAccessLogging()
{
  unsigned int v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  PfpPartitionIterate((__int64 (__fastcall *)(_QWORD, _QWORD))PfpPartitionCanDoAccessLoggingCallback, 8, (__int64)&v1);
  return v1;
}
