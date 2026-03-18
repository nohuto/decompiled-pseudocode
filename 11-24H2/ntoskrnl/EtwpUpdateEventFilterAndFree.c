/*
 * XREFs of EtwpUpdateEventFilterAndFree @ 0x1406F7BB4
 * Callers:
 *     EtwpUpdateGuidFilterData @ 0x1409F3CA8 (EtwpUpdateGuidFilterData.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpUpdateEventFilterAndFree(volatile __int64 *a1, __int64 *a2)
{
  void *v2; // rax

  v2 = (void *)_InterlockedExchange64(a1, *a2);
  *a2 = 0LL;
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
