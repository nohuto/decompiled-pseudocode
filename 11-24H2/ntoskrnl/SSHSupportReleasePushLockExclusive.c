/*
 * XREFs of SSHSupportReleasePushLockExclusive @ 0x14048939C
 * Callers:
 *     SshpFreeDataEntry @ 0x1407667F4 (SshpFreeDataEntry.c)
 *     SshSessionManagerFlushBuffers @ 0x1407668B8 (SshSessionManagerFlushBuffers.c)
 *     SshpSessionManagerControlSessionCallback @ 0x1407672A0 (SshpSessionManagerControlSessionCallback.c)
 *     SshpSessionManagerOpenControlTrace @ 0x140767400 (SshpSessionManagerOpenControlTrace.c)
 *     SleepstudyHelperDestroyLibrary @ 0x140767660 (SleepstudyHelperDestroyLibrary.c)
 *     SshpAlpcCloseTraceSession @ 0x140767B88 (SshpAlpcCloseTraceSession.c)
 *     SshpAlpcOpenGracePeriodWorker @ 0x140767D60 (SshpAlpcOpenGracePeriodWorker.c)
 *     SshpAlpcProcessAlpcMessage @ 0x140767E0C (SshpAlpcProcessAlpcMessage.c)
 *     SleepstudyHelperBuildBlocker @ 0x140A24F30 (SleepstudyHelperBuildBlocker.c)
 *     SshpPurgeBlockersWorker @ 0x140A41310 (SshpPurgeBlockersWorker.c)
 *     SshNotifySystemSessionChange @ 0x140A4B418 (SshNotifySystemSessionChange.c)
 *     SshpSessionManagerFlushControlEventBufferWorker @ 0x140A5F4A0 (SshpSessionManagerFlushControlEventBufferWorker.c)
 *     SshpSessionManagerSendControlEventSlimEtl @ 0x140A701D0 (SshpSessionManagerSendControlEventSlimEtl.c)
 *     SshpTracingRundownBlockerState @ 0x140A76664 (SshpTracingRundownBlockerState.c)
 *     SshpTracingRundownCollectionState @ 0x140A76764 (SshpTracingRundownCollectionState.c)
 *     SleepstudyHelperCreateBlockerData @ 0x140ABB280 (SleepstudyHelperCreateBlockerData.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 */

__int64 __fastcall SSHSupportReleasePushLockExclusive(volatile signed __int64 *BugCheckParameter2)
{
  if ( (_InterlockedExchangeAdd64(BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  return KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
}
