/*
 * XREFs of RtlCSparseBitmapBitmaskRead @ 0x1403C7D9C
 * Callers:
 *     ExAllocateHeapPool @ 0x1402DAB20 (ExAllocateHeapPool.c)
 *     RtlpHpFreeHeap @ 0x1402DE7F0 (RtlpHpFreeHeap.c)
 *     ExFreeHeapPool @ 0x1402DECE0 (ExFreeHeapPool.c)
 *     ExGetHeapFromVA @ 0x1403C7CD0 (ExGetHeapFromVA.c)
 *     RtlpHpAllocateHeapSlow @ 0x1403C9AF8 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpMetadataFree @ 0x1403CB6C4 (RtlpHpMetadataFree.c)
 *     RtlpHpExtrasSetPresent @ 0x1405F86E4 (RtlpHpExtrasSetPresent.c)
 *     RtlpHpMetadataCommit @ 0x1405F8F30 (RtlpHpMetadataCommit.c)
 *     ExpAllocatePoolWithQuotaTag @ 0x140B62670 (ExpAllocatePoolWithQuotaTag.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
