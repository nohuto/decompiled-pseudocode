/*
 * XREFs of RtlpInterlockedPushEntrySList @ 0x180165A40
 * Callers:
 *     EtwpFreeRegistration @ 0x18001D368 (EtwpFreeRegistration.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlpHpTagFreeHeap @ 0x1800274C0 (RtlpHpTagFreeHeap.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x180028AA0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpLocalInfoAllocFromCache @ 0x18002A3E0 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpHpFreeHeap @ 0x18002B020 (RtlpHpFreeHeap.c)
 *     RtlpFreeUserBlock @ 0x18002B950 (RtlpFreeUserBlock.c)
 *     RtlpFreeNTHeapInternal @ 0x18002BD80 (RtlpFreeNTHeapInternal.c)
 *     RtlpHpSegFreeInternal @ 0x18004F7C0 (RtlpHpSegFreeInternal.c)
 *     RtlDeleteResource @ 0x18008FE30 (RtlDeleteResource.c)
 *     RtlpLowFragHeapFlushCaches @ 0x180095D9C (RtlpLowFragHeapFlushCaches.c)
 *     RtlStdReleaseStackTrace @ 0x18009CB10 (RtlStdReleaseStackTrace.c)
 *     RtlInterlockedPushEntrySList @ 0x1800EE170 (RtlInterlockedPushEntrySList.c)
 *     RtlpFreeDebugInfo @ 0x1800F6260 (RtlpFreeDebugInfo.c)
 *     RtlpRegisterStackTrace @ 0x1800F7CE0 (RtlpRegisterStackTrace.c)
 *     RtlFreeMemoryBlockLookaside @ 0x1801701A0 (RtlFreeMemoryBlockLookaside.c)
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
