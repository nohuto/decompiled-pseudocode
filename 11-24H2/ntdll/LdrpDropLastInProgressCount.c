/*
 * XREFs of LdrpDropLastInProgressCount @ 0x1800ACA84
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x1800319F0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpFindLoadedDll @ 0x180036E00 (LdrpFindLoadedDll.c)
 *     LdrpLoadDllInternal @ 0x180037E60 (LdrpLoadDllInternal.c)
 *     LdrpInitializeThread @ 0x18003F210 (LdrpInitializeThread.c)
 *     LdrpFastpthReloadedDll @ 0x180046270 (LdrpFastpthReloadedDll.c)
 *     RtlQueryInformationActivationContext @ 0x1800475D0 (RtlQueryInformationActivationContext.c)
 *     LdrUnloadDll @ 0x1800480B0 (LdrUnloadDll.c)
 *     LdrEnumerateLoadedModules @ 0x1800AAC50 (LdrEnumerateLoadedModules.c)
 *     LdrShutdownThread @ 0x1800AB0D0 (LdrShutdownThread.c)
 *     LdrInitShimEngineDynamic @ 0x1800ACB80 (LdrInitShimEngineDynamic.c)
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 *     LdrpInitializeImportRedirection @ 0x1800F56E8 (LdrpInitializeImportRedirection.c)
 *     LdrpCompleteProcessCloning @ 0x18015EF08 (LdrpCompleteProcessCloning.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 */

NTSTATUS LdrpDropLastInProgressCount()
{
  struct _TEB *v0; // rax

  v0 = NtCurrentTeb();
  v0->SameTebFlags &= ~0x1000u;
  RtlEnterCriticalSection(&LdrpWorkQueueLock);
  LdrpWorkInProgress = 0;
  RtlLeaveCriticalSection(&LdrpWorkQueueLock);
  return ZwSetEvent(LdrpLoadCompleteEvent, 0LL);
}
