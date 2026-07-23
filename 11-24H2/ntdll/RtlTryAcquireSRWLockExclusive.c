/*
 * XREFs of RtlTryAcquireSRWLockExclusive @ 0x180048350
 * Callers:
 *     RtlpHeapTrkFindStack @ 0x18001EC40 (RtlpHeapTrkFindStack.c)
 *     RtlpHeapTrkDumpOutstandingAllocs @ 0x18001F660 (RtlpHeapTrkDumpOutstandingAllocs.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x18004DA30 (RtlpWnfWalkUserSubscriptionList.c)
 *     RtlpFcUpdateLocalConfiguration @ 0x1800D18C0 (RtlpFcUpdateLocalConfiguration.c)
 *     RtlpHpVsContextAllocate @ 0x1800E80AC (RtlpHpVsContextAllocate.c)
 *     RtlpHeapTrkDumpStacks @ 0x180108B94 (RtlpHeapTrkDumpStacks.c)
 *     RtlpAcquireDescriptorPseudoGlobalLockEx @ 0x18013FF88 (RtlpAcquireDescriptorPseudoGlobalLockEx.c)
 * Callees:
 *     RtlpAbFreeKernelEntry @ 0x180046770 (RtlpAbFreeKernelEntry.c)
 */

BOOLEAN __cdecl RtlTryAcquireSRWLockExclusive(PRTL_SRWLOCK SRWLock)
{
  char *v1; // rbx
  char *SchedulerSharedDataSlot; // r9
  __int64 i; // rdx
  PRTL_SRWLOCK *v4; // r8

  v1 = 0LL;
  SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
    {
      v4 = (PRTL_SRWLOCK *)&SchedulerSharedDataSlot[8 * i];
      if ( !*v4 )
      {
        v1 = &SchedulerSharedDataSlot[8 * i];
        if ( v4 )
          *v4 = SRWLock;
        break;
      }
    }
  }
  if ( !_interlockedbittestandset64((volatile signed __int32 *)SRWLock, 0LL) )
    return 1;
  if ( v1 )
  {
    *v1 |= 2u;
    if ( v1[7] < 0 )
      RtlpAbFreeKernelEntry((__int64)v1);
    *(_QWORD *)v1 = 0LL;
  }
  return 0;
}
