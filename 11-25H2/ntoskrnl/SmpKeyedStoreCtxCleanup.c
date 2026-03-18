/*
 * XREFs of SmpKeyedStoreCtxCleanup @ 0x140600BA8
 * Callers:
 *     SmPartitionCleanup @ 0x1407881C4 (SmPartitionCleanup.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall SmpKeyedStoreCtxCleanup(__int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 16);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
