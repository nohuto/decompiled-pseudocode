/*
 * XREFs of ?AddTriageBlocks@?$UnicodeStringDataCollector@U_NDIS_MINIPORT_BLOCK@@$0BGI@@@SAXPEAU_NDIS_MINIPORT_BLOCK@@PEAVTriageDataArray@@PEBUBugcheckParameters@@@Z @ 0x140091B40
 * Callers:
 *     <none>
 * Callees:
 *     ?AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z @ 0x1400E49C0 (-AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z.c)
 */

char __fastcall UnicodeStringDataCollector<_NDIS_MINIPORT_BLOCK,360>::AddTriageBlocks(__int64 a1, TriageDataArray *a2)
{
  void *v3; // rdx

  v3 = *(void **)(a1 + 368);
  if ( v3 )
    LOBYTE(a2) = TriageDataArray::AddDataBlock(a2, v3, *(unsigned __int16 *)(a1 + 360));
  return (char)a2;
}
