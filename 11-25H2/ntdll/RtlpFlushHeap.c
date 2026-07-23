/*
 * XREFs of RtlpFlushHeap @ 0x18000123C
 * Callers:
 *     RtlpFlushHeapsCallback @ 0x180001220 (RtlpFlushHeapsCallback.c)
 *     RtlSetHeapInformation @ 0x1800024D0 (RtlSetHeapInformation.c)
 * Callees:
 *     RtlpLowFragHeapFlushCaches @ 0x18000129C (RtlpLowFragHeapFlushCaches.c)
 *     RtlTryEnterCriticalSection @ 0x180057970 (RtlTryEnterCriticalSection.c)
 *     RtlpCollectFreeBlocks @ 0x180059C20 (RtlpCollectFreeBlocks.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 */

__int64 __fastcall RtlpFlushHeap(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 112) & 1) == 0 && RtlTryEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352)) )
  {
    if ( *(_BYTE *)(a1 + 418) == 2 && *(_QWORD *)(a1 + 408) )
      RtlpLowFragHeapFlushCaches();
    RtlpCollectFreeBlocks(a1);
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
  }
  return 0LL;
}
