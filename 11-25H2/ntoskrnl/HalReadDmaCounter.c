/*
 * XREFs of HalReadDmaCounter @ 0x14053AF70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

ULONG __stdcall HalReadDmaCounter(PDMA_ADAPTER DmaAdapter)
{
  return guard_dispatch_icall_no_overrides(DmaAdapter);
}
