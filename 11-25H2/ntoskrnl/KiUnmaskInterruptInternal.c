/*
 * XREFs of KiUnmaskInterruptInternal @ 0x140200810
 * Callers:
 *     KeUnmaskInterrupt @ 0x140200B74 (KeUnmaskInterrupt.c)
 *     KeConnectInterrupt @ 0x14020274C (KeConnectInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiUnmaskInterruptInternal(__int64 a1, unsigned int a2)
{
  return guard_dispatch_icall_no_overrides(a2, 0LL);
}
