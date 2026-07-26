/*
 * XREFs of ?AddTriageBlocks@?$StructFieldDataCollector@U_NDIS_MINIPORT_BLOCK@@W4_NET_IF_MEDIA_CONNECT_STATE@@$0BFI@@@SAXPEAU_NDIS_MINIPORT_BLOCK@@PEAVTriageDataArray@@PEBUBugcheckParameters@@@Z @ 0x1400918A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z @ 0x1400E49C0 (-AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z.c)
 */

bool __fastcall StructFieldDataCollector<_NDIS_MINIPORT_BLOCK,enum _NET_IF_MEDIA_CONNECT_STATE,344>::AddTriageBlocks(
        __int64 a1,
        TriageDataArray *a2)
{
  return TriageDataArray::AddDataBlock(a2, (void *)(a1 + 344), 4uLL);
}
