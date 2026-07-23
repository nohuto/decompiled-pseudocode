/*
 * XREFs of ExpFlushGeneralLookaside @ 0x140472090
 * Callers:
 *     ExDeletePagedLookasideList @ 0x140472030 (ExDeletePagedLookasideList.c)
 *     ExDeleteNPagedLookasideList @ 0x140472060 (ExDeleteNPagedLookasideList.c)
 * Callees:
 *     RtlpInterlockedFlushSList @ 0x1406B48B0 (RtlpInterlockedFlushSList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ExpFlushGeneralLookaside(_SLIST_HEADER *a1)
{
  __int64 v1; // rdx
  PSLIST_ENTRY v2; // rcx
  _SLIST_ENTRY *Next; // rbx

  v2 = RtlpInterlockedFlushSList(a1);
  if ( v2 )
  {
    do
    {
      Next = v2->Next;
      guard_dispatch_icall_no_overrides(v2, v1);
      v2 = Next;
    }
    while ( Next );
  }
  return 0LL;
}
