/*
 * XREFs of CmpVolumeManagerLockContextListExclusive @ 0x140A02430
 * Callers:
 *     CmSiAcquireProcessLockedPagesCharge @ 0x1403CCFA8 (CmSiAcquireProcessLockedPagesCharge.c)
 *     CmSiReleaseProcessLockedPagesCharge @ 0x1403CD0AC (CmSiReleaseProcessLockedPagesCharge.c)
 *     SshpSetCollectionActive @ 0x1404794E0 (SshpSetCollectionActive.c)
 *     SshpDereferenceBlocker @ 0x14047C6F0 (SshpDereferenceBlocker.c)
 *     SleepstudyHelperCreateLibraryEx @ 0x1404B06D0 (SleepstudyHelperCreateLibraryEx.c)
 *     CmSiSetProcessWorkingSetMaximum @ 0x140668AF4 (CmSiSetProcessWorkingSetMaximum.c)
 *     CmpVolumeManagerGetContextForFile @ 0x140966DB8 (CmpVolumeManagerGetContextForFile.c)
 *     CmpVolumeContextDecrementRefCount @ 0x14097C7A0 (CmpVolumeContextDecrementRefCount.c)
 *     CmpDumpKeyToBuffer @ 0x140BB9130 (CmpDumpKeyToBuffer.c)
 *     HvLockHiveFlusherExclusive @ 0x140BB9AB4 (HvLockHiveFlusherExclusive.c)
 *     CmFcManagerStartRuntimePhase @ 0x140C4D180 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 __fastcall CmpVolumeManagerLockContextListExclusive(unsigned __int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rbx

  result = (__int64)KeAbPreAcquire((__int64)a1, 0LL);
  v3 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(a1, result, (__int64)a1);
  if ( v3 )
    *(_BYTE *)(v3 + 10) = 1;
  return result;
}
