/*
 * XREFs of CcWaitForCurrentLazyWriterActivity @ 0x140577B90
 * Callers:
 *     PopGracefulShutdown @ 0x140B4BB18 (PopGracefulShutdown.c)
 * Callees:
 *     CcForEachPartition @ 0x14035EBE4 (CcForEachPartition.c)
 */

NTSTATUS CcWaitForCurrentLazyWriterActivity(void)
{
  NTSTATUS v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  CcForEachPartition((__int64)CcWaitForCurrentLazyWriterActivityHelper, (__int64)&v1, 0, 0);
  return v1;
}
