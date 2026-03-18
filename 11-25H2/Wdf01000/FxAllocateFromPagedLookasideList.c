/*
 * XREFs of FxAllocateFromPagedLookasideList @ 0x140095C54
 * Callers:
 *     ?Allocate@FxPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z @ 0x140056E30 (-Allocate@FxPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

PSLIST_ENTRY __fastcall FxAllocateFromPagedLookasideList(_PAGED_LOOKASIDE_LIST *Lookaside)
{
  PSLIST_ENTRY result; // rax

  if ( FxLibraryGlobals.Feature_WdfCD2_Enabled )
    return (PSLIST_ENTRY)ExAllocateFromPagedLookasideList(Lookaside);
  ++Lookaside->L.TotalAllocates;
  result = ExpInterlockedPopEntrySList(&Lookaside->L.ListHead);
  if ( !result )
  {
    ++Lookaside->L.AllocateMisses;
    return (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))Lookaside->L.AllocateEx)(
                           (unsigned int)Lookaside->L.Type,
                           Lookaside->L.Size,
                           Lookaside->L.Tag);
  }
  return result;
}
