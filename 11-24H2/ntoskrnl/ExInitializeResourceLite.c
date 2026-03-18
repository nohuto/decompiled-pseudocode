/*
 * XREFs of ExInitializeResourceLite @ 0x1403655E0
 * Callers:
 *     FsRtlInitializeDedupChange @ 0x14070CB70 (FsRtlInitializeDedupChange.c)
 *     FsRtlInitializeTieringHeat @ 0x14070D6A8 (FsRtlInitializeTieringHeat.c)
 *     IopInitializeBootLogging @ 0x140712428 (IopInitializeBootLogging.c)
 *     PiPnpRtlInit @ 0x140726C44 (PiPnpRtlInit.c)
 *     PiDmObjectManagerInit @ 0x1407270E8 (PiDmObjectManagerInit.c)
 *     PiDqObjectManagerInit @ 0x1407285B8 (PiDqObjectManagerInit.c)
 *     PiDrvDbCreateNode @ 0x1407368AC (PiDrvDbCreateNode.c)
 *     PfSnPrefetchCacheCtxInitialize @ 0x140747748 (PfSnPrefetchCacheCtxInitialize.c)
 *     TtmInit @ 0x140769B20 (TtmInit.c)
 *     TtmiInitTerminals @ 0x14076F7E0 (TtmiInitTerminals.c)
 *     TtmiCreateEventQueue @ 0x1407707B4 (TtmiCreateEventQueue.c)
 *     AdtpObjsInitialize @ 0x1408114B8 (AdtpObjsInitialize.c)
 *     _PnpCtxOpenMachine @ 0x140817690 (_PnpCtxOpenMachine.c)
 *     DrvDbOpenContext @ 0x140823650 (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x140823A00 (DrvDbCreateDatabaseNode.c)
 *     SepDuplicateToken @ 0x140856520 (SepDuplicateToken.c)
 *     NtCreateJobObject @ 0x1408EAB60 (NtCreateJobObject.c)
 *     PnpInitializeNotifyEntry @ 0x1409ED73C (PnpInitializeNotifyEntry.c)
 *     MUIInitializeResourceLock @ 0x140A21948 (MUIInitializeResourceLock.c)
 *     SepFilterToken @ 0x140AD2664 (SepFilterToken.c)
 *     CmpInitCmRM @ 0x140AE4D94 (CmpInitCmRM.c)
 * Callees:
 *     ExpAddResourceToSystemResourceList @ 0x1403656DC (ExpAddResourceToSystemResourceList.c)
 *     RtlStdLogStackTrace @ 0x14048A298 (RtlStdLogStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x14048A324 (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlStdReleaseStackTrace @ 0x14048A3F8 (RtlStdReleaseStackTrace.c)
 *     PerfLogExecutiveResourceInitialize @ 0x140650228 (PerfLogExecutiveResourceInitialize.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
