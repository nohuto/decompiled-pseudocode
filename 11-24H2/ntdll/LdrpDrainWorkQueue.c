/*
 * XREFs of LdrpDrainWorkQueue @ 0x180003E20
 * Callers:
 *     LdrEnumerateLoadedModules @ 0x180001F90 (LdrEnumerateLoadedModules.c)
 *     RtlExitUserProcess @ 0x180004320 (RtlExitUserProcess.c)
 *     LdrShutdownThread @ 0x1800045E0 (LdrShutdownThread.c)
 *     LdrGetProcedureAddressForCaller @ 0x180004FF0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpFindLoadedDll @ 0x18000A400 (LdrpFindLoadedDll.c)
 *     LdrpLoadDllInternal @ 0x18000B460 (LdrpLoadDllInternal.c)
 *     LdrpInitializeThread @ 0x180012810 (LdrpInitializeThread.c)
 *     LdrpFastpthReloadedDll @ 0x180019870 (LdrpFastpthReloadedDll.c)
 *     RtlQueryInformationActivationContext @ 0x18001ABD0 (RtlQueryInformationActivationContext.c)
 *     LdrUnloadDll @ 0x18001B6B0 (LdrUnloadDll.c)
 *     LdrInitShimEngineDynamic @ 0x180064C50 (LdrInitShimEngineDynamic.c)
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 *     LdrpInitializeImportRedirection @ 0x1800FA988 (LdrpInitializeImportRedirection.c)
 *     RtlCloneUserProcess @ 0x18015F270 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x18015F730 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     LdrpProcessWork @ 0x180021E60 (LdrpProcessWork.c)
 *     LdrpUpdateStatistics @ 0x180022B6C (LdrpUpdateStatistics.c)
 *     NtWaitForSingleObject @ 0x180161D10 (NtWaitForSingleObject.c)
 */

struct _TEB *__fastcall LdrpDrainWorkQueue(int a1)
{
  HANDLE v1; // r14
  char v2; // bp
  char v4; // di
  __int64 *v5; // rbx
  __int64 v6; // rax
  struct _TEB *result; // rax
  __int64 v8; // rax
  __int64 v9; // rax

  v1 = (HANDLE)LdrpWorkCompleteEvent;
  v2 = 0;
  if ( !a1 )
    v1 = LdrpLoadCompleteEvent;
  while ( 1 )
  {
    while ( 1 )
    {
      RtlEnterCriticalSection(&LdrpWorkQueueLock);
      v4 = LdrpDetourExist;
      if ( LdrpDetourExist && a1 != 1 )
      {
        if ( LdrpWorkInProgress == a1 )
        {
          LdrpWorkInProgress = 1;
          v2 = 1;
        }
        v5 = &LdrpWorkQueue;
        goto LABEL_16;
      }
      v5 = (__int64 *)LdrpWorkQueue;
      if ( *(__int64 **)(LdrpWorkQueue + 8) != &LdrpWorkQueue
        || (v6 = *(_QWORD *)LdrpWorkQueue, *(_QWORD *)(*(_QWORD *)LdrpWorkQueue + 8LL) != LdrpWorkQueue) )
      {
        __fastfail(3u);
      }
      LdrpWorkQueue = *(_QWORD *)LdrpWorkQueue;
      *(_QWORD *)(v6 + 8) = &LdrpWorkQueue;
      if ( &LdrpWorkQueue == v5 )
        break;
      if ( !v4 )
        ++LdrpWorkInProgress;
      LdrpUpdateStatistics();
LABEL_16:
      RtlLeaveCriticalSection(&LdrpWorkQueueLock);
      if ( v2 )
        goto LABEL_9;
      if ( &LdrpWorkQueue == v5 )
        NtWaitForSingleObject(v1, 0, 0LL);
      else
        LdrpProcessWork((_BYTE)v5 - 64);
    }
    if ( LdrpWorkInProgress != a1 )
      goto LABEL_16;
    LdrpWorkInProgress = 1;
    RtlLeaveCriticalSection(&LdrpWorkQueueLock);
LABEL_9:
    if ( !a1 || (__int64 *)LdrpRetryQueue == &LdrpRetryQueue )
      break;
    RtlEnterCriticalSection(&LdrpWorkQueueLock);
    v8 = LdrpRetryQueue;
    *(_QWORD *)(LdrpRetryQueue + 8) = &LdrpWorkQueue;
    LdrpWorkQueue = v8;
    v9 = qword_1801D2688;
    *(_QWORD *)qword_1801D2688 = &LdrpWorkQueue;
    qword_1801D26D8 = v9;
    qword_1801D2688 = (__int64)&LdrpRetryQueue;
    LdrpRetryQueue = (__int64)&LdrpRetryQueue;
    LdrpRetryingModuleIndex = 0LL;
    RtlLeaveCriticalSection(&LdrpWorkQueueLock);
    v2 = 0;
  }
  result = NtCurrentTeb();
  result->SameTebFlags |= 0x1000u;
  return result;
}
