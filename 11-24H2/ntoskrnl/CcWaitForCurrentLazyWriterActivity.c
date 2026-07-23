/*
 * XREFs of CcWaitForCurrentLazyWriterActivity @ 0x140578330
 * Callers:
 *     PopGracefulShutdown @ 0x140B5DAF8 (PopGracefulShutdown.c)
 * Callees:
 *     CcForEachPartition @ 0x14021AA70 (CcForEachPartition.c)
 */

NTSTATUS CcWaitForCurrentLazyWriterActivity(void)
{
  NTSTATUS v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  CcForEachPartition((__int64)CcWaitForCurrentLazyWriterActivityHelper, (__int64)&v1, 0, 0);
  return v1;
}
