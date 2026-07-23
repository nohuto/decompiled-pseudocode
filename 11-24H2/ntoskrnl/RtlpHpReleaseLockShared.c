/*
 * XREFs of RtlpHpReleaseLockShared @ 0x140219598
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x14035EE00 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhSubsegmentReformatCheck @ 0x1403D8038 (RtlpHpLfhSubsegmentReformatCheck.c)
 *     RtlpHpLfhOwnerCompact @ 0x1404322C0 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLargeLockReleaseShared @ 0x1404F824C (RtlpHpLargeLockReleaseShared.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x1402195E0 (ExReleaseSpinLockShared.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x140362BA0 (KeLeaveGuardedRegion.c)
 */

void __fastcall RtlpHpReleaseLockShared(PEX_SPIN_LOCK SpinLock, int a2, KIRQL a3)
{
  if ( a2 )
  {
    ExReleaseSpinLockShared(SpinLock, a3);
  }
  else
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)SpinLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(SpinLock);
    KeAbPostRelease((ULONG_PTR)SpinLock);
    KeLeaveGuardedRegion();
  }
}
