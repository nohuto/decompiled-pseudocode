/*
 * XREFs of ExReleaseRundownProtectionCacheAwareEx @ 0x14030BEC0
 * Callers:
 *     EtwpLogKernelEvent @ 0x1402561B0 (EtwpLogKernelEvent.c)
 *     EtwpOpenLogger @ 0x140257A00 (EtwpOpenLogger.c)
 *     EtwpApcPoolThunk @ 0x14030A360 (EtwpApcPoolThunk.c)
 *     EtwpTraceMessageVa @ 0x14030B270 (EtwpTraceMessageVa.c)
 *     EtwpCloseLogger @ 0x14030BE80 (EtwpCloseLogger.c)
 *     EtwpLogSystemEventUnsafe @ 0x14030BF40 (EtwpLogSystemEventUnsafe.c)
 *     EtwpFinalizePendingApc @ 0x14030CD94 (EtwpFinalizePendingApc.c)
 *     EtwpEventWriteFull @ 0x14030D050 (EtwpEventWriteFull.c)
 *     EtwTraceEvent @ 0x14030FA90 (EtwTraceEvent.c)
 *     EtwpFailLogging @ 0x1403F83E0 (EtwpFailLogging.c)
 *     EtwpApcPoolDpc @ 0x140430850 (EtwpApcPoolDpc.c)
 *     EtwpQueueApc @ 0x1404309F0 (EtwpQueueApc.c)
 *     RawEndOperation @ 0x140482C5C (RawEndOperation.c)
 *     EtwpCCSwapTrace @ 0x1404EC190 (EtwpCCSwapTrace.c)
 *     EtwpCompressionProc @ 0x1406451B0 (EtwpCompressionProc.c)
 *     EtwInitialize @ 0x140797090 (EtwInitialize.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14082425C (EtwQueryPerformanceTraceInformation.c)
 *     EtwpStopTrace @ 0x140892F28 (EtwpStopTrace.c)
 *     EtwpFlushTrace @ 0x140894628 (EtwpFlushTrace.c)
 *     EtwpQueryTrace @ 0x140895150 (EtwpQueryTrace.c)
 *     NtTraceControl @ 0x140895400 (NtTraceControl.c)
 *     EtwpGetTraceGuidInfo @ 0x140896060 (EtwpGetTraceGuidInfo.c)
 *     EtwpUpdateEnableMask @ 0x140896F0C (EtwpUpdateEnableMask.c)
 *     EtwpAddRegEntryToGroup @ 0x140899D60 (EtwpAddRegEntryToGroup.c)
 *     EtwpEnableGuid @ 0x14089BB2C (EtwpEnableGuid.c)
 *     EtwpRegisterUMProvider @ 0x14089D2F0 (EtwpRegisterUMProvider.c)
 *     EtwpTrackProviderRegistration @ 0x14089E6D0 (EtwpTrackProviderRegistration.c)
 *     EtwpWriteUserEvent @ 0x1409245D0 (EtwpWriteUserEvent.c)
 *     EtwpAcquireLoggerContext @ 0x14093263C (EtwpAcquireLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1409327CC (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1409328B0 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpFreeLoggerContext @ 0x14098EB6C (EtwpFreeLoggerContext.c)
 *     EtwpUpdateDisallowList @ 0x1409EE900 (EtwpUpdateDisallowList.c)
 *     AddDecodeGuidToSessions @ 0x1409EF43C (AddDecodeGuidToSessions.c)
 *     EtwpReleaseLoggerContext @ 0x1409FF024 (EtwpReleaseLoggerContext.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x140A118E4 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpStartLogger @ 0x140A374DC (EtwpStartLogger.c)
 *     EtwpLookupLoggerIdByName @ 0x140A38E44 (EtwpLookupLoggerIdByName.c)
 *     EtwSetPerformanceTraceInformation @ 0x140A3F778 (EtwSetPerformanceTraceInformation.c)
 *     WdipSemGetLoggerIds @ 0x140A43EA4 (WdipSemGetLoggerIds.c)
 *     EtwpRealtimeConnect @ 0x140A5E498 (EtwpRealtimeConnect.c)
 *     EtwpGetDisallowList @ 0x140A64BF8 (EtwpGetDisallowList.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x140A85A14 (EtwQueryTraceHandleByLoggerName.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
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
