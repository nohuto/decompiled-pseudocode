/*
 * XREFs of RtlCSparseBitmapBitmaskRead @ 0x180059400
 * Callers:
 *     RtlSizeHeap @ 0x180021000 (RtlSizeHeap.c)
 *     RtlpHpHeapWalk @ 0x18002B340 (RtlpHpHeapWalk.c)
 *     RtlpHpTagFreeHeap @ 0x180053EC0 (RtlpHpTagFreeHeap.c)
 *     RtlpHpFreeHeap @ 0x180057A20 (RtlpHpFreeHeap.c)
 *     RtlpHpFreeHeapSlow @ 0x1800580C4 (RtlpHpFreeHeapSlow.c)
 *     RtlpHpExtrasGet @ 0x180059480 (RtlpHpExtrasGet.c)
 *     RtlpHpSizeHeapInternal @ 0x180059880 (RtlpHpSizeHeapInternal.c)
 *     RtlpHpSizeHeap @ 0x180059C60 (RtlpHpSizeHeap.c)
 *     RtlpHpReAllocateHeap @ 0x18005CD30 (RtlpHpReAllocateHeap.c)
 *     RtlpHpSegReAlloc @ 0x18005CF10 (RtlpHpSegReAlloc.c)
 *     RtlpHpReallocComputeSizes @ 0x18005DAE0 (RtlpHpReallocComputeSizes.c)
 *     RtlpHpMetadataFree @ 0x180064B08 (RtlpHpMetadataFree.c)
 *     RtlpHpExtrasSetPresent @ 0x18009EA20 (RtlpHpExtrasSetPresent.c)
 *     RtlpHpExtrasAppend @ 0x18009EC10 (RtlpHpExtrasAppend.c)
 *     RtlpHpReallocMove @ 0x18009EFF0 (RtlpHpReallocMove.c)
 *     RtlpHpAllocateHeapSlow @ 0x18009FA50 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpMetadataCommit @ 0x1800EF3BC (RtlpHpMetadataCommit.c)
 *     RtlpQueryExtendedInformationHeap @ 0x180114970 (RtlpQueryExtendedInformationHeap.c)
 *     RtlpHpReAllocateHeapSlow @ 0x18011AB20 (RtlpHpReAllocateHeapSlow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCSparseBitmapBitmaskRead(__int64 a1, unsigned __int64 a2)
{
  int v2; // eax

  if ( _bittest64((const signed __int64 *)(a1 + 56), a2 >> 30) )
  {
    if ( _bittest64(*(const signed __int64 **)a1, a2 >> 15) )
      v2 = 2;
    else
      v2 = 1;
  }
  else
  {
    v2 = 0;
  }
  if ( v2 == 2 )
    return (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * (a2 >> 6)) >> (a2 & 0x3F)) & 3LL;
  else
    return 0LL;
}
