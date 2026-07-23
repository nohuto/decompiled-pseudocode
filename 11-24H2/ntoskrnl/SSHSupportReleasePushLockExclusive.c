/*
 * XREFs of SSHSupportReleasePushLockExclusive @ 0x1404843BC
 * Callers:
 *     SshpFreeDataEntry @ 0x1407661C4 (SshpFreeDataEntry.c)
 *     SshSessionManagerFlushBuffers @ 0x140766288 (SshSessionManagerFlushBuffers.c)
 *     SshpSessionManagerControlSessionCallback @ 0x140766D00 (SshpSessionManagerControlSessionCallback.c)
 *     SshpSessionManagerOpenControlTrace @ 0x140766E60 (SshpSessionManagerOpenControlTrace.c)
 *     SleepstudyHelperDestroyLibrary @ 0x140767890 (SleepstudyHelperDestroyLibrary.c)
 *     SshpAlpcCloseTraceSession @ 0x140767DA8 (SshpAlpcCloseTraceSession.c)
 *     SshpAlpcOpenGracePeriodWorker @ 0x140767F80 (SshpAlpcOpenGracePeriodWorker.c)
 *     SshpAlpcProcessAlpcMessage @ 0x14076802C (SshpAlpcProcessAlpcMessage.c)
 *     SleepstudyHelperBuildBlocker @ 0x140A18F20 (SleepstudyHelperBuildBlocker.c)
 *     SshpPurgeBlockersWorker @ 0x140A36BF0 (SshpPurgeBlockersWorker.c)
 *     SshNotifySystemSessionChange @ 0x140A42178 (SshNotifySystemSessionChange.c)
 *     SshpSessionManagerFlushControlEventBufferWorker @ 0x140A579F0 (SshpSessionManagerFlushControlEventBufferWorker.c)
 *     SshpSessionManagerSendControlEventSlimEtl @ 0x140A69660 (SshpSessionManagerSendControlEventSlimEtl.c)
 *     SshpTracingRundownBlockerState @ 0x140A70784 (SshpTracingRundownBlockerState.c)
 *     SshpTracingRundownCollectionState @ 0x140A70884 (SshpTracingRundownCollectionState.c)
 *     SleepstudyHelperCreateBlockerData @ 0x140AB62A0 (SleepstudyHelperCreateBlockerData.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

__int64 __fastcall SSHSupportReleasePushLockExclusive(volatile signed __int64 *BugCheckParameter2)
{
  if ( (_InterlockedExchangeAdd64(BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  return KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
}
