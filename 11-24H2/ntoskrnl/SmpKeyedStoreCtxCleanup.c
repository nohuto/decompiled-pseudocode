/*
 * XREFs of SmpKeyedStoreCtxCleanup @ 0x14060CBD4
 * Callers:
 *     SmPartitionCleanup @ 0x140797594 (SmPartitionCleanup.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall SmpKeyedStoreCtxCleanup(__int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 16);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
