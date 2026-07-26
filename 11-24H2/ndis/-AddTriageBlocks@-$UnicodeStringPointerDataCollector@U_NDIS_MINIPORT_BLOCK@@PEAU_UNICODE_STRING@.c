/*
 * XREFs of ?AddTriageBlocks@?$UnicodeStringPointerDataCollector@U_NDIS_MINIPORT_BLOCK@@PEAU_UNICODE_STRING@@$0PBA@@@SAXPEAU_NDIS_MINIPORT_BLOCK@@PEAVTriageDataArray@@PEBUBugcheckParameters@@@Z @ 0x140091BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsMemoryValid@@YA_NPEAX_K@Z @ 0x140091FBC (-IsMemoryValid@@YA_NPEAX_K@Z.c)
 *     ?AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z @ 0x1400E49C0 (-AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z.c)
 */

bool __fastcall UnicodeStringPointerDataCollector<_NDIS_MINIPORT_BLOCK,_UNICODE_STRING *,3856>::AddTriageBlocks(
        __int64 a1,
        TriageDataArray *a2)
{
  void **v2; // rbx
  bool result; // al

  v2 = *(void ***)(a1 + 3856);
  result = IsMemoryValid(v2, 0x10uLL);
  if ( result )
  {
    if ( v2[1] )
    {
      TriageDataArray::AddDataBlock(a2, v2, 0x10uLL);
      return TriageDataArray::AddDataBlock(a2, v2[1], *(unsigned __int16 *)v2);
    }
  }
  return result;
}
