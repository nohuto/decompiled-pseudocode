/*
 * XREFs of ?AddTriageBlocks@?$UnicodeStringDataCollector@U_NDIS_PROTOCOL_BLOCK@@$0DCI@@@SAXPEAU_NDIS_PROTOCOL_BLOCK@@PEAVTriageDataArray@@PEBUBugcheckParameters@@@Z @ 0x1400B75E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z @ 0x1400E49C0 (-AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z.c)
 */

char __fastcall UnicodeStringDataCollector<_NDIS_PROTOCOL_BLOCK,808>::AddTriageBlocks(__int64 a1, TriageDataArray *a2)
{
  void *v3; // rdx

  v3 = *(void **)(a1 + 816);
  if ( v3 )
    LOBYTE(a2) = TriageDataArray::AddDataBlock(a2, v3, *(unsigned __int16 *)(a1 + 808));
  return (char)a2;
}
