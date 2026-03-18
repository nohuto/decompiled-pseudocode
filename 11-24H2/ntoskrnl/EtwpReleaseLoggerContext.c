/*
 * XREFs of EtwpReleaseLoggerContext @ 0x14095D644
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x14048EBF0 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpGetPmcSessions @ 0x14064CAA8 (EtwpGetPmcSessions.c)
 *     EtwpTransitionToRealtime @ 0x14064F408 (EtwpTransitionToRealtime.c)
 *     EtwpGetCompressionSettings @ 0x1406514B0 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x14065173C (EtwpSetCompressionSettings.c)
 *     EtwShutdown @ 0x1407A67D0 (EtwShutdown.c)
 *     EtwpIncrementTraceFile @ 0x1407AA940 (EtwpIncrementTraceFile.c)
 *     EtwpQueryReferenceTime @ 0x1407AAA20 (EtwpQueryReferenceTime.c)
 *     EtwRegisterEventCallback @ 0x1407ACEB0 (EtwRegisterEventCallback.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1407AD74C (EtwpUpdatePeriodicCaptureState.c)
 *     SendCaptureStateNotificationsWorker @ 0x1407ADA30 (SendCaptureStateNotificationsWorker.c)
 *     EtwpGetSoftRestartInformation @ 0x1407AF770 (EtwpGetSoftRestartInformation.c)
 *     EtwpKsrCallback @ 0x1407AF910 (EtwpKsrCallback.c)
 *     EtwpLookupLoggerIdByName @ 0x140830720 (EtwpLookupLoggerIdByName.c)
 *     EtwpStartLogger @ 0x140831694 (EtwpStartLogger.c)
 *     EtwpStopTrace @ 0x1408325A4 (EtwpStopTrace.c)
 *     EtwpUpdateTrace @ 0x14083311C (EtwpUpdateTrace.c)
 *     EtwpTrackProviderBinary @ 0x1408338BC (EtwpTrackProviderBinary.c)
 *     EtwpUpdateEnableMask @ 0x14083658C (EtwpUpdateEnableMask.c)
 *     EtwpAddRegEntryToGroup @ 0x140839260 (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterUMProvider @ 0x14083C6F0 (EtwpRegisterUMProvider.c)
 *     EtwpTrackProviderRegistration @ 0x14083DAD0 (EtwpTrackProviderRegistration.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x140926E6C (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140926F50 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14095E9DC (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x140A440A4 (EtwSetPerformanceTraceInformation.c)
 *     EtwpSetSoftRestartInformation @ 0x140A44534 (EtwpSetSoftRestartInformation.c)
 *     EtwpSetProviderBinaryTracking @ 0x140A45A78 (EtwpSetProviderBinaryTracking.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x140A86A08 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpTracingProvEnableCallback @ 0x140AAAD20 (EtwpTracingProvEnableCallback.c)
 *     WmiQueryTraceInformation @ 0x140AD91E0 (WmiQueryTraceInformation.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140AE8A70 (EtwpEventTracingCounterSetCallback.c)
 *     EtwpEnableBootLoggerRegistryProviders @ 0x140C3E488 (EtwpEnableBootLoggerRegistryProviders.c)
 *     EtwpFixBootLoggers @ 0x140C3E598 (EtwpFixBootLoggers.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140259600 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeReleaseMutex @ 0x1403379B0 (KeReleaseMutex.c)
 */

void __fastcall EtwpReleaseLoggerContext(unsigned int *a1, char a2)
{
  if ( a2 )
    KeReleaseMutex((PRKMUTEX)(a1 + 158), 0);
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a1 + 170) + 704LL) + 8LL * *a1),
    1u);
}
