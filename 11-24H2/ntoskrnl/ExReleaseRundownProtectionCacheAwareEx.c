/*
 * XREFs of ExReleaseRundownProtectionCacheAwareEx @ 0x140289C10
 * Callers:
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 *     EtwpTraceMessageVa @ 0x1402CF490 (EtwpTraceMessageVa.c)
 *     EtwpLogSystemEventUnsafe @ 0x1402D0080 (EtwpLogSystemEventUnsafe.c)
 *     EtwTraceEvent @ 0x140325740 (EtwTraceEvent.c)
 *     EtwpCloseLogger @ 0x140326790 (EtwpCloseLogger.c)
 *     EtwpOpenLogger @ 0x140326950 (EtwpOpenLogger.c)
 *     EtwpEventWriteFull @ 0x140326D30 (EtwpEventWriteFull.c)
 *     EtwpApcPoolDpc @ 0x1403DD090 (EtwpApcPoolDpc.c)
 *     EtwpApcPoolThunk @ 0x1403DD840 (EtwpApcPoolThunk.c)
 *     EtwpQueueApc @ 0x1403DE1A0 (EtwpQueueApc.c)
 *     EtwpFailLogging @ 0x1403FABA0 (EtwpFailLogging.c)
 *     EtwpFinalizePendingApc @ 0x140438BA8 (EtwpFinalizePendingApc.c)
 *     RawEndOperation @ 0x14047ED8C (RawEndOperation.c)
 *     EtwpCCSwapTrace @ 0x1404ED100 (EtwpCCSwapTrace.c)
 *     EtwpCompressionProc @ 0x14064F8B0 (EtwpCompressionProc.c)
 *     EtwInitialize @ 0x1407A65A0 (EtwInitialize.c)
 *     EtwpUpdateDisallowList @ 0x140831B84 (EtwpUpdateDisallowList.c)
 *     EtwpQueryTrace @ 0x1408360C0 (EtwpQueryTrace.c)
 *     EtwpUpdateEnableMask @ 0x14083745C (EtwpUpdateEnableMask.c)
 *     EtwpRegisterUMProvider @ 0x140838D50 (EtwpRegisterUMProvider.c)
 *     EtwpTrackProviderRegistration @ 0x14083A130 (EtwpTrackProviderRegistration.c)
 *     EtwpAcquireLoggerContext @ 0x140928E1C (EtwpAcquireLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x140928FAC (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140929090 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x140945104 (EtwpReleaseLoggerContext.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14094649C (EtwQueryPerformanceTraceInformation.c)
 *     EtwpLookupLoggerIdByName @ 0x1409CFB04 (EtwpLookupLoggerIdByName.c)
 *     EtwpStartLogger @ 0x1409D017C (EtwpStartLogger.c)
 *     EtwpStopTrace @ 0x1409D2184 (EtwpStopTrace.c)
 *     EtwpFlushTrace @ 0x1409D2420 (EtwpFlushTrace.c)
 *     EtwpGetTraceGuidInfo @ 0x1409DD060 (EtwpGetTraceGuidInfo.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x140A0EEA0 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwSetPerformanceTraceInformation @ 0x140A39934 (EtwSetPerformanceTraceInformation.c)
 *     WdipSemGetLoggerIds @ 0x140A3E8A4 (WdipSemGetLoggerIds.c)
 *     EtwpEnableGuid @ 0x140A3EA20 (EtwpEnableGuid.c)
 *     EtwpFreeLoggerContext @ 0x140A48E90 (EtwpFreeLoggerContext.c)
 *     EtwpRealtimeConnect @ 0x140A56DA8 (EtwpRealtimeConnect.c)
 *     AddDecodeGuidToSessions @ 0x140A5A96C (AddDecodeGuidToSessions.c)
 *     NtTraceControl @ 0x140A82250 (NtTraceControl.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x140A866D8 (EtwQueryTraceHandleByLoggerName.c)
 *     EtwpWriteUserEvent @ 0x140AD78A0 (EtwpWriteUserEvent.c)
 *     EtwpAddRegEntryToGroup @ 0x140AD9390 (EtwpAddRegEntryToGroup.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 */

void __stdcall ExReleaseRundownProtectionCacheAwareEx(PEX_RUNDOWN_REF_CACHE_AWARE RunRef, ULONG Count)
{
  _EX_RUNDOWN_REF *RunRefs; // r9
  signed __int64 v4; // rcx
  unsigned __int64 v5; // rcx

  RunRefs = (_EX_RUNDOWN_REF *)((char *)RunRef->RunRefs + RunRef->RunRefSize
                                                        * (KeGetPcr()->Prcb.Number % RunRef->Number));
  _m_prefetchw(RunRefs);
  while ( 1 )
  {
    while ( 1 )
    {
      v4 = RunRefs->Count;
      if ( (RunRefs->Count & 1) != 0 )
        break;
      if ( v4 == _InterlockedCompareExchange64((volatile signed __int64 *)RunRefs, v4 - 2 * Count, v4) )
        return;
    }
    if ( v4 != 1 )
      break;
    RunRefs = RunRef->RunRefs;
  }
  v5 = v4 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v5, -Count) == Count )
    KeSetEvent((PRKEVENT)(v5 + 8), 0, 0);
}
