/*
 * XREFs of RtlRaiseStatus @ 0x18007C3F0
 * Callers:
 *     LdrInitializeThunk @ 0x180002A20 (LdrInitializeThunk.c)
 *     RtlpInitRandomExVector @ 0x18000358C (RtlpInitRandomExVector.c)
 *     RtlInitializeResource @ 0x1800059E0 (RtlInitializeResource.c)
 *     RtlpWaitOnCriticalSection @ 0x180005E10 (RtlpWaitOnCriticalSection.c)
 *     LdrpReportError @ 0x180008910 (LdrpReportError.c)
 *     LdrUnlockLoaderLock @ 0x18003F1D0 (LdrUnlockLoaderLock.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x180067110 (RtlIsNameInUnUpcasedExpression.c)
 *     RtlIsNameInExpression @ 0x1800688A0 (RtlIsNameInExpression.c)
 *     RtlpIsNameInExpressionPrivate @ 0x180068918 (RtlpIsNameInExpressionPrivate.c)
 *     RtlDeactivateActivationContext @ 0x180073A20 (RtlDeactivateActivationContext.c)
 *     LdrpInitializeThread @ 0x180073EB0 (LdrpInitializeThread.c)
 *     LdrpCallTlsInitializers @ 0x180074330 (LdrpCallTlsInitializers.c)
 *     RtlRaiseException @ 0x180075020 (RtlRaiseException.c)
 *     RtlDecodePointer @ 0x180075450 (RtlDecodePointer.c)
 *     RtlDispatchException @ 0x180075F60 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x180077090 (RtlUnwindEx.c)
 *     RtlpxLookupFunctionTable @ 0x1800787D0 (RtlpxLookupFunctionTable.c)
 *     RtlpxVirtualUnwind @ 0x180078D20 (RtlpxVirtualUnwind.c)
 *     RtlpUnwindPrologue @ 0x1800796F0 (RtlpUnwindPrologue.c)
 *     LdrpFindLoadedDllByName @ 0x18007A380 (LdrpFindLoadedDllByName.c)
 *     LdrpAddUnicodeStringToSnapsBuffer @ 0x18007BAE0 (LdrpAddUnicodeStringToSnapsBuffer.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlpNotOwnerCriticalSection @ 0x18007C310 (RtlpNotOwnerCriticalSection.c)
 *     RtlRaiseStatus @ 0x18007C3F0 (RtlRaiseStatus.c)
 *     RtlpSubSegmentInitialize @ 0x18007CB10 (RtlpSubSegmentInitialize.c)
 *     _LdrpInitialize @ 0x1800D2584 (_LdrpInitialize.c)
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 *     RtlAcquireResourceShared @ 0x1800DBD10 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x1800DD8A0 (RtlAcquireResourceExclusive.c)
 *     RtlReleaseResource @ 0x1800DDC90 (RtlReleaseResource.c)
 *     RtlInitializeSListHead @ 0x1800E4E80 (RtlInitializeSListHead.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800E8E30 (RtlDeleteGrowableFunctionTable.c)
 *     RtlEncodePointer @ 0x1800EBB00 (RtlEncodePointer.c)
 *     RtlpLookupPrimaryFunctionEntry @ 0x1800EE0A0 (RtlpLookupPrimaryFunctionEntry.c)
 *     RtlpUnwindOpSlots @ 0x1800F31D4 (RtlpUnwindOpSlots.c)
 *     LdrLockLoaderLock @ 0x1800F5290 (LdrLockLoaderLock.c)
 *     RtlpInitDeferredCriticalSection @ 0x1800F9BB0 (RtlpInitDeferredCriticalSection.c)
 *     RtlGrowFunctionTable @ 0x1800FB190 (RtlGrowFunctionTable.c)
 *     RtlConvertExclusiveToShared @ 0x180112B30 (RtlConvertExclusiveToShared.c)
 *     RtlConvertSRWLockExclusiveToShared @ 0x18013C1D0 (RtlConvertSRWLockExclusiveToShared.c)
 *     RtlTryConvertSRWLockSharedToExclusiveOrRelease @ 0x18013C220 (RtlTryConvertSRWLockSharedToExclusiveOrRelease.c)
 *     RtlpUnWaitCriticalSection @ 0x18013C320 (RtlpUnWaitCriticalSection.c)
 *     RtlInitializeContext @ 0x180147E30 (RtlInitializeContext.c)
 *     RtlWow64PopAllCrossProcessWorkFromWorkList @ 0x180149F40 (RtlWow64PopAllCrossProcessWorkFromWorkList.c)
 *     RtlWow64PopCrossProcessWorkFromFreeList @ 0x18014A020 (RtlWow64PopCrossProcessWorkFromFreeList.c)
 *     RtlWow64PushCrossProcessWorkOntoFreeList @ 0x18014A0E0 (RtlWow64PushCrossProcessWorkOntoFreeList.c)
 *     RtlWow64PushCrossProcessWorkOntoWorkList @ 0x18014A1B0 (RtlWow64PushCrossProcessWorkOntoWorkList.c)
 *     LdrpLogFatalUserCallbackException @ 0x180161840 (LdrpLogFatalUserCallbackException.c)
 *     KiUserApcDispatcher @ 0x180167110 (KiUserApcDispatcher.c)
 *     KiUserCallbackDispatcherHandler @ 0x1801671A0 (KiUserCallbackDispatcherHandler.c)
 *     KiUserCallbackDispatcher @ 0x180167230 (KiUserCallbackDispatcher.c)
 *     KiUserExceptionDispatcher @ 0x180167280 (KiUserExceptionDispatcher.c)
 * Callees:
 *     RtlRaiseStatus @ 0x18007C3F0 (RtlRaiseStatus.c)
 *     RtlRaiseNoncontinuableException @ 0x180122EB0 (RtlRaiseNoncontinuableException.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
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
