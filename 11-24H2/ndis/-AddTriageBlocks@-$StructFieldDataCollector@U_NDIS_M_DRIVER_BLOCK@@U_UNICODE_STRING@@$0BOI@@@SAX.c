/*
 * XREFs of ?AddTriageBlocks@?$StructFieldDataCollector@U_NDIS_M_DRIVER_BLOCK@@U_UNICODE_STRING@@$0BOI@@@SAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAVTriageDataArray@@PEBUBugcheckParameters@@@Z @ 0x140091900
 * Callers:
 *     <none>
 * Callees:
 *     ?AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z @ 0x1400E49C0 (-AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z.c)
 */

bool __fastcall StructFieldDataCollector<_NDIS_M_DRIVER_BLOCK,_UNICODE_STRING,488>::AddTriageBlocks(
        __int64 a1,
        TriageDataArray *a2)
{
  return TriageDataArray::AddDataBlock(a2, (void *)(a1 + 488), 0x10uLL);
}
