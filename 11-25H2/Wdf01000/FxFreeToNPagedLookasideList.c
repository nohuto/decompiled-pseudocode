/*
 * XREFs of FxFreeToNPagedLookasideList @ 0x140032D00
 * Callers:
 *     ?SelfDestruct@FxRequestFromLookaside@@MEAAXXZ @ 0x1400328E0 (-SelfDestruct@FxRequestFromLookaside@@MEAAXXZ.c)
 *     ?Reclaim@FxNPagedLookasideList@@MEAAXPEAVFxMemoryBufferFromLookaside@@@Z @ 0x140068B40 (-Reclaim@FxNPagedLookasideList@@MEAAXPEAVFxMemoryBufferFromLookaside@@@Z.c)
 *     ?_Reclaim@FxLookasideList@@KAXPEAU_FX_DRIVER_GLOBALS@@PEAU_NPAGED_LOOKASIDE_LIST@@PEAVFxMemoryBufferFromLookaside@@@Z @ 0x14006A104 (-_Reclaim@FxLookasideList@@KAXPEAU_FX_DRIVER_GLOBALS@@PEAU_NPAGED_LOOKASIDE_LIST@@PEAVFxMemoryBu.c)
 *     ?ReclaimPool@FxNPagedLookasideListFromPool@@MEAAXPEAX@Z @ 0x14006C2F0 (-ReclaimPool@FxNPagedLookasideListFromPool@@MEAAXPEAX@Z.c)
 *     ?FreeSgListBuffer@FxDmaScatterGatherTransaction@@AEAAXXZ @ 0x140070A4C (-FreeSgListBuffer@FxDmaScatterGatherTransaction@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxFreeToNPagedLookasideList(_NPAGED_LOOKASIDE_LIST *Lookaside, _SLIST_ENTRY *Entry)
{
  if ( FxLibraryGlobals.Feature_WdfCD2_Enabled )
  {
    ExFreeToNPagedLookasideList(Lookaside, Entry);
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
