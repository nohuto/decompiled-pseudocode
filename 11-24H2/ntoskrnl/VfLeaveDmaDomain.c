/*
 * XREFs of VfLeaveDmaDomain @ 0x140610CF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ViGetRealDmaAdapter @ 0x140B890EC (ViGetRealDmaAdapter.c)
 */

__int64 __fastcall VfLeaveDmaDomain(int a1)
{
  __int64 RealDmaAdapter; // rax
  __int64 v2; // r8
  __int64 v3; // r9

  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  return guard_dispatch_icall_no_overrides(RealDmaAdapter, RealDmaAdapter, v2, v3);
}
