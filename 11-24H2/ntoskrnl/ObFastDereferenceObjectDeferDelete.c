/*
 * XREFs of ObFastDereferenceObjectDeferDelete @ 0x140240FA0
 * Callers:
 *     MiCompleteRestrictedImageFault @ 0x140238F64 (MiCompleteRestrictedImageFault.c)
 *     MiFlushSection @ 0x14023A550 (MiFlushSection.c)
 *     MiDeleteCachedSubsection @ 0x14023C35C (MiDeleteCachedSubsection.c)
 *     CcFlushCacheOneRange @ 0x140240110 (CcFlushCacheOneRange.c)
 *     MmFlushSection @ 0x140240CC4 (MmFlushSection.c)
 *     MiMakeSystemCacheRangeValid @ 0x140243570 (MiMakeSystemCacheRangeValid.c)
 *     MiEmptyPageAccessLog @ 0x140244260 (MiEmptyPageAccessLog.c)
 *     MiLogPageAccess @ 0x140286F90 (MiLogPageAccess.c)
 *     CcPerfLogWorkItemEnqueue @ 0x1402A7FF0 (CcPerfLogWorkItemEnqueue.c)
 *     CcWriteBehindPostProcess @ 0x1402A883C (CcWriteBehindPostProcess.c)
 *     CcGetDirtyPagesHelper @ 0x1402AA740 (CcGetDirtyPagesHelper.c)
 *     CcIsFatalWriteError @ 0x1402CBF04 (CcIsFatalWriteError.c)
 *     CcDeleteSharedCacheMap @ 0x1402CCE98 (CcDeleteSharedCacheMap.c)
 *     MiGatherMappedPages @ 0x140369B20 (MiGatherMappedPages.c)
 *     MiWriteComplete @ 0x14036B660 (MiWriteComplete.c)
 *     MiDeprioritizeVad @ 0x1403FD204 (MiDeprioritizeVad.c)
 *     MiCreateSystemSection @ 0x14044C348 (MiCreateSystemSection.c)
 *     CcPurgeAndClearCacheSection @ 0x1404612E4 (CcPurgeAndClearCacheSection.c)
 *     CcPerfLogFlushCache @ 0x14046E2B0 (CcPerfLogFlushCache.c)
 *     MiMakeSystemCachePteValid @ 0x14046F7A8 (MiMakeSystemCachePteValid.c)
 *     CcPerfLogFlushSection @ 0x140470CF4 (CcPerfLogFlushSection.c)
 *     MiSetPagesModified @ 0x140492C90 (MiSetPagesModified.c)
 *     CcUnpinRepinnedBcb @ 0x140494980 (CcUnpinRepinnedBcb.c)
 *     CcUnmapVacb @ 0x1408E5FE0 (CcUnmapVacb.c)
 * Callees:
 *     ObpPushStackInfo @ 0x1403407AC (ObpPushStackInfo.c)
 *     ObpDeferObjectDeletion @ 0x1403C485C (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
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
