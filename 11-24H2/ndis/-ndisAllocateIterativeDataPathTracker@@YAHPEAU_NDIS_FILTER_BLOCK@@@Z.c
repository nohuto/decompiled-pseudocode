/*
 * XREFs of ?ndisAllocateIterativeDataPathTracker@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14006FF40
 * Callers:
 *     ?ndisFSetRestartAttributes@@YAHPEAXPEAU_NDIS_FILTER_PARTIAL_CHARACTERISTICS@@@Z @ 0x14005FDE0 (-ndisFSetRestartAttributes@@YAHPEAXPEAU_NDIS_FILTER_PARTIAL_CHARACTERISTICS@@@Z.c)
 *     ?ndisAllocOrFreeIterativeDataPathTrackerIfNeeded@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_PARTIAL_CHARACTERISTICS@@_N@Z @ 0x14006B450 (-ndisAllocOrFreeIterativeDataPathTrackerIfNeeded@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_PA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisAllocateIterativeDataPathTracker(struct _NDIS_FILTER_BLOCK *a1)
{
  _NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY *Pool2; // rax
  unsigned int v3; // ecx

  Pool2 = (_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY *)ExAllocatePool2(
                                                       72LL,
                                                       96LL * ndisMaxNumberOfProcessors,
                                                       538985550LL);
  v3 = 0;
  a1->IterativeDataPathTracker = (_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY (*)[4])Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  return v3;
}
