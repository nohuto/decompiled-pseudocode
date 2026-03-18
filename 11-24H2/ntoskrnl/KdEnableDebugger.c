/*
 * XREFs of KdEnableDebugger @ 0x1405AFA40
 * Callers:
 *     KdpStub @ 0x1404289D0 (KdpStub.c)
 *     NtSystemDebugControl @ 0x140A571F0 (NtSystemDebugControl.c)
 *     KiVerifyXcpt15 @ 0x140BDEC40 (KiVerifyXcpt15.c)
 *     KeCheckedKernelInitialize @ 0x140BDF44C (KeCheckedKernelInitialize.c)
 *     KiFilterFiberContext @ 0x140BDF530 (KiFilterFiberContext.c)
 * Callees:
 *     KdEnableDebuggerWithLock @ 0x1405AFA7C (KdEnableDebuggerWithLock.c)
 *     KeRelaxTimingConstraints @ 0x1405B492C (KeRelaxTimingConstraints.c)
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
