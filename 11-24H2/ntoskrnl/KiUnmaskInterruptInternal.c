/*
 * XREFs of KiUnmaskInterruptInternal @ 0x14046E508
 * Callers:
 *     KeConnectInterrupt @ 0x1403B6EEC (KeConnectInterrupt.c)
 *     KeUnmaskInterrupt @ 0x14046E464 (KeUnmaskInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiUnmaskInterruptInternal(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  return guard_dispatch_icall_no_overrides(a2, 0LL, a3, a4);
}
