/*
 * XREFs of FsRtlInitSystem @ 0x140C18D7C
 * Callers:
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExInitializeResourceLite2 @ 0x140365350 (ExInitializeResourceLite2.c)
 *     Feature_5466_1379__private_IsEnabledDeviceUsageNoInline @ 0x14057F78C (Feature_5466_1379__private_IsEnabledDeviceUsageNoInline.c)
 *     FsFilterInit @ 0x14058180C (FsFilterInit.c)
 *     FsRtlInitializeDedupChange @ 0x14070CB70 (FsRtlInitializeDedupChange.c)
 *     FsRtlInitializeTieringHeat @ 0x14070D6A8 (FsRtlInitializeTieringHeat.c)
 *     ExInitializePagedLookasideList @ 0x140A94D10 (ExInitializePagedLookasideList.c)
 *     ExAllocatePoolWithTag @ 0x140B72010 (ExAllocatePoolWithTag.c)
 *     FsRtlGetCompatibilityModeValue @ 0x140C18C14 (FsRtlGetCompatibilityModeValue.c)
 *     FsRtlInitializeSmssEvent @ 0x140C18ECC (FsRtlInitializeSmssEvent.c)
 *     FsRtlInitializeLargeMcbs @ 0x140C18FC4 (FsRtlInitializeLargeMcbs.c)
 *     FsRtlInitializeTunnels @ 0x140C1906C (FsRtlInitializeTunnels.c)
 *     FsRtlInitializeFileLocks @ 0x140C1915C (FsRtlInitializeFileLocks.c)
 *     FsRtlInitializeOplockPerf @ 0x140C192F4 (FsRtlInitializeOplockPerf.c)
 *     FsRtlInitializeWorkerThread @ 0x140C194A8 (FsRtlInitializeWorkerThread.c)
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
