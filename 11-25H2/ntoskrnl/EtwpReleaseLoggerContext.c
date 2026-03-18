/*
 * XREFs of EtwpReleaseLoggerContext @ 0x1409FF024
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x14048F0C0 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpGetPmcSessions @ 0x140640A88 (EtwpGetPmcSessions.c)
 *     EtwpTransitionToRealtime @ 0x140643468 (EtwpTransitionToRealtime.c)
 *     EtwpGetCompressionSettings @ 0x1406454B0 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x14064573C (EtwpSetCompressionSettings.c)
 *     EtwShutdown @ 0x140797400 (EtwShutdown.c)
 *     EtwpIncrementTraceFile @ 0x14079B570 (EtwpIncrementTraceFile.c)
 *     EtwpQueryReferenceTime @ 0x14079B650 (EtwpQueryReferenceTime.c)
 *     EtwRegisterEventCallback @ 0x14079DAE0 (EtwRegisterEventCallback.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x14079E37C (EtwpUpdatePeriodicCaptureState.c)
 *     SendCaptureStateNotificationsWorker @ 0x14079E660 (SendCaptureStateNotificationsWorker.c)
 *     EtwpGetSoftRestartInformation @ 0x1407A03A0 (EtwpGetSoftRestartInformation.c)
 *     EtwpKsrCallback @ 0x1407A0540 (EtwpKsrCallback.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14082425C (EtwQueryPerformanceTraceInformation.c)
 *     EtwpStopTrace @ 0x140892F28 (EtwpStopTrace.c)
 *     EtwpUpdateTrace @ 0x140893BB4 (EtwpUpdateTrace.c)
 *     EtwpTrackProviderBinary @ 0x140894358 (EtwpTrackProviderBinary.c)
 *     EtwpUpdateEnableMask @ 0x140896F0C (EtwpUpdateEnableMask.c)
 *     EtwpAddRegEntryToGroup @ 0x140899D60 (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterUMProvider @ 0x14089D2F0 (EtwpRegisterUMProvider.c)
 *     EtwpTrackProviderRegistration @ 0x14089E6D0 (EtwpTrackProviderRegistration.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1409327CC (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1409328B0 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpSetProviderBinaryTracking @ 0x1409FEC84 (EtwpSetProviderBinaryTracking.c)
 *     EtwpStartLogger @ 0x140A374DC (EtwpStartLogger.c)
 *     EtwpLookupLoggerIdByName @ 0x140A38E44 (EtwpLookupLoggerIdByName.c)
 *     EtwSetPerformanceTraceInformation @ 0x140A3F778 (EtwSetPerformanceTraceInformation.c)
 *     EtwpSetSoftRestartInformation @ 0x140A3FC08 (EtwpSetSoftRestartInformation.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x140A913FC (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpTracingProvEnableCallback @ 0x140AA5760 (EtwpTracingProvEnableCallback.c)
 *     WmiQueryTraceInformation @ 0x140ACE5F0 (WmiQueryTraceInformation.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140AD6740 (EtwpEventTracingCounterSetCallback.c)
 *     EtwpEnableBootLoggerRegistryProviders @ 0x140C2D1AC (EtwpEnableBootLoggerRegistryProviders.c)
 *     EtwpFixBootLoggers @ 0x140C2D2BC (EtwpFixBootLoggers.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402F0970 (KeReleaseMutex.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x14030BEC0 (ExReleaseRundownProtectionCacheAwareEx.c)
 */

void __fastcall EtwpReleaseLoggerContext(unsigned int *a1, char a2)
{
  if ( a2 )
    KeReleaseMutex((PRKMUTEX)(a1 + 158), 0);
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a1 + 170) + 448LL) + 8LL * *a1),
    1u);
}
