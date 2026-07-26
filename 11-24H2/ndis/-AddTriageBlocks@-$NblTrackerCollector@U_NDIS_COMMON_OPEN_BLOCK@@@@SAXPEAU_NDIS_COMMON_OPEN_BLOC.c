/*
 * XREFs of ?AddTriageBlocks@?$NblTrackerCollector@U_NDIS_COMMON_OPEN_BLOCK@@@@SAXPEAU_NDIS_COMMON_OPEN_BLOCK@@PEAVTriageDataArray@@PEBUBugcheckParameters@@@Z @ 0x1400B74C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisAddNblTrackerToTriageArray@@YAXPEAVTriageDataArray@@PEAUNDIS_NBL_TRACKER_HANDLE__@@@Z @ 0x1400A1954 (-ndisAddNblTrackerToTriageArray@@YAXPEAVTriageDataArray@@PEAUNDIS_NBL_TRACKER_HANDLE__@@@Z.c)
 */

void __fastcall NblTrackerCollector<_NDIS_COMMON_OPEN_BLOCK>::AddTriageBlocks(__int64 a1, TriageDataArray *a2)
{
  ndisAddNblTrackerToTriageArray(a2, *(_QWORD *)(a1 + 584));
}
