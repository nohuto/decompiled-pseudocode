/*
 * XREFs of _LdrpInitialize @ 0x1800AEAE4
 * Callers:
 *     LdrpInitializeInternal @ 0x1800AE9E0 (LdrpInitializeInternal.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18003CC20 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003CC80 (RtlReleaseSRWLockShared.c)
 *     LdrpInitializeThread @ 0x18003F210 (LdrpInitializeThread.c)
 *     LdrpLogInternal @ 0x180040780 (LdrpLogInternal.c)
 *     RtlRaiseStatus @ 0x1800417E0 (RtlRaiseStatus.c)
 *     RtlSleepConditionVariableSRW @ 0x18005FA90 (RtlSleepConditionVariableSRW.c)
 *     LdrpLogDllState @ 0x18008D5E0 (LdrpLogDllState.c)
 *     LdrpInitializationFailure @ 0x1800AE1D4 (LdrpInitializationFailure.c)
 *     LdrpInitializationComplete @ 0x1800AE858 (LdrpInitializationComplete.c)
 *     LdrpWaitForInitializationComplete @ 0x1800AE930 (LdrpWaitForInitializationComplete.c)
 *     LdrInitializePerThreadRng @ 0x1800AEE78 (LdrInitializePerThreadRng.c)
 *     LdrInitializeMrdata @ 0x1800AEEE0 (LdrInitializeMrdata.c)
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 *     LdrpTouchThreadStack @ 0x1800B0CA8 (LdrpTouchThreadStack.c)
 *     LdrpDoDebuggerBreak @ 0x18011D788 (LdrpDoDebuggerBreak.c)
 *     RtlEnableHeapGC @ 0x18013FB10 (RtlEnableHeapGC.c)
 *     LdrpInitializeProcessWrapperFilter @ 0x18015D1D0 (LdrpInitializeProcessWrapperFilter.c)
 *     ZwTerminateProcess @ 0x1801605D0 (ZwTerminateProcess.c)
 *     ZwCreateEvent @ 0x180160950 (ZwCreateEvent.c)
 *     ZwTestAlert @ 0x180163AA0 (ZwTestAlert.c)
 */

NTSTATUS __fastcall LdrpInitialize(__int64 a1, __int64 a2)
{
  struct _TEB *v3; // r14
  NTSTATUS result; // eax
  _PEB *ProcessEnvironmentBlock; // rsi
  int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // eax
  int v10; // eax
  struct _PEB *v11; // rax
  int v12; // [rsp+30h] [rbp-48h]

  v3 = NtCurrentTeb();
  while ( 1 )
  {
    result = _InterlockedCompareExchange(&LdrpProcessInitialized, 1, 0);
    if ( result == 1 && (v3->SameTebFlags & 0x2000) == 0 )
      goto LABEL_25;
    ProcessEnvironmentBlock = v3->ProcessEnvironmentBlock;
    if ( !result )
    {
      ZwCreateEvent(&LdrpInitCompleteEvent, 0x1F0003u, 0LL, NotificationEvent, 0);
      v3->SameTebFlags |= 0x20u;
      ProcessEnvironmentBlock->LoaderLock = &LdrpLoaderLock;
      LdrInitState = 0;
      _interlockedbittestandset((volatile signed __int32 *)&ProcessEnvironmentBlock->80, 1u);
      qword_1801E6068 = (__int64)&RtlpDynamicFunctionTable;
      RtlpDynamicFunctionTable = &RtlpDynamicFunctionTable;
      RtlpDynamicFunctionTableLock.0 = 0LL;
      RtlpDynamicFunctionTableTreeMin = 0LL;
      RtlpDynamicFunctionTableTreeMax = 0LL;
      RtlpDynamicCallbackTableTreeMin = 0LL;
      RtlpDynamicCallbackTableTreeMax = 0LL;
      v9 = LdrInitializeMrdata();
      v6 = v9;
      if ( v9 < 0 )
      {
        result = LdrpLogInternal(
                   "minkernel\\ldr\\ldrinit.c",
                   2653,
                   (__int64)"_LdrpInitialize",
                   0,
                   "LDR:MRDATA: Process initialization failed with status 0x%08lx\n",
                   v9);
        goto LABEL_10;
      }
      if ( LdrpIsSecureProcess )
        LdrpDetourExist = 1;
      v10 = LdrpInitializeProcess(a1, a2);
      v6 = v10;
      v12 = v10;
      if ( v10 < 0 )
      {
        result = LdrpLogInternal(
                   "minkernel\\ldr\\ldrinit.c",
                   2680,
                   (__int64)"_LdrpInitialize",
                   0,
                   "Process initialization failed with status 0x%08lx\n",
                   v10);
        goto LABEL_10;
      }
      LdrpLogDllState(*(_QWORD *)(LdrpImageEntry + 48), (unsigned __int16 *)(LdrpImageEntry + 72), 5294);
      if ( ProcessEnvironmentBlock->MinimumStackCommit )
        v12 = LdrpTouchThreadStack();
      LdrInitState = 3;
      _interlockedbittestandreset((volatile signed __int32 *)&ProcessEnvironmentBlock->80, 1u);
      result = RtlEnableHeapGC(LdrpThreadPool);
      v6 = v12;
      if ( v12 >= 0 )
      {
        if ( !UseWOW64 || LdrpProcessInitialized == 1 )
          result = LdrpInitializationComplete(&LdrpProcessInitialized, &LdrpInitCompleteEvent, 5252);
        goto LABEL_10;
      }
LABEL_30:
      LdrpInitializationFailure(v6);
      ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, v6);
      RtlRaiseStatus(v6);
    }
    v6 = 0;
    if ( !ProcessEnvironmentBlock->InheritedAddressSpace )
      goto LABEL_5;
    LdrpInitCompleteEvent = 0LL;
    if ( _InterlockedCompareExchange(&LdrpProcessInitialized, 1, 2) == 2 )
      break;
LABEL_25:
    LdrpWaitForInitializationComplete(&LdrpProcessInitialized, &LdrpInitCompleteEvent);
  }
  if ( ProcessEnvironmentBlock->InheritedAddressSpace )
  {
    v11 = NtCurrentPeb();
    LdrpForkActiveLock.0 = 0LL;
    LdrpForkConditionVariable.0 = 0LL;
    v11->InheritedAddressSpace = 0;
    if ( v11->BeingDebugged )
      LdrpDoDebuggerBreak();
  }
  result = LdrpInitializationComplete(&LdrpProcessInitialized, &LdrpInitCompleteEvent, 5252);
  v6 = 0;
LABEL_5:
  if ( (v3->SameTebFlags & 0x40) == 0 )
  {
    if ( LdrpForkInProgress )
    {
      RtlAcquireSRWLockShared(&LdrpForkActiveLock);
      while ( LdrpForkInProgress )
        RtlSleepConditionVariableSRW(&LdrpForkConditionVariable, &LdrpForkActiveLock, 0LL, 1u);
      RtlReleaseSRWLockShared(&LdrpForkActiveLock);
    }
    LdrInitializePerThreadRng(v3);
    if ( UseWOW64 )
      g_LdrpWow64LdrpInitialize(a1);
    result = LdrpInitializeThread(a1, v7, v8);
  }
LABEL_10:
  if ( v6 < 0 )
    goto LABEL_30;
  if ( (v3->SameTebFlags & 0x2000) == 0 )
    return ZwTestAlert();
  return result;
}
