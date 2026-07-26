/*
 * XREFs of ?AddTriageBlocks@?$StructSliceDataCollector@U_NDIS_MINIPORT_BLOCK@@$0GPI@$0GPM@@@SAXPEAU_NDIS_MINIPORT_BLOCK@@PEAVTriageDataArray@@PEBUBugcheckParameters@@@Z @ 0x140091A20
 * Callers:
 *     <none>
 * Callees:
 *     ?AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z @ 0x1400E49C0 (-AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z.c)
 */

bool __fastcall StructSliceDataCollector<_NDIS_MINIPORT_BLOCK,1784,1788>::AddTriageBlocks(
        __int64 a1,
        TriageDataArray *a2)
{
  return TriageDataArray::AddDataBlock(a2, (void *)(a1 + 1784), 4uLL);
}
