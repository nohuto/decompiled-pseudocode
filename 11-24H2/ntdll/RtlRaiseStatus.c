/*
 * XREFs of RtlRaiseStatus @ 0x180014DE0
 * Callers:
 *     LdrUnlockLoaderLock @ 0x180003D60 (LdrUnlockLoaderLock.c)
 *     RtlEncodePointer @ 0x180004AC0 (RtlEncodePointer.c)
 *     LdrpReportError @ 0x180005D20 (LdrpReportError.c)
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     LdrpInitializeThread @ 0x180012810 (LdrpInitializeThread.c)
 *     LdrpCallTlsInitializers @ 0x180012F30 (LdrpCallTlsInitializers.c)
 *     LdrpAddUnicodeStringToSnapsBuffer @ 0x1800144D0 (LdrpAddUnicodeStringToSnapsBuffer.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     RtlpNotOwnerCriticalSection @ 0x180014D00 (RtlpNotOwnerCriticalSection.c)
 *     RtlRaiseStatus @ 0x180014DE0 (RtlRaiseStatus.c)
 *     RtlUnwindEx @ 0x180015480 (RtlUnwindEx.c)
 *     RtlpxLookupFunctionTable @ 0x1800166E0 (RtlpxLookupFunctionTable.c)
 *     RtlpxVirtualUnwind @ 0x180016C30 (RtlpxVirtualUnwind.c)
 *     RtlpUnwindPrologue @ 0x180017640 (RtlpUnwindPrologue.c)
 *     LdrpFindLoadedDllByName @ 0x180018180 (LdrpFindLoadedDllByName.c)
 *     RtlDispatchException @ 0x180019060 (RtlDispatchException.c)
 *     RtlDecodePointer @ 0x18001A440 (RtlDecodePointer.c)
 *     _LdrpInitialize @ 0x180066904 (_LdrpInitialize.c)
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 *     RtlDeactivateActivationContext @ 0x18006FF10 (RtlDeactivateActivationContext.c)
 *     RtlRaiseException @ 0x180070510 (RtlRaiseException.c)
 *     LdrInitializeThunk @ 0x1800973C0 (LdrInitializeThunk.c)
 *     RtlpInitRandomExVector @ 0x180097F1C (RtlpInitRandomExVector.c)
 *     RtlInitializeResource @ 0x18009A370 (RtlInitializeResource.c)
 *     RtlpWaitOnCriticalSection @ 0x18009A7A0 (RtlpWaitOnCriticalSection.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x1800ADA30 (RtlIsNameInUnUpcasedExpression.c)
 *     RtlIsNameInExpression @ 0x1800AEF60 (RtlIsNameInExpression.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1800AEFD8 (RtlpIsNameInExpressionPrivate.c)
 *     RtlpSubSegmentInitialize @ 0x1800D0810 (RtlpSubSegmentInitialize.c)
 *     RtlAcquireResourceShared @ 0x1800DC7A0 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x1800E04E0 (RtlAcquireResourceExclusive.c)
 *     RtlReleaseResource @ 0x1800E0880 (RtlReleaseResource.c)
 *     RtlInitializeSListHead @ 0x1800E5EB0 (RtlInitializeSListHead.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800E76F0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlpLookupPrimaryFunctionEntry @ 0x1800ED864 (RtlpLookupPrimaryFunctionEntry.c)
 *     RtlpUnwindOpSlots @ 0x1800F1664 (RtlpUnwindOpSlots.c)
 *     LdrLockLoaderLock @ 0x1800F3720 (LdrLockLoaderLock.c)
 *     RtlpInitDeferredCriticalSection @ 0x1800F8020 (RtlpInitDeferredCriticalSection.c)
 *     RtlGrowFunctionTable @ 0x1800F9570 (RtlGrowFunctionTable.c)
 *     RtlConvertExclusiveToShared @ 0x18010FDC0 (RtlConvertExclusiveToShared.c)
 *     RtlConvertSRWLockExclusiveToShared @ 0x18013AA60 (RtlConvertSRWLockExclusiveToShared.c)
 *     RtlTryConvertSRWLockSharedToExclusiveOrRelease @ 0x18013AAB0 (RtlTryConvertSRWLockSharedToExclusiveOrRelease.c)
 *     RtlpUnWaitCriticalSection @ 0x18013ABB0 (RtlpUnWaitCriticalSection.c)
 *     RtlInitializeContext @ 0x180146880 (RtlInitializeContext.c)
 *     RtlWow64PopAllCrossProcessWorkFromWorkList @ 0x180148990 (RtlWow64PopAllCrossProcessWorkFromWorkList.c)
 *     RtlWow64PopCrossProcessWorkFromFreeList @ 0x180148A70 (RtlWow64PopCrossProcessWorkFromFreeList.c)
 *     RtlWow64PushCrossProcessWorkOntoFreeList @ 0x180148B30 (RtlWow64PushCrossProcessWorkOntoFreeList.c)
 *     RtlWow64PushCrossProcessWorkOntoWorkList @ 0x180148C00 (RtlWow64PushCrossProcessWorkOntoWorkList.c)
 *     LdrpLogFatalUserCallbackException @ 0x1801602F0 (LdrpLogFatalUserCallbackException.c)
 *     KiUserApcDispatcher @ 0x180165B80 (KiUserApcDispatcher.c)
 *     KiUserCallbackDispatcherHandler @ 0x180165C10 (KiUserCallbackDispatcherHandler.c)
 *     KiUserCallbackDispatcher @ 0x180165CA0 (KiUserCallbackDispatcher.c)
 *     KiUserExceptionDispatcher @ 0x180165CF0 (KiUserExceptionDispatcher.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180014DE0 (RtlRaiseStatus.c)
 *     RtlRaiseNoncontinuableException @ 0x1801213D0 (RtlRaiseNoncontinuableException.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

void __fastcall __noreturn RtlRaiseStatus(int a1)
{
  __int64 v2; // r8
  char v3; // bl
  unsigned int v4; // eax
  _DWORD v5[2]; // [rsp+20h] [rbp-578h] BYREF
  __int64 v6; // [rsp+28h] [rbp-570h]
  __int64 v7; // [rsp+30h] [rbp-568h]
  int v8; // [rsp+38h] [rbp-560h]
  _BYTE v9[132]; // [rsp+3Ch] [rbp-55Ch] BYREF
  _BYTE v10[1240]; // [rsp+C0h] [rbp-4D8h] BYREF

  memset_thunk_772440563353939046(v9, 0, 0x7CuLL);
  v6 = 0LL;
  v8 = 0;
  v7 = -1LL;
  v5[0] = a1;
  v3 = 1;
  v5[1] = 129;
  do
  {
    LOBYTE(v2) = v3;
    v4 = RtlRaiseNoncontinuableException(v5, v10, v2);
    if ( NtCurrentPeb()->BeingDebugged )
      break;
    --v3;
  }
  while ( !v3 );
  RtlRaiseStatus(v4);
}
