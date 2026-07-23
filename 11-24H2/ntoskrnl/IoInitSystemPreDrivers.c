/*
 * XREFs of IoInitSystemPreDrivers @ 0x140C1CA4C
 * Callers:
 *     IoInitSystem @ 0x140C1C9C8 (IoInitSystem.c)
 * Callees:
 *     MiLogBadMapper @ 0x140274724 (MiLogBadMapper.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     KeQueryActiveProcessorCountEx @ 0x140339940 (KeQueryActiveProcessorCountEx.c)
 *     ExInitializeResourceLite2 @ 0x1403EAA00 (ExInitializeResourceLite2.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlGetNtProductType @ 0x1404213A0 (RtlGetNtProductType.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x1404549D0 (ExInitializeNPagedLookasideListInternal.c)
 *     KeInitializeQueue @ 0x1404717A0 (KeInitializeQueue.c)
 *     HeadlessKernelAddLogEntry @ 0x1404A7D40 (HeadlessKernelAddLogEntry.c)
 *     KeBugCheck @ 0x1404F9230 (KeBugCheck.c)
 *     McGenEventRegister_EtwRegister @ 0x14057ABE4 (McGenEventRegister_EtwRegister.c)
 *     HvlPhase2Initialize @ 0x14057FF00 (HvlPhase2Initialize.c)
 *     VslpIumPhase4Initialize @ 0x14058BC00 (VslpIumPhase4Initialize.c)
 *     IopInitDumpCapsuleSupport @ 0x14059185C (IopInitDumpCapsuleSupport.c)
 *     IopRemoveDumpCapsuleSupport @ 0x140591F3C (IopRemoveDumpCapsuleSupport.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x140592BF4 (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140592C38 (McTemplateK0q_EtwWriteTransfer.c)
 *     IoInitializeLiveDump @ 0x1405949C8 (IoInitializeLiveDump.c)
 *     IopLiveDumpTraceDumpDisabledOnBoot @ 0x14059A8D0 (IopLiveDumpTraceDumpDisabledOnBoot.c)
 *     IopInitializeSystemVariableService @ 0x14059C1D0 (IopInitializeSystemVariableService.c)
 *     SecureDump_PrepareForInit @ 0x14059F0BC (SecureDump_PrepareForInit.c)
 *     SecureDump_ProvisionCrashDumpKey @ 0x14059F308 (SecureDump_ProvisionCrashDumpKey.c)
 *     KeOptimizeSpecCtrlSettings @ 0x1405BAB88 (KeOptimizeSpecCtrlSettings.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwOpenFile @ 0x1406A7A10 (ZwOpenFile.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     TlgRegisterAggregateProvider @ 0x1406F971C (TlgRegisterAggregateProvider.c)
 *     FsRtlInitExtraCreateParameterLookasideList @ 0x140707DD0 (FsRtlInitExtraCreateParameterLookasideList.c)
 *     IopDumpTraceForceDumpDisabled @ 0x14070E9A8 (IopDumpTraceForceDumpDisabled.c)
 *     IopInitializeBugCheckDriverData @ 0x14070EAA8 (IopInitializeBugCheckDriverData.c)
 *     IopInitializeDumpPolicySettings @ 0x14070ECB4 (IopInitializeDumpPolicySettings.c)
 *     IopInitializeTriageDumpData @ 0x14070EFB0 (IopInitializeTriageDumpData.c)
 *     IopTraceCrashDumpDisabledOnBoot @ 0x14070F08C (IopTraceCrashDumpDisabledOnBoot.c)
 *     IoInitializeProcessor @ 0x14070F18C (IoInitializeProcessor.c)
 *     IopQueryProcessorInitValues @ 0x14070F3F0 (IopQueryProcessorInitValues.c)
 *     AstInitializeBloomFilter @ 0x1407175F4 (AstInitializeBloomFilter.c)
 *     IopCreatePassiveInterruptRealtimeThreads @ 0x1407201A8 (IopCreatePassiveInterruptRealtimeThreads.c)
 *     IopQueryPassiveInterruptRegistryOptions @ 0x1407202C4 (IopQueryPassiveInterruptRegistryOptions.c)
 *     PpPagePathAssign @ 0x140720638 (PpPagePathAssign.c)
 *     PsLocateSystemDlls @ 0x140771D50 (PsLocateSystemDlls.c)
 *     SeAuditBootConfiguration @ 0x140790694 (SeAuditBootConfiguration.c)
 *     EtwInitialize @ 0x1407A65A0 (EtwInitialize.c)
 *     EtwTraceLeapSecondDataParseFailure @ 0x1407A97D0 (EtwTraceLeapSecondDataParseFailure.c)
 *     EtwTraceLeapSecondDataUpdate @ 0x1407A98B0 (EtwTraceLeapSecondDataUpdate.c)
 *     ExRegisterHost @ 0x1407C0B6C (ExRegisterHost.c)
 *     WheaSelLogCheckPoint @ 0x1407C6C10 (WheaSelLogCheckPoint.c)
 *     CmIsStateSeparationDevModeEnabled @ 0x1407CF6E8 (CmIsStateSeparationDevModeEnabled.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     NtCreateEvent @ 0x1408532A0 (NtCreateEvent.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     PipSetDevNodeFlags @ 0x14097B5F8 (PipSetDevNodeFlags.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1409EA0B8 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     EtwRegister @ 0x1409EA180 (EtwRegister.c)
 *     RtlIsStateSeparationEnabled @ 0x140A579B0 (RtlIsStateSeparationEnabled.c)
 *     EtwWriteStartScenario @ 0x140A9BA00 (EtwWriteStartScenario.c)
 *     TlgRegisterAggregateProviderEx @ 0x140ABDA7C (TlgRegisterAggregateProviderEx.c)
 *     NtQueryValueKey @ 0x140AE5AA0 (NtQueryValueKey.c)
 *     PfSnBeginBootPhase @ 0x140B5D6F4 (PfSnBeginBootPhase.c)
 *     BapdRecordFirmwareBootStats @ 0x140B62D80 (BapdRecordFirmwareBootStats.c)
 *     ExInitializeSystemLookasideList @ 0x140B6FF6C (ExInitializeSystemLookasideList.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     BootApplicationPersistentDataProcess @ 0x140BE052C (BootApplicationPersistentDataProcess.c)
 *     VslRegisterIumPowerCallbacks @ 0x140C1BBFC (VslRegisterIumPowerCallbacks.c)
 *     IopCreateRootDirectories @ 0x140C1E538 (IopCreateRootDirectories.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140C1E8F4 (IopInitCrashDumpDuringSysInit.c)
 *     IopInitializeReserveIrps @ 0x140C1EBE0 (IopInitializeReserveIrps.c)
 *     IopReassignSystemRoot @ 0x140C1EFE0 (IopReassignSystemRoot.c)
 *     IopStoreArcInformation @ 0x140C1F1D4 (IopStoreArcInformation.c)
 *     IopInitializeSessionNotifications @ 0x140C20058 (IopInitializeSessionNotifications.c)
 *     IopProtectSystemPartition @ 0x140C203FC (IopProtectSystemPartition.c)
 *     IopInitializeBootDrivers @ 0x140C20504 (IopInitializeBootDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140C210BC (IopInitializePlugPlayServices.c)
 *     PpLastGoodDoBootProcessing @ 0x140C259E4 (PpLastGoodDoBootProcessing.c)
 *     KseInitialize @ 0x140C2D51C (KseInitialize.c)
 *     PoInitDriverServices @ 0x140C2EFFC (PoInitDriverServices.c)
 *     PsInitializeSyscallProviders @ 0x140C36834 (PsInitializeSyscallProviders.c)
 *     WMIInitialize @ 0x140C3E8F0 (WMIInitialize.c)
 *     KitpInitAitSampleRate @ 0x140C455A0 (KitpInitAitSampleRate.c)
 *     WheaInitialize @ 0x140C4624C (WheaInitialize.c)
 *     MmInitializeImageViewExtension @ 0x140C56360 (MmInitializeImageViewExtension.c)
 *     MmRegisterHotPatches @ 0x140C58E0C (MmRegisterHotPatches.c)
 *     KeInitSystem @ 0x140C62E30 (KeInitSystem.c)
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 *     SmInitSystem @ 0x140C68AC8 (SmInitSystem.c)
 */

