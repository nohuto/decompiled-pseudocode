/*
 * XREFs of VfGetDmaAlignment @ 0x140B86B20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     VF_ASSERT_IRQL @ 0x140B84F40 (VF_ASSERT_IRQL.c)
 *     ViGetAdapterInformationInternal @ 0x140B88E98 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140B890EC (ViGetRealDmaAdapter.c)
 */

__int64 __fastcall VfGetDmaAlignment(int a1)
{
  __int64 RealDmaAdapter; // rax
  __int64 v3; // r8
  __int64 v4; // r9

  if ( ViGetAdapterInformationInternal(a1) )
    VF_ASSERT_IRQL(0);
  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  return guard_dispatch_icall_no_overrides(RealDmaAdapter, RealDmaAdapter, v3, v4);
}
