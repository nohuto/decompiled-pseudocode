/*
 * XREFs of CcReferenceSharedCacheMapFileObject @ 0x1402091EC
 * Callers:
 *     CcUnmapAndPurge @ 0x140207728 (CcUnmapAndPurge.c)
 *     CcFlushCacheOneRange @ 0x140208260 (CcFlushCacheOneRange.c)
 *     CcIsFatalWriteError @ 0x140260830 (CcIsFatalWriteError.c)
 *     CcGetDirtyPagesHelper @ 0x140274DD0 (CcGetDirtyPagesHelper.c)
 *     CcPerfLogWorkItemEnqueue @ 0x140279DE0 (CcPerfLogWorkItemEnqueue.c)
 *     CcWriteBehindPostProcess @ 0x14027A62C (CcWriteBehindPostProcess.c)
 *     CcPurgeAndClearCacheSection @ 0x1404568F4 (CcPurgeAndClearCacheSection.c)
 *     CcPerfLogFlushCache @ 0x140468A8C (CcPerfLogFlushCache.c)
 *     CcPerfLogFlushSection @ 0x14046B5A0 (CcPerfLogFlushSection.c)
 *     CcUnpinRepinnedBcb @ 0x14048F410 (CcUnpinRepinnedBcb.c)
 *     CcUnmapVacb @ 0x1409DC780 (CcUnmapVacb.c)
 * Callees:
 *     ObpTraceObjectReferenceIfActive @ 0x14031F930 (ObpTraceObjectReferenceIfActive.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x140446C84 (CcSlowReferenceSharedCacheMapFileObject.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
  ObpTraceObjectReferenceIfActive(v4 - 48, 1LL, 1666409283LL);
  if ( v4 )
    return v4;
  return CcSlowReferenceSharedCacheMapFileObject(a1);
}
