/*
 * XREFs of FxFreeToPagedLookasideList @ 0x140081340
 * Callers:
 *     ?ReclaimPool@FxPagedLookasideListFromPool@@MEAAXPEAX@Z @ 0x140095C00 (-ReclaimPool@FxPagedLookasideListFromPool@@MEAAXPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxFreeToPagedLookasideList(_PAGED_LOOKASIDE_LIST *Lookaside, _SLIST_ENTRY *Entry)
{
  if ( FxLibraryGlobals.Feature_WdfCD2_Enabled )
  {
    ExFreeToPagedLookasideList(Lookaside, Entry);
  }
  else
  {
    ++Lookaside->L.TotalFrees;
    if ( ExQueryDepthSList(&Lookaside->L.ListHead) < Lookaside->L.Depth )
    {
      ExpInterlockedPushEntrySList(&Lookaside->L.ListHead, Entry);
    }
    else
    {
      ++Lookaside->L.FreeMisses;
      ((void (__fastcall *)(_SLIST_ENTRY *))Lookaside->L.FreeEx)(Entry);
    }
  }
}
