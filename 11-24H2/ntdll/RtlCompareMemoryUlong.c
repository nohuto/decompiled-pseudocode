/*
 * XREFs of RtlCompareMemoryUlong @ 0x180165F90
 * Callers:
 *     RtlpFreeHeap @ 0x18002D620 (RtlpFreeHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x18002EF80 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x18002FC50 (RtlpCreateSplitBlock.c)
 *     RtlpGrowBlockInPlace @ 0x180030A60 (RtlpGrowBlockInPlace.c)
 *     RtlpValidateHeapSegment @ 0x180041A64 (RtlpValidateHeapSegment.c)
 *     RtlpDeCommitFreeBlock @ 0x180042E70 (RtlpDeCommitFreeBlock.c)
 *     RtlpAllocateHeap @ 0x18009D360 (RtlpAllocateHeap.c)
 *     RtlpHpParametersVerify @ 0x18010A8FC (RtlpHpParametersVerify.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCompareMemoryUlong(_DWORD *a1, unsigned __int64 a2, int a3)
{
  bool v4; // zf
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx

  v5 = a2 >> 2;
  v4 = v5 == 0;
  if ( v5 )
  {
    v6 = v5;
    do
    {
      if ( !v6 )
        break;
      v4 = *a1++ == a3;
      --v6;
    }
    while ( v4 );
    if ( !v4 )
      v5 -= v6 + 1;
  }
  return 4 * v5;
}
