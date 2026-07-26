/*
 * XREFs of ?AddTriageBlocks@?$StructFieldDataCollector@U_NDIS_COMMON_OPEN_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@$0DFI@@@SAXPEAU_NDIS_COMMON_OPEN_BLOCK@@PEAVTriageDataArray@@PEBUBugcheckParameters@@@Z @ 0x1400B74F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z @ 0x1400E49C0 (-AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z.c)
 */

bool __fastcall StructFieldDataCollector<_NDIS_COMMON_OPEN_BLOCK,NDIS_BIND_PROTOCOL_LINK *,856>::AddTriageBlocks(
        __int64 a1,
        TriageDataArray *a2)
{
  return TriageDataArray::AddDataBlock(a2, (void *)(a1 + 856), 8uLL);
}
