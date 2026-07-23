/*
 * XREFs of RtlpHpEnvCompactionSchedule @ 0x1403BBC64
 * Callers:
 *     ExAllocateHeapPool @ 0x1402DAB20 (ExAllocateHeapPool.c)
 *     RtlpHpFreeHeap @ 0x1402DE7F0 (RtlpHpFreeHeap.c)
 *     RtlpHpLfhContextFree @ 0x1402E04D0 (RtlpHpLfhContextFree.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x1402E0A40 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpVsCommitLimitCheck @ 0x1402E3764 (RtlpHpVsCommitLimitCheck.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1403C73E0 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhContextCompact @ 0x1403C8290 (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1403C89FC (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhContextUpdateFreeCommitCount @ 0x1403C9338 (RtlpHpLfhContextUpdateFreeCommitCount.c)
 *     RtlpHpAllocateHeap @ 0x1403C93A0 (RtlpHpAllocateHeap.c)
 *     RtlpHpAllocateHeapSlow @ 0x1403C9AF8 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpMetadataAlloc @ 0x1403CAF34 (RtlpHpMetadataAlloc.c)
 * Callees:
 *     ExpCheckForFreedEnhancedTimer @ 0x14036FA1C (ExpCheckForFreedEnhancedTimer.c)
 *     KeSetTimer2 @ 0x140370EF0 (KeSetTimer2.c)
 *     ExpTimerSetParametersAreValid @ 0x1403BBD44 (ExpTimerSetParametersAreValid.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHpEnvCompactionSchedule(_QWORD *a1)
{
  unsigned int v1; // ebx
  signed __int32 v2; // eax
  __int64 v3; // rdi
  ULONG_PTR v5; // r8
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0;
  if ( ExpHpGCInitialized )
  {
    if ( BYTE1(*a1) == 1 )
    {
      v2 = _InterlockedCompareExchange(&ExpHpGCScheduledNonPaged, 1, 0);
      v3 = ExpHpGCTimerNonPaged;
    }
    else
    {
      v2 = _InterlockedCompareExchange(&ExpHpGCScheduledPaged, 1, 0);
      v3 = ExpHpGCTimerPaged;
    }
    if ( !v2 )
    {
      BugCheckParameter3[1] = -1LL;
      BugCheckParameter3[0] = 0LL;
      if ( !(unsigned __int8)ExpTimerSetParametersAreValid(BugCheckParameter3) )
        KeBugCheckEx(0xC7u, 9uLL, v5, (ULONG_PTR)BugCheckParameter3, 0LL);
      ExpCheckForFreedEnhancedTimer(v3);
      KeSetTimer2(v3, (LARGE_INTEGER)-10000000LL, 0LL, (__int64)BugCheckParameter3);
    }
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v1;
}
