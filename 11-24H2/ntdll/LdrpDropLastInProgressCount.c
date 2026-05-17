/*
 * XREFs of LdrpDropLastInProgressCount @ 0x180001F40
 * Callers:
 *     LdrEnumerateLoadedModules @ 0x180001F90 (LdrEnumerateLoadedModules.c)
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
 *     LdrpCompleteProcessCloning @ 0x180160B48 (LdrpCompleteProcessCloning.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 */

__int64 LdrpDropLastInProgressCount()
{
  struct _TEB *v0; // rax

  v0 = NtCurrentTeb();
  v0->SameTebFlags &= ~0x1000u;
  RtlEnterCriticalSection(&LdrpWorkQueueLock);
  LdrpWorkInProgress = 0;
  RtlLeaveCriticalSection(&LdrpWorkQueueLock);
  return ZwSetEvent(LdrpLoadCompleteEvent, 0LL);
}
