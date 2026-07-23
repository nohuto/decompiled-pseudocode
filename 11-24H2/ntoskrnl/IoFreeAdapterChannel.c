/*
 * XREFs of IoFreeAdapterChannel @ 0x14053B1F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __stdcall IoFreeAdapterChannel(PDMA_ADAPTER DmaAdapter)
{
  __int64 v1; // rdx

  guard_dispatch_icall_no_overrides(DmaAdapter, v1);
}
