/*
 * XREFs of IoFreeMapRegisters @ 0x14053D910
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall IoFreeMapRegisters(PDMA_ADAPTER DmaAdapter, PVOID MapRegisterBase, ULONG NumberOfMapRegisters)
{
  __int64 v3; // r9

  guard_dispatch_icall_no_overrides(DmaAdapter, MapRegisterBase, *(_QWORD *)&NumberOfMapRegisters, v3);
}
