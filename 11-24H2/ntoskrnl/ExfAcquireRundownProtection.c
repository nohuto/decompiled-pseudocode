/*
 * XREFs of ExfAcquireRundownProtection @ 0x1402F60C0
 * Callers:
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     ExAcquireRundownProtectionCacheAware @ 0x140238FA0 (ExAcquireRundownProtectionCacheAware.c)
 *     PfSnActiveTraceGetNext @ 0x1402F4C40 (PfSnActiveTraceGetNext.c)
 *     SmKmStoreReferenceEx @ 0x1402F5F30 (SmKmStoreReferenceEx.c)
 *     SmKmStoreReference @ 0x1402F6020 (SmKmStoreReference.c)
 *     ObDuplicateObject @ 0x14083C270 (ObDuplicateObject.c)
 *     PfpRpFileKeyUpdate @ 0x14083FEE0 (PfpRpFileKeyUpdate.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     ObpCreateHandle @ 0x140849D60 (ObpCreateHandle.c)
 *     ObGetProcessHandleCount @ 0x14085E360 (ObGetProcessHandleCount.c)
 *     ObReferenceProcessHandleTable @ 0x140894BB0 (ObReferenceProcessHandleTable.c)
 *     ExpWnfLookupNameInstance @ 0x140900CF0 (ExpWnfLookupNameInstance.c)
 *     NtQueryWnfStateData @ 0x140901E30 (NtQueryWnfStateData.c)
 *     ExpNtUpdateWnfStateData @ 0x1409027E0 (ExpNtUpdateWnfStateData.c)
 *     ExpWnfResolveScopeInstance @ 0x1409032C0 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfDispatchKernelSubscription @ 0x140904520 (ExpWnfDispatchKernelSubscription.c)
 *     EtwpCovSampCaptureBufferProcess @ 0x140922AE8 (EtwpCovSampCaptureBufferProcess.c)
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x140922D10 (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 *     EtwpCovSampAcquireSamplerRundown @ 0x1409238C0 (EtwpCovSampAcquireSamplerRundown.c)
 *     PfSnPrefetchSections @ 0x140938134 (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x1409384F0 (PfSnPrefetchSectionsCleanup.c)
 *     EtwpCoverageSamplerQuery @ 0x1409454F0 (EtwpCoverageSamplerQuery.c)
 *     PfSnPrefetchScenario @ 0x14094A830 (PfSnPrefetchScenario.c)
 *     ObpCallPreOperationCallbacks @ 0x140977CD0 (ObpCallPreOperationCallbacks.c)
 *     EtwpEnableGuid @ 0x140A3EA20 (EtwpEnableGuid.c)
 *     EtwpAddRegEntryToGroup @ 0x140AD9390 (EtwpAddRegEntryToGroup.c)
 *     CmpAcquireShutdownRundown @ 0x140BBB400 (CmpAcquireShutdownRundown.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ExfAcquireRundownProtection(PEX_RUNDOWN_REF RunRef)
{
  unsigned __int64 Count; // rax
  unsigned __int64 v2; // rtt

  _m_prefetchw(RunRef);
  Count = RunRef->Count;
  while ( (Count & 1) == 0 )
  {
    v2 = Count;
    Count = _InterlockedCompareExchange64((volatile signed __int64 *)RunRef, Count + 2, Count);
    if ( v2 == Count )
      return 1;
  }
  return 0;
}
