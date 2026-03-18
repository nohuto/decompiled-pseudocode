/*
 * XREFs of CmSiRWLockReleaseExclusive @ 0x1409F4E3C
 * Callers:
 *     CmSiAcquireProcessLockedPagesCharge @ 0x1403C50A0 (CmSiAcquireProcessLockedPagesCharge.c)
 *     CmSiReleaseProcessLockedPagesCharge @ 0x1403C519C (CmSiReleaseProcessLockedPagesCharge.c)
 *     CmSiSetProcessWorkingSetMaximum @ 0x14065D024 (CmSiSetProcessWorkingSetMaximum.c)
 *     CmpVolumeManagerGetContextForFile @ 0x140822324 (CmpVolumeManagerGetContextForFile.c)
 *     CmpVolumeContextDecrementRefCount @ 0x1409F4CEC (CmpVolumeContextDecrementRefCount.c)
 *     CmpDumpKeyToBuffer @ 0x140BA9128 (CmpDumpKeyToBuffer.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140BA9B20 (HvUnlockHiveFlusherExclusive.c)
 *     CmFcManagerStartRuntimePhase @ 0x140C3BE84 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall CmSiRWLockReleaseExclusive(volatile signed __int64 *BugCheckParameter2)
{
  if ( (_InterlockedExchangeAdd64(BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  return KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
}
