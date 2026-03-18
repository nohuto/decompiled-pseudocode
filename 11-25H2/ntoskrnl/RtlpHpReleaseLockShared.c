/*
 * XREFs of RtlpHpReleaseLockShared @ 0x14035E3FC
 * Callers:
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1403C73E0 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhOwnerCompact @ 0x1403C801C (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1403C89FC (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhSubsegmentReformatCheck @ 0x140450260 (RtlpHpLfhSubsegmentReformatCheck.c)
 *     RtlpHpLargeLockReleaseShared @ 0x1404F848C (RtlpHpLargeLockReleaseShared.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x140320910 (KeLeaveGuardedRegion.c)
 *     ExReleaseSpinLockShared @ 0x14035E450 (ExReleaseSpinLockShared.c)
 */

void __fastcall RtlpHpReleaseLockShared(volatile LONG *BugCheckParameter2, int a2, KIRQL a3)
{
  if ( a2 )
  {
    ExReleaseSpinLockShared(BugCheckParameter2, a3);
  }
  else
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
    KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
    KeLeaveGuardedRegion();
  }
}
