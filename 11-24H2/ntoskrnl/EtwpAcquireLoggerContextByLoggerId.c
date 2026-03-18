/*
 * XREFs of EtwpAcquireLoggerContextByLoggerId @ 0x140926F50
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x14048EBF0 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpGetPmcSessions @ 0x14064CAA8 (EtwpGetPmcSessions.c)
 *     EtwpGetCompressionSettings @ 0x1406514B0 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x14065173C (EtwpSetCompressionSettings.c)
 *     EtwShutdown @ 0x1407A67D0 (EtwShutdown.c)
 *     EtwpQueryReferenceTime @ 0x1407AAA20 (EtwpQueryReferenceTime.c)
 *     EtwRegisterEventCallback @ 0x1407ACEB0 (EtwRegisterEventCallback.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1407AD74C (EtwpUpdatePeriodicCaptureState.c)
 *     EtwpGetSoftRestartInformation @ 0x1407AF770 (EtwpGetSoftRestartInformation.c)
 *     EtwpKsrCallback @ 0x1407AF910 (EtwpKsrCallback.c)
 *     EtwpLookupLoggerIdByName @ 0x140830720 (EtwpLookupLoggerIdByName.c)
 *     EtwpStartLogger @ 0x140831694 (EtwpStartLogger.c)
 *     EtwpTrackProviderBinary @ 0x1408338BC (EtwpTrackProviderBinary.c)
 *     NtTraceControl @ 0x140834A80 (NtTraceControl.c)
 *     EtwpGetTraceGuidInfo @ 0x1408356A0 (EtwpGetTraceGuidInfo.c)
 *     EtwpValidateEnableNotification @ 0x1408381B0 (EtwpValidateEnableNotification.c)
 *     EtwpAddRegEntryToGroup @ 0x140839260 (EtwpAddRegEntryToGroup.c)
 *     EtwpTrackProviderRegistration @ 0x14083DAD0 (EtwpTrackProviderRegistration.c)
 *     EtwpAcquireLoggerContext @ 0x140926CDC (EtwpAcquireLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x140926E6C (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14095E9DC (EtwQueryPerformanceTraceInformation.c)
 *     EtwpUpdateDisallowList @ 0x1409F5CCC (EtwpUpdateDisallowList.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x140A15CC0 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwSetPerformanceTraceInformation @ 0x140A440A4 (EtwSetPerformanceTraceInformation.c)
 *     EtwpSetSoftRestartInformation @ 0x140A44534 (EtwpSetSoftRestartInformation.c)
 *     EtwpSetProviderBinaryTracking @ 0x140A45A78 (EtwpSetProviderBinaryTracking.c)
 *     EtwpRealtimeConnect @ 0x140A5EC30 (EtwpRealtimeConnect.c)
 *     AddDecodeGuidToSessions @ 0x140A6206C (AddDecodeGuidToSessions.c)
 *     EtwpGetDisallowList @ 0x140A65D64 (EtwpGetDisallowList.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x140A86A08 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpTracingProvEnableCallback @ 0x140AAAD20 (EtwpTracingProvEnableCallback.c)
 *     WmiQueryTraceInformation @ 0x140AD91E0 (WmiQueryTraceInformation.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140AE8A70 (EtwpEventTracingCounterSetCallback.c)
 *     EtwpFixBootLoggers @ 0x140C3E598 (EtwpFixBootLoggers.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140259600 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x14040CCA0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpReleaseLoggerContext @ 0x14095D644 (EtwpReleaseLoggerContext.c)
 */

__int64 __fastcall EtwpAcquireLoggerContextByLoggerId(__int64 a1, unsigned int a2, unsigned __int8 a3)
{
  __int64 v7; // rsi
  __int64 v8; // rdi

  if ( a2 >= *(_DWORD *)(a1 + 16) || (*(_QWORD *)(*(_QWORD *)(a1 + 712) + 8LL * a2) & 1) != 0 )
    return 0LL;
  v7 = 8LL * a2;
  if ( ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 704) + v7), 1u) )
  {
    if ( a2 >= *(_DWORD *)(a1 + 16) || (_mm_lfence(), v8 = *(_QWORD *)(v7 + *(_QWORD *)(a1 + 712)), (v8 & 1) != 0) )
    {
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 704) + v7), 1u);
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
