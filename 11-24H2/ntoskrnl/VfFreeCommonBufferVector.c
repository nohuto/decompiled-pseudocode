/*
 * XREFs of VfFreeCommonBufferVector @ 0x140B86780
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ViGetRealDmaAdapter @ 0x140B890EC (ViGetRealDmaAdapter.c)
 */

__int64 __fastcall VfFreeCommonBufferVector(__int64 a1, __int64 a2)
{
  __int64 RealDmaAdapter; // rax
  __int64 v5; // r9

  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  return guard_dispatch_icall_no_overrides(a1, a2, *(_QWORD *)(RealDmaAdapter + 8), v5);
}
