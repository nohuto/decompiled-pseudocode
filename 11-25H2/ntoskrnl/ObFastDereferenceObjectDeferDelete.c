/*
 * XREFs of ObFastDereferenceObjectDeferDelete @ 0x1402C2260
 * Callers:
 *     MiMakeSystemCachePteValid @ 0x140225760 (MiMakeSystemCachePteValid.c)
 *     MiCompleteProtoPteFault @ 0x140232170 (MiCompleteProtoPteFault.c)
 *     MiDeprioritizeVad @ 0x1402A2F94 (MiDeprioritizeVad.c)
 *     CcFlushCacheOneRange @ 0x1402C13D0 (CcFlushCacheOneRange.c)
 *     MmFlushSection @ 0x1402C1F80 (MmFlushSection.c)
 *     MiMakeSystemCacheRangeValid @ 0x1402C5040 (MiMakeSystemCacheRangeValid.c)
 *     CcGetDirtyPagesHelper @ 0x1402C56E0 (CcGetDirtyPagesHelper.c)
 *     MiEmptyPageAccessLog @ 0x140322FE0 (MiEmptyPageAccessLog.c)
 *     MiFlushSection @ 0x14033E540 (MiFlushSection.c)
 *     MiDeleteCachedSubsection @ 0x14033F8B4 (MiDeleteCachedSubsection.c)
 *     MiLogPageAccess @ 0x1403806A0 (MiLogPageAccess.c)
 *     CcDeleteSharedCacheMap @ 0x1403A4DE4 (CcDeleteSharedCacheMap.c)
 *     CcUnpinRepinnedBcb @ 0x1403A73C0 (CcUnpinRepinnedBcb.c)
 *     CcWriteBehindPostProcess @ 0x1403ACE8C (CcWriteBehindPostProcess.c)
 *     CcPerfLogWorkItemEnqueue @ 0x1403AD310 (CcPerfLogWorkItemEnqueue.c)
 *     CcIsFatalWriteError @ 0x1403BEC88 (CcIsFatalWriteError.c)
 *     MiGatherMappedPages @ 0x14040CB20 (MiGatherMappedPages.c)
 *     MiWriteComplete @ 0x14040E620 (MiWriteComplete.c)
 *     CcPurgeAndClearCacheSection @ 0x140462560 (CcPurgeAndClearCacheSection.c)
 *     MiCompleteRestrictedImageFault @ 0x140464CC4 (MiCompleteRestrictedImageFault.c)
 *     CcPerfLogFlushCache @ 0x14046F994 (CcPerfLogFlushCache.c)
 *     CcPerfLogFlushSection @ 0x1404726A8 (CcPerfLogFlushSection.c)
 *     MiSetPagesModified @ 0x140493EB0 (MiSetPagesModified.c)
 *     MiCreateSystemSection @ 0x14049DE3C (MiCreateSystemSection.c)
 *     CcUnmapVacb @ 0x1408B5FF0 (CcUnmapVacb.c)
 * Callees:
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     ObpDeferObjectDeletion @ 0x14036FDD8 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

char __fastcall ObFastDereferenceObjectDeferDelete(__int64 *a1, ULONG_PTR a2, __int64 a3)
{
  unsigned int v3; // r10d
  __int64 BugCheckParameter4; // rax
  ULONG_PTR v6; // r9
  __int64 v7; // rtt
  signed __int64 v8; // rax
  bool v9; // cc

  v3 = a3;
  _m_prefetchw(a1);
  BugCheckParameter4 = *a1;
  while ( 1 )
  {
    v6 = a2 ^ BugCheckParameter4;
    if ( (a2 ^ BugCheckParameter4) >= 0xF )
      break;
    a3 = BugCheckParameter4 + 1;
    v7 = BugCheckParameter4;
    BugCheckParameter4 = _InterlockedCompareExchange64(a1, BugCheckParameter4 + 1, BugCheckParameter4);
    if ( v7 == BugCheckParameter4 )
    {
      if ( ObpTraceFlags )
        LOBYTE(BugCheckParameter4) = ObpPushStackInfo(a2 - 48, 0, 1u, v3);
      return BugCheckParameter4;
    }
  }
  if ( ObpTraceFlags )
    ObpPushStackInfo(a2 - 48, 0, 1u, v3);
  v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 - 48), 0xFFFFFFFFFFFFFFFFuLL);
  v9 = v8 <= 1;
  BugCheckParameter4 = v8 - 1;
  if ( v9 )
  {
    if ( *(_QWORD *)(a2 - 40) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a2 - 48) >> 8)],
        a2,
        3uLL,
        *(_QWORD *)(a2 - 40));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, a2, 4uLL, BugCheckParameter4);
    LOBYTE(BugCheckParameter4) = ObpDeferObjectDeletion(a2 - 48, a2, a3, v6);
  }
  return BugCheckParameter4;
}
