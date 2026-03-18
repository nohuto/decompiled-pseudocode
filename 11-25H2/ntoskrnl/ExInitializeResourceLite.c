/*
 * XREFs of ExInitializeResourceLite @ 0x1402D6540
 * Callers:
 *     FsRtlInitializeDedupChange @ 0x140700C90 (FsRtlInitializeDedupChange.c)
 *     FsRtlInitializeTieringHeat @ 0x1407017C8 (FsRtlInitializeTieringHeat.c)
 *     IopInitializeBootLogging @ 0x140706328 (IopInitializeBootLogging.c)
 *     PiPnpRtlInit @ 0x14071ACC4 (PiPnpRtlInit.c)
 *     PiDmObjectManagerInit @ 0x14071B168 (PiDmObjectManagerInit.c)
 *     PiDqObjectManagerInit @ 0x14071C638 (PiDqObjectManagerInit.c)
 *     PiDrvDbCreateNode @ 0x14072A61C (PiDrvDbCreateNode.c)
 *     PfSnPrefetchCacheCtxInitialize @ 0x14073B728 (PfSnPrefetchCacheCtxInitialize.c)
 *     TtmInit @ 0x14075A160 (TtmInit.c)
 *     TtmiInitTerminals @ 0x14075FE20 (TtmiInitTerminals.c)
 *     TtmiCreateEventQueue @ 0x140760DF4 (TtmiCreateEventQueue.c)
 *     AdtpObjsInitialize @ 0x140801948 (AdtpObjsInitialize.c)
 *     _PnpCtxOpenMachine @ 0x140807790 (_PnpCtxOpenMachine.c)
 *     DrvDbOpenContext @ 0x140813828 (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x140813BD8 (DrvDbCreateDatabaseNode.c)
 *     SepDuplicateToken @ 0x1408A2910 (SepDuplicateToken.c)
 *     NtCreateJobObject @ 0x1408DB4B0 (NtCreateJobObject.c)
 *     SepFilterToken @ 0x140997EFC (SepFilterToken.c)
 *     MUIInitializeResourceLock @ 0x140A16C28 (MUIInitializeResourceLock.c)
 *     PnpInitializeNotifyEntry @ 0x140A30D60 (PnpInitializeNotifyEntry.c)
 *     CmpInitCmRM @ 0x140AD3ED8 (CmpInitCmRM.c)
 * Callees:
 *     ExpAddResourceToSystemResourceList @ 0x1402D65D0 (ExpAddResourceToSystemResourceList.c)
 *     RtlStdLogStackTrace @ 0x14048A9EC (RtlStdLogStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x14048AA78 (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlStdReleaseStackTrace @ 0x14048AB4C (RtlStdReleaseStackTrace.c)
 *     PerfLogExecutiveResourceInitialize @ 0x140644218 (PerfLogExecutiveResourceInitialize.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

NTSTATUS __stdcall ExInitializeResourceLite(PERESOURCE Resource)
{
  ULONG_PTR v2; // rdi
  KSPIN_LOCK *v4; // rsi
  __int64 v5; // rbp
  int RecordedStackTraceIndex; // eax

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
        LOWORD(v2) = RecordedStackTraceIndex;
        if ( !RecordedStackTraceIndex )
          RtlStdReleaseStackTrace(v4, v5);
      }
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
