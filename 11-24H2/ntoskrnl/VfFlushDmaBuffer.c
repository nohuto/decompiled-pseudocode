/*
 * XREFs of VfFlushDmaBuffer @ 0x140610C30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ViGetRealDmaAdapter @ 0x140B890EC (ViGetRealDmaAdapter.c)
 */

__int64 __fastcall VfFlushDmaBuffer(int a1, __int64 a2, char a3)
{
  __int64 RealDmaAdapter; // rax
  __int64 v6; // r8

  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  LOBYTE(v6) = a3;
  return guard_dispatch_icall_no_overrides(RealDmaAdapter, a2, v6, RealDmaAdapter);
}
