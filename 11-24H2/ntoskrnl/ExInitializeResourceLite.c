/*
 * XREFs of ExInitializeResourceLite @ 0x1403EAC90
 * Callers:
 *     FsRtlInitializeDedupChange @ 0x14070A710 (FsRtlInitializeDedupChange.c)
 *     FsRtlInitializeTieringHeat @ 0x14070B248 (FsRtlInitializeTieringHeat.c)
 *     IopInitializeBootLogging @ 0x14070FFB8 (IopInitializeBootLogging.c)
 *     PiPnpRtlInit @ 0x1407247D4 (PiPnpRtlInit.c)
 *     PiDmObjectManagerInit @ 0x140724C78 (PiDmObjectManagerInit.c)
 *     PiDqObjectManagerInit @ 0x140726148 (PiDqObjectManagerInit.c)
 *     PiDrvDbCreateNode @ 0x1407347DC (PiDrvDbCreateNode.c)
 *     PfSnPrefetchCacheCtxInitialize @ 0x140745A38 (PfSnPrefetchCacheCtxInitialize.c)
 *     TtmInit @ 0x140769D40 (TtmInit.c)
 *     TtmiInitTerminals @ 0x14076FA00 (TtmiInitTerminals.c)
 *     TtmiCreateEventQueue @ 0x1407709D4 (TtmiCreateEventQueue.c)
 *     AdtpObjsInitialize @ 0x140811BF8 (AdtpObjsInitialize.c)
 *     _PnpCtxOpenMachine @ 0x140817DD0 (_PnpCtxOpenMachine.c)
 *     DrvDbOpenContext @ 0x140823D90 (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x140824140 (DrvDbCreateDatabaseNode.c)
 *     SepDuplicateToken @ 0x1408527E0 (SepDuplicateToken.c)
 *     NtCreateJobObject @ 0x14085C390 (NtCreateJobObject.c)
 *     MUIInitializeResourceLock @ 0x1408F80F8 (MUIInitializeResourceLock.c)
 *     SepFilterToken @ 0x140985C1C (SepFilterToken.c)
 *     PnpInitializeNotifyEntry @ 0x1409EB17C (PnpInitializeNotifyEntry.c)
 *     CmpInitCmRM @ 0x140AE6674 (CmpInitCmRM.c)
 * Callees:
 *     ExpAddResourceToSystemResourceList @ 0x1403EAD8C (ExpAddResourceToSystemResourceList.c)
 *     RtlStdLogStackTrace @ 0x1404850C0 (RtlStdLogStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x14048514C (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlStdReleaseStackTrace @ 0x140485220 (RtlStdReleaseStackTrace.c)
 *     PerfLogExecutiveResourceInitialize @ 0x14064E868 (PerfLogExecutiveResourceInitialize.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

NTSTATUS __stdcall ExInitializeResourceLite(PERESOURCE Resource)
{
  ULONG_PTR v2; // rbx
  KSPIN_LOCK *v4; // rsi
  __int64 v5; // r14
  int RecordedStackTraceIndex; // ebp

  memset_0(Resource, 0, sizeof(struct _ERESOURCE));
  Resource->SystemResourcesList.Blink = &Resource->SystemResourcesList;
  Resource->SystemResourcesList.Flink = &Resource->SystemResourcesList;
  v2 = 0LL;
  Resource->SharedWaiters = 0LL;
  Resource->ExclusiveWaiters = 0LL;
  Resource->SpinLock = 0LL;
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v4 = RtlpStackTraceDatabase;
    if ( RtlpStackTraceDatabase )
    {
      v5 = RtlStdLogStackTrace(RtlpStackTraceDatabase);
      if ( v5 )
      {
        RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(v4);
        if ( !RecordedStackTraceIndex )
          RtlStdReleaseStackTrace(v4, v5);
      }
      else
      {
        LOWORD(RecordedStackTraceIndex) = 0;
      }
      LOWORD(v2) = RecordedStackTraceIndex;
    }
    v2 = (unsigned __int16)v2;
  }
  Resource->CreatorBackTraceIndex = v2;
  HIDWORD(Resource->Reserved2) = -1;
  ExpAddResourceToSystemResourceList(Resource);
  __incgsdword(0x9058u);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65544LL, Resource, 0LL, 0LL);
  return 0;
}
