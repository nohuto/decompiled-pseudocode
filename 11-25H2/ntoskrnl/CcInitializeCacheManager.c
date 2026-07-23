/*
 * XREFs of CcInitializeCacheManager @ 0x140C049F8
 * Callers:
 *     Phase1InitializationDiscard @ 0x140BFB048 (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x140C4E7F4 (Phase1InitializationIoReady.c)
 * Callees:
 *     ExGenRandom @ 0x14041CDD0 (ExGenRandom.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x140460B30 (ExInitializeNPagedLookasideListInternal.c)
 *     ExInitializeLookasideListExInternal @ 0x140460CA0 (ExInitializeLookasideListExInternal.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     CcCreatePartition @ 0x140579350 (CcCreatePartition.c)
 *     CcInitPerVolumeParameters @ 0x14057A458 (CcInitPerVolumeParameters.c)
 *     CcInitializeProcessor @ 0x1406FAC40 (CcInitializeProcessor.c)
 *     PoRegisterCoalescingCallback @ 0x140744CF0 (PoRegisterCoalescingCallback.c)
 *     FsRtlIsMobileOS @ 0x140A35B20 (FsRtlIsMobileOS.c)
 *     MmGetNumberOfPhysicalPagesForPartitionObject @ 0x140A97414 (MmGetNumberOfPhysicalPagesForPartitionObject.c)
 *     ExInitializeSystemLookasideList @ 0x140B5F310 (ExInitializeSystemLookasideList.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     CcInitializeTelemetry @ 0x140BCD6B0 (CcInitializeTelemetry.c)
 *     CcInitializeBcbProfiler @ 0x140BCDC74 (CcInitializeBcbProfiler.c)
 *     CcInitializeVacbs @ 0x140C04F58 (CcInitializeVacbs.c)
 */

