/*
 * XREFs of EtwpReleaseLoggerContext @ 0x140945104
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x140489020 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpGetPmcSessions @ 0x14064B0B8 (EtwpGetPmcSessions.c)
 *     EtwpTransitionToRealtime @ 0x14064DB08 (EtwpTransitionToRealtime.c)
 *     EtwpGetCompressionSettings @ 0x14064FBB0 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x14064FE3C (EtwpSetCompressionSettings.c)
 *     EtwShutdown @ 0x1407A6910 (EtwShutdown.c)
 *     EtwpTrackProviderBinaryKm @ 0x1407AA9F0 (EtwpTrackProviderBinaryKm.c)
 *     EtwpTrackProviderBinaryOld @ 0x1407AAC88 (EtwpTrackProviderBinaryOld.c)
 *     EtwRegisterEventCallback @ 0x1407AD380 (EtwRegisterEventCallback.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1407ADBA0 (EtwpUpdatePeriodicCaptureState.c)
 *     SendCaptureStateNotificationsWorker @ 0x1407ADE80 (SendCaptureStateNotificationsWorker.c)
 *     EtwpGetSoftRestartInformation @ 0x1407AFBC0 (EtwpGetSoftRestartInformation.c)
 *     EtwpKsrCallback @ 0x1407AFD60 (EtwpKsrCallback.c)
 *     EtwpUpdateEnableMask @ 0x14083745C (EtwpUpdateEnableMask.c)
 *     EtwpRegisterUMProvider @ 0x140838D50 (EtwpRegisterUMProvider.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x140928FAC (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140929090 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14094649C (EtwQueryPerformanceTraceInformation.c)
 *     EtwpLookupLoggerIdByName @ 0x1409CFB04 (EtwpLookupLoggerIdByName.c)
 *     EtwpStartLogger @ 0x1409D017C (EtwpStartLogger.c)
 *     EtwpStopTrace @ 0x1409D2184 (EtwpStopTrace.c)
 *     EtwSetPerformanceTraceInformation @ 0x140A39934 (EtwSetPerformanceTraceInformation.c)
 *     EtwpSetSoftRestartInformation @ 0x140A39DC4 (EtwpSetSoftRestartInformation.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x140A814E0 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpTracingProvEnableCallback @ 0x140AA5F50 (EtwpTracingProvEnableCallback.c)
 *     EtwpUpdateTrace @ 0x140ADA038 (EtwpUpdateTrace.c)
 *     WmiQueryTraceInformation @ 0x140ADA530 (WmiQueryTraceInformation.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140AEBCE0 (EtwpEventTracingCounterSetCallback.c)
 *     EtwpEnableBootLoggerRegistryProviders @ 0x140C405D8 (EtwpEnableBootLoggerRegistryProviders.c)
 *     EtwpFixBootLoggers @ 0x140C406E8 (EtwpFixBootLoggers.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140289C10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeReleaseMutex @ 0x1402DEA60 (KeReleaseMutex.c)
 */

void __fastcall EtwpReleaseLoggerContext(unsigned int *a1, char a2)
{
  if ( a2 )
    KeReleaseMutex((PRKMUTEX)(a1 + 158), 0);
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a1 + 170) + 704LL) + 8LL * *a1),
    1u);
}
