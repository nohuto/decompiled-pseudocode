/*
 * XREFs of RtlpFlushHeap @ 0x180095D3C
 * Callers:
 *     RtlpFlushHeapsCallback @ 0x180095D20 (RtlpFlushHeapsCallback.c)
 *     RtlSetHeapInformation @ 0x180096E70 (RtlSetHeapInformation.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     RtlTryEnterCriticalSection @ 0x18002EEA0 (RtlTryEnterCriticalSection.c)
 *     RtlpCollectFreeBlocks @ 0x180031150 (RtlpCollectFreeBlocks.c)
 *     RtlpLowFragHeapFlushCaches @ 0x180095D9C (RtlpLowFragHeapFlushCaches.c)
 */

__int64 __fastcall RtlpFlushHeap(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 112) & 1) == 0 && (unsigned int)RtlTryEnterCriticalSection(*(_QWORD *)(a1 + 352)) )
  {
    if ( *(_BYTE *)(a1 + 418) == 2 && *(_QWORD *)(a1 + 408) )
      RtlpLowFragHeapFlushCaches();
    RtlpCollectFreeBlocks(a1);
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  }
  return 0LL;
}
