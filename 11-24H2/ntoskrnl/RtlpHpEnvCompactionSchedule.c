/*
 * XREFs of RtlpHpEnvCompactionSchedule @ 0x14035ED20
 * Callers:
 *     ExAllocateHeapPool @ 0x140277790 (ExAllocateHeapPool.c)
 *     ExFreeHeapPool @ 0x140359950 (ExFreeHeapPool.c)
 *     RtlpHpFreeHeap @ 0x14035B220 (RtlpHpFreeHeap.c)
 *     RtlpHpLfhContextFree @ 0x14035BCF0 (RtlpHpLfhContextFree.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x14035EE00 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x140360140 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpLfhContextUpdateFreeCommitCount @ 0x140360B18 (RtlpHpLfhContextUpdateFreeCommitCount.c)
 *     RtlpHpVsCommitLimitCheck @ 0x14036683C (RtlpHpVsCommitLimitCheck.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1403D8DE0 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpAllocateHeap @ 0x1403E93B0 (RtlpHpAllocateHeap.c)
 *     RtlpHpLfhContextCompact @ 0x140432100 (RtlpHpLfhContextCompact.c)
 *     RtlpHpMetadataAlloc @ 0x140458A08 (RtlpHpMetadataAlloc.c)
 *     RtlpHpAllocateHeapSlow @ 0x1404D2B7C (RtlpHpAllocateHeapSlow.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 * Callees:
 *     ExpCheckForFreedEnhancedTimer @ 0x1403AF158 (ExpCheckForFreedEnhancedTimer.c)
 *     KeSetTimer2 @ 0x1403B0C60 (KeSetTimer2.c)
 *     ExpTimerSetParametersAreValid @ 0x14044A1DC (ExpTimerSetParametersAreValid.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHpEnvCompactionSchedule(_QWORD *a1)
{
  unsigned int v1; // ebx
  signed __int32 v2; // eax
  ULONG_PTR v3; // rdi
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
      KeSetTimer2(v3, -10000000LL, 0LL, BugCheckParameter3);
    }
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v1;
}
