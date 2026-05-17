/*
 * XREFs of RtlTryAcquireSRWLockExclusive @ 0x180047570
 * Callers:
 *     RtlpHpVsContextAllocate @ 0x18002DD2C (RtlpHpVsContextAllocate.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x180042A00 (RtlpWnfWalkUserSubscriptionList.c)
 *     RtlpHeapTrkFindStack @ 0x1800923B0 (RtlpHeapTrkFindStack.c)
 *     RtlpHeapTrkDumpOutstandingAllocs @ 0x180092DD0 (RtlpHeapTrkDumpOutstandingAllocs.c)
 *     RtlpFcUpdateLocalConfiguration @ 0x18009F820 (RtlpFcUpdateLocalConfiguration.c)
 *     RtlpHeapTrkDumpStacks @ 0x180110764 (RtlpHeapTrkDumpStacks.c)
 *     RtlpAcquireDescriptorPseudoGlobalLockEx @ 0x1801434C8 (RtlpAcquireDescriptorPseudoGlobalLockEx.c)
 * Callees:
 *     RtlpAbFreeKernelEntry @ 0x180047D90 (RtlpAbFreeKernelEntry.c)
 */

char __fastcall RtlTryAcquireSRWLockExclusive(volatile signed __int32 *a1)
{
  char *v1; // rbx
  char *SchedulerSharedDataSlot; // r9
  __int64 i; // rdx
  volatile signed __int32 **v4; // r8

  v1 = 0LL;
  SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
    {
      v4 = (volatile signed __int32 **)&SchedulerSharedDataSlot[8 * i];
      if ( !*v4 )
      {
        v1 = &SchedulerSharedDataSlot[8 * i];
        if ( v4 )
          *v4 = a1;
        break;
      }
    }
  }
  if ( !_interlockedbittestandset64(a1, 0LL) )
    return 1;
  if ( v1 )
  {
    *v1 |= 2u;
    if ( v1[7] < 0 )
      RtlpAbFreeKernelEntry(v1);
    *(_QWORD *)v1 = 0LL;
  }
  return 0;
}
