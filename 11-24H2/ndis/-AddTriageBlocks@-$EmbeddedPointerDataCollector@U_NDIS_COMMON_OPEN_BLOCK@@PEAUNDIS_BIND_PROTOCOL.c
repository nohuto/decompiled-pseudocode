/*
 * XREFs of ?AddTriageBlocks@?$EmbeddedPointerDataCollector@U_NDIS_COMMON_OPEN_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@$0DFI@@@SAXPEAU_NDIS_COMMON_OPEN_BLOCK@@PEAVTriageDataArray@@PEBUBugcheckParameters@@@Z @ 0x1400B7490
 * Callers:
 *     <none>
 * Callees:
 *     ?AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z @ 0x1400E49C0 (-AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z.c)
 */

char __fastcall EmbeddedPointerDataCollector<_NDIS_COMMON_OPEN_BLOCK,NDIS_BIND_PROTOCOL_LINK *,856>::AddTriageBlocks(
        __int64 a1,
        TriageDataArray *a2)
{
  void *v3; // rdx

  v3 = *(void **)(a1 + 856);
  if ( v3 )
    LOBYTE(a2) = TriageDataArray::AddDataBlock(a2, v3, 0x58uLL);
  return (char)a2;
}
