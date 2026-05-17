/*
 * XREFs of RtlpInterlockedPushEntrySList @ 0x180166FD0
 * Callers:
 *     RtlpLowFragHeapFlushCaches @ 0x18000129C (RtlpLowFragHeapFlushCaches.c)
 *     RtlpHpSegFreeInternal @ 0x18000B400 (RtlpHpSegFreeInternal.c)
 *     RtlStdReleaseStackTrace @ 0x180025AC0 (RtlStdReleaseStackTrace.c)
 *     RtlpHpReallocMove @ 0x18002C3C0 (RtlpHpReallocMove.c)
 *     EtwpFreeRegistration @ 0x180046148 (EtwpFreeRegistration.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x180051570 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpLocalInfoAllocFromCache @ 0x180052EB0 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpHpFreeHeap @ 0x180053AF0 (RtlpHpFreeHeap.c)
 *     RtlpFreeUserBlock @ 0x180054420 (RtlpFreeUserBlock.c)
 *     RtlpFreeNTHeapInternal @ 0x180054850 (RtlpFreeNTHeapInternal.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpHpTagFreeHeap @ 0x1800818A0 (RtlpHpTagFreeHeap.c)
 *     RtlDeleteResource @ 0x1800B91B0 (RtlDeleteResource.c)
 *     RtlInterlockedPushEntrySList @ 0x1800EEC50 (RtlInterlockedPushEntrySList.c)
 *     RtlpFreeDebugInfo @ 0x1800F7DE0 (RtlpFreeDebugInfo.c)
 *     RtlpRegisterStackTrace @ 0x1800F9870 (RtlpRegisterStackTrace.c)
 *     RtlFreeMemoryBlockLookaside @ 0x1801721A0 (RtlFreeMemoryBlockLookaside.c)
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
