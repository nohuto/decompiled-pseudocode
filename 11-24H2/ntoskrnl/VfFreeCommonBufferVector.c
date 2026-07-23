/*
 * XREFs of VfFreeCommonBufferVector @ 0x140B88780
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ViGetRealDmaAdapter @ 0x140B8B0EC (ViGetRealDmaAdapter.c)
 */

__int64 __fastcall VfFreeCommonBufferVector(__int64 a1, __int64 a2)
{
  ViGetRealDmaAdapter(a1);
  return guard_dispatch_icall_no_overrides(a1, a2);
}
