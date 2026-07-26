/*
 * XREFs of ?AddTriageBlocks@?$EmbeddedPointerDataCollector@U_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_SELECTIVE_SUSPEND@@$0BBGA@@@SAXPEAU_NDIS_MINIPORT_BLOCK@@PEAVTriageDataArray@@PEBUBugcheckParameters@@@Z @ 0x1400914C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z @ 0x1400E49C0 (-AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z.c)
 */

char __fastcall EmbeddedPointerDataCollector<_NDIS_MINIPORT_BLOCK,_NDIS_SELECTIVE_SUSPEND *,4448>::AddTriageBlocks(
        __int64 a1,
        TriageDataArray *a2)
{
  void *v3; // rdx

  v3 = *(void **)(a1 + 4448);
  if ( v3 )
    LOBYTE(a2) = TriageDataArray::AddDataBlock(a2, v3, 0x650uLL);
  return (char)a2;
}
