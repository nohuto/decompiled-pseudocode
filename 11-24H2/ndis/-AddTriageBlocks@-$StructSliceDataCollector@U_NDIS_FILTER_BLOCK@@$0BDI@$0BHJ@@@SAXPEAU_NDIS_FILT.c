/*
 * XREFs of ?AddTriageBlocks@?$StructSliceDataCollector@U_NDIS_FILTER_BLOCK@@$0BDI@$0BHJ@@@SAXPEAU_NDIS_FILTER_BLOCK@@PEAVTriageDataArray@@PEBUBugcheckParameters@@@Z @ 0x140097CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z @ 0x1400E49C0 (-AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z.c)
 */

bool __fastcall StructSliceDataCollector<_NDIS_FILTER_BLOCK,312,377>::AddTriageBlocks(__int64 a1, TriageDataArray *a2)
{
  return TriageDataArray::AddDataBlock(a2, (void *)(a1 + 312), 0x41uLL);
}
