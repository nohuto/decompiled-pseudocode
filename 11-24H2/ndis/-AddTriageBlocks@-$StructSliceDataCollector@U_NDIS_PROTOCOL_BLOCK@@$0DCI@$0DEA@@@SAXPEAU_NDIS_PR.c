/*
 * XREFs of ?AddTriageBlocks@?$StructSliceDataCollector@U_NDIS_PROTOCOL_BLOCK@@$0DCI@$0DEA@@@SAXPEAU_NDIS_PROTOCOL_BLOCK@@PEAVTriageDataArray@@PEBUBugcheckParameters@@@Z @ 0x1400B75B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z @ 0x1400E49C0 (-AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z.c)
 */

bool __fastcall StructSliceDataCollector<_NDIS_PROTOCOL_BLOCK,808,832>::AddTriageBlocks(
        __int64 a1,
        TriageDataArray *a2)
{
  return TriageDataArray::AddDataBlock(a2, (void *)(a1 + 808), 0x18uLL);
}
