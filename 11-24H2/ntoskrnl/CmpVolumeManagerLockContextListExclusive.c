/*
 * XREFs of CmpVolumeManagerLockContextListExclusive @ 0x1409FF8F8
 * Callers:
 *     CmSiAcquireProcessLockedPagesCharge @ 0x14046C798 (CmSiAcquireProcessLockedPagesCharge.c)
 *     CmSiReleaseProcessLockedPagesCharge @ 0x14046C89C (CmSiReleaseProcessLockedPagesCharge.c)
 *     SshpSetCollectionActive @ 0x140474D70 (SshpSetCollectionActive.c)
 *     SshpDereferenceBlocker @ 0x140477900 (SshpDereferenceBlocker.c)
 *     SleepstudyHelperCreateLibraryEx @ 0x1404AAF60 (SleepstudyHelperCreateLibraryEx.c)
 *     CmSiSetProcessWorkingSetMaximum @ 0x140669CCC (CmSiSetProcessWorkingSetMaximum.c)
 *     CmpVolumeManagerGetContextForFile @ 0x14094F848 (CmpVolumeManagerGetContextForFile.c)
 *     CmpVolumeContextDecrementRefCount @ 0x140964FB0 (CmpVolumeContextDecrementRefCount.c)
 *     CmpDumpKeyToBuffer @ 0x140BBB130 (CmpDumpKeyToBuffer.c)
 *     HvLockHiveFlusherExclusive @ 0x140BBBAB4 (HvLockHiveFlusherExclusive.c)
 *     CmFcManagerStartRuntimePhase @ 0x140C4F31C (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 */

char *__fastcall CmpVolumeManagerLockContextListExclusive(unsigned __int64 *a1)
{
  char *result; // rax
  char *v3; // rbx

  result = (char *)KeAbPreAcquire((__int64)a1, 0LL);
  v3 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1, 0LL) )
    result = (char *)ExfAcquirePushLockExclusiveEx(a1, result, (__int64)a1);
  if ( v3 )
    v3[10] = 1;
  return result;
}
