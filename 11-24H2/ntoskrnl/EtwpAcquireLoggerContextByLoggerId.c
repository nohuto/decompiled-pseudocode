/*
 * XREFs of EtwpAcquireLoggerContextByLoggerId @ 0x140929090
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x140489020 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpGetPmcSessions @ 0x14064B0B8 (EtwpGetPmcSessions.c)
 *     EtwpGetCompressionSettings @ 0x14064FBB0 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x14064FE3C (EtwpSetCompressionSettings.c)
 *     EtwShutdown @ 0x1407A6910 (EtwShutdown.c)
 *     EtwpTrackProviderBinaryKm @ 0x1407AA9F0 (EtwpTrackProviderBinaryKm.c)
 *     EtwpTrackProviderBinaryOld @ 0x1407AAC88 (EtwpTrackProviderBinaryOld.c)
 *     EtwRegisterEventCallback @ 0x1407AD380 (EtwRegisterEventCallback.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1407ADBA0 (EtwpUpdatePeriodicCaptureState.c)
 *     EtwpGetSoftRestartInformation @ 0x1407AFBC0 (EtwpGetSoftRestartInformation.c)
 *     EtwpKsrCallback @ 0x1407AFD60 (EtwpKsrCallback.c)
 *     EtwpUpdateDisallowList @ 0x140831B84 (EtwpUpdateDisallowList.c)
 *     EtwpValidateEnableNotification @ 0x1408361F8 (EtwpValidateEnableNotification.c)
 *     EtwpTrackProviderRegistration @ 0x14083A130 (EtwpTrackProviderRegistration.c)
 *     EtwpAcquireLoggerContext @ 0x140928E1C (EtwpAcquireLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x140928FAC (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14094649C (EtwQueryPerformanceTraceInformation.c)
 *     EtwpLookupLoggerIdByName @ 0x1409CFB04 (EtwpLookupLoggerIdByName.c)
 *     EtwpStartLogger @ 0x1409D017C (EtwpStartLogger.c)
 *     EtwpGetTraceGuidInfo @ 0x1409DD060 (EtwpGetTraceGuidInfo.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x140A0EEA0 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwSetPerformanceTraceInformation @ 0x140A39934 (EtwSetPerformanceTraceInformation.c)
 *     EtwpSetSoftRestartInformation @ 0x140A39DC4 (EtwpSetSoftRestartInformation.c)
 *     EtwpRealtimeConnect @ 0x140A56DA8 (EtwpRealtimeConnect.c)
 *     AddDecodeGuidToSessions @ 0x140A5A96C (AddDecodeGuidToSessions.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x140A814E0 (EtwpRealtimeDisconnectConsumer.c)
 *     NtTraceControl @ 0x140A82250 (NtTraceControl.c)
 *     EtwpTracingProvEnableCallback @ 0x140AA5F50 (EtwpTracingProvEnableCallback.c)
 *     EtwpAddRegEntryToGroup @ 0x140AD9390 (EtwpAddRegEntryToGroup.c)
 *     WmiQueryTraceInformation @ 0x140ADA530 (WmiQueryTraceInformation.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140AEBCE0 (EtwpEventTracingCounterSetCallback.c)
 *     EtwpFixBootLoggers @ 0x140C406E8 (EtwpFixBootLoggers.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140289C10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140405330 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpReleaseLoggerContext @ 0x140945104 (EtwpReleaseLoggerContext.c)
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
