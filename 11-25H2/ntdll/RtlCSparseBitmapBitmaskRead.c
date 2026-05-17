/*
 * XREFs of RtlCSparseBitmapBitmaskRead @ 0x1800554D0
 * Callers:
 *     RtlpHpMetadataFree @ 0x18000AB68 (RtlpHpMetadataFree.c)
 *     RtlpHpReAllocateHeap @ 0x18002BF34 (RtlpHpReAllocateHeap.c)
 *     RtlpHpReallocMove @ 0x18002C3C0 (RtlpHpReallocMove.c)
 *     RtlpHpReallocComputeSizes @ 0x18002D720 (RtlpHpReallocComputeSizes.c)
 *     RtlpHpTagAllocateHeap @ 0x18002E060 (RtlpHpTagAllocateHeap.c)
 *     RtlpHpAllocateHeapSlow @ 0x18002F040 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpMetadataCommit @ 0x180033EE4 (RtlpHpMetadataCommit.c)
 *     RtlpHpFreeHeap @ 0x180053AF0 (RtlpHpFreeHeap.c)
 *     RtlpHpFreeHeapSlow @ 0x180054194 (RtlpHpFreeHeapSlow.c)
 *     RtlpHpExtrasGet @ 0x180055550 (RtlpHpExtrasGet.c)
 *     RtlpHpSizeHeapInternal @ 0x180055950 (RtlpHpSizeHeapInternal.c)
 *     RtlpHpSizeHeap @ 0x180055D30 (RtlpHpSizeHeap.c)
 *     RtlpHpTagFreeHeap @ 0x1800818A0 (RtlpHpTagFreeHeap.c)
 *     RtlSizeHeap @ 0x1800940C0 (RtlSizeHeap.c)
 *     RtlpHpHeapWalk @ 0x18009B8E0 (RtlpHpHeapWalk.c)
 *     RtlpHpExtrasSetPresent @ 0x1800C6F40 (RtlpHpExtrasSetPresent.c)
 *     RtlpHpReAllocateHeapSlow @ 0x18011E180 (RtlpHpReAllocateHeapSlow.c)
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
