/*
 * XREFs of ExfAcquireRundownProtection @ 0x140247210
 * Callers:
 *     SmKmStoreReferenceEx @ 0x140246C10 (SmKmStoreReferenceEx.c)
 *     SmKmStoreReference @ 0x140247170 (SmKmStoreReference.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     ExAcquireRundownProtectionCacheAware @ 0x140283A10 (ExAcquireRundownProtectionCacheAware.c)
 *     PfSnActiveTraceGetNext @ 0x140434970 (PfSnActiveTraceGetNext.c)
 *     ObDuplicateObject @ 0x14083FFB0 (ObDuplicateObject.c)
 *     PfpRpFileKeyUpdate @ 0x140843C20 (PfpRpFileKeyUpdate.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084B7E0 (ObpReferenceObjectByHandleWithTag.c)
 *     ObpCreateHandle @ 0x14084DAA0 (ObpCreateHandle.c)
 *     ExpWnfLookupNameInstance @ 0x1408AAA90 (ExpWnfLookupNameInstance.c)
 *     NtQueryWnfStateData @ 0x1408ABBD0 (NtQueryWnfStateData.c)
 *     ExpNtUpdateWnfStateData @ 0x1408AC580 (ExpNtUpdateWnfStateData.c)
 *     ExpWnfResolveScopeInstance @ 0x1408AD060 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1408AE2C0 (ExpWnfDispatchKernelSubscription.c)
 *     ObGetProcessHandleCount @ 0x1408ECB30 (ObGetProcessHandleCount.c)
 *     EtwpCovSampCaptureBufferProcess @ 0x140900208 (EtwpCovSampCaptureBufferProcess.c)
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x140900430 (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 *     EtwpCovSampAcquireSamplerRundown @ 0x140900FE0 (EtwpCovSampAcquireSamplerRundown.c)
 *     ObReferenceProcessHandleTable @ 0x140940570 (ObReferenceProcessHandleTable.c)
 *     PfSnPrefetchSections @ 0x140954784 (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x140954B40 (PfSnPrefetchSectionsCleanup.c)
 *     EtwpCoverageSamplerQuery @ 0x14095DA30 (EtwpCoverageSamplerQuery.c)
 *     PfSnPrefetchScenario @ 0x140962D70 (PfSnPrefetchScenario.c)
 *     ObpCallPreOperationCallbacks @ 0x1409A65F0 (ObpCallPreOperationCallbacks.c)
 *     CmpAcquireShutdownRundown @ 0x140BB9400 (CmpAcquireShutdownRundown.c)
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
