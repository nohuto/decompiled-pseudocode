/*
 * XREFs of RtlpFlushHeap @ 0x1800A05AC
 * Callers:
 *     RtlSetHeapInformation @ 0x18002BE70 (RtlSetHeapInformation.c)
 *     RtlpFlushHeapsCallback @ 0x1800A0590 (RtlpFlushHeapsCallback.c)
 * Callees:
 *     RtlpCollectFreeBlocks @ 0x18000F7E0 (RtlpCollectFreeBlocks.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     RtlTryEnterCriticalSection @ 0x1800A09E0 (RtlTryEnterCriticalSection.c)
 *     RtlpLowFragHeapFlushCaches @ 0x1800A0AC0 (RtlpLowFragHeapFlushCaches.c)
 */

__int64 __fastcall RtlpFlushHeap(unsigned __int64 a1)
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
