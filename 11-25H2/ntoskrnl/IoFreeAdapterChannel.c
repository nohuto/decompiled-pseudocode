/*
 * XREFs of IoFreeAdapterChannel @ 0x14053B0C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __stdcall IoFreeAdapterChannel(PDMA_ADAPTER DmaAdapter)
{
  guard_dispatch_icall_no_overrides(DmaAdapter);
}
