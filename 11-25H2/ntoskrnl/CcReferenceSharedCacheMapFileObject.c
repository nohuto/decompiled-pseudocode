/*
 * XREFs of CcReferenceSharedCacheMapFileObject @ 0x1402C235C
 * Callers:
 *     CcFlushCacheOneRange @ 0x1402C13D0 (CcFlushCacheOneRange.c)
 *     CcUnmapAndPurge @ 0x1402C3E48 (CcUnmapAndPurge.c)
 *     CcGetDirtyPagesHelper @ 0x1402C56E0 (CcGetDirtyPagesHelper.c)
 *     CcUnpinRepinnedBcb @ 0x1403A73C0 (CcUnpinRepinnedBcb.c)
 *     CcWriteBehindPostProcess @ 0x1403ACE8C (CcWriteBehindPostProcess.c)
 *     CcPerfLogWorkItemEnqueue @ 0x1403AD310 (CcPerfLogWorkItemEnqueue.c)
 *     CcIsFatalWriteError @ 0x1403BEC88 (CcIsFatalWriteError.c)
 *     CcPurgeAndClearCacheSection @ 0x140462560 (CcPurgeAndClearCacheSection.c)
 *     CcPerfLogFlushCache @ 0x14046F994 (CcPerfLogFlushCache.c)
 *     CcPerfLogFlushSection @ 0x1404726A8 (CcPerfLogFlushSection.c)
 *     CcUnmapVacb @ 0x1408B5FF0 (CcUnmapVacb.c)
 * Callees:
 *     ObpTraceObjectReferenceIfActive @ 0x14029B0E0 (ObpTraceObjectReferenceIfActive.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x140450944 (CcSlowReferenceSharedCacheMapFileObject.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall CcReferenceSharedCacheMapFileObject(__int64 a1)
{
  signed __int64 v2; // r8
  signed __int64 v3; // rax
  ULONG_PTR v4; // rbx
  unsigned int v5; // r8d
  __int64 v7; // rax
  signed __int64 v8; // rax
  signed __int64 v9; // rtt

  _m_prefetchw((const void *)(a1 + 96));
  v2 = *(_QWORD *)(a1 + 96);
  if ( (v2 & 0xF) != 0 )
  {
    do
    {
      v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 96), v2 - 1, v2);
      if ( v2 == v3 )
        break;
      v2 = v3;
    }
    while ( (v3 & 0xF) != 0 );
  }
  v4 = v2 & 0xFFFFFFFFFFFFFFF0uLL;
  v5 = v2 & 0xF;
  if ( v5 <= 1 )
  {
    if ( !v5 )
      return CcSlowReferenceSharedCacheMapFileObject(a1);
    v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 - 48), 0xFuLL);
    if ( v7 <= 0 )
      KeBugCheckEx(0x18u, 0LL, v4, 0x10uLL, v7 + 15);
    _m_prefetchw((const void *)(a1 + 96));
    v8 = *(_QWORD *)(a1 + 96);
    while ( (unsigned __int64)(v8 & 0xF) + 15 <= 0xF && v4 == (v8 & 0xFFFFFFFFFFFFFFF0uLL) )
    {
      v9 = v8;
      v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 96), v8 + 15, v8);
      if ( v9 == v8 )
        goto LABEL_5;
    }
    _InterlockedAdd64((volatile signed __int64 *)(v4 - 48), 0xFFFFFFFFFFFFFFF1uLL);
  }
LABEL_5:
  ObpTraceObjectReferenceIfActive(v4 - 48);
  if ( v4 )
    return v4;
  return CcSlowReferenceSharedCacheMapFileObject(a1);
}
