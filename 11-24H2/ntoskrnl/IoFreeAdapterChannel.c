/*
 * XREFs of IoFreeAdapterChannel @ 0x14053D8F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __stdcall IoFreeAdapterChannel(PDMA_ADAPTER DmaAdapter)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9

  guard_dispatch_icall_no_overrides(DmaAdapter, v1, v2, v3);
}
