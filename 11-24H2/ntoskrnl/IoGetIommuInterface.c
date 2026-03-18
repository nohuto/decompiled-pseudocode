/*
 * XREFs of IoGetIommuInterface @ 0x140720230
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IoGetIommuInterface(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( KeGetCurrentIrql() )
    KeBugCheckEx(0x121u, 1uLL, KeGetCurrentIrql(), 0LL, 0LL);
  return guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
}
