/*
 * XREFs of ?AddTriageBlocks@?$UnicodeStringPointerDataCollector@U_NDIS_FILTER_BLOCK@@PEAU_UNICODE_STRING@@$0DA@@@SAXPEAU_NDIS_FILTER_BLOCK@@PEAVTriageDataArray@@PEBUBugcheckParameters@@@Z @ 0x140097D00
 * Callers:
 *     <none>
 * Callees:
 *     ?IsMemoryValid@@YA_NPEAX_K@Z @ 0x140091FBC (-IsMemoryValid@@YA_NPEAX_K@Z.c)
 *     ?AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z @ 0x1400E49C0 (-AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z.c)
 */

char __fastcall UnicodeStringPointerDataCollector<_NDIS_FILTER_BLOCK,_UNICODE_STRING *,48>::AddTriageBlocks(
        __int64 a1,
        TriageDataArray *a2)
{
  unsigned __int16 *v2; // rbx
  char result; // al

  v2 = *(unsigned __int16 **)(a1 + 48);
  result = IsMemoryValid((char *)v2, 0x10uLL);
  if ( result )
  {
    if ( *((_QWORD *)v2 + 1) )
    {
      TriageDataArray::AddDataBlock(a2, v2, 0x10uLL);
      return TriageDataArray::AddDataBlock(a2, *((void **)v2 + 1), *v2);
    }
  }
  return result;
}
