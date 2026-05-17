/*
 * XREFs of RtlpInterlockedFlushSList @ 0x180167010
 * Callers:
 *     RtlpLowFragHeapFlushCaches @ 0x18000129C (RtlpLowFragHeapFlushCaches.c)
 *     RtlpHpSegFreeInternal @ 0x18000B400 (RtlpHpSegFreeInternal.c)
 *     RtlpHpReallocMove @ 0x18002C3C0 (RtlpHpReallocMove.c)
 *     RtlpHpFreeHeap @ 0x180053AF0 (RtlpHpFreeHeap.c)
 *     RtlpFreeNTHeapInternal @ 0x180054850 (RtlpFreeNTHeapInternal.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpHpTagFreeHeap @ 0x1800818A0 (RtlpHpTagFreeHeap.c)
 *     RtlInterlockedFlushSList @ 0x1800EEE30 (RtlInterlockedFlushSList.c)
 *     RtlpHpVsSlotCompact @ 0x18011CEF4 (RtlpHpVsSlotCompact.c)
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
