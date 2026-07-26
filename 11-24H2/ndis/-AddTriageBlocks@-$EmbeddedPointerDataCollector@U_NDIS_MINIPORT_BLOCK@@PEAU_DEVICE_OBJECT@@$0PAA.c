/*
 * XREFs of ?AddTriageBlocks@?$EmbeddedPointerDataCollector@U_NDIS_MINIPORT_BLOCK@@PEAU_DEVICE_OBJECT@@$0PAA@@@SAXPEAU_NDIS_MINIPORT_BLOCK@@PEAVTriageDataArray@@PEBUBugcheckParameters@@@Z @ 0x140091460
 * Callers:
 *     <none>
 * Callees:
 *     ?AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z @ 0x1400E49C0 (-AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z.c)
 */

char __fastcall EmbeddedPointerDataCollector<_NDIS_MINIPORT_BLOCK,_DEVICE_OBJECT *,3840>::AddTriageBlocks(
        __int64 a1,
        TriageDataArray *a2)
{
  void *v3; // rdx

  v3 = *(void **)(a1 + 3840);
  if ( v3 )
    LOBYTE(a2) = TriageDataArray::AddDataBlock(a2, v3, 0x150uLL);
  return (char)a2;
}
