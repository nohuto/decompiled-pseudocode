/*
 * XREFs of ExfAcquireRundownProtection @ 0x140326BD0
 * Callers:
 *     SmKmStoreReferenceEx @ 0x1402082A0 (SmKmStoreReferenceEx.c)
 *     ExAcquireRundownProtectionCacheAware @ 0x1402ADA40 (ExAcquireRundownProtectionCacheAware.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     SmKmStoreReference @ 0x140435200 (SmKmStoreReference.c)
 *     PfSnActiveTraceGetNext @ 0x140438B00 (PfSnActiveTraceGetNext.c)
 *     EtwpCoverageSamplerQuery @ 0x1408232B0 (EtwpCoverageSamplerQuery.c)
 *     PfSnPrefetchScenario @ 0x1408285B0 (PfSnPrefetchScenario.c)
 *     ObDuplicateObject @ 0x140843A40 (ObDuplicateObject.c)
 *     PfpRpFileKeyUpdate @ 0x140847B50 (PfpRpFileKeyUpdate.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     ObpCreateHandle @ 0x1408518D0 (ObpCreateHandle.c)
 *     ObReferenceProcessHandleTable @ 0x1408ADC40 (ObReferenceProcessHandleTable.c)
 *     ObGetProcessHandleCount @ 0x1408DD7C0 (ObGetProcessHandleCount.c)
 *     ExpWnfLookupNameInstance @ 0x1408E33E0 (ExpWnfLookupNameInstance.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1408E3DC0 (ExpWnfDispatchKernelSubscription.c)
 *     ExpNtUpdateWnfStateData @ 0x1408E4380 (ExpNtUpdateWnfStateData.c)
 *     ExpWnfResolveScopeInstance @ 0x1408E4E70 (ExpWnfResolveScopeInstance.c)
 *     EtwpCovSampCaptureBufferProcess @ 0x14090C2A8 (EtwpCovSampCaptureBufferProcess.c)
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x14090C4D0 (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 *     EtwpCovSampAcquireSamplerRundown @ 0x14090D080 (EtwpCovSampAcquireSamplerRundown.c)
 *     ObpCallPreOperationCallbacks @ 0x14099B9C0 (ObpCallPreOperationCallbacks.c)
 *     PfSnPrefetchSections @ 0x1409C8054 (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x1409C8410 (PfSnPrefetchSectionsCleanup.c)
 *     CmpAcquireShutdownRundown @ 0x140BA9460 (CmpAcquireShutdownRundown.c)
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
