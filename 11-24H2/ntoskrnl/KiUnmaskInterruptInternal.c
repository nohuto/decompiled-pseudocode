/*
 * XREFs of KiUnmaskInterruptInternal @ 0x1402B4D3C
 * Callers:
 *     KeConnectInterrupt @ 0x1402B31A0 (KeConnectInterrupt.c)
 *     KeUnmaskInterrupt @ 0x1402B4B54 (KeUnmaskInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiUnmaskInterruptInternal(__int64 a1, unsigned int a2)
{
  return guard_dispatch_icall_no_overrides(a2, 0LL);
}
