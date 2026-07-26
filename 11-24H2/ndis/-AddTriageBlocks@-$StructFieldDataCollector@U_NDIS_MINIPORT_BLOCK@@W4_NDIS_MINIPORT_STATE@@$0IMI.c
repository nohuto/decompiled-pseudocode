/*
 * XREFs of ?AddTriageBlocks@?$StructFieldDataCollector@U_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_STATE@@$0IMI@@@SAXPEAU_NDIS_MINIPORT_BLOCK@@PEAVTriageDataArray@@PEBUBugcheckParameters@@@Z @ 0x140091840
 * Callers:
 *     <none>
 * Callees:
 *     ?AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z @ 0x1400E49C0 (-AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z.c)
 */

bool __fastcall StructFieldDataCollector<_NDIS_MINIPORT_BLOCK,enum _NDIS_MINIPORT_STATE,2248>::AddTriageBlocks(
        __int64 a1,
        TriageDataArray *a2)
{
  return TriageDataArray::AddDataBlock(a2, (void *)(a1 + 2248), 4uLL);
}
