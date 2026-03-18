/*
 * XREFs of KdDisableDebugger @ 0x1405AF900
 * Callers:
 *     NtSystemDebugControl @ 0x140A571F0 (NtSystemDebugControl.c)
 *     KiVerifyXcpt15 @ 0x140BDEC40 (KiVerifyXcpt15.c)
 *     KeCheckedKernelInitialize @ 0x140BDF44C (KeCheckedKernelInitialize.c)
 *     KiFilterFiberContext @ 0x140BDF530 (KiFilterFiberContext.c)
 * Callees:
 *     KdDisableDebuggerWithLock @ 0x1405AF918 (KdDisableDebuggerWithLock.c)
 */

NTSTATUS KdDisableDebugger(void)
{
  return KdDisableDebuggerWithLock();
}
