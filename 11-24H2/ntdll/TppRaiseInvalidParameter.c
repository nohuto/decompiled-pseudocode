/*
 * XREFs of TppRaiseInvalidParameter @ 0x18006B7F4
 * Callers:
 *     TpCallbackSendAlpcMessageOnCompletion @ 0x180011160 (TpCallbackSendAlpcMessageOnCompletion.c)
 *     TppPoolpReferenceGlobalPool @ 0x18001B460 (TppPoolpReferenceGlobalPool.c)
 *     TpAllocWork @ 0x18001BE50 (TpAllocWork.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x18001F970 (TppCleanupGroupMemberCallbackProlog.c)
 *     TpSetWaitEx @ 0x1800200E0 (TpSetWaitEx.c)
 *     TpCallbackMayRunLong @ 0x180022040 (TpCallbackMayRunLong.c)
 *     TpAlpcUnregisterCompletionList @ 0x180068E80 (TpAlpcUnregisterCompletionList.c)
 *     TpCallbackUnloadDllOnCompletion @ 0x1800696B0 (TpCallbackUnloadDllOnCompletion.c)
 *     TpReleaseCleanupGroupMembers @ 0x180069760 (TpReleaseCleanupGroupMembers.c)
 *     TppJobpValidateJob @ 0x180069CBC (TppJobpValidateJob.c)
 *     TpReleaseCleanupGroup @ 0x180069D30 (TpReleaseCleanupGroup.c)
 *     TpAllocCleanupGroup @ 0x180069DA0 (TpAllocCleanupGroup.c)
 *     TppAlpcpValidateAlpc @ 0x180069F4C (TppAlpcpValidateAlpc.c)
 *     TppIopValidateIo @ 0x18006A0C0 (TppIopValidateIo.c)
 *     TppCleanupGroupMemberRelease @ 0x18006A160 (TppCleanupGroupMemberRelease.c)
 *     TpCancelAsyncIoOperation @ 0x18006A1B0 (TpCancelAsyncIoOperation.c)
 *     TpCallbackSendPendingAlpcMessage @ 0x18006A420 (TpCallbackSendPendingAlpcMessage.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x18006A510 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TpAllocPool @ 0x18006A620 (TpAllocPool.c)
 *     TpSimpleTryPost @ 0x18006A740 (TpSimpleTryPost.c)
 *     TpTimerOutstandingCallbackCount @ 0x18006AD40 (TpTimerOutstandingCallbackCount.c)
 *     TppCancelWait @ 0x18006ADE0 (TppCancelWait.c)
 *     TpAlpcRegisterCompletionList @ 0x18006AEF0 (TpAlpcRegisterCompletionList.c)
 *     TpSetTimerEx @ 0x18006AF80 (TpSetTimerEx.c)
 *     TpIsTimerSet @ 0x18006B6B0 (TpIsTimerSet.c)
 *     TpReleaseTimer @ 0x18006B880 (TpReleaseTimer.c)
 *     TppTimerQueueExpiration @ 0x18006B9F0 (TppTimerQueueExpiration.c)
 *     TpWaitForTimer @ 0x18006C110 (TpWaitForTimer.c)
 *     TpReleaseWork @ 0x18006CCA0 (TpReleaseWork.c)
 *     TpAllocTimer @ 0x18006CE10 (TpAllocTimer.c)
 *     TpWaitForWork @ 0x18006D890 (TpWaitForWork.c)
 *     TpReleaseWait @ 0x18006E4C0 (TpReleaseWait.c)
 *     TpWaitOutstandingCallbackCount @ 0x18006E70C (TpWaitOutstandingCallbackCount.c)
 *     TpAllocWait @ 0x18006E7E0 (TpAllocWait.c)
 *     TpWaitForWait @ 0x18006EB30 (TpWaitForWait.c)
 *     TpDereferenceGlobalPool @ 0x18006F5F8 (TpDereferenceGlobalPool.c)
 *     TpSetPoolMaxThreads @ 0x1800ABE00 (TpSetPoolMaxThreads.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x1800ABE90 (TpSetPoolWorkerThreadIdleTimeout.c)
 *     TpAllocJobNotification @ 0x1800BF070 (TpAllocJobNotification.c)
 *     TppAllocAlpcCompletion @ 0x1800BF374 (TppAllocAlpcCompletion.c)
 *     TpAllocIoCompletion @ 0x1800BF6A0 (TpAllocIoCompletion.c)
 *     TpBindFileToDirect @ 0x1800BF8D0 (TpBindFileToDirect.c)
 *     TpPostWork @ 0x1800D6E00 (TpPostWork.c)
 *     TpCallbackIndependent @ 0x1800DAD50 (TpCallbackIndependent.c)
 *     TpReleasePool @ 0x1800DEB80 (TpReleasePool.c)
 *     TpStartAsyncIoOperation @ 0x1800E67A0 (TpStartAsyncIoOperation.c)
 *     TpDisassociateCallback @ 0x1800F7670 (TpDisassociateCallback.c)
 *     TpWaitForIoCompletion @ 0x1800F9460 (TpWaitForIoCompletion.c)
 *     TpSetPoolMinThreads @ 0x180107080 (TpSetPoolMinThreads.c)
 *     TpCallbackSetEventOnCompletion @ 0x18010CC90 (TpCallbackSetEventOnCompletion.c)
 *     TpCallbackLeaveCriticalSectionOnCompletion @ 0x1801106F0 (TpCallbackLeaveCriticalSectionOnCompletion.c)
 *     TpCallbackDetectedUnrecoverableError @ 0x18015C610 (TpCallbackDetectedUnrecoverableError.c)
 *     TpCallbackReleaseMutexOnCompletion @ 0x18015C640 (TpCallbackReleaseMutexOnCompletion.c)
 *     TpCallbackReleaseSemaphoreOnCompletion @ 0x18015C680 (TpCallbackReleaseSemaphoreOnCompletion.c)
 * Callees:
 *     RtlRaiseException @ 0x180070510 (RtlRaiseException.c)
 *     RtlpLogSetLastWin32ErrorEvent @ 0x1801465A4 (RtlpLogSetLastWin32ErrorEvent.c)
 *     TppReportExceptionFilter @ 0x18015C7BC (TppReportExceptionFilter.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

void TppRaiseInvalidParameter()
{
  struct _TEB *v0; // rax
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  memset_thunk_772440563353939046(&ExceptionRecord.ExceptionFlags, 0, 0x94uLL);
  ExceptionRecord.ExceptionCode = -1073741811;
  v0 = NtCurrentTeb();
  if ( g_dwLastErrorToBreakOn == 87 )
    __debugbreak();
  if ( v0->LastErrorValue != 87 )
  {
    v0->LastErrorValue = 87;
    if ( g_isErrorOriginProviderEnabled )
      RtlpLogSetLastWin32ErrorEvent(87LL);
  }
  RtlRaiseException(&ExceptionRecord);
}
