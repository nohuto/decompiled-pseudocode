/*
 * XREFs of FsRtlInitSystem @ 0x140C07CDC
 * Callers:
 *     Phase1InitializationDiscard @ 0x140BFB048 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExInitializeResourceLite2 @ 0x1402D6940 (ExInitializeResourceLite2.c)
 *     Feature_5466_1379__private_IsEnabledDeviceUsageNoInline @ 0x14057C46C (Feature_5466_1379__private_IsEnabledDeviceUsageNoInline.c)
 *     FsFilterInit @ 0x14057E05C (FsFilterInit.c)
 *     FsRtlInitializeDedupChange @ 0x140700C90 (FsRtlInitializeDedupChange.c)
 *     FsRtlInitializeTieringHeat @ 0x1407017C8 (FsRtlInitializeTieringHeat.c)
 *     ExInitializePagedLookasideList @ 0x140A90BD0 (ExInitializePagedLookasideList.c)
 *     ExAllocatePoolWithTag @ 0x140B62010 (ExAllocatePoolWithTag.c)
 *     FsRtlGetCompatibilityModeValue @ 0x140C07B74 (FsRtlGetCompatibilityModeValue.c)
 *     FsRtlInitializeSmssEvent @ 0x140C07E2C (FsRtlInitializeSmssEvent.c)
 *     FsRtlInitializeLargeMcbs @ 0x140C07F24 (FsRtlInitializeLargeMcbs.c)
 *     FsRtlInitializeTunnels @ 0x140C07FCC (FsRtlInitializeTunnels.c)
 *     FsRtlInitializeFileLocks @ 0x140C080BC (FsRtlInitializeFileLocks.c)
 *     FsRtlInitializeOplockPerf @ 0x140C08254 (FsRtlInitializeOplockPerf.c)
 *     FsRtlInitializeWorkerThread @ 0x140C08408 (FsRtlInitializeWorkerThread.c)
 */

bool FsRtlInitSystem()
{
  __int64 v0; // rdi
  __int64 v1; // rbx
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-18h] BYREF
  int v4; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0;
  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  FsRtlPagingIoResources = (__int64)ExAllocatePoolWithTag((POOL_TYPE)1552, 0x680uLL, 0x74725346u);
  v0 = 16LL;
  v1 = 0LL;
  do
  {
    ExInitializeResourceLite2((_QWORD *)(v1 + FsRtlPagingIoResources), -1);
    v1 += 104LL;
    --v0;
  }
  while ( v0 );
  FsRtlInitializeTunnels();
  FsRtlInitializeFileLocks();
  FsRtlInitializeLargeMcbs();
  ExInitializePagedLookasideList(&FsRtlEcpListLookaside, 0LL, 0LL, 0, 0x18uLL, 0x6C655346u, 0);
  FsRtlpUncSemaphore.Header.Type = 5;
  FsRtlpUncSemaphore.Header.WaitListHead.Blink = &FsRtlpUncSemaphore.Header.WaitListHead;
  FsRtlpUncSemaphore.Header.WaitListHead.Flink = &FsRtlpUncSemaphore.Header.WaitListHead;
  FsRtlpUncSemaphore.Header.Size = 8;
  ValueName.Buffer = L"Win95TruncatedExtensions";
  FsRtlpUncSemaphore.Header.SignalState = 1;
  FsRtlpUncSemaphore.Limit = 0x7FFFFFFF;
  *(_DWORD *)&ValueName.Length = 3276848;
  if ( FsRtlGetCompatibilityModeValue(&ValueName, &v4) >= 0 && v4 )
    BYTE2(NlsMbCodePageTag) = 0;
  if ( (int)FsRtlInitializeWorkerThread() < 0 || (int)FsFilterInit() < 0 || (int)FsRtlInitializeSmssEvent() < 0 )
    return 0;
  FsRtlInitializeTieringHeat();
  FsRtlInitializeDedupChange();
  return !(unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline()
      || (int)FsRtlInitializeOplockPerf() >= 0;
}
