/*
 * XREFs of ?AddTriageBlocks@?$StructSliceDataCollector@U_NDIS_FILTER_DRIVER_BLOCK@@$0A@$0GA@@@SAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@PEAVTriageDataArray@@PEBUBugcheckParameters@@@Z @ 0x140099B20
 * Callers:
 *     <none>
 * Callees:
 *     ?AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z @ 0x1400E49C0 (-AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z.c)
 */

bool __fastcall StructSliceDataCollector<_NDIS_FILTER_DRIVER_BLOCK,0,96>::AddTriageBlocks(
        void *a1,
        TriageDataArray *this)
{
  return TriageDataArray::AddDataBlock(this, a1, 0x60uLL);
}
