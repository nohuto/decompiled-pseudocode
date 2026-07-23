/*
 * XREFs of ExpFlushGeneralLookaside @ 0x140476110
 * Callers:
 *     ExDeletePagedLookasideList @ 0x1404760B0 (ExDeletePagedLookasideList.c)
 *     ExDeleteNPagedLookasideList @ 0x1404760E0 (ExDeleteNPagedLookasideList.c)
 * Callees:
 *     RtlpInterlockedFlushSList @ 0x1406A8640 (RtlpInterlockedFlushSList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
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
