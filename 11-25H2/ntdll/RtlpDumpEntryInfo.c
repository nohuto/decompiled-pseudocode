/*
 * XREFs of RtlpDumpEntryInfo @ 0x180120268
 * Callers:
 *     RtlpScanHeapAllocBlocks @ 0x180093C84 (RtlpScanHeapAllocBlocks.c)
 * Callees:
 *     DbgPrint @ 0x1800586D0 (DbgPrint.c)
 *     RtlSizeHeap @ 0x1800940C0 (RtlSizeHeap.c)
 */

__int64 __fastcall RtlpDumpEntryInfo(__int64 a1, __int64 a2)
{
  int v2; // edi
  unsigned __int8 *v3; // rbx
  int v4; // eax

  v2 = a1;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    v3 = (unsigned __int8 *)a2;
  }
  else
  {
    v3 = (unsigned __int8 *)(a2 - 16);
    _m_prefetchw((const void *)(a2 - 16));
    if ( *(_BYTE *)(a2 - 16 + 15) == 5 )
      v3 -= 16 * v3[14];
  }
  v4 = RtlSizeHeap(a1, 0, a2);
  DbgPrint("%p  %-16Ix  %Id", v3, v2, v4);
  return DbgPrint("\n");
}
