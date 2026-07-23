/*
 * XREFs of KdEnableDebugger @ 0x1405AC9B0
 * Callers:
 *     KdpStub @ 0x14041C950 (KdpStub.c)
 *     NtSystemDebugControl @ 0x140A4F080 (NtSystemDebugControl.c)
 *     KiVerifyXcpt15 @ 0x140BE0C40 (KiVerifyXcpt15.c)
 *     KeCheckedKernelInitialize @ 0x140BE144C (KeCheckedKernelInitialize.c)
 *     KiFilterFiberContext @ 0x140BE1530 (KiFilterFiberContext.c)
 * Callees:
 *     KdEnableDebuggerWithLock @ 0x1405AC9EC (KdEnableDebuggerWithLock.c)
 *     KeRelaxTimingConstraints @ 0x1405B18B0 (KeRelaxTimingConstraints.c)
 */

NTSTATUS KdEnableDebugger(void)
{
  unsigned __int8 v0; // al
  __int64 v1; // rcx
  unsigned int v2; // edi
  NTSTATUS v3; // ebx

  v0 = KeRelaxTimingConstraints(1LL);
  LOBYTE(v1) = 1;
  v2 = v0;
  v3 = KdEnableDebuggerWithLock(v1);
  KeRelaxTimingConstraints(v2);
  return v3;
}
