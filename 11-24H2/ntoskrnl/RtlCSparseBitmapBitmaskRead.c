/*
 * XREFs of RtlCSparseBitmapBitmaskRead @ 0x14035C3DC
 * Callers:
 *     ExFreeHeapPool @ 0x140359950 (ExFreeHeapPool.c)
 *     RtlpHpFreeHeap @ 0x14035B220 (RtlpHpFreeHeap.c)
 *     ExGetHeapFromVA @ 0x14035C310 (ExGetHeapFromVA.c)
 *     RtlpHpMetadataFree @ 0x140459100 (RtlpHpMetadataFree.c)
 *     RtlpHpAllocateHeapSlow @ 0x1404D2B7C (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpExtrasSetPresent @ 0x140602064 (RtlpHpExtrasSetPresent.c)
 *     RtlpHpMetadataCommit @ 0x1406028B0 (RtlpHpMetadataCommit.c)
 *     ExpAllocatePoolWithQuotaTag @ 0x140B74210 (ExpAllocatePoolWithQuotaTag.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCSparseBitmapBitmaskRead(__int64 a1, unsigned __int64 a2)
{
  int v2; // eax

  v2 = 0;
  if ( _bittest64((const signed __int64 *)(a1 + 56), a2 >> 30) )
    v2 = (_bittest64(*(const signed __int64 **)a1, a2 >> 15) != 0) + 1;
  if ( v2 == 2 )
    return (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * (a2 >> 6)) >> (a2 & 0x3F)) & 3LL;
  else
    return 0LL;
}
