/*
 * XREFs of RtlRaiseStatus @ 0x1800417E0
 * Callers:
 *     RtlDeleteGrowableFunctionTable @ 0x1800279B0 (RtlDeleteGrowableFunctionTable.c)
 *     LdrInitializeThunk @ 0x18002C210 (LdrInitializeThunk.c)
 *     RtlpInitRandomExVector @ 0x18002CD6C (RtlpInitRandomExVector.c)
 *     RtlInitializeResource @ 0x18002F1C0 (RtlInitializeResource.c)
 *     RtlpWaitOnCriticalSection @ 0x18002F5F0 (RtlpWaitOnCriticalSection.c)
 *     RtlEncodePointer @ 0x1800314C0 (RtlEncodePointer.c)
 *     LdrpReportError @ 0x180032720 (LdrpReportError.c)
 *     RtlReleaseSRWLockShared @ 0x18003CC80 (RtlReleaseSRWLockShared.c)
 *     LdrpInitializeThread @ 0x18003F210 (LdrpInitializeThread.c)
 *     LdrpCallTlsInitializers @ 0x18003F930 (LdrpCallTlsInitializers.c)
 *     LdrpAddUnicodeStringToSnapsBuffer @ 0x180040ED0 (LdrpAddUnicodeStringToSnapsBuffer.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     RtlpNotOwnerCriticalSection @ 0x180041700 (RtlpNotOwnerCriticalSection.c)
 *     RtlRaiseStatus @ 0x1800417E0 (RtlRaiseStatus.c)
 *     RtlUnwindEx @ 0x180041E80 (RtlUnwindEx.c)
 *     RtlpxLookupFunctionTable @ 0x1800430E0 (RtlpxLookupFunctionTable.c)
 *     RtlpxVirtualUnwind @ 0x180043630 (RtlpxVirtualUnwind.c)
 *     RtlpUnwindPrologue @ 0x180044040 (RtlpUnwindPrologue.c)
 *     LdrpFindLoadedDllByName @ 0x180044B80 (LdrpFindLoadedDllByName.c)
 *     RtlDispatchException @ 0x180045A60 (RtlDispatchException.c)
 *     RtlDecodePointer @ 0x180046E40 (RtlDecodePointer.c)
 *     RtlIsNameInExpression @ 0x18007B800 (RtlIsNameInExpression.c)
 *     RtlpIsNameInExpressionPrivate @ 0x18007B878 (RtlpIsNameInExpressionPrivate.c)
 *     RtlDeactivateActivationContext @ 0x18008C7F0 (RtlDeactivateActivationContext.c)
 *     RtlRaiseException @ 0x18008CDF0 (RtlRaiseException.c)
 *     LdrLockLoaderLock @ 0x1800A0610 (LdrLockLoaderLock.c)
 *     _LdrpInitialize @ 0x1800AEAE4 (_LdrpInitialize.c)
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 *     RtlpSubSegmentInitialize @ 0x1800CDD80 (RtlpSubSegmentInitialize.c)
 *     RtlAcquireResourceShared @ 0x1800D7910 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x1800DB5E0 (RtlAcquireResourceExclusive.c)
 *     RtlReleaseResource @ 0x1800DBD90 (RtlReleaseResource.c)
 *     RtlInitializeSListHead @ 0x1800E1360 (RtlInitializeSListHead.c)
 *     RtlpLookupPrimaryFunctionEntry @ 0x1800E8B54 (RtlpLookupPrimaryFunctionEntry.c)
 *     RtlpUnwindOpSlots @ 0x1800EC2E4 (RtlpUnwindOpSlots.c)
 *     LdrUnlockLoaderLock @ 0x1800F22A0 (LdrUnlockLoaderLock.c)
 *     RtlpInitDeferredCriticalSection @ 0x1800F2B90 (RtlpInitDeferredCriticalSection.c)
 *     RtlGrowFunctionTable @ 0x1800F4140 (RtlGrowFunctionTable.c)
 *     RtlConvertExclusiveToShared @ 0x18010ADA0 (RtlConvertExclusiveToShared.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x18010F900 (RtlIsNameInUnUpcasedExpression.c)
 *     RtlConvertSRWLockExclusiveToShared @ 0x180138C90 (RtlConvertSRWLockExclusiveToShared.c)
 *     RtlTryConvertSRWLockSharedToExclusiveOrRelease @ 0x180138CE0 (RtlTryConvertSRWLockSharedToExclusiveOrRelease.c)
 *     RtlpUnWaitCriticalSection @ 0x180138DE0 (RtlpUnWaitCriticalSection.c)
 *     RtlInitializeContext @ 0x180144C30 (RtlInitializeContext.c)
 *     RtlWow64PopAllCrossProcessWorkFromWorkList @ 0x180146D40 (RtlWow64PopAllCrossProcessWorkFromWorkList.c)
 *     RtlWow64PopCrossProcessWorkFromFreeList @ 0x180146E20 (RtlWow64PopCrossProcessWorkFromFreeList.c)
 *     RtlWow64PushCrossProcessWorkOntoFreeList @ 0x180146EE0 (RtlWow64PushCrossProcessWorkOntoFreeList.c)
 *     RtlWow64PushCrossProcessWorkOntoWorkList @ 0x180146FB0 (RtlWow64PushCrossProcessWorkOntoWorkList.c)
 *     LdrpLogFatalUserCallbackException @ 0x18015E6B0 (LdrpLogFatalUserCallbackException.c)
 *     KiUserApcDispatcher @ 0x180163F40 (KiUserApcDispatcher.c)
 *     KiUserCallbackDispatcherHandler @ 0x180163FD0 (KiUserCallbackDispatcherHandler.c)
 *     KiUserCallbackDispatcher @ 0x180164060 (KiUserCallbackDispatcher.c)
 *     KiUserExceptionDispatcher @ 0x1801640B0 (KiUserExceptionDispatcher.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1800417E0 (RtlRaiseStatus.c)
 *     RtlRaiseNoncontinuableException @ 0x18011F600 (RtlRaiseNoncontinuableException.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

void __cdecl __noreturn RtlRaiseStatus(NTSTATUS Status)
{
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-578h] BYREF
  struct _CONTEXT ContextRecord; // [rsp+C0h] [rbp-4D8h] BYREF

  memset_thunk_772440563353939046(&ExceptionRecord.NumberParameters + 1, 0, 0x7CuLL);
  ExceptionRecord.ExceptionRecord = 0LL;
  ExceptionRecord.NumberParameters = 0;
  ExceptionRecord.ExceptionAddress = (void *)-1LL;
  ExceptionRecord.ExceptionCode = Status;
  ExceptionRecord.ExceptionFlags = 129;
  RtlRaiseNoncontinuableException(&ExceptionRecord, &ContextRecord);
}
