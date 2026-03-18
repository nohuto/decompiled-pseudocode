/*
 * XREFs of RtlpHpReleaseLockShared @ 0x140246CF4
 * Callers:
 *     RtlpHpLfhOwnerCompact @ 0x1402B461C (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1402B6D78 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhSubsegmentReformatCheck @ 0x140459494 (RtlpHpLfhSubsegmentReformatCheck.c)
 *     RtlpHpLargeLockReleaseShared @ 0x1404FA96C (RtlpHpLargeLockReleaseShared.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x140246D40 (ExReleaseSpinLockShared.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x1402BB460 (KeLeaveGuardedRegion.c)
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
