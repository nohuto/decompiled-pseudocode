/*
 * XREFs of TppRaiseInvalidParameter @ 0x18003EEE4
 * Callers:
 *     TpReleaseWork @ 0x18003A420 (TpReleaseWork.c)
 *     TpWaitForWork @ 0x18003A590 (TpWaitForWork.c)
 *     TppAllocAlpcCompletion @ 0x18003A624 (TppAllocAlpcCompletion.c)
 *     TpAllocIoCompletion @ 0x18003B2C0 (TpAllocIoCompletion.c)
 *     TpBindFileToDirect @ 0x18003B4F0 (TpBindFileToDirect.c)
 *     TpTimerOutstandingCallbackCount @ 0x18003B860 (TpTimerOutstandingCallbackCount.c)
 *     TpReleaseWait @ 0x18003C9C0 (TpReleaseWait.c)
 *     TpWaitOutstandingCallbackCount @ 0x18003CC0C (TpWaitOutstandingCallbackCount.c)
 *     TpAllocWait @ 0x18003CCE0 (TpAllocWait.c)
 *     TpWaitForWait @ 0x18003D030 (TpWaitForWait.c)
 *     TpDereferenceGlobalPool @ 0x18003DB58 (TpDereferenceGlobalPool.c)
 *     TppCancelWait @ 0x18003E2E0 (TppCancelWait.c)
 *     TpAlpcRegisterCompletionList @ 0x18003E3F0 (TpAlpcRegisterCompletionList.c)
 *     TpSetTimerEx @ 0x18003E670 (TpSetTimerEx.c)
 *     TpIsTimerSet @ 0x18003EDA0 (TpIsTimerSet.c)
 *     TpPostWork @ 0x18003EF70 (TpPostWork.c)
 *     TpReleaseTimer @ 0x18003F060 (TpReleaseTimer.c)
 *     TppTimerQueueExpiration @ 0x18003F290 (TppTimerQueueExpiration.c)
 *     TpWaitForTimer @ 0x18003FF90 (TpWaitForTimer.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x180040C30 (TppCleanupGroupMemberCallbackProlog.c)
 *     TpStartAsyncIoOperation @ 0x1800410C0 (TpStartAsyncIoOperation.c)
 *     TpSetWaitEx @ 0x180041AF0 (TpSetWaitEx.c)
 *     TpCallbackMayRunLong @ 0x180043D00 (TpCallbackMayRunLong.c)
 *     TpAllocTimer @ 0x1800461E0 (TpAllocTimer.c)
 *     TpAllocWork @ 0x180046F70 (TpAllocWork.c)
 *     TppPoolpReferenceGlobalPool @ 0x180048D80 (TppPoolpReferenceGlobalPool.c)
 *     TpCallbackSendAlpcMessageOnCompletion @ 0x180050240 (TpCallbackSendAlpcMessageOnCompletion.c)
 *     TpReleasePool @ 0x1800A06E0 (TpReleasePool.c)
 *     TpAlpcUnregisterCompletionList @ 0x1800D5D20 (TpAlpcUnregisterCompletionList.c)
 *     TpCallbackUnloadDllOnCompletion @ 0x1800D6550 (TpCallbackUnloadDllOnCompletion.c)
 *     TpReleaseCleanupGroupMembers @ 0x1800D6600 (TpReleaseCleanupGroupMembers.c)
 *     TppJobpValidateJob @ 0x1800D6A0C (TppJobpValidateJob.c)
 *     TppAlpcpValidateAlpc @ 0x1800D6BDC (TppAlpcpValidateAlpc.c)
 *     TppIopValidateIo @ 0x1800D6D50 (TppIopValidateIo.c)
 *     TppCleanupGroupMemberRelease @ 0x1800D6DF0 (TppCleanupGroupMemberRelease.c)
 *     TpCancelAsyncIoOperation @ 0x1800D6E40 (TpCancelAsyncIoOperation.c)
 *     TpCallbackIndependent @ 0x1800D80E0 (TpCallbackIndependent.c)
 *     TpCallbackSendPendingAlpcMessage @ 0x1800E5100 (TpCallbackSendPendingAlpcMessage.c)
 *     TpSimpleTryPost @ 0x1800EB150 (TpSimpleTryPost.c)
 *     TpDisassociateCallback @ 0x1800F92D0 (TpDisassociateCallback.c)
 *     TpSetPoolMaxThreads @ 0x1800FA0A0 (TpSetPoolMaxThreads.c)
 *     TpWaitForIoCompletion @ 0x1800FB080 (TpWaitForIoCompletion.c)
 *     TpAllocCleanupGroup @ 0x1800FB3A0 (TpAllocCleanupGroup.c)
 *     TpAllocPool @ 0x1800FB950 (TpAllocPool.c)
 *     TpAllocJobNotification @ 0x1800FCCC0 (TpAllocJobNotification.c)
 *     TpSetPoolMinThreads @ 0x180109990 (TpSetPoolMinThreads.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x18010B540 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TpReleaseCleanupGroup @ 0x18010B590 (TpReleaseCleanupGroup.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x18010C7B0 (TpSetPoolWorkerThreadIdleTimeout.c)
 *     TpCallbackSetEventOnCompletion @ 0x18010ECE0 (TpCallbackSetEventOnCompletion.c)
 *     TpCallbackLeaveCriticalSectionOnCompletion @ 0x180113560 (TpCallbackLeaveCriticalSectionOnCompletion.c)
 *     TpCallbackDetectedUnrecoverableError @ 0x18015DB70 (TpCallbackDetectedUnrecoverableError.c)
 *     TpCallbackReleaseMutexOnCompletion @ 0x18015DBA0 (TpCallbackReleaseMutexOnCompletion.c)
 *     TpCallbackReleaseSemaphoreOnCompletion @ 0x18015DBE0 (TpCallbackReleaseSemaphoreOnCompletion.c)
 * Callees:
 *     RtlRaiseException @ 0x180075020 (RtlRaiseException.c)
 *     RtlpLogSetLastWin32ErrorEvent @ 0x180147B54 (RtlpLogSetLastWin32ErrorEvent.c)
 *     TppReportExceptionFilter @ 0x18015DD1C (TppReportExceptionFilter.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

void __fastcall TppRaiseInvalidParameter()
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
