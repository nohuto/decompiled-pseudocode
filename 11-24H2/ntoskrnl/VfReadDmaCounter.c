/*
 * XREFs of VfReadDmaCounter @ 0x140B87B00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     VF_ASSERT_MAX_IRQL @ 0x140B84FC0 (VF_ASSERT_MAX_IRQL.c)
 *     ViGetAdapterInformationInternal @ 0x140B88E98 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140B890EC (ViGetRealDmaAdapter.c)
 */

__int64 __fastcall VfReadDmaCounter(int a1)
{
  __int64 RealDmaAdapter; // rax
  __int64 v3; // r8
  __int64 v4; // r9

  if ( ViGetAdapterInformationInternal(a1) )
    VF_ASSERT_MAX_IRQL();
  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  return guard_dispatch_icall_no_overrides(RealDmaAdapter, RealDmaAdapter, v3, v4);
}
