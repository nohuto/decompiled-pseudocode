/*
 * XREFs of ?AddTriageBlocks@?$StructFieldDataCollector@U_NDIS_FILTER_BLOCK@@PEAUNDIS_NBL_TRACKER_HANDLE__@@$0CII@@@SAXPEAU_NDIS_FILTER_BLOCK@@PEAVTriageDataArray@@PEBUBugcheckParameters@@@Z @ 0x140097C70
 * Callers:
 *     <none>
 * Callees:
 *     ?AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z @ 0x1400E49C0 (-AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z.c)
 */

bool __fastcall StructFieldDataCollector<_NDIS_FILTER_BLOCK,NDIS_NBL_TRACKER_HANDLE__ *,648>::AddTriageBlocks(
        __int64 a1,
        TriageDataArray *a2)
{
  return TriageDataArray::AddDataBlock(a2, (void *)(a1 + 648), 8uLL);
}
