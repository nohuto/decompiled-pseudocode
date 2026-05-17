/*
 * XREFs of RtlpInterlockedFlushSList @ 0x180165A80
 * Callers:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlpHpTagFreeHeap @ 0x1800274C0 (RtlpHpTagFreeHeap.c)
 *     RtlpHpFreeHeap @ 0x18002B020 (RtlpHpFreeHeap.c)
 *     RtlpFreeNTHeapInternal @ 0x18002BD80 (RtlpFreeNTHeapInternal.c)
 *     RtlpHpSegFreeInternal @ 0x18004F7C0 (RtlpHpSegFreeInternal.c)
 *     RtlpLowFragHeapFlushCaches @ 0x180095D9C (RtlpLowFragHeapFlushCaches.c)
 *     RtlInterlockedFlushSList @ 0x1800EE350 (RtlInterlockedFlushSList.c)
 *     RtlpHpVsSlotCompact @ 0x18011B65C (RtlpHpVsSlotCompact.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpInterlockedFlushSList(__int128 *a1)
{
  __int128 v1; // rax
  signed __int64 v2; // rbx
  __int128 v3; // rt0
  unsigned __int8 v4; // tt

  _m_prefetchw(a1);
  v1 = *a1;
  do
  {
    v2 = v1;
    LOWORD(v2) = 0;
    v3 = v1;
    v4 = _InterlockedCompareExchange128((volatile signed __int64 *)a1, 0LL, v2, (signed __int64 *)&v3);
    v1 = v3;
  }
  while ( !v4 );
  return BYTE8(v1) & 0xF0;
}
