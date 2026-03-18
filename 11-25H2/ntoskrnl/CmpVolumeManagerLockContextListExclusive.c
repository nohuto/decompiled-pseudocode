/*
 * XREFs of CmpVolumeManagerLockContextListExclusive @ 0x1409F4D94
 * Callers:
 *     CmSiAcquireProcessLockedPagesCharge @ 0x1403C50A0 (CmSiAcquireProcessLockedPagesCharge.c)
 *     CmSiReleaseProcessLockedPagesCharge @ 0x1403C519C (CmSiReleaseProcessLockedPagesCharge.c)
 *     SshpSetCollectionActive @ 0x1404789B4 (SshpSetCollectionActive.c)
 *     SshpDereferenceBlocker @ 0x14047CBC0 (SshpDereferenceBlocker.c)
 *     SleepstudyHelperCreateLibraryEx @ 0x1404AF960 (SleepstudyHelperCreateLibraryEx.c)
 *     CmSiSetProcessWorkingSetMaximum @ 0x14065D024 (CmSiSetProcessWorkingSetMaximum.c)
 *     CmpVolumeManagerGetContextForFile @ 0x140822324 (CmpVolumeManagerGetContextForFile.c)
 *     CmpVolumeContextDecrementRefCount @ 0x1409F4CEC (CmpVolumeContextDecrementRefCount.c)
 *     CmpDumpKeyToBuffer @ 0x140BA9128 (CmpDumpKeyToBuffer.c)
 *     HvLockHiveFlusherExclusive @ 0x140BA9B3C (HvLockHiveFlusherExclusive.c)
 *     CmFcManagerStartRuntimePhase @ 0x140C3BE84 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 */

__int64 *__fastcall CmpVolumeManagerLockContextListExclusive(unsigned __int64 *a1)
{
  __int64 *result; // rax
  __int64 *v3; // rbx

  result = KeAbPreAcquire((__int64)a1, 0LL);
  v3 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1, 0LL) )
    result = (__int64 *)ExfAcquirePushLockExclusiveEx(a1, result, (__int64)a1);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  return result;
}
