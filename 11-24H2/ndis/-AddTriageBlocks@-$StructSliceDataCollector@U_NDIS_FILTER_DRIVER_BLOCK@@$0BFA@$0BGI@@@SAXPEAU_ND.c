/*
 * XREFs of ?AddTriageBlocks@?$StructSliceDataCollector@U_NDIS_FILTER_DRIVER_BLOCK@@$0BFA@$0BGI@@@SAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@PEAVTriageDataArray@@PEBUBugcheckParameters@@@Z @ 0x140099B50
 * Callers:
 *     <none>
 * Callees:
 *     ?AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z @ 0x1400E49C0 (-AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z.c)
 */

bool __fastcall StructSliceDataCollector<_NDIS_FILTER_DRIVER_BLOCK,336,360>::AddTriageBlocks(
        __int64 a1,
        TriageDataArray *a2)
{
  return TriageDataArray::AddDataBlock(a2, (void *)(a1 + 336), 0x18uLL);
}
