/*
 * XREFs of ExpFlushGeneralLookaside @ 0x140475FF0
 * Callers:
 *     ExDeletePagedLookasideList @ 0x140475F90 (ExDeletePagedLookasideList.c)
 *     ExDeleteNPagedLookasideList @ 0x140475FC0 (ExDeleteNPagedLookasideList.c)
 * Callees:
 *     RtlpInterlockedFlushSList @ 0x1406B3910 (RtlpInterlockedFlushSList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ExpFlushGeneralLookaside(union _SLIST_HEADER *a1)
{
  __int64 v1; // rdx
  PSLIST_ENTRY v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  struct _SLIST_ENTRY *Next; // rbx

  v2 = RtlpInterlockedFlushSList(a1);
  if ( v2 )
  {
    do
    {
      Next = v2->Next;
      guard_dispatch_icall_no_overrides(v2, v1, v3, v4);
      v2 = Next;
    }
    while ( Next );
  }
  return 0LL;
}
