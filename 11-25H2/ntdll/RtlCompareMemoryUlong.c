/*
 * XREFs of RtlCompareMemoryUlong @ 0x180167520
 * Callers:
 *     RtlpAllocateHeap @ 0x180026310 (RtlpAllocateHeap.c)
 *     RtlpFreeHeap @ 0x1800560F0 (RtlpFreeHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x180057A50 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x180058720 (RtlpCreateSplitBlock.c)
 *     RtlpGrowBlockInPlace @ 0x180059530 (RtlpGrowBlockInPlace.c)
 *     RtlpValidateHeapSegment @ 0x180095454 (RtlpValidateHeapSegment.c)
 *     RtlpDeCommitFreeBlock @ 0x180096B50 (RtlpDeCommitFreeBlock.c)
 *     RtlpHpParametersVerify @ 0x18010D058 (RtlpHpParametersVerify.c)
 * Callees:
 *     <none>
 */

SIZE_T __cdecl RtlCompareMemoryUlong(PVOID Source, SIZE_T Length, ULONG Pattern)
{
  bool v4; // zf
  SIZE_T v5; // rdx
  SIZE_T v6; // rcx

  v5 = Length >> 2;
  v4 = v5 == 0;
  if ( v5 )
  {
    v6 = v5;
    do
    {
      if ( !v6 )
        break;
      v4 = *(_DWORD *)Source == Pattern;
      Source = (char *)Source + 4;
      --v6;
    }
    while ( v4 );
    if ( !v4 )
      v5 -= v6 + 1;
  }
  return 4 * v5;
}
