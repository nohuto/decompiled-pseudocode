/*
 * XREFs of TppRaiseInvalidParameter @ 0x1800880D4
 * Callers:
 *     TpCallbackSendAlpcMessageOnCompletion @ 0x18003DB60 (TpCallbackSendAlpcMessageOnCompletion.c)
 *     TppPoolpReferenceGlobalPool @ 0x180047E60 (TppPoolpReferenceGlobalPool.c)
 *     TpAllocWork @ 0x180048850 (TpAllocWork.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x18004C370 (TppCleanupGroupMemberCallbackProlog.c)
 *     TpSetWaitEx @ 0x18004CAE0 (TpSetWaitEx.c)
 *     TpCallbackMayRunLong @ 0x18004EA40 (TpCallbackMayRunLong.c)
 *     TpAlpcUnregisterCompletionList @ 0x180084A10 (TpAlpcUnregisterCompletionList.c)
 *     TpCallbackUnloadDllOnCompletion @ 0x180085240 (TpCallbackUnloadDllOnCompletion.c)
 *     TpReleaseCleanupGroupMembers @ 0x1800852F0 (TpReleaseCleanupGroupMembers.c)
 *     TpSetPoolMaxThreads @ 0x180086280 (TpSetPoolMaxThreads.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x180086310 (TpSetPoolWorkerThreadIdleTimeout.c)
 *     TppJobpValidateJob @ 0x1800863AC (TppJobpValidateJob.c)
 *     TpReleaseCleanupGroup @ 0x180086420 (TpReleaseCleanupGroup.c)
 *     TpAllocCleanupGroup @ 0x180086490 (TpAllocCleanupGroup.c)
 *     TppAlpcpValidateAlpc @ 0x18008663C (TppAlpcpValidateAlpc.c)
 *     TppIopValidateIo @ 0x1800867B0 (TppIopValidateIo.c)
 *     TppCleanupGroupMemberRelease @ 0x180086850 (TppCleanupGroupMemberRelease.c)
 *     TpCancelAsyncIoOperation @ 0x1800868A0 (TpCancelAsyncIoOperation.c)
 *     TpCallbackSendPendingAlpcMessage @ 0x180086B10 (TpCallbackSendPendingAlpcMessage.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x180086C00 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TpAllocPool @ 0x180086D10 (TpAllocPool.c)
 *     TpSimpleTryPost @ 0x180086E30 (TpSimpleTryPost.c)
 *     TpTimerOutstandingCallbackCount @ 0x180087620 (TpTimerOutstandingCallbackCount.c)
 *     TppCancelWait @ 0x1800876C0 (TppCancelWait.c)
 *     TpAlpcRegisterCompletionList @ 0x1800877D0 (TpAlpcRegisterCompletionList.c)
 *     TpSetTimerEx @ 0x180087860 (TpSetTimerEx.c)
 *     TpIsTimerSet @ 0x180087F90 (TpIsTimerSet.c)
 *     TpReleaseTimer @ 0x180088160 (TpReleaseTimer.c)
 *     TppTimerQueueExpiration @ 0x1800882D0 (TppTimerQueueExpiration.c)
 *     TpWaitForTimer @ 0x1800889F0 (TpWaitForTimer.c)
 *     TpReleaseWork @ 0x180089580 (TpReleaseWork.c)
 *     TpAllocTimer @ 0x1800896F0 (TpAllocTimer.c)
 *     TpWaitForWork @ 0x18008A170 (TpWaitForWork.c)
 *     TpReleaseWait @ 0x18008ADA0 (TpReleaseWait.c)
 *     TpWaitOutstandingCallbackCount @ 0x18008AFEC (TpWaitOutstandingCallbackCount.c)
 *     TpAllocWait @ 0x18008B0C0 (TpAllocWait.c)
 *     TpWaitForWait @ 0x18008B410 (TpWaitForWait.c)
 *     TpDereferenceGlobalPool @ 0x18008BED8 (TpDereferenceGlobalPool.c)
 *     TpAllocJobNotification @ 0x1800B6E30 (TpAllocJobNotification.c)
 *     TppAllocAlpcCompletion @ 0x1800B7134 (TppAllocAlpcCompletion.c)
 *     TpAllocIoCompletion @ 0x1800B7460 (TpAllocIoCompletion.c)
 *     TpBindFileToDirect @ 0x1800B7690 (TpBindFileToDirect.c)
 *     TpPostWork @ 0x1800D2170 (TpPostWork.c)
 *     TpCallbackIndependent @ 0x1800D52B0 (TpCallbackIndependent.c)
 *     TpReleasePool @ 0x1800D9CF0 (TpReleasePool.c)
 *     TpStartAsyncIoOperation @ 0x1800E1C50 (TpStartAsyncIoOperation.c)
 *     TpDisassociateCallback @ 0x1800F1DC0 (TpDisassociateCallback.c)
 *     TpWaitForIoCompletion @ 0x1800F4030 (TpWaitForIoCompletion.c)
 *     TpSetPoolMinThreads @ 0x180101FB0 (TpSetPoolMinThreads.c)
 *     TpCallbackSetEventOnCompletion @ 0x1801079D0 (TpCallbackSetEventOnCompletion.c)
 *     TpCallbackLeaveCriticalSectionOnCompletion @ 0x18010B9B0 (TpCallbackLeaveCriticalSectionOnCompletion.c)
 *     TpCallbackDetectedUnrecoverableError @ 0x18015A9D0 (TpCallbackDetectedUnrecoverableError.c)
 *     TpCallbackReleaseMutexOnCompletion @ 0x18015AA00 (TpCallbackReleaseMutexOnCompletion.c)
 *     TpCallbackReleaseSemaphoreOnCompletion @ 0x18015AA40 (TpCallbackReleaseSemaphoreOnCompletion.c)
 * Callees:
 *     RtlRaiseException @ 0x18008CDF0 (RtlRaiseException.c)
 *     RtlpLogSetLastWin32ErrorEvent @ 0x180144954 (RtlpLogSetLastWin32ErrorEvent.c)
 *     TppReportExceptionFilter @ 0x18015AB7C (TppReportExceptionFilter.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
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
