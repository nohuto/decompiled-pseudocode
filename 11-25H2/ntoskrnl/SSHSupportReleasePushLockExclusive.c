/*
 * XREFs of SSHSupportReleasePushLockExclusive @ 0x140489C20
 * Callers:
 *     SshpFreeDataEntry @ 0x1407567E4 (SshpFreeDataEntry.c)
 *     SshSessionManagerFlushBuffers @ 0x1407568A8 (SshSessionManagerFlushBuffers.c)
 *     SshpSessionManagerControlSessionCallback @ 0x1407578E0 (SshpSessionManagerControlSessionCallback.c)
 *     SshpSessionManagerOpenControlTrace @ 0x140757A40 (SshpSessionManagerOpenControlTrace.c)
 *     SleepstudyHelperDestroyLibrary @ 0x140757CA0 (SleepstudyHelperDestroyLibrary.c)
 *     SshpAlpcCloseTraceSession @ 0x1407581C8 (SshpAlpcCloseTraceSession.c)
 *     SshpAlpcOpenGracePeriodWorker @ 0x1407583A0 (SshpAlpcOpenGracePeriodWorker.c)
 *     SshpAlpcProcessAlpcMessage @ 0x14075844C (SshpAlpcProcessAlpcMessage.c)
 *     SleepstudyHelperBuildBlocker @ 0x140A19C50 (SleepstudyHelperBuildBlocker.c)
 *     SshpPurgeBlockersWorker @ 0x140A3D940 (SshpPurgeBlockersWorker.c)
 *     SshNotifySystemSessionChange @ 0x140A489D8 (SshNotifySystemSessionChange.c)
 *     SshpSessionManagerFlushControlEventBufferWorker @ 0x140A5D6D0 (SshpSessionManagerFlushControlEventBufferWorker.c)
 *     SshpSessionManagerSendControlEventSlimEtl @ 0x140A6DFC0 (SshpSessionManagerSendControlEventSlimEtl.c)
 *     SshpTracingRundownBlockerState @ 0x140A74594 (SshpTracingRundownBlockerState.c)
 *     SshpTracingRundownCollectionState @ 0x140A74694 (SshpTracingRundownCollectionState.c)
 *     SleepstudyHelperCreateBlockerData @ 0x140AB6F40 (SleepstudyHelperCreateBlockerData.c)
 * Callees:
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall SSHSupportReleasePushLockExclusive(volatile signed __int64 *BugCheckParameter2)
{
  if ( (_InterlockedExchangeAdd64(BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  return KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
}