int __fastcall IoInitSystemPreDrivers(_QWORD *Context)
{
  __int64 v2; // rax
  int v3; // r14d
  unsigned __int64 v4; // r8
  int v5; // eax
  ULONG ActiveProcessorCount; // ebx
  __int64 v7; // rcx
  int result; // eax
  unsigned int v9; // eax
  bool v10; // al
  NTSTATUS v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 i; // rcx
  bool IsStateSeparationDevModeEnabled; // bl
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 Pool2; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r9
  __int64 v23; // r8
  KIRQL v24; // bl
  void *v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rdx
  int inited; // eax
  __int64 v29; // r8
  int v30; // eax
  __int64 v31; // r8
  int v32; // ebx
  ULONG v33; // ebx
  int SystemDlls; // eax
  int v35; // r15d
  __int64 v36; // r8
  __int64 v37; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-B8h] BYREF
  ULONG ResultLength[2]; // [rsp+58h] [rbp-B0h] BYREF
  _NT_PRODUCT_TYPE NtProductType[2]; // [rsp+60h] [rbp-A8h] BYREF
  PVOID Object[2]; // [rsp+68h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v44[2]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v45; // [rsp+C8h] [rbp-40h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v47; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v48; // [rsp+F0h] [rbp-18h]
  __int64 v49; // [rsp+100h] [rbp-8h]

  v44[0] = 0x1000000LL;
  v45 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v44[1] = IoInitSystem_deviceNameBuffer;
  v2 = Context[30];
  DestinationString = 0LL;
  KeyHandle = 0LL;
  IoStatusBlock = 0LL;
  v3 = *(_DWORD *)(v2 + 132) & 0x80000;
  LOBYTE(v37) = 0;
  v47 = 0LL;
  v48 = 0LL;
  ExInitializeResourceLite2(&IopDriverLoadResource, -1);
  ExInitializeResourceLite2(&IopDatabaseResource, -1);
  ExInitializeResourceLite2(&IopSecurityResource, -1);
  ExInitializeResourceLite2(&IopCrashDumpLock, -1);
  ExInitializeResourceLite2(&IopLiveDumpLock, -1);
  IopFilesystemDatabaseShutdownRundown.Count = 0LL;
  qword_140F8C698 = (__int64)&IopDiskFileSystemQueueHead;
  IopDiskFileSystemQueueHead = (__int64)&IopDiskFileSystemQueueHead;
  qword_140F8C668 = (__int64)&IopCdRomFileSystemQueueHead;
  IopCdRomFileSystemQueueHead = (__int64)&IopCdRomFileSystemQueueHead;
  qword_140F8C678 = (__int64)&IopTapeFileSystemQueueHead;
  IopTapeFileSystemQueueHead = (__int64)&IopTapeFileSystemQueueHead;
  qword_140F8C648 = (__int64)&IopNetworkFileSystemQueueHead;
  IopNetworkFileSystemQueueHead = (__int64)&IopNetworkFileSystemQueueHead;
  qword_140F8C658 = (__int64)&IopBootDriverReinitializeQueueHead;
  IopBootDriverReinitializeQueueHead = (__int64)&IopBootDriverReinitializeQueueHead;
  qword_140F8C628 = (__int64)&IopDriverReinitializeQueueHead;
  IopDriverReinitializeQueueHead = (__int64)&IopDriverReinitializeQueueHead;
  qword_140F8C638 = (__int64)&IopNotifyShutdownQueueHead;
  IopNotifyShutdownQueueHead = &IopNotifyShutdownQueueHead;
  qword_140F8C608 = (__int64)&IopNotifyLastChanceShutdownQueueHead;
  IopNotifyLastChanceShutdownQueueHead = &IopNotifyLastChanceShutdownQueueHead;
  qword_140F8C618 = (__int64)&IopFsNotifyChangeQueueHead;
  IopFsNotifyChangeQueueHead = &IopFsNotifyChangeQueueHead;
  qword_140F8C5E8 = (__int64)&IopPerfIoTrackingListHead;
  IopPerfIoTrackingListHead = (__int64)&IopPerfIoTrackingListHead;
  IopPerfIoTrackingLock = 0LL;
  IoStatisticsLock = 0LL;
  IopFunctionPointerLock = 0LL;
  IopDiskIoAttributionTree = 0LL;
  IopUniqueDeviceObjectNumber = 0;
  IopIrpStackProfilerFlags = 0;
  v4 = __rdtsc() >> 4;
  v5 = 0;
  IopUniqueDriverObjectNumber = v4 % 0x64 + 10;
  if ( !IopLargeIrpStackLocations )
  {
    IopLargeIrpStackLocations = 14;
    v5 = 1;
    IopIrpStackProfilerFlags = 1;
  }
  if ( !IopMediumIrpStackLocations )
  {
    IopMediumIrpStackLocations = 4;
    IopIrpStackProfilerFlags = v5 | 2;
  }
  if ( (unsigned int)(IopIrpCompletionTimeoutInSeconds - 2) > 0x12A )
    IopIrpCompletionTimeoutInSeconds = 300;
  IopQueryProcessorInitValues((__int64)&v47);
  ExInitializeSystemLookasideList(
    (__int64)&IopCompletionLookasideList,
    512,
    56,
    544236361,
    SWORD3(v47),
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopLargeIrpLookasideList,
    512,
    SDWORD1(v48),
    1819308617,
    SWORD2(v47),
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopMediumIrpLookasideList,
    512,
    v48,
    1836085833,
    SWORD1(v47),
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopSmallIrpLookasideList,
    512,
    SHIDWORD(v47),
    1936749129,
    v47,
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopMdlLookasideList,
    512,
    SDWORD2(v48),
    543974477,
    SWORD4(v47),
    (__int64)&ExSystemLookasideListHead);
  ExInitializeNPagedLookasideListInternal((__int64)&IopSafeCompletionLookasideList, 0LL, 0LL, 512, 32, 1934978889, 0, 0);
  FsRtlInitExtraCreateParameterLookasideList(&IopSymlinkInfoLookasideList, 0, 0x11EuLL, 0x69536F49u);
  ExInitializeNPagedLookasideListInternal((__int64)&IopOplockFoExtLookasideList, 0LL, 0LL, 512, 48, 1950576719, 0, 0);
  ResultLength[0] = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( ActiveProcessorCount )
  {
    v7 = 0LL;
    do
    {
      IoInitializeProcessor(KiProcessorBlock[v7], &v47);
      v7 = ResultLength[0] + 1;
      ResultLength[0] = v7;
    }
    while ( (unsigned int)v7 < ActiveProcessorCount );
  }
  IopErrorLogLock = 0LL;
  qword_140F8C818 = (__int64)&IopErrorLogListHead;
  IopErrorLogListHead = (__int64)&IopErrorLogListHead;
  if ( !(unsigned __int8)IopInitializeReserveIrps() )
  {
    LODWORD(IopInitFailCode) = 1;
    return -1073741823;
  }
  if ( (IopIrpStackProfilerFlags & 3) != 0 )
  {
    IopIrpStackProfilerMinSizeThreshold = 400;
    IopIrpStackProfilerDpc.DeferredRoutine = (PKDEFERRED_ROUTINE)IopIrpStackProfilerDpcRoutine;
    IopIrpStackProfilerFlags |= 4u;
    IopIrpStackProfilerSampleSize = 2000;
    IopIrpStackProfilerDpc.TargetInfoAsUlong = 275;
    IopIrpStackProfilerDpc.DeferredContext = 0LL;
    IopIrpStackProfilerDpc.DpcData = 0LL;
    IopIrpStackProfilerDpc.ProcessorHistory = 0LL;
  }
  v9 = IopDiskIoAttributionBaseIoSize;
  if ( (unsigned int)IopDiskIoAttributionBaseIoSize >= 0x400000 )
  {
    v9 = 0x400000;
    IopDiskIoAttributionBaseIoSize = 0x400000;
  }
  if ( v9 <= 0x1000 )
    IopDiskIoAttributionBaseIoSize = 4096;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &CmRegistryMachineSystemCurrentControlSetServicesEventLog;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
  {
    IopErrorLogDisabledThisBoot = 1;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"Start");
    v10 = NtQueryValueKey(
            KeyHandle,
            &DestinationString,
            KeyValuePartialInformation,
            IoInitSystem_valueBuffer,
            0x20u,
            ResultLength) < 0
       || dword_1410088AC != 4
       || dword_1410088B4 == 4;
    IopErrorLogDisabledThisBoot = v10;
    ObCloseHandle(KeyHandle, 0);
  }
  *(_QWORD *)&IopTimer.Header.Lock = 9LL;
  IopTimerQueueHead.Blink = &IopTimerQueueHead;
  IopTimerQueueHead.Flink = &IopTimerQueueHead;
  IopTimerDpc.DeferredRoutine = (PKDEFERRED_ROUTINE)IopTimerDispatch;
  IopTimerDpc.DeferredContext = &IopTimerCount;
  IopTimer.Header.WaitListHead.Blink = &IopTimer.Header.WaitListHead;
  IopTimer.Header.WaitListHead.Flink = &IopTimer.Header.WaitListHead;
  qword_140F8C9E8 = (__int64)&IopDeadIrps;
  IopDeadIrps = (__int64)&IopDeadIrps;
  IopHardError.WorkerRoutine = (void (__fastcall *)(void *))IopHardErrorThread;
  qword_140F8C968 = (__int64)&qword_140F8C960;
  qword_140F8C960 = (__int64)&qword_140F8C960;
  stru_140F8C978.Header.WaitListHead.Blink = &stru_140F8C978.Header.WaitListHead;
  stru_140F8C978.Header.WaitListHead.Flink = &stru_140F8C978.Header.WaitListHead;
  IopTimerLock = 0LL;
  IopTimerDpc.TargetInfoAsUlong = 275;
  IopTimerDpc.DpcData = 0LL;
  IopTimerDpc.ProcessorHistory = 0LL;
  IopTimer.DueTime.QuadPart = 0LL;
  IopTimer.Period = 0;
  IopTimer.Processor = 0;
  IopHardError.Parameter = 0LL;
  IopHardError.List.Flink = 0LL;
  qword_140F8C970 = 0LL;
  stru_140F8C978.Header.Type = 5;
  stru_140F8C978.Header.Size = 8;
  stru_140F8C978.Header.SignalState = 0;
  stru_140F8C978.Limit = 0x7FFFFFFF;
  byte_140F8C998 = 0;
  if ( (unsigned int)(IopKeepAliveTimeMs - 1000) > 0x2328 )
    IopKeepAliveTimeMs = 5000;
  IopKeepAliveTracker.Parameter = 0LL;
  IopKeepAliveTracker.WorkerRoutine = (void (__fastcall *)(void *))IopKeepAliveWorker;
  IopKeepAliveTracker.List.Flink = 0LL;
  qword_140F8CB48 = (__int64)&qword_140F8CB40;
  qword_140F8CB40 = &qword_140F8CB40;
  qword_140F8CB50 = 0LL;
  byte_140F8CB78 = 0;
  IopErrorLogSessionPending = 1;
  RtlInitUnicodeString(&DestinationString, L"\\Security\\TRKWKS_EVENT");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 528;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v11 = NtCreateEvent(&KeyHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  if ( v11 < 0 )
  {
    HeadlessKernelAddLogEntry();
    LODWORD(IopInitFailCode) = 26;
    return v11;
  }
  Object[0] = 0LL;
  ObReferenceObjectByHandle(KeyHandle, 0, (POBJECT_TYPE)ExEventObjectType, 0, Object, 0LL);
  IopLinkTrackingServiceEvent = (__int64)Object[0];
  IopMountCompletionEvent.Header.WaitListHead.Blink = &IopMountCompletionEvent.Header.WaitListHead;
  IopMountCompletionEvent.Header.WaitListHead.Flink = &IopMountCompletionEvent.Header.WaitListHead;
  stru_140F8CB00.Header.WaitListHead.Blink = &stru_140F8CB00.Header.WaitListHead;
  stru_140F8CB00.Header.WaitListHead.Flink = &stru_140F8CB00.Header.WaitListHead;
  IopLinkTrackingPortObject.Header.WaitListHead.Blink = &IopLinkTrackingPortObject.Header.WaitListHead;
  IopLinkTrackingPortObject.Header.WaitListHead.Flink = &IopLinkTrackingPortObject.Header.WaitListHead;
  LOWORD(IopMountCompletionEvent.Header.Lock) = 0;
  IopMountCompletionEvent.Header.Size = 6;
  IopMountCompletionEvent.Header.SignalState = 0;
  LOWORD(stru_140F8CB00.Header.Lock) = 0;
  stru_140F8CB00.Header.Size = 6;
  stru_140F8CB00.Header.SignalState = 0;
  LOWORD(IopLinkTrackingPortObject.Header.Lock) = 1;
  IopLinkTrackingPortObject.Header.Size = 6;
  IopLinkTrackingPortObject.Header.SignalState = 1;
  ObCloseHandle(KeyHandle, 0);
  if ( !(unsigned __int8)IopCreateRootDirectories() )
  {
    HeadlessKernelAddLogEntry();
    LODWORD(IopInitFailCode) = 3;
    return -1073741823;
  }
  result = IopInitializeSessionNotifications();
  if ( result < 0 )
  {
    LODWORD(IopInitFailCode) = 15;
    return result;
  }
  v11 = IopInitializePlugPlayServices(Context, 0LL);
  if ( v11 < 0 )
  {
    HeadlessKernelAddLogEntry();
    LODWORD(IopInitFailCode) = 4;
    return v11;
  }
  if ( v3 )
    WheaSelLogCheckPoint();
  KseInitialize(Context, 0LL);
  PoInitDriverServices();
  guard_dispatch_icall_no_overrides(v13, v12);
  for ( i = *((_QWORD *)IopRootDeviceNode + 1); i; i = *(_QWORD *)i )
  {
    if ( (unsigned int)(*(_DWORD *)(i + 300) - 777) <= 1 && (*(_DWORD *)(i + 396) & 0x1000) == 0 )
    {
      IopInitHalDeviceNode = i;
      PipSetDevNodeFlags(i, 4u);
      break;
    }
  }
  if ( !(unsigned __int8)WMIInitialize(0LL, Context) )
  {
    LODWORD(IopInitFailCode) = 18;
    return -1073741823;
  }
  if ( v3 )
    WheaSelLogCheckPoint();
  IsStateSeparationDevModeEnabled = CmIsStateSeparationDevModeEnabled();
  LOBYTE(v16) = RtlIsStateSeparationEnabled();
  LOBYTE(v17) = IsStateSeparationDevModeEnabled;
  result = ExpInitializeStateSeparationPhase0(v16, v17);
  if ( (int)(result + 0x80000000) >= 0 && result != -1073741637 )
  {
    LODWORD(IopInitFailCode) = 19;
    return result;
  }
  NtProductType[0] = 0;
  if ( RtlGetNtProductType(NtProductType) && NtProductType[0] == NtProductWinNt )
  {
    AstIsActive = 1;
    Pool2 = ExAllocatePool2(0x100uLL, 0x1000uLL, 0x6E446341uLL);
    if ( !Pool2 )
    {
      LODWORD(IopInitFailCode) = 17;
      return -1073741801;
    }
    AstInitializeBloomFilter(v20, v19, Pool2);
  }
  else
  {
    AstIsActive = 0;
  }
  EtwInitialize(1u, (__int64)Context);
  result = EtwRegister(&IoTraceProvider, (PETWENABLECALLBACK)IopEtwEnableCallback, 0LL, &IoTraceHandle);
  if ( result >= 0 )
  {
    result = McGenEventRegister_EtwRegister(
               (const GUID *)IoMgrProvider,
               v21,
               IoMgrProvider_Context,
               IoMgrProvider_Context);
    if ( result >= 0 )
    {
      result = TlgRegisterAggregateProviderEx((__int64)&unk_140E0A058, (__int64)MiTracingEnabledCallback, 0LL);
      if ( result >= 0 )
      {
        *(_QWORD *)&qword_140E37658 = &unk_140E0A058;
        if ( dword_140E30300 )
          MiLogBadMapper(0LL, -1, 0LL);
        EtwRegister(&DumpProvGuid, (PETWENABLECALLBACK)IopDumpTracingControlCallback, 0LL, &IopDumpEtwRegHandle);
        TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E06DC8, 0LL, 0LL);
        IopInitializeDumpPolicySettings(1);
        TlgRegisterAggregateProvider((__int64)&dword_140E06E48);
        SeAuditBootConfiguration(*(_QWORD *)(Context[30] + 2880LL));
        BootApplicationPersistentDataProcess(1);
        KdInitialize(2LL, 0LL, &KdpContext, v22);
        KeInitSystem(2LL);
        if ( !IopErrorLogDisabledThisBoot )
        {
          v24 = KeAcquireSpinLockRaiseToDpc(&IopErrorLogLock);
          if ( (__int64 *)IopErrorLogListHead == &IopErrorLogListHead )
          {
            IopErrorLogSessionPending = 0;
          }
          else
          {
            IopErrorLogWorkItem.Parameter = 0LL;
            IopErrorLogWorkItem.WorkerRoutine = (void (__fastcall *)(void *))IopErrorLogThread;
            IopErrorLogWorkItem.List.Flink = 0LL;
            ExQueueWorkItem(&IopErrorLogWorkItem, DelayedWorkQueue);
          }
          KeReleaseSpinLock(&IopErrorLogLock, v24);
        }
        if ( v3 )
          WheaSelLogCheckPoint();
        if ( (Microsoft_Windows_Kernel_IOEnableBits & 0x10) != 0 )
          McTemplateK0q_EtwWriteTransfer(IoMgrProvider_Context, (const EVENT_DESCRIPTOR *)WheaInitializeStart, v23, 0);
        WheaInitialize(Context, 0LL);
        if ( (Microsoft_Windows_Kernel_IOEnableBits & 0x10) != 0 )
          McTemplateK0_EtwWriteTransfer(IoMgrProvider_Context, (const EVENT_DESCRIPTOR *)WheaInitializeStop);
        if ( v3 )
          WheaSelLogCheckPoint();
        result = IopStoreArcInformation(Context);
        if ( result >= 0 )
        {
          v11 = IopInitializePlugPlayServices(Context, 1LL);
          if ( v11 < 0 )
          {
            HeadlessKernelAddLogEntry();
            LODWORD(IopInitFailCode) = 5;
            return v11;
          }
          memset_0(&IoStatusBlockRangeTable, 0, sizeof(IoStatusBlockRangeTable));
          IoStatusBlockRangeTable.BalancedRoot.Parent = (_RTL_BALANCED_LINKS *)&IoStatusBlockRangeTable;
          IoStatusBlockRangeTable.CompareRoutine = (_RTL_GENERIC_COMPARE_RESULTS (__fastcall *)(_RTL_AVL_TABLE *, void *, void *))IopCompareIosbRanges;
          IoStatusBlockRangeTable.TableContext = 0LL;
          IoStatusBlockRangeTable.AllocateRoutine = (void *(__fastcall *)(_RTL_AVL_TABLE *, unsigned int))IopAllocateGenericTableEntry;
          IoStatusBlockRangeTableLock.Count = 1;
          IoStatusBlockRangeTable.FreeRoutine = (void (__fastcall *)(_RTL_AVL_TABLE *, void *))IopFreeGenericTableEntry;
          IoStatusBlockRangeTableLock.Event.Header.WaitListHead.Blink = &IoStatusBlockRangeTableLock.Event.Header.WaitListHead;
          IoStatusBlockRangeTableLock.Event.Header.WaitListHead.Flink = &IoStatusBlockRangeTableLock.Event.Header.WaitListHead;
          IoStatusBlockRangeTableLock.Owner = 0LL;
          IoStatusBlockRangeTableLock.Contention = 0;
          LOWORD(IoStatusBlockRangeTableLock.Event.Header.Lock) = 1;
          IoStatusBlockRangeTableLock.Event.Header.Size = 6;
          IoStatusBlockRangeTableLock.Event.Header.SignalState = 0;
          KitpInitAitSampleRate(Context);
          if ( EtwRegister(&MS_Windows_AIT_Provider, 0LL, 0LL, &KitEtwHandle) < 0 )
            KitEtwHandle = 0LL;
          KseInitialize(Context, 1LL);
          result = HvlPhase2Initialize((__int64)Context);
          if ( result >= 0 )
          {
            if ( v3 )
              WheaSelLogCheckPoint();
            KeOptimizeSpecCtrlSettings(0);
            PsInitializeSyscallProviders();
            VslpIumPhase4Initialize();
            BootApplicationPersistentDataProcess(2);
            BapdRecordFirmwareBootStats();
            if ( v3 )
              WheaSelLogCheckPoint();
            if ( PnpEtwHandle )
              EtwWriteStartScenario(
                (ULONG_PTR *)PnpEtwHandle,
                &KMPnPEvt_DriverInitPhase_Start,
                &PnpDriverInitPhaseActivityId,
                0,
                0LL);
            LOWORD(ActiveConnectListLock.Header.Lock) = 1;
            qword_140F8C178 = (__int64)&ActiveConnectList;
            ActiveConnectList = (__int64)&ActiveConnectList;
            ActiveConnectListLock.Header.WaitListHead.Blink = &ActiveConnectListLock.Header.WaitListHead;
            ActiveConnectListLock.Header.WaitListHead.Flink = &ActiveConnectListLock.Header.WaitListHead;
            ActiveConnectListLock.Header.Size = 6;
            ActiveConnectListLock.Header.SignalState = 1;
            IopQueryPassiveInterruptRegistryOptions();
            qword_140F8C108 = (__int64)&PassiveInterruptList;
            PassiveInterruptList = (__int64)&PassiveInterruptList;
            PassiveInterruptListLock = 0LL;
            KeInitializeQueue(&PassiveInterruptRealtimeWorkQueue, (unsigned __int8)PassiveInterruptRealtimeWorkerCount);
            result = IopCreatePassiveInterruptRealtimeThreads(v25);
            if ( result >= 0 )
            {
              SecureDump_PrepareForInit(v26, &v37);
              if ( ForceDumpDisabled || (_BYTE)v37 || !AllowCrashDump )
                CapsuleDumpAllowed = 0;
              else
                IopInitDumpCapsuleSupport();
              if ( v3 )
                WheaSelLogCheckPoint();
              if ( ExLeapSecondDataLastParseResult )
                EtwTraceLeapSecondDataParseFailure(ExLeapSecondDataLastParseResult);
              EtwTraceLeapSecondDataUpdate(
                0,
                *(unsigned __int8 *)ExLeapSecondData,
                *((_DWORD *)ExLeapSecondData + 1),
                0);
              *(_QWORD *)&v47 = 65542LL;
              Object[1] = &IopIoRateHostTable;
              v48 = 0x200uLL;
              *((_QWORD *)&v47 + 1) = Object;
              LODWORD(Object[0]) = 1;
              v49 = 0LL;
              if ( (int)ExRegisterHost(&IopIoRateExtensionHost, v27, (unsigned __int16 *)&v47) < 0 )
                IopIoRateExtensionHost = 0LL;
              PsAltSystemCallRegistrationLock = 0LL;
              PsAltSystemCallHandlers[0] = (__int64)PsPicoAltSystemCallDispatch;
              IopReportBugCheckProgress = (__int64)HalSetEnvironmentVariableEx;
              if ( (Context[33] & 2) != 0 )
                IopReportBugCheckProgress = (__int64)VslReportBugCheckProgress;
              if ( v3 )
                WheaSelLogCheckPoint();
              if ( (*(_DWORD *)(Context[30] + 132LL) & 0x100000) != 0 )
              {
                if ( (Microsoft_Windows_Kernel_IOEnableBits & 0x10) != 0 )
                  McTemplateK0_EtwWriteTransfer(
                    IoMgrProvider_Context,
                    (const EVENT_DESCRIPTOR *)CrashDumpInitializeStart);
                inited = IopInitCrashDumpDuringSysInit(Context);
                if ( (Microsoft_Windows_Kernel_IOEnableBits & 0x10) != 0 )
                  McTemplateK0q_EtwWriteTransfer(
                    IoMgrProvider_Context,
                    (const EVENT_DESCRIPTOR *)CrashDumpInitializeStop,
                    v29,
                    inited);
              }
              v11 = IopInitializeBootDrivers(Context, &v45);
              if ( v11 < 0 )
              {
                HeadlessKernelAddLogEntry();
                if ( !(_DWORD)IopInitFailCode )
                  LODWORD(IopInitFailCode) = 6;
                return v11;
              }
              if ( v3 )
                WheaSelLogCheckPoint();
              if ( (Microsoft_Windows_Kernel_IOEnableBits & 8) != 0 )
                McTemplateK0_EtwWriteTransfer(IoMgrProvider_Context, (const EVENT_DESCRIPTOR *)LoadBootHotPatchesStart);
              v11 = MmRegisterHotPatches(Context);
              if ( (Microsoft_Windows_Kernel_IOEnableBits & 8) != 0 )
                McTemplateK0_EtwWriteTransfer(IoMgrProvider_Context, (const EVENT_DESCRIPTOR *)LoadBootHotPatchesStop);
              if ( v11 < 0 )
              {
                LODWORD(IopInitFailCode) = 21;
                return v11;
              }
              if ( !(unsigned __int8)PoInitSystem(2LL, Context) )
                KeBugCheck(0xA0u);
              if ( v3 )
                WheaSelLogCheckPoint();
              SmInitSystem(1LL);
              EtwInitialize(2u, (__int64)Context);
              VslRegisterIumPowerCallbacks();
              IopInitializeSystemVariableService();
              SecureDump_ProvisionCrashDumpKey();
              if ( !ForceDumpDisabled || (IopDumpTraceForceDumpDisabled(), !ForceDumpDisabled) )
              {
                IoInitializeLiveDump();
                if ( !AllowLiveDump )
                  IopLiveDumpTraceDumpDisabledOnBoot();
              }
              IopInitializeBugCheckDriverData();
              IopInitializeTriageDumpData();
              if ( (Microsoft_Windows_Kernel_IOEnableBits & 0x10) != 0 )
                McTemplateK0_EtwWriteTransfer(IoMgrProvider_Context, (const EVENT_DESCRIPTOR *)CrashDumpInitializeStart);
              WheaSelLogCheckPoint();
              v30 = IopInitCrashDumpDuringSysInit(Context);
              v32 = v30;
              if ( (Microsoft_Windows_Kernel_IOEnableBits & 0x10) != 0 )
                McTemplateK0q_EtwWriteTransfer(
                  IoMgrProvider_Context,
                  (const EVENT_DESCRIPTOR *)CrashDumpInitializeStop,
                  v31,
                  v30);
              if ( v3 )
                WheaSelLogCheckPoint();
              if ( v32 < 0 )
              {
                if ( !AllowCrashDump )
                  IopTraceCrashDumpDisabledOnBoot();
              }
              else
              {
                IopRemoveDumpCapsuleSupport();
              }
              if ( !RtlIsStateSeparationEnabled() )
                PpLastGoodDoBootProcessing();
              v33 = NtGlobalFlag;
              NtGlobalFlag |= 0x40000u;
              SystemDlls = PsLocateSystemDlls();
              NtGlobalFlag = v33;
              v35 = SystemDlls;
              if ( SystemDlls >= 0 )
              {
                MmInitializeImageViewExtension(1LL);
                PfSnBeginBootPhase(0);
                if ( !(unsigned __int8)IopReassignSystemRoot(Context, v44) )
                {
                  HeadlessKernelAddLogEntry();
                  LODWORD(IopInitFailCode) = 9;
                  return -1073741823;
                }
                if ( !(unsigned __int8)IopProtectSystemPartition(Context) )
                {
                  HeadlessKernelAddLogEntry();
                  LODWORD(IopInitFailCode) = 10;
                  return -1073741823;
                }
                ObjectAttributes.ObjectName = (PUNICODE_STRING)((char *)PsLoadedModuleList + 72);
                ObjectAttributes.Length = 48;
                ObjectAttributes.RootDirectory = 0LL;
                ObjectAttributes.Attributes = 576;
                *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                if ( ZwOpenFile(&KeyHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 1u, 0) >= 0 )
                {
                  *(_QWORD *)NtProductType = 0LL;
                  if ( ObReferenceObjectByHandle(KeyHandle, 0x80u, 0LL, 0, (PVOID *)NtProductType, 0LL) >= 0 )
                  {
                    PpPagePathAssign(*(struct _FILE_OBJECT **)NtProductType);
                    ObfDereferenceObjectWithTag(*(PVOID *)NtProductType, 0x746C6644u);
                  }
                  ZwClose(KeyHandle);
                }
                if ( !(unsigned __int8)WMIInitialize(1LL, 0LL) )
                {
                  LODWORD(IopInitFailCode) = 25;
                  return -1073741823;
                }
                if ( v3 )
                  WheaSelLogCheckPoint();
                if ( (Microsoft_Windows_Kernel_IOEnableBits & 0x10) != 0 )
                  McTemplateK0q_EtwWriteTransfer(
                    IoMgrProvider_Context,
                    (const EVENT_DESCRIPTOR *)WheaInitializeStart,
                    v36,
                    1);
                WheaInitialize(Context, 1LL);
                if ( (Microsoft_Windows_Kernel_IOEnableBits & 0x10) != 0 )
                  McTemplateK0_EtwWriteTransfer(IoMgrProvider_Context, (const EVENT_DESCRIPTOR *)WheaInitializeStop);
                if ( v3 )
                  WheaSelLogCheckPoint();
                return 0;
              }
              else
              {
                HeadlessKernelAddLogEntry();
                result = v35;
                LODWORD(IopInitFailCode) = 7;
              }
            }
            else
            {
              LODWORD(IopInitFailCode) = 24;
            }
          }
          else
          {
            LODWORD(IopInitFailCode) = 23;
          }
        }
        else
        {
          LODWORD(IopInitFailCode) = 20;
        }
      }
      else
      {
        LODWORD(IopInitFailCode) = 22;
      }
    }
    else
    {
      LODWORD(IopInitFailCode) = 11;
    }
  }
  else
  {
    LODWORD(IopInitFailCode) = 16;
  }
  return result;
}
