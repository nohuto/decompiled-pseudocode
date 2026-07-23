/*
 * XREFs of KdDisableDebugger @ 0x1405AC870
 * Callers:
 *     NtSystemDebugControl @ 0x140A4F080 (NtSystemDebugControl.c)
 *     KiVerifyXcpt15 @ 0x140BE0C40 (KiVerifyXcpt15.c)
 *     KeCheckedKernelInitialize @ 0x140BE144C (KeCheckedKernelInitialize.c)
 *     KiFilterFiberContext @ 0x140BE1530 (KiFilterFiberContext.c)
 * Callees:
 *     KdDisableDebuggerWithLock @ 0x1405AC888 (KdDisableDebuggerWithLock.c)
 */

NTSTATUS KdDisableDebugger(void)
{
  return KdDisableDebuggerWithLock();
}
