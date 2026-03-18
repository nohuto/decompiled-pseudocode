/*
 * XREFs of KdEnableDebugger @ 0x1405AC0B0
 * Callers:
 *     KdpStub @ 0x14025F440 (KdpStub.c)
 *     NtSystemDebugControl @ 0x140A53910 (NtSystemDebugControl.c)
 *     KiVerifyXcpt15 @ 0x140BCDC40 (KiVerifyXcpt15.c)
 *     KeCheckedKernelInitialize @ 0x140BCE44C (KeCheckedKernelInitialize.c)
 *     KiFilterFiberContext @ 0x140BCE530 (KiFilterFiberContext.c)
 * Callees:
 *     KdEnableDebuggerWithLock @ 0x1405AC0EC (KdEnableDebuggerWithLock.c)
 *     KeRelaxTimingConstraints @ 0x1405B0F80 (KeRelaxTimingConstraints.c)
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