char __fastcall CcInitializeCacheManager(int a1)
{
  int v2; // esi
  int v3; // eax
  _BYTE *Partition; // rax
  void *Pool2; // rax
  int v11; // ecx
  unsigned int v12; // ebx
  unsigned __int64 NumberOfPhysicalPagesForPartitionObject; // rax
  unsigned __int64 v14; // rdx
  int v15; // ecx
  int v16; // eax

  if ( a1 == 2 )
  {
    CcInitializeTelemetry(2);
    return 1;
  }
  v2 = (unsigned __int8)dword_140FC420C;
  CcMasterLock = 0LL;
  CcChangeSharedCacheMapFileLock = 0LL;
  CcMaxNestingLevel = 2;
  CcMaxAsyncReadWorkerThreads = 100;
  if ( (_BYTE)dword_140FC420C )
  {
    v3 = 500;
  }
  else
  {
    CcMaxAsyncReadWorkerThreads = 50;
    if ( FsRtlIsMobileOS() )
      CcMaxAsyncReadWorkerThreads = 10;
    CcMaxNumberCompleteAsyncReadExWorkItems = 50;
    if ( !FsRtlIsMobileOS() )
      goto LABEL_11;
    v3 = 9;
  }
  CcMaxNumberCompleteAsyncReadExWorkItems = v3;
  if ( !v2 )
  {
LABEL_11:
    CcMaxCachemapUninitWorkerThreads = 4;
    goto LABEL_12;
  }
  CcMaxCachemapUninitWorkerThreads = 8;
LABEL_12:
  CcInitPerVolumeParameters();
  CcInitializeVacbs();
  CcGlobalPartitionLock = 0LL;
  CcNumberNumaNodes = (unsigned __int16)(KeNumberNodes - 1) + 1;
  Partition = CcCreatePartition();
  if ( !Partition )
    KeBugCheckEx(0x34u, 0x402BAuLL, 0LL, 0LL, 0LL);
  CcPartitionCount = 1;
  *((_QWORD *)PspSystemPartition + 1) = Partition;
  CcSystemPartitionDirtyPageStatistics = (__int64)(Partition + 1056);
  CcSystemPartitionDirtyPageThresholds = (__int64)(Partition + 1080);
  _mm_lfence();
  CcInitializeBcbProfiler();
  Pool2 = (void *)ExAllocatePool2(0x40uLL, 8uLL, 0x58637044uLL);
  if ( Pool2 )
  {
    ExFreePoolWithTag(Pool2, 0);
    ExGenRandom(0);
    _RAX = 2147483656LL;
    __asm { cpuid }
  }
  CcBcbTrimNotificationListLock.Count = 1;
  CcBcbTrimNotificationListLock.Owner = 0LL;
  CcBcbTrimNotificationListLock.Contention = 0;
  LOWORD(CcBcbTrimNotificationListLock.Event.Header.Lock) = 1;
  CcIdleDelayTick = 0x989680 / KeMaximumIncrement;
  qword_140F8DFC8 = (__int64)&CcVolumeCacheMapList;
  CcVolumeCacheMapList = (__int64)&CcVolumeCacheMapList;
  CcBcbTrimNotificationListLock.Event.Header.WaitListHead.Blink = &CcBcbTrimNotificationListLock.Event.Header.WaitListHead;
  CcBcbTrimNotificationListLock.Event.Header.WaitListHead.Flink = &CcBcbTrimNotificationListLock.Event.Header.WaitListHead;
  qword_140F8E028 = (__int64)&CcBcbTrimNotificationList;
  CcBcbTrimNotificationList = (__int64)&CcBcbTrimNotificationList;
  CcBcbTrimNotificationListLock.Event.Header.Size = 6;
  CcBcbTrimNotificationListLock.Event.Header.SignalState = 0;
  CcAggressiveZeroThreshold = 4;
  CcMaxLazyWritePages = v2 != 0 ? 2048 : 256;
  CcExtraWBThreadDelay = v2 != 0 ? 5000000 : 10000000;
  if ( (unsigned int)(CcMaxLazyWritePagesOverride - 1) <= 0x7FFF )
    CcMaxLazyWritePages = CcMaxLazyWritePagesOverride;
  v11 = 5;
  CcAggressiveZeroCount = 0;
  CcCoalescingFlushEvent = 1;
  if ( CcAzure_SoftThrottleDelayInMs )
    v11 = CcAzure_SoftThrottleDelayInMs;
  byte_140F8E062 = 6;
  CcSoftThrottleDelay = v11;
  qword_140F8E070 = (__int64)&qword_140F8E068;
  qword_140F8E068 = (__int64)&qword_140F8E068;
  dword_140F8E064 = 0;
  ExInitializeSystemLookasideList(
    (__int64)&CcTwilightLookasideList,
    512,
    160,
    1800889155,
    v2 != 0 ? 256 : 128,
    (__int64)&ExSystemLookasideListHead);
  CcMaxWorklessLazywriteScans = 1;
  v12 = 0;
  for ( CcMaxZeroTransferSize = v2 != 0 ? 0x2000000 : 0x100000; v12 < (unsigned int)KeNumberProcessors_0; ++v12 )
  {
    if ( (int)CcInitializeProcessor(KiProcessorBlock[v12]) < 0 )
      KeBugCheckEx(0x34u, 0x350uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  }
  CcDbgNumberOfFailedWorkQueueEntryAllocations = 0;
  ExInitializeNPagedLookasideListInternal((__int64)&CcBitmapLookasideList, 0LL, 0LL, 512, 1024, 1833067331, 0, 0);
  CcDbgNumberOfFailedBitmapAllocations = 0;
  ExInitializeNPagedLookasideListInternal((__int64)&CcVacbLevelLookasideList, 0LL, 0LL, 512, 1032, 1817600835, 0, 0);
  ExInitializeNPagedLookasideListInternal(
    (__int64)&CcVacbLevelWithBcbListHeadsLookasideList,
    0LL,
    0LL,
    512,
    2056,
    1817600835,
    0,
    0);
  ExInitializeLookasideListExInternal(&CcSharedCacheMapLookasideList, 0LL, 0LL, 512, 1, 0x268uLL, 1666409283, 0, 0);
  ExInitializeLookasideListExInternal(&CcPrivateCacheMapLookasideList, 0LL, 0LL, 512, 0, 0x78uLL, 1666212675, 0, 0);
  CcExternalCacheListLock = 0LL;
  qword_140F8E088 = (__int64)&CcExternalCacheList;
  CcExternalCacheList = (__int64)&CcExternalCacheList;
  if ( CcRemoteFileDPInlineFlushThreshold != -1 )
  {
    if ( (unsigned int)CcRemoteFileDPInlineFlushThreshold < 0x8000
      || (NumberOfPhysicalPagesForPartitionObject = MmGetNumberOfPhysicalPagesForPartitionObject((unsigned __int16 **)PspSystemPartition),
          v14 > NumberOfPhysicalPagesForPartitionObject) )
    {
      CcRemoteFileDPInlineFlushThreshold = 1310720;
    }
  }
  v15 = CcUnmapBehindLength;
  if ( (unsigned int)(CcUnmapBehindLength - 1) > 0x7F )
    v15 = 8;
  CcUnmapBehindLength = v15 << 20;
  if ( !CcAzure_LargeWriteSize
    || (v16 = CcAzure_LargeWriteSize << 10, CcAzure_LargeWriteSize << 10 <= (unsigned int)CcAzure_LargeWriteSize) )
  {
    v16 = 0;
  }
  CcAzure_LargeWriteSize = v16;
  if ( (unsigned int)CcAzure_SoftThrottleLargeWriteAtPct >= 0x65 )
    CcAzure_SoftThrottleLargeWriteAtPct = 0;
  if ( (unsigned int)CcAzure_LazyWriterPercentageOfNumProcs >= 0x65 )
    CcAzure_LazyWriterPercentageOfNumProcs = 0;
  CcInitializeTelemetry(1);
  qword_140F8DF30 = 0LL;
  CcTestControlData = 0LL;
  if ( (int)PoRegisterCoalescingCallback((__int64)CcCoalescingCallBack, 1, &CcCoalescingRegistration, 0LL) < 0 )
    KeBugCheckEx(0x34u, 0x3FAuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( (unsigned int)(CcClientDTPDenominator - 2) > 6 )
    CcClientDTPDenominator = 8;
  CcInitializationComplete = 1;
  return 1;
}
