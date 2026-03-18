/*
 * XREFs of HalAllocateCommonBuffer @ 0x14053D750
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

// local variable allocation has failed, the output may be wrong!
PVOID __stdcall HalAllocateCommonBuffer(
        PDMA_ADAPTER DmaAdapter,
        ULONG Length,
        PPHYSICAL_ADDRESS LogicalAddress,
        BOOLEAN CacheEnabled)
{
  return (PVOID)guard_dispatch_icall_no_overrides(DmaAdapter, *(_QWORD *)&Length, LogicalAddress, CacheEnabled);
}
