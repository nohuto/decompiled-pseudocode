/*
 * XREFs of ?ndisAllocOrFreeIterativeDataPathTrackerIfNeeded@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_PARTIAL_CHARACTERISTICS@@_N@Z @ 0x14006B450
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1401788C0 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?ndisAllocateIterativeDataPathTracker@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14006FF40 (-ndisAllocateIterativeDataPathTracker@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisAllocOrFreeIterativeDataPathTrackerIfNeeded(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NDIS_FILTER_PARTIAL_CHARACTERISTICS *a2,
        char a3)
{
  _NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY *IterativeDataPathTracker; // rcx

  if ( *(_OWORD *)&a2->SendNetBufferListsHandler == 0LL
    && !a2->ReceiveNetBufferListsHandler
    && !a2->ReturnNetBufferListsHandler )
  {
    if ( !a3 )
    {
      IterativeDataPathTracker = (_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY *)a1->IterativeDataPathTracker;
      if ( IterativeDataPathTracker )
      {
        ExFreePoolWithTag(IterativeDataPathTracker, 0);
        a1->IterativeDataPathTracker = 0LL;
      }
    }
    return 0LL;
  }
  if ( a1->IterativeDataPathTracker )
    return 0LL;
  return ndisAllocateIterativeDataPathTracker(a1);
}
