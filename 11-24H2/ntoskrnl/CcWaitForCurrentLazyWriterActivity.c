/*
 * XREFs of CcWaitForCurrentLazyWriterActivity @ 0x14057AEA0
 * Callers:
 *     PopGracefulShutdown @ 0x140B5BA88 (PopGracefulShutdown.c)
 * Callees:
 *     CcForEachPartition @ 0x140470EE8 (CcForEachPartition.c)
 */

NTSTATUS CcWaitForCurrentLazyWriterActivity(void)
{
  NTSTATUS v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  CcForEachPartition((__int64)CcWaitForCurrentLazyWriterActivityHelper, (__int64)&v1, 0, 0);
  return v1;
}
