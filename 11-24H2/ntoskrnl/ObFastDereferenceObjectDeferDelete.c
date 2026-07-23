/*
 * XREFs of ObFastDereferenceObjectDeferDelete @ 0x1402090F0
 * Callers:
 *     MiDeleteCachedSubsection @ 0x140204084 (MiDeleteCachedSubsection.c)
 *     CcFlushCacheOneRange @ 0x140208260 (CcFlushCacheOneRange.c)
 *     MmFlushSection @ 0x140208E14 (MmFlushSection.c)
 *     MiMakeSystemCacheRangeValid @ 0x14020BFD0 (MiMakeSystemCacheRangeValid.c)
 *     MiEmptyPageAccessLog @ 0x14020C9F0 (MiEmptyPageAccessLog.c)
 *     MiCompleteRestrictedImageFault @ 0x140213BC4 (MiCompleteRestrictedImageFault.c)
 *     MiMakeSystemCachePteValid @ 0x14021C440 (MiMakeSystemCachePteValid.c)
 *     CcIsFatalWriteError @ 0x140260830 (CcIsFatalWriteError.c)
 *     MiFlushSection @ 0x140272630 (MiFlushSection.c)
 *     CcGetDirtyPagesHelper @ 0x140274DD0 (CcGetDirtyPagesHelper.c)
 *     CcPerfLogWorkItemEnqueue @ 0x140279DE0 (CcPerfLogWorkItemEnqueue.c)
 *     CcWriteBehindPostProcess @ 0x14027A62C (CcWriteBehindPostProcess.c)
 *     MiLogPageAccess @ 0x140296B90 (MiLogPageAccess.c)
 *     CcDeleteSharedCacheMap @ 0x1402E5B98 (CcDeleteSharedCacheMap.c)
 *     MiGatherMappedPages @ 0x1402EB8C0 (MiGatherMappedPages.c)
 *     MiWriteComplete @ 0x1402ED400 (MiWriteComplete.c)
 *     MiSetPagesModified @ 0x1403DA5EC (MiSetPagesModified.c)
 *     MiDeprioritizeVad @ 0x1403DAB20 (MiDeprioritizeVad.c)
 *     MiCreateSystemSection @ 0x140443248 (MiCreateSystemSection.c)
 *     CcPurgeAndClearCacheSection @ 0x1404568F4 (CcPurgeAndClearCacheSection.c)
 *     CcPerfLogFlushCache @ 0x140468A8C (CcPerfLogFlushCache.c)
 *     CcPerfLogFlushSection @ 0x14046B5A0 (CcPerfLogFlushSection.c)
 *     CcUnpinRepinnedBcb @ 0x14048F410 (CcUnpinRepinnedBcb.c)
 *     CcUnmapVacb @ 0x1409DC780 (CcUnmapVacb.c)
 * Callees:
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     ObpDeferObjectDeletion @ 0x1403B341C (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall ObFastDereferenceObjectDeferDelete(__int64 *a1, ULONG_PTR a2)
{
  __int64 result; // rax
  __int64 v4; // rtt
  signed __int64 v5; // rax
  bool v6; // cc

  _m_prefetchw(a1);
  result = *a1;
  while ( (a2 ^ result) < 0xF )
  {
    v4 = result;
    result = _InterlockedCompareExchange64(a1, result + 1, result);
    if ( v4 == result )
    {
      if ( ObpTraceFlags )
        return ObpPushStackInfo((int)a2 - 48);
      return result;
    }
  }
  if ( ObpTraceFlags )
    ObpPushStackInfo(a2 - 48);
  v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 - 48), 0xFFFFFFFFFFFFFFFFuLL);
  v6 = v5 <= 1;
  result = v5 - 1;
  if ( v6 )
  {
    if ( *(_QWORD *)(a2 - 40) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a2 - 48) >> 8)],
        a2,
        3uLL,
        *(_QWORD *)(a2 - 40));
    if ( result < 0 )
      KeBugCheckEx(0x18u, 0LL, a2, 4uLL, result);
    return ObpDeferObjectDeletion(a2 - 48);
  }
  return result;
}
