/*
 * XREFs of IoInitSystemPreDrivers @ 0x140C0996C
 * Callers:
 *     IoInitSystem @ 0x140C098E8 (IoInitSystem.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExInitializeResourceLite2 @ 0x1402D6940 (ExInitializeResourceLite2.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     KeQueryActiveProcessorCountEx @ 0x1403AE660 (KeQueryActiveProcessorCountEx.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x140460B30 (ExInitializeNPagedLookasideListInternal.c)
 *     HeadlessKernelAddLogEntry @ 0x1404AC070 (HeadlessKernelAddLogEntry.c)
 *     KeBugCheck @ 0x1404F9260 (KeBugCheck.c)
 *     McGenEventRegister_EtwRegister @ 0x14057A434 (McGenEventRegister_EtwRegister.c)
 *     HvlPhase2Initialize @ 0x14057F3D0 (HvlPhase2Initialize.c)
 *     VslpIumPhase4Initialize @ 0x14058B400 (VslpIumPhase4Initialize.c)
 *     IopInitDumpCapsuleSupport @ 0x140591038 (IopInitDumpCapsuleSupport.c)
 *     IopRemoveDumpCapsuleSupport @ 0x140591718 (IopRemoveDumpCapsuleSupport.c)
 *     Feature_IoMgr_FileObject_Process_FastRef__private_IsEnabledDeviceUsageNoInline @ 0x14059238C (Feature_IoMgr_FileObject_Process_FastRef__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_IoMgr_Force_TransferCount_Update_Thread__private_IsEnabledDeviceUsageNoInline @ 0x1405923E0 (Feature_IoMgr_Force_TransferCount_Update_Thread__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x14059246C (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1405924B0 (McTemplateK0q_EtwWriteTransfer.c)
 *     IoInitializeLiveDump @ 0x14059433C (IoInitializeLiveDump.c)
 *     IopLiveDumpTraceDumpDisabledOnBoot @ 0x14059A240 (IopLiveDumpTraceDumpDisabledOnBoot.c)
 *     IopInitializeSystemVariableService @ 0x14059BB40 (IopInitializeSystemVariableService.c)
 *     SecureDump_PrepareForInit @ 0x14059E99C (SecureDump_PrepareForInit.c)
 *     SecureDump_ProvisionCrashDumpKey @ 0x14059EBE8 (SecureDump_ProvisionCrashDumpKey.c)
 *     IopInitializeIoRate @ 0x14059F30C (IopInitializeIoRate.c)
 *     KeOptimizeSpecCtrlSettings @ 0x1405B970C (KeOptimizeSpecCtrlSettings.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwOpenKey @ 0x14069B380 (ZwOpenKey.c)
 *     ZwOpenFile @ 0x14069B7A0 (ZwOpenFile.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     TlgRegisterAggregateProvider @ 0x1406EFC6C (TlgRegisterAggregateProvider.c)
 *     FsRtlInitExtraCreateParameterLookasideList @ 0x1406FE330 (FsRtlInitExtraCreateParameterLookasideList.c)
 *     IopDumpTraceForceDumpDisabled @ 0x140704D18 (IopDumpTraceForceDumpDisabled.c)
 *     IopInitializeBugCheckDriverData @ 0x140704E18 (IopInitializeBugCheckDriverData.c)
 *     IopInitializeDumpPolicySettings @ 0x140705024 (IopInitializeDumpPolicySettings.c)
 *     IopInitializeTriageDumpData @ 0x140705320 (IopInitializeTriageDumpData.c)
 *     IopTraceCrashDumpDisabledOnBoot @ 0x1407053FC (IopTraceCrashDumpDisabledOnBoot.c)
 *     IoInitializeProcessor @ 0x1407054FC (IoInitializeProcessor.c)
 *     IopQueryProcessorInitValues @ 0x140705760 (IopQueryProcessorInitValues.c)
 *     PpPagePathAssign @ 0x1407169A8 (PpPagePathAssign.c)
 *     PsLocateSystemDlls @ 0x140762170 (PsLocateSystemDlls.c)
 *     SeAuditBootConfiguration @ 0x140781404 (SeAuditBootConfiguration.c)
 *     EtwInitialize @ 0x140797090 (EtwInitialize.c)
 *     EtwTraceLeapSecondDataParseFailure @ 0x14079A2C0 (EtwTraceLeapSecondDataParseFailure.c)
 *     EtwTraceLeapSecondDataUpdate @ 0x14079A3A0 (EtwTraceLeapSecondDataUpdate.c)
 *     WheaSelLogCheckPoint @ 0x1407B6FE0 (WheaSelLogCheckPoint.c)
 *     CmIsStateSeparationDevModeEnabled @ 0x1407BF9E8 (CmIsStateSeparationDevModeEnabled.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     NtCreateEvent @ 0x14089FF70 (NtCreateEvent.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1408B73B4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     EtwRegister @ 0x1408B7480 (EtwRegister.c)
 *     ObCloseHandle @ 0x1408EFEC0 (ObCloseHandle.c)
 *     RtlIsStateSeparationEnabled @ 0x140A28CA0 (RtlIsStateSeparationEnabled.c)
 *     EtwWriteStartScenario @ 0x140A9A900 (EtwWriteStartScenario.c)
 *     NtQueryValueKey @ 0x140AD3580 (NtQueryValueKey.c)
 *     PfSnBeginBootPhase @ 0x140B4B714 (PfSnBeginBootPhase.c)
 *     BapdRecordFirmwareBootStats @ 0x140B50B80 (BapdRecordFirmwareBootStats.c)
 *     ExInitializeSystemLookasideList @ 0x140B5F310 (ExInitializeSystemLookasideList.c)
 *     BootApplicationPersistentDataProcess @ 0x140BCD52C (BootApplicationPersistentDataProcess.c)
 *     VslRegisterIumPowerCallbacks @ 0x140C08B24 (VslRegisterIumPowerCallbacks.c)
 *     IopCreateRootDirectories @ 0x140C0B324 (IopCreateRootDirectories.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140C0B6E0 (IopInitCrashDumpDuringSysInit.c)
 *     IopInitializeReserveIrps @ 0x140C0B9D0 (IopInitializeReserveIrps.c)
 *     IopReassignSystemRoot @ 0x140C0BDD0 (IopReassignSystemRoot.c)
 *     IopStoreArcInformation @ 0x140C0BFC4 (IopStoreArcInformation.c)
 *     IopInitializeSessionNotifications @ 0x140C0CE48 (IopInitializeSessionNotifications.c)
 *     AstInitialize @ 0x140C0CF98 (AstInitialize.c)
 *     IopProtectSystemPartition @ 0x140C0D254 (IopProtectSystemPartition.c)
 *     IopInitializeBootDrivers @ 0x140C0D35C (IopInitializeBootDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140C0DF14 (IopInitializePlugPlayServices.c)
 *     PnpMarkHalDeviceNode @ 0x140C115F0 (PnpMarkHalDeviceNode.c)
 *     IopInitializePassiveInterruptServices @ 0x140C123F4 (IopInitializePassiveInterruptServices.c)
 *     PpLastGoodDoBootProcessing @ 0x140C12924 (PpLastGoodDoBootProcessing.c)
 *     KseInitialize @ 0x140C1A2FC (KseInitialize.c)
 *     PoInitDriverServices @ 0x140C1BDD8 (PoInitDriverServices.c)
 *     PsInitializeSyscallProviders @ 0x140C23428 (PsInitializeSyscallProviders.c)
 *     WMIInitialize @ 0x140C2B4B8 (WMIInitialize.c)
 *     KitpInitAitSampleRate @ 0x140C32184 (KitpInitAitSampleRate.c)
 *     WheaInitialize @ 0x140C32E30 (WheaInitialize.c)
 *     MmRegisterEtwProvider @ 0x140C3D7B8 (MmRegisterEtwProvider.c)
 *     MmInitializeImageViewExtension @ 0x140C42F58 (MmInitializeImageViewExtension.c)
 *     MmRegisterHotPatches @ 0x140C4599C (MmRegisterHotPatches.c)
 *     KeInitSystem @ 0x140C4FA10 (KeInitSystem.c)
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 *     SmInitSystem @ 0x140C54CC4 (SmInitSystem.c)
 */

