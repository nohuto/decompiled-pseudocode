/*
 * XREFs of RtlpInterlockedPushEntrySList @ 0x180163E00
 * Callers:
 *     RtlDeleteResource @ 0x180027580 (RtlDeleteResource.c)
 *     RtlStdReleaseStackTrace @ 0x1800310D0 (RtlStdReleaseStackTrace.c)
 *     EtwpFreeRegistration @ 0x180049D68 (EtwpFreeRegistration.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlpHpTagFreeHeap @ 0x180053EC0 (RtlpHpTagFreeHeap.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x1800554A0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpLocalInfoAllocFromCache @ 0x180056DE0 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpHpFreeHeap @ 0x180057A20 (RtlpHpFreeHeap.c)
 *     RtlpFreeUserBlock @ 0x180058350 (RtlpFreeUserBlock.c)
 *     RtlpFreeNTHeapInternal @ 0x180058780 (RtlpFreeNTHeapInternal.c)
 *     RtlpHpSegFreeInternal @ 0x1800653A0 (RtlpHpSegFreeInternal.c)
 *     RtlpLowFragHeapFlushCaches @ 0x1800A0AC0 (RtlpLowFragHeapFlushCaches.c)
 *     RtlInterlockedPushEntrySList @ 0x1800E9350 (RtlInterlockedPushEntrySList.c)
 *     RtlpFreeDebugInfo @ 0x1800F07C0 (RtlpFreeDebugInfo.c)
 *     RtlpRegisterStackTrace @ 0x1800F2850 (RtlpRegisterStackTrace.c)
 *     RtlFreeMemoryBlockLookaside @ 0x18016F1A0 (RtlFreeMemoryBlockLookaside.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpInterlockedPushEntrySList(__int128 *a1, _QWORD *a2)
{
  __int128 v5; // rax
  __int64 v6; // r8
  signed __int64 v7; // rbx
  __int128 v8; // rt0
  unsigned __int8 v9; // tt

  _m_prefetchw(a1);
  v5 = *a1;
  do
  {
    v6 = *((_QWORD *)&v5 + 1);
    LOBYTE(v6) = BYTE8(v5) & 0xF0;
    *a2 = v6;
    v7 = v5 + 0x20000;
    LOWORD(v7) = v5 + 1;
    v8 = v5;
    v9 = _InterlockedCompareExchange128((volatile signed __int64 *)a1, (signed __int64)a2, v7, (signed __int64 *)&v8);
    v5 = v8;
  }
  while ( !v9 );
  return v6;
}
