/*
 * XREFs of EtwpAcquireLoggerContextByLoggerId @ 0x1409328B0
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x14048F0C0 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpGetPmcSessions @ 0x140640A88 (EtwpGetPmcSessions.c)
 *     EtwpGetCompressionSettings @ 0x1406454B0 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x14064573C (EtwpSetCompressionSettings.c)
 *     EtwShutdown @ 0x140797400 (EtwShutdown.c)
 *     EtwpQueryReferenceTime @ 0x14079B650 (EtwpQueryReferenceTime.c)
 *     EtwRegisterEventCallback @ 0x14079DAE0 (EtwRegisterEventCallback.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x14079E37C (EtwpUpdatePeriodicCaptureState.c)
 *     EtwpGetSoftRestartInformation @ 0x1407A03A0 (EtwpGetSoftRestartInformation.c)
 *     EtwpKsrCallback @ 0x1407A0540 (EtwpKsrCallback.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14082425C (EtwQueryPerformanceTraceInformation.c)
 *     EtwpTrackProviderBinary @ 0x140894358 (EtwpTrackProviderBinary.c)
 *     NtTraceControl @ 0x140895400 (NtTraceControl.c)
 *     EtwpGetTraceGuidInfo @ 0x140896060 (EtwpGetTraceGuidInfo.c)
 *     EtwpValidateEnableNotification @ 0x140898C50 (EtwpValidateEnableNotification.c)
 *     EtwpAddRegEntryToGroup @ 0x140899D60 (EtwpAddRegEntryToGroup.c)
 *     EtwpTrackProviderRegistration @ 0x14089E6D0 (EtwpTrackProviderRegistration.c)
 *     EtwpAcquireLoggerContext @ 0x14093263C (EtwpAcquireLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1409327CC (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpUpdateDisallowList @ 0x1409EE900 (EtwpUpdateDisallowList.c)
 *     AddDecodeGuidToSessions @ 0x1409EF43C (AddDecodeGuidToSessions.c)
 *     EtwpSetProviderBinaryTracking @ 0x1409FEC84 (EtwpSetProviderBinaryTracking.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x140A118E4 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpStartLogger @ 0x140A374DC (EtwpStartLogger.c)
 *     EtwpLookupLoggerIdByName @ 0x140A38E44 (EtwpLookupLoggerIdByName.c)
 *     EtwSetPerformanceTraceInformation @ 0x140A3F778 (EtwSetPerformanceTraceInformation.c)
 *     EtwpSetSoftRestartInformation @ 0x140A3FC08 (EtwpSetSoftRestartInformation.c)
 *     EtwpRealtimeConnect @ 0x140A5E498 (EtwpRealtimeConnect.c)
 *     EtwpGetDisallowList @ 0x140A64BF8 (EtwpGetDisallowList.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x140A913FC (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpTracingProvEnableCallback @ 0x140AA5760 (EtwpTracingProvEnableCallback.c)
 *     WmiQueryTraceInformation @ 0x140ACE5F0 (WmiQueryTraceInformation.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140AD6740 (EtwpEventTracingCounterSetCallback.c)
 *     EtwpFixBootLoggers @ 0x140C2D2BC (EtwpFixBootLoggers.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x14030BEC0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140405F50 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpReleaseLoggerContext @ 0x1409FF024 (EtwpReleaseLoggerContext.c)
 */

__int64 __fastcall EtwpAcquireLoggerContextByLoggerId(__int64 a1, unsigned int a2, unsigned __int8 a3)
{
  __int64 v7; // rsi
  __int64 v8; // rdi

  if ( a2 >= *(_DWORD *)(a1 + 16) || (*(_QWORD *)(*(_QWORD *)(a1 + 456) + 8LL * a2) & 1) != 0 )
    return 0LL;
  v7 = 8LL * a2;
  if ( ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 448) + v7), 1u) )
  {
    if ( a2 >= *(_DWORD *)(a1 + 16) || (_mm_lfence(), v8 = *(_QWORD *)(v7 + *(_QWORD *)(a1 + 456)), (v8 & 1) != 0) )
    {
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 448) + v7), 1u);
    }
    else
    {
      if ( a3 )
        KeWaitForSingleObject((PVOID)(v8 + 632), Executive, 0, 0, 0LL);
      if ( *(_DWORD *)(v8 + 320) )
        return v8;
      EtwpReleaseLoggerContext(v8, a3);
    }
  }
  return 0LL;
}
