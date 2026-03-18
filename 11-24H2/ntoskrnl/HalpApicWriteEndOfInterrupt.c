/*
 * XREFs of HalpApicWriteEndOfInterrupt @ 0x140569380
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpApicWriteEndOfInterrupt(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return guard_dispatch_icall_no_overrides(176LL, 0LL, a3, a4);
}
