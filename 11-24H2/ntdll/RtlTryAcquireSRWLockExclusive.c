/*
 * XREFs of RtlTryAcquireSRWLockExclusive @ 0x18001B950
 * Callers:
 *     RtlpWnfWalkUserSubscriptionList @ 0x180021030 (RtlpWnfWalkUserSubscriptionList.c)
 *     RtlpHeapTrkFindStack @ 0x18003E9C0 (RtlpHeapTrkFindStack.c)
 *     RtlpHeapTrkDumpOutstandingAllocs @ 0x18003F3E0 (RtlpHeapTrkDumpOutstandingAllocs.c)
 *     RtlpFcUpdateLocalConfiguration @ 0x1800D6550 (RtlpFcUpdateLocalConfiguration.c)
 *     RtlpHpVsContextAllocate @ 0x1800ED0DC (RtlpHpVsContextAllocate.c)
 *     RtlpHeapTrkDumpStacks @ 0x18010DCB4 (RtlpHeapTrkDumpStacks.c)
 *     RtlpAcquireDescriptorPseudoGlobalLockEx @ 0x180141DD8 (RtlpAcquireDescriptorPseudoGlobalLockEx.c)
 * Callees:
 *     RtlpAbFreeKernelEntry @ 0x180019D70 (RtlpAbFreeKernelEntry.c)
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
      RtlpAbFreeKernelEntry((__int64)v1);
    *(_QWORD *)v1 = 0LL;
  }
  return 0;
}