NTSTATUS __fastcall IoInitSystemPreDrivers(_QWORD *Context)
{
  __int64 v2; // rax
  int v3; // esi
  unsigned __int64 v4; // r8
  int v5; // eax
  ULONG ActiveProcessorCount; // ebx
  __int64 v7; // rcx
  NTSTATUS result; // eax
  unsigned int v9; // eax
  bool v10; // al
  NTSTATUS v11; // ebx
  __int64 v12; // rcx
  bool IsStateSeparationDevModeEnabled; // bl
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // r8
  KIRQL v19; // bl
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  int inited; // eax
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // r8
  int v27; // ebx
  ULONG v28; // ebx
  int SystemDlls; // eax
  NTSTATUS v30; // r15d
  __int64 v31; // r8
  _BYTE v32[8]; // [rsp+48h] [rbp-79h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-71h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp-69h] BYREF
  PVOID Object; // [rsp+60h] [rbp-61h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-59h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-29h] BYREF
  _QWORD v38[2]; // [rsp+A8h] [rbp-19h] BYREF
  __int64 v39; // [rsp+B8h] [rbp-9h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C0h] [rbp-1h] BYREF
  __int128 v41; // [rsp+D0h] [rbp+Fh] BYREF
  __int128 v42; // [rsp+E0h] [rbp+1Fh]

  v38[0] = 0x1000000LL;
  v39 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v38[1] = IoInitSystem_deviceNameBuffer;
  v2 = Context[30];
  DestinationString = 0LL;
  KeyHandle = 0LL;
  IoStatusBlock = 0LL;
  v3 = *(_DWORD *)(v2 + 132) & 0x80000;
  v32[0] = 0;
  v41 = 0LL;
  v42 = 0LL;
  ExInitializeResourceLite2(&IopDriverLoadResource, -1);
  ExInitializeResourceLite2(&IopDatabaseResource, -1);
  ExInitializeResourceLite2(&IopSecurityResource, -1);
  ExInitializeResourceLite2(&IopCrashDumpLock, -1);
  ExInitializeResourceLite2(&IopLiveDumpLock, -1);
  IopFilesystemDatabaseShutdownRundown.Count = 0LL;
  qword_140F8BD08 = (__int64)&IopDiskFileSystemQueueHead;
  IopDiskFileSystemQueueHead = (__int64)&IopDiskFileSystemQueueHead;
  qword_140F8BD18 = (__int64)&IopCdRomFileSystemQueueHead;
  IopCdRomFileSystemQueueHead = (__int64)&IopCdRomFileSystemQueueHead;
  qword_140F8BD28 = (__int64)&IopTapeFileSystemQueueHead;
  IopTapeFileSystemQueueHead = (__int64)&IopTapeFileSystemQueueHead;
  qword_140F8BD38 = (__int64)&IopNetworkFileSystemQueueHead;
  IopNetworkFileSystemQueueHead = (__int64)&IopNetworkFileSystemQueueHead;
  qword_140F8BEF8 = (__int64)&IopBootDriverReinitializeQueueHead;
  IopBootDriverReinitializeQueueHead = (__int64)&IopBootDriverReinitializeQueueHead;
  qword_140F8BF08 = (__int64)&IopDriverReinitializeQueueHead;
  IopDriverReinitializeQueueHead = (__int64)&IopDriverReinitializeQueueHead;
  qword_140F8BF18 = (__int64)&IopNotifyShutdownQueueHead;
  IopNotifyShutdownQueueHead = &IopNotifyShutdownQueueHead;
  qword_140F8BF28 = (__int64)&IopNotifyLastChanceShutdownQueueHead;
  IopNotifyLastChanceShutdownQueueHead = &IopNotifyLastChanceShutdownQueueHead;
  qword_140F8BEC8 = (__int64)&IopFsNotifyChangeQueueHead;
  IopFsNotifyChangeQueueHead = &IopFsNotifyChangeQueueHead;
  qword_140F8BED8 = (__int64)&IopPerfIoTrackingListHead;
  IopPerfIoTrackingListHead = (__int64)&IopPerfIoTrackingListHead;
  IopPerfIoTrackingLock = 0LL;
  IoStatisticsLock = 0LL;
  IopFunctionPointerLock = 0LL;
  IopDiskIoAttributionTree = 0LL;
  if ( (unsigned int)Feature_IoMgr_FileObject_Process_FastRef__private_IsEnabledDeviceUsageNoInline() )
    IopVelocityFlags |= 1u;
  if ( (unsigned int)Feature_IoMgr_Force_TransferCount_Update_Thread__private_IsEnabledDeviceUsageNoInline() )
    IopVelocityFlags |= 2u;
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
  IopQueryProcessorInitValues((__int64)&v41);
  ExInitializeSystemLookasideList(
    (__int64)&IopCompletionLookasideList,
    512,
    56,
    544236361,
    SWORD3(v41),
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopLargeIrpLookasideList,
    512,
    SDWORD1(v42),
    1819308617,
    SWORD2(v41),
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopMediumIrpLookasideList,
    512,
    v42,
    1836085833,
    SWORD1(v41),
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopSmallIrpLookasideList,
    512,
    SHIDWORD(v41),
    1936749129,
    v41,
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopMdlLookasideList,
    512,
    SDWORD2(v42),
    543974477,
    SWORD4(v41),
    (__int64)&ExSystemLookasideListHead);
  ExInitializeNPagedLookasideListInternal((__int64)&IopSafeCompletionLookasideList, 0LL, 0LL, 512, 32, 1934978889, 0, 0);
  FsRtlInitExtraCreateParameterLookasideList(&IopSymlinkInfoLookasideList, 0, 0x11EuLL, 0x69536F49u);
  ExInitializeNPagedLookasideListInternal((__int64)&IopOplockFoExtLookasideList, 0LL, 0LL, 512, 48, 1950576719, 0, 0);
  ResultLength = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( ActiveProcessorCount )
  {
    v7 = 0LL;
    do
    {
      IoInitializeProcessor(KiProcessorBlock[v7], &v41);
      v7 = ResultLength + 1;
      ResultLength = v7;
    }
    while ( (unsigned int)v7 < ActiveProcessorCount );
  }
  IopErrorLogLock = 0LL;
  qword_140F8BFC8 = (__int64)&IopErrorLogListHead;
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
            &ResultLength) < 0
       || dword_1410078AC != 4
       || dword_1410078B4 == 4;
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
  qword_140F8C2C8 = (__int64)&IopDeadIrps;
  IopDeadIrps = (__int64)&IopDeadIrps;
  IopHardError.WorkerRoutine = (void (__fastcall *)(void *))IopHardErrorThread;
  qword_140F8C208 = (__int64)&qword_140F8C200;
  qword_140F8C200 = (__int64)&qword_140F8C200;
  stru_140F8C218.Header.WaitListHead.Blink = &stru_140F8C218.Header.WaitListHead;
  stru_140F8C218.Header.WaitListHead.Flink = &stru_140F8C218.Header.WaitListHead;
  IopTimerLock = 0LL;
  IopTimerDpc.TargetInfoAsUlong = 275;
  IopTimerDpc.DpcData = 0LL;
  IopTimerDpc.ProcessorHistory = 0LL;
  IopTimer.DueTime.QuadPart = 0LL;
  IopTimer.Period = 0;
  IopTimer.Processor = 0;
  IopHardError.Parameter = 0LL;
  IopHardError.List.Flink = 0LL;
  qword_140F8C210 = 0LL;
  stru_140F8C218.Header.Type = 5;
  stru_140F8C218.Header.Size = 8;
  stru_140F8C218.Header.SignalState = 0;
  stru_140F8C218.Limit = 0x7FFFFFFF;
  byte_140F8C238 = 0;
  if ( (unsigned int)(IopKeepAliveTimeMs - 1000) > 0x2328 )
    IopKeepAliveTimeMs = 5000;
  IopKeepAliveTracker.Parameter = 0LL;
  IopKeepAliveTracker.WorkerRoutine = (void (__fastcall *)(void *))IopKeepAliveWorker;
  IopKeepAliveTracker.List.Flink = 0LL;
  qword_140F8C188 = (__int64)&qword_140F8C180;
  qword_140F8C180 = &qword_140F8C180;
  qword_140F8C190 = 0LL;
  byte_140F8C1B8 = 0;
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
  Object = 0LL;
  ObReferenceObjectByHandle(KeyHandle, 0, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
  IopLinkTrackingServiceEvent = (__int64)Object;
  IopMountCompletionEvent.Header.WaitListHead.Blink = &IopMountCompletionEvent.Header.WaitListHead;
  IopMountCompletionEvent.Header.WaitListHead.Flink = &IopMountCompletionEvent.Header.WaitListHead;
  stru_140F8C120.Header.WaitListHead.Blink = &stru_140F8C120.Header.WaitListHead;
  stru_140F8C120.Header.WaitListHead.Flink = &stru_140F8C120.Header.WaitListHead;
  IopLinkTrackingPortObject.Header.WaitListHead.Blink = &IopLinkTrackingPortObject.Header.WaitListHead;
  IopLinkTrackingPortObject.Header.WaitListHead.Flink = &IopLinkTrackingPortObject.Header.WaitListHead;
  LOWORD(IopMountCompletionEvent.Header.Lock) = 0;
  IopMountCompletionEvent.Header.Size = 6;
  IopMountCompletionEvent.Header.SignalState = 0;
  LOWORD(stru_140F8C120.Header.Lock) = 0;
  stru_140F8C120.Header.Size = 6;
  stru_140F8C120.Header.SignalState = 0;
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
  if ( result >= 0 )
  {
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
    guard_dispatch_icall_no_overrides(v12);
    PnpMarkHalDeviceNode();
    if ( !(unsigned __int8)WMIInitialize(0LL, Context) )
    {
      LODWORD(IopInitFailCode) = 18;
      return -1073741823;
    }
    if ( v3 )
      WheaSelLogCheckPoint();
    IsStateSeparationDevModeEnabled = CmIsStateSeparationDevModeEnabled();
    LOBYTE(v14) = RtlIsStateSeparationEnabled();
    LOBYTE(v15) = IsStateSeparationDevModeEnabled;
    result = ExpInitializeStateSeparationPhase0(v14, v15);
    if ( (int)(result + 0x80000000) < 0 || result == -1073741637 )
    {
      result = AstInitialize();
      if ( result >= 0 )
      {
        EtwInitialize(1u, (__int64)Context);
        result = EtwRegister(&IoTraceProvider, (PETWENABLECALLBACK)IopEtwEnableCallback, 0LL, &IoTraceHandle);
        if ( result >= 0 )
        {
          result = McGenEventRegister_EtwRegister(
                     (const GUID *)IoMgrProvider,
                     v16,
                     IoMgrProvider_Context,
                     IoMgrProvider_Context);
          if ( result >= 0 )
          {
            result = MmRegisterEtwProvider();
            if ( result >= 0 )
            {
              EtwRegister(&DumpProvGuid, (PETWENABLECALLBACK)IopDumpTracingControlCallback, 0LL, &IopDumpEtwRegHandle);
              TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E06DC8, 0LL, 0LL);
              IopInitializeDumpPolicySettings(1);
              TlgRegisterAggregateProvider((__int64)&dword_140E06E48);
              SeAuditBootConfiguration(*(_QWORD *)(Context[30] + 2880LL));
              BootApplicationPersistentDataProcess(1);
              KdInitialize(2LL, 0LL, &KdpContext, v17);
              KeInitSystem(2LL);
              if ( !IopErrorLogDisabledThisBoot )
              {
                v19 = KeAcquireSpinLockRaiseToDpc(&IopErrorLogLock);
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
                KeReleaseSpinLock(&IopErrorLogLock, v19);
              }
              if ( v3 )
                WheaSelLogCheckPoint();
              if ( (Microsoft_Windows_Kernel_IOEnableBits & 0x10) != 0 )
                McTemplateK0q_EtwWriteTransfer(
                  IoMgrProvider_Context,
                  (const EVENT_DESCRIPTOR *)WheaInitializeStart,
                  v18,
                  0);
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
                IoStatusBlockRangeTable.CompareRoutine = (_RTL_GENERIC_COMPARE_RESULTS (__fastcall *)(_RTL_AVL_TABLE *, void *, void *))PiDqCompareAddresses;
                IoStatusBlockRangeTable.TableContext = 0LL;
                IoStatusBlockRangeTable.AllocateRoutine = (void *(__fastcall *)(_RTL_AVL_TABLE *, unsigned int))IopAllocateGenericTableEntry;
                IoStatusBlockRangeTable.FreeRoutine = (void (__fastcall *)(_RTL_AVL_TABLE *, void *))IopFreeGenericTableEntry;
                IoStatusBlockRangeTableLock.Event.Header.WaitListHead.Blink = &IoStatusBlockRangeTableLock.Event.Header.WaitListHead;
                IoStatusBlockRangeTableLock.Event.Header.WaitListHead.Flink = &IoStatusBlockRangeTableLock.Event.Header.WaitListHead;
                IoStatusBlockRangeTableLock.Count = 1;
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
                      (PVOID *)PnpEtwHandle,
                      &KMPnPEvt_DriverInitPhase_Start,
                      &PnpDriverInitPhaseActivityId,
                      0,
                      0LL);
                  LOWORD(ActiveConnectListLock.Header.Lock) = 1;
                  qword_140F8B7A8 = (__int64)&ActiveConnectList;
                  ActiveConnectList = (__int64)&ActiveConnectList;
                  ActiveConnectListLock.Header.WaitListHead.Blink = &ActiveConnectListLock.Header.WaitListHead;
                  ActiveConnectListLock.Header.WaitListHead.Flink = &ActiveConnectListLock.Header.WaitListHead;
                  ActiveConnectListLock.Header.Size = 6;
                  ActiveConnectListLock.Header.SignalState = 1;
                  result = IopInitializePassiveInterruptServices();
                  if ( result >= 0 )
                  {
                    SecureDump_PrepareForInit(v20, v32);
                    if ( ForceDumpDisabled || v32[0] || !AllowCrashDump )
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
                    IopInitializeIoRate(v22, v21);
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
                          v24,
                          inited);
                    }
                    v11 = IopInitializeBootDrivers(Context, &v39);
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
                      McTemplateK0_EtwWriteTransfer(
                        IoMgrProvider_Context,
                        (const EVENT_DESCRIPTOR *)LoadBootHotPatchesStart);
                    v11 = MmRegisterHotPatches(Context);
                    if ( (Microsoft_Windows_Kernel_IOEnableBits & 8) != 0 )
                      McTemplateK0_EtwWriteTransfer(
                        IoMgrProvider_Context,
                        (const EVENT_DESCRIPTOR *)LoadBootHotPatchesStop);
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
                      McTemplateK0_EtwWriteTransfer(
                        IoMgrProvider_Context,
                        (const EVENT_DESCRIPTOR *)CrashDumpInitializeStart);
                    WheaSelLogCheckPoint();
                    v25 = IopInitCrashDumpDuringSysInit(Context);
                    v27 = v25;
                    if ( (Microsoft_Windows_Kernel_IOEnableBits & 0x10) != 0 )
                      McTemplateK0q_EtwWriteTransfer(
                        IoMgrProvider_Context,
                        (const EVENT_DESCRIPTOR *)CrashDumpInitializeStop,
                        v26,
                        v25);
                    if ( v3 )
                      WheaSelLogCheckPoint();
                    if ( v27 < 0 )
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
                    v28 = NtGlobalFlag;
                    NtGlobalFlag |= 0x40000u;
                    SystemDlls = PsLocateSystemDlls();
                    NtGlobalFlag = v28;
                    v30 = SystemDlls;
                    if ( SystemDlls >= 0 )
                    {
                      MmInitializeImageViewExtension(1LL);
                      PfSnBeginBootPhase(0);
                      if ( !(unsigned __int8)IopReassignSystemRoot(Context, v38) )
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
                        Object = 0LL;
                        if ( ObReferenceObjectByHandle(KeyHandle, 0x80u, 0LL, 0, &Object, 0LL) >= 0 )
                        {
                          PpPagePathAssign((struct _FILE_OBJECT *)Object);
                          ObfDereferenceObjectWithTag(Object, 0x746C6644u);
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
                          v31,
                          1);
                      WheaInitialize(Context, 1LL);
                      if ( (Microsoft_Windows_Kernel_IOEnableBits & 0x10) != 0 )
                        McTemplateK0_EtwWriteTransfer(
                          IoMgrProvider_Context,
                          (const EVENT_DESCRIPTOR *)WheaInitializeStop);
                      if ( v3 )
                        WheaSelLogCheckPoint();
                      return 0;
                    }
                    else
                    {
                      HeadlessKernelAddLogEntry();
                      result = v30;
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
      }
      else
      {
        LODWORD(IopInitFailCode) = 17;
      }
    }
    else
    {
      LODWORD(IopInitFailCode) = 19;
    }
  }
  else
  {
    LODWORD(IopInitFailCode) = 15;
  }
  return result;
}
