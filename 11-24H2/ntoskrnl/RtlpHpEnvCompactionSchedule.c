/*
 * XREFs of RtlpHpEnvCompactionSchedule @ 0x1402B389C
 * Callers:
 *     ExAllocateHeapPool @ 0x1402ACDB0 (ExAllocateHeapPool.c)
 *     ExFreeHeapPool @ 0x1402B0E50 (ExFreeHeapPool.c)
 *     RtlpHpFreeHeap @ 0x1402B2660 (RtlpHpFreeHeap.c)
 *     RtlpHpLfhContextFree @ 0x1402B3130 (RtlpHpLfhContextFree.c)
 *     RtlpHpLfhContextCompact @ 0x1402B445C (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1402B61E0 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1402B6D78 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpAllocateHeap @ 0x1402B7A40 (RtlpHpAllocateHeap.c)
 *     RtlpHpAllocateHeapSlow @ 0x1402B819C (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x1402B8A00 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpLfhContextUpdateFreeCommitCount @ 0x1402B93D8 (RtlpHpLfhContextUpdateFreeCommitCount.c)
 *     RtlpHpVsCommitLimitCheck @ 0x1402BF0FC (RtlpHpVsCommitLimitCheck.c)
 *     RtlpHpMetadataAlloc @ 0x140420674 (RtlpHpMetadataAlloc.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 * Callees:
 *     ExpCheckForFreedEnhancedTimer @ 0x1403C0598 (ExpCheckForFreedEnhancedTimer.c)
 *     KeSetTimer2 @ 0x1403C20A0 (KeSetTimer2.c)
 *     ExpTimerSetParametersAreValid @ 0x1403D1F40 (ExpTimerSetParametersAreValid.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
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
