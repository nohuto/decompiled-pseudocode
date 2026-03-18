/*
 * XREFs of ExReleaseRundownProtectionCacheAwareEx @ 0x140259600
 * Callers:
 *     EtwpLogKernelEvent @ 0x140257180 (EtwpLogKernelEvent.c)
 *     EtwpTraceMessageVa @ 0x140326900 (EtwpTraceMessageVa.c)
 *     EtwpLogSystemEventUnsafe @ 0x1403274F0 (EtwpLogSystemEventUnsafe.c)
 *     EtwpEventWriteFull @ 0x140328590 (EtwpEventWriteFull.c)
 *     EtwpFailLogging @ 0x14032A9F0 (EtwpFailLogging.c)
 *     EtwTraceEvent @ 0x140346CD0 (EtwTraceEvent.c)
 *     EtwpCloseLogger @ 0x140347D90 (EtwpCloseLogger.c)
 *     EtwpOpenLogger @ 0x140347F50 (EtwpOpenLogger.c)
 *     EtwpApcPoolDpc @ 0x1403ED0C0 (EtwpApcPoolDpc.c)
 *     EtwpApcPoolThunk @ 0x1403ED870 (EtwpApcPoolThunk.c)
 *     EtwpQueueApc @ 0x1403EE2B0 (EtwpQueueApc.c)
 *     EtwpFinalizePendingApc @ 0x140441FD8 (EtwpFinalizePendingApc.c)
 *     RawEndOperation @ 0x1404838BC (RawEndOperation.c)
 *     EtwpCCSwapTrace @ 0x1404EF7D0 (EtwpCCSwapTrace.c)
 *     EtwpCompressionProc @ 0x1406511B0 (EtwpCompressionProc.c)
 *     EtwInitialize @ 0x1407A6460 (EtwInitialize.c)
 *     EtwpLookupLoggerIdByName @ 0x140830720 (EtwpLookupLoggerIdByName.c)
 *     EtwpStartLogger @ 0x140831694 (EtwpStartLogger.c)
 *     EtwpStopTrace @ 0x1408325A4 (EtwpStopTrace.c)
 *     EtwpFlushTrace @ 0x140833B94 (EtwpFlushTrace.c)
 *     EtwpQueryTrace @ 0x1408347C0 (EtwpQueryTrace.c)
 *     NtTraceControl @ 0x140834A80 (NtTraceControl.c)
 *     EtwpGetTraceGuidInfo @ 0x1408356A0 (EtwpGetTraceGuidInfo.c)
 *     EtwpUpdateEnableMask @ 0x14083658C (EtwpUpdateEnableMask.c)
 *     EtwpAddRegEntryToGroup @ 0x140839260 (EtwpAddRegEntryToGroup.c)
 *     EtwpEnableGuid @ 0x14083B040 (EtwpEnableGuid.c)
 *     EtwpRegisterUMProvider @ 0x14083C6F0 (EtwpRegisterUMProvider.c)
 *     EtwpTrackProviderRegistration @ 0x14083DAD0 (EtwpTrackProviderRegistration.c)
 *     EtwpWriteUserEvent @ 0x140920F90 (EtwpWriteUserEvent.c)
 *     EtwpAcquireLoggerContext @ 0x140926CDC (EtwpAcquireLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x140926E6C (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140926F50 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x14095D644 (EtwpReleaseLoggerContext.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14095E9DC (EtwQueryPerformanceTraceInformation.c)
 *     EtwpFreeLoggerContext @ 0x1409D77E0 (EtwpFreeLoggerContext.c)
 *     EtwpUpdateDisallowList @ 0x1409F5CCC (EtwpUpdateDisallowList.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x140A15CC0 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwSetPerformanceTraceInformation @ 0x140A440A4 (EtwSetPerformanceTraceInformation.c)
 *     WdipSemGetLoggerIds @ 0x140A48AF4 (WdipSemGetLoggerIds.c)
 *     EtwpRealtimeConnect @ 0x140A5EC30 (EtwpRealtimeConnect.c)
 *     AddDecodeGuidToSessions @ 0x140A6206C (AddDecodeGuidToSessions.c)
 *     EtwpGetDisallowList @ 0x140A65D64 (EtwpGetDisallowList.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x140A8A394 (EtwQueryTraceHandleByLoggerName.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
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
