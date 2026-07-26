/*
 * XREFs of ?AddTriageBlocks@?$NblTrackerCollector@U_NDIS_FILTER_BLOCK@@@@SAXPEAU_NDIS_FILTER_BLOCK@@PEAVTriageDataArray@@PEBUBugcheckParameters@@@Z @ 0x140097B60
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisAddNblTrackerToTriageArray@@YAXPEAVTriageDataArray@@PEAUNDIS_NBL_TRACKER_HANDLE__@@@Z @ 0x1400A1954 (-ndisAddNblTrackerToTriageArray@@YAXPEAVTriageDataArray@@PEAUNDIS_NBL_TRACKER_HANDLE__@@@Z.c)
 */

void __fastcall NblTrackerCollector<_NDIS_FILTER_BLOCK>::AddTriageBlocks(__int64 a1, TriageDataArray *a2)
{
  ndisAddNblTrackerToTriageArray(a2, *(struct NDIS_NBL_TRACKER_HANDLE__ **)(a1 + 648));
}
