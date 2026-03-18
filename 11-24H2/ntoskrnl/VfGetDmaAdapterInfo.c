/*
 * XREFs of VfGetDmaAdapterInfo @ 0x140B86AE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ViGetRealDmaAdapter @ 0x140B890EC (ViGetRealDmaAdapter.c)
 */

__int64 __fastcall VfGetDmaAdapterInfo(int a1, __int64 a2)
{
  __int64 RealDmaAdapter; // rax
  __int64 v4; // r9

  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  return guard_dispatch_icall_no_overrides(RealDmaAdapter, a2, RealDmaAdapter, v4);
}
