/*
 * XREFs of KdDisableDebugger @ 0x1405ABF70
 * Callers:
 *     NtSystemDebugControl @ 0x140A53910 (NtSystemDebugControl.c)
 *     KiVerifyXcpt15 @ 0x140BCDC40 (KiVerifyXcpt15.c)
 *     KeCheckedKernelInitialize @ 0x140BCE44C (KeCheckedKernelInitialize.c)
 *     KiFilterFiberContext @ 0x140BCE530 (KiFilterFiberContext.c)
 * Callees:
 *     KdDisableDebuggerWithLock @ 0x1405ABF88 (KdDisableDebuggerWithLock.c)
 */

NTSTATUS KdDisableDebugger(void)
{
  return KdDisableDebuggerWithLock();
}
