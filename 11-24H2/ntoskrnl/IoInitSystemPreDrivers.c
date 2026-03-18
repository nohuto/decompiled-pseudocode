/*
 * XREFs of IoInitSystemPreDrivers @ 0x140C1AA0C
 * Callers:
 *     IoInitSystem @ 0x140C1A988 (IoInitSystem.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402105E0 (KeQueryActiveProcessorCountEx.c)
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     ExInitializeResourceLite2 @ 0x140365350 (ExInitializeResourceLite2.c)
 *     MiLogBadMapper @ 0x1403D0C38 (MiLogBadMapper.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     RtlGetNtProductType @ 0x14042F1D0 (RtlGetNtProductType.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x14045FB10 (ExInitializeNPagedLookasideListInternal.c)
 *     KeInitializeQueue @ 0x140475830 (KeInitializeQueue.c)
 *     HeadlessKernelAddLogEntry @ 0x1404AD660 (HeadlessKernelAddLogEntry.c)
 *     KeBugCheck @ 0x1404FB970 (KeBugCheck.c)
 *     McGenEventRegister_EtwRegister @ 0x14057D754 (McGenEventRegister_EtwRegister.c)
 *     HvlPhase2Initialize @ 0x140582B80 (HvlPhase2Initialize.c)
 *     VslpIumPhase4Initialize @ 0x14058EBE0 (VslpIumPhase4Initialize.c)
 *     IopInitDumpCapsuleSupport @ 0x140594838 (IopInitDumpCapsuleSupport.c)
 *     IopRemoveDumpCapsuleSupport @ 0x140594F18 (IopRemoveDumpCapsuleSupport.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x140595BC4 (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140595C08 (McTemplateK0q_EtwWriteTransfer.c)
 *     IoInitializeLiveDump @ 0x140597A4C (IoInitializeLiveDump.c)
 *     IopLiveDumpTraceDumpDisabledOnBoot @ 0x14059D950 (IopLiveDumpTraceDumpDisabledOnBoot.c)
 *     IopInitializeSystemVariableService @ 0x14059F250 (IopInitializeSystemVariableService.c)
 *     SecureDump_PrepareForInit @ 0x1405A217C (SecureDump_PrepareForInit.c)
 *     SecureDump_ProvisionCrashDumpKey @ 0x1405A23C8 (SecureDump_ProvisionCrashDumpKey.c)
 *     KeOptimizeSpecCtrlSettings @ 0x1405BD558 (KeOptimizeSpecCtrlSettings.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A6650 (ZwOpenKey.c)
 *     ZwOpenFile @ 0x1406A6A70 (ZwOpenFile.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     TlgRegisterAggregateProvider @ 0x1406FBADC (TlgRegisterAggregateProvider.c)
 *     FsRtlInitExtraCreateParameterLookasideList @ 0x14070A210 (FsRtlInitExtraCreateParameterLookasideList.c)
 *     IopDumpTraceForceDumpDisabled @ 0x140710E18 (IopDumpTraceForceDumpDisabled.c)
 *     IopInitializeBugCheckDriverData @ 0x140710F18 (IopInitializeBugCheckDriverData.c)
 *     IopInitializeDumpPolicySettings @ 0x140711124 (IopInitializeDumpPolicySettings.c)
 *     IopInitializeTriageDumpData @ 0x140711420 (IopInitializeTriageDumpData.c)
 *     IopTraceCrashDumpDisabledOnBoot @ 0x1407114FC (IopTraceCrashDumpDisabledOnBoot.c)
 *     IoInitializeProcessor @ 0x1407115FC (IoInitializeProcessor.c)
 *     IopQueryProcessorInitValues @ 0x140711860 (IopQueryProcessorInitValues.c)
 *     AstInitializeBloomFilter @ 0x140719A64 (AstInitializeBloomFilter.c)
 *     IopCreatePassiveInterruptRealtimeThreads @ 0x140722618 (IopCreatePassiveInterruptRealtimeThreads.c)
 *     IopQueryPassiveInterruptRegistryOptions @ 0x140722734 (IopQueryPassiveInterruptRegistryOptions.c)
 *     PpPagePathAssign @ 0x140722AA8 (PpPagePathAssign.c)
 *     PsLocateSystemDlls @ 0x140771B30 (PsLocateSystemDlls.c)
 *     SeAuditBootConfiguration @ 0x1407906C4 (SeAuditBootConfiguration.c)
 *     EtwInitialize @ 0x1407A6460 (EtwInitialize.c)
 *     EtwTraceLeapSecondDataParseFailure @ 0x1407A9690 (EtwTraceLeapSecondDataParseFailure.c)
 *     EtwTraceLeapSecondDataUpdate @ 0x1407A9770 (EtwTraceLeapSecondDataUpdate.c)
 *     ExRegisterHost @ 0x1407C071C (ExRegisterHost.c)
 *     WheaSelLogCheckPoint @ 0x1407C67B0 (WheaSelLogCheckPoint.c)
 *     CmIsStateSeparationDevModeEnabled @ 0x1407CF1F8 (CmIsStateSeparationDevModeEnabled.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     NtCreateEvent @ 0x140856FC0 (NtCreateEvent.c)
 *     RtlIsStateSeparationEnabled @ 0x14085F810 (RtlIsStateSeparationEnabled.c)
 *     ObCloseHandle @ 0x1408A2B10 (ObCloseHandle.c)
 *     PipSetDevNodeFlags @ 0x1409905B8 (PipSetDevNodeFlags.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140A57414 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     EtwRegister @ 0x140A574E0 (EtwRegister.c)
 *     EtwWriteStartScenario @ 0x140AA0670 (EtwWriteStartScenario.c)
 *     TlgRegisterAggregateProviderEx @ 0x140AC2794 (TlgRegisterAggregateProviderEx.c)
 *     NtQueryValueKey @ 0x140AE41C0 (NtQueryValueKey.c)
 *     PfSnBeginBootPhase @ 0x140B5B684 (PfSnBeginBootPhase.c)
 *     BapdRecordFirmwareBootStats @ 0x140B60CB0 (BapdRecordFirmwareBootStats.c)
 *     ExInitializeSystemLookasideList @ 0x140B6E3BC (ExInitializeSystemLookasideList.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     BootApplicationPersistentDataProcess @ 0x140BDE52C (BootApplicationPersistentDataProcess.c)
 *     VslRegisterIumPowerCallbacks @ 0x140C19BC4 (VslRegisterIumPowerCallbacks.c)
 *     IopCreateRootDirectories @ 0x140C1C4F8 (IopCreateRootDirectories.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140C1C8B4 (IopInitCrashDumpDuringSysInit.c)
 *     IopInitializeReserveIrps @ 0x140C1CBA0 (IopInitializeReserveIrps.c)
 *     IopReassignSystemRoot @ 0x140C1CFA0 (IopReassignSystemRoot.c)
 *     IopStoreArcInformation @ 0x140C1D194 (IopStoreArcInformation.c)
 *     IopInitializeSessionNotifications @ 0x140C1E018 (IopInitializeSessionNotifications.c)
 *     IopProtectSystemPartition @ 0x140C1E3BC (IopProtectSystemPartition.c)
 *     IopInitializeBootDrivers @ 0x140C1E4C4 (IopInitializeBootDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140C1F07C (IopInitializePlugPlayServices.c)
 *     PpLastGoodDoBootProcessing @ 0x140C239B4 (PpLastGoodDoBootProcessing.c)
 *     KseInitialize @ 0x140C2B3FC (KseInitialize.c)
 *     PoInitDriverServices @ 0x140C2CEDC (PoInitDriverServices.c)
 *     PsInitializeSyscallProviders @ 0x140C346F4 (PsInitializeSyscallProviders.c)
 *     WMIInitialize @ 0x140C3C798 (WMIInitialize.c)
 *     KitpInitAitSampleRate @ 0x140C43450 (KitpInitAitSampleRate.c)
 *     WheaInitialize @ 0x140C440FC (WheaInitialize.c)
 *     MmInitializeImageViewExtension @ 0x140C541D0 (MmInitializeImageViewExtension.c)
 *     MmRegisterHotPatches @ 0x140C56C7C (MmRegisterHotPatches.c)
 *     KeInitSystem @ 0x140C60CE0 (KeInitSystem.c)
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 *     SmInitSystem @ 0x140C6694C (SmInitSystem.c)
 */

int __fastcall IoInitSystemPreDrivers(__int64 a1)
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
  int Event; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 i; // rcx
  bool IsStateSeparationDevModeEnabled; // bl
  __int64 v18; // rcx
  __int64 v19; // rdx
  ULONG_PTR Pool2; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r9
  __int64 v25; // r8
  KIRQL v26; // bl
  void *v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rdx
  int inited; // eax
  __int64 v32; // r8
  int v33; // eax
  __int64 v34; // r8
  int v35; // ebx
  ULONG v36; // ebx
  int SystemDlls; // eax
  int v38; // r15d
  __int64 v39; // r8
  __int64 v40; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v42; // [rsp+58h] [rbp-B0h] BYREF
  PVOID v43; // [rsp+60h] [rbp-A8h] BYREF
  PVOID Object[2]; // [rsp+68h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v47[2]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v48; // [rsp+C8h] [rbp-40h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v50; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v51; // [rsp+F0h] [rbp-18h]
  __int64 v52; // [rsp+100h] [rbp-8h]

  v47[0] = 0x1000000LL;
  v48 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v47[1] = IoInitSystem_deviceNameBuffer;
  v2 = *(_QWORD *)(a1 + 240);
  DestinationString = 0LL;
  KeyHandle = 0LL;
  IoStatusBlock = 0LL;
  v3 = *(_DWORD *)(v2 + 132) & 0x80000;
  LOBYTE(v40) = 0;
  v50 = 0LL;
  v51 = 0LL;
  ExInitializeResourceLite2(&IopDriverLoadResource, -1);
  ExInitializeResourceLite2(&IopDatabaseResource, -1);
  ExInitializeResourceLite2(&IopSecurityResource, -1);
  ExInitializeResourceLite2(&IopCrashDumpLock, -1);
  ExInitializeResourceLite2(&IopLiveDumpLock, -1);
  IopFilesystemDatabaseShutdownRundown.Count = 0LL;
  qword_140F8C438 = (__int64)&IopDiskFileSystemQueueHead;
  IopDiskFileSystemQueueHead = (__int64)&IopDiskFileSystemQueueHead;
  qword_140F8C468 = (__int64)&IopCdRomFileSystemQueueHead;
  IopCdRomFileSystemQueueHead = (__int64)&IopCdRomFileSystemQueueHead;
  qword_140F8C458 = (__int64)&IopTapeFileSystemQueueHead;
  IopTapeFileSystemQueueHead = (__int64)&IopTapeFileSystemQueueHead;
  qword_140F8C408 = (__int64)&IopNetworkFileSystemQueueHead;
  IopNetworkFileSystemQueueHead = (__int64)&IopNetworkFileSystemQueueHead;
  qword_140F8C3F8 = (__int64)&IopBootDriverReinitializeQueueHead;
  IopBootDriverReinitializeQueueHead = (__int64)&IopBootDriverReinitializeQueueHead;
  qword_140F8C428 = (__int64)&IopDriverReinitializeQueueHead;
  IopDriverReinitializeQueueHead = (__int64)&IopDriverReinitializeQueueHead;
  qword_140F8C418 = (__int64)&IopNotifyShutdownQueueHead;
  IopNotifyShutdownQueueHead = &IopNotifyShutdownQueueHead;
  qword_140F8C638 = (__int64)&IopNotifyLastChanceShutdownQueueHead;
  IopNotifyLastChanceShutdownQueueHead = &IopNotifyLastChanceShutdownQueueHead;
  qword_140F8C628 = (__int64)&IopFsNotifyChangeQueueHead;
  IopFsNotifyChangeQueueHead = &IopFsNotifyChangeQueueHead;
  qword_140F8C658 = (__int64)&IopPerfIoTrackingListHead;
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
  IopQueryProcessorInitValues((__int64)&v50);
  ExInitializeSystemLookasideList(
    (__int64)&IopCompletionLookasideList,
    512,
    56,
    544236361,
    SWORD3(v50),
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopLargeIrpLookasideList,
    512,
    SDWORD1(v51),
    1819308617,
    SWORD2(v50),
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopMediumIrpLookasideList,
    512,
    v51,
    1836085833,
    SWORD1(v50),
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopSmallIrpLookasideList,
    512,
    SHIDWORD(v50),
    1936749129,
    v50,
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopMdlLookasideList,
    512,
    SDWORD2(v51),
    543974477,
    SWORD4(v50),
    (__int64)&ExSystemLookasideListHead);
  ExInitializeNPagedLookasideListInternal((__int64)&IopSafeCompletionLookasideList, 0LL, 0LL, 512, 32, 1934978889, 0, 0);
  FsRtlInitExtraCreateParameterLookasideList(&IopSymlinkInfoLookasideList, 0, 0x11EuLL, 0x69536F49u);
  ExInitializeNPagedLookasideListInternal((__int64)&IopOplockFoExtLookasideList, 0LL, 0LL, 512, 48, 1950576719, 0, 0);
  LODWORD(v42) = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( ActiveProcessorCount )
  {
    v7 = 0LL;
    do
    {
      IoInitializeProcessor(KiProcessorBlock[v7], &v50);
      v7 = (unsigned int)(v42 + 1);
      LODWORD(v42) = v7;
    }
    while ( (unsigned int)v7 < ActiveProcessorCount );
  }
  IopErrorLogLock = 0LL;
  qword_140F8C858 = (__int64)&IopErrorLogListHead;
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
    v10 = (int)NtQueryValueKey(
                 KeyHandle,
                 &DestinationString,
                 2u,
                 (unsigned __int64)IoInitSystem_valueBuffer,
                 0x20u,
                 &v42) < 0
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
  qword_140F8C6A8 = (__int64)&IopDeadIrps;
  IopDeadIrps = (__int64)&IopDeadIrps;
  IopHardError.WorkerRoutine = (void (__fastcall *)(void *))IopHardErrorThread;
  qword_140F8C9A8 = (__int64)&qword_140F8C9A0;
  qword_140F8C9A0 = (__int64)&qword_140F8C9A0;
  stru_140F8C9B8.Header.WaitListHead.Blink = &stru_140F8C9B8.Header.WaitListHead;
  stru_140F8C9B8.Header.WaitListHead.Flink = &stru_140F8C9B8.Header.WaitListHead;
  IopTimerLock = 0LL;
  IopTimerDpc.TargetInfoAsUlong = 275;
  IopTimerDpc.DpcData = 0LL;
  IopTimerDpc.ProcessorHistory = 0LL;
  IopTimer.DueTime.QuadPart = 0LL;
  IopTimer.Period = 0;
  IopTimer.Processor = 0;
  IopHardError.Parameter = 0LL;
  IopHardError.List.Flink = 0LL;
  qword_140F8C9B0 = 0LL;
  stru_140F8C9B8.Header.Type = 5;
  stru_140F8C9B8.Header.Size = 8;
  stru_140F8C9B8.Header.SignalState = 0;
  stru_140F8C9B8.Limit = 0x7FFFFFFF;
  byte_140F8C9D8 = 0;
  if ( (unsigned int)(IopKeepAliveTimeMs - 1000) > 0x2328 )
    IopKeepAliveTimeMs = 5000;
  IopKeepAliveTracker.Parameter = 0LL;
  IopKeepAliveTracker.WorkerRoutine = (void (__fastcall *)(void *))IopKeepAliveWorker;
  IopKeepAliveTracker.List.Flink = 0LL;
  qword_140F8C928 = (__int64)&qword_140F8C920;
  qword_140F8C920 = &qword_140F8C920;
  qword_140F8C930 = 0LL;
  byte_140F8C958 = 0;
  IopErrorLogSessionPending = 1;
  RtlInitUnicodeString(&DestinationString, L"\\Security\\TRKWKS_EVENT");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 528;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  Event = NtCreateEvent((unsigned __int64)&KeyHandle, 2031619LL, (int)&ObjectAttributes, NotificationEvent, 0);
  if ( Event < 0 )
  {
    HeadlessKernelAddLogEntry();
    LODWORD(IopInitFailCode) = 26;
    return Event;
  }
  Object[0] = 0LL;
  ObReferenceObjectByHandle(KeyHandle, 0, (POBJECT_TYPE)ExEventObjectType, 0, Object, 0LL);
  IopLinkTrackingServiceEvent = (__int64)Object[0];
  IopMountCompletionEvent.Header.WaitListHead.Blink = &IopMountCompletionEvent.Header.WaitListHead;
  IopMountCompletionEvent.Header.WaitListHead.Flink = &IopMountCompletionEvent.Header.WaitListHead;
  stru_140F8C8A0.Header.WaitListHead.Blink = &stru_140F8C8A0.Header.WaitListHead;
  stru_140F8C8A0.Header.WaitListHead.Flink = &stru_140F8C8A0.Header.WaitListHead;
  IopLinkTrackingPortObject.Header.WaitListHead.Blink = &IopLinkTrackingPortObject.Header.WaitListHead;
  IopLinkTrackingPortObject.Header.WaitListHead.Flink = &IopLinkTrackingPortObject.Header.WaitListHead;
  LOWORD(IopMountCompletionEvent.Header.Lock) = 0;
  IopMountCompletionEvent.Header.Size = 6;
  IopMountCompletionEvent.Header.SignalState = 0;
  LOWORD(stru_140F8C8A0.Header.Lock) = 0;
  stru_140F8C8A0.Header.Size = 6;
  stru_140F8C8A0.Header.SignalState = 0;
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
  Event = IopInitializePlugPlayServices(a1, 0LL);
  if ( Event < 0 )
  {
    HeadlessKernelAddLogEntry();
    LODWORD(IopInitFailCode) = 4;
    return Event;
  }
  if ( v3 )
    WheaSelLogCheckPoint();
  KseInitialize(a1, 0LL);
  PoInitDriverServices();
  guard_dispatch_icall_no_overrides(v13, v12, v14, v15);
  for ( i = *((_QWORD *)IopRootDeviceNode + 1); i; i = *(_QWORD *)i )
  {
    if ( (unsigned int)(*(_DWORD *)(i + 300) - 777) <= 1 && (*(_DWORD *)(i + 396) & 0x1000) == 0 )
    {
      IopInitHalDeviceNode = i;
      PipSetDevNodeFlags(i, 4u);
      break;
    }
  }
  if ( !(unsigned __int8)WMIInitialize(0LL, a1) )
  {
    LODWORD(IopInitFailCode) = 18;
    return -1073741823;
  }
  if ( v3 )
    WheaSelLogCheckPoint();
  IsStateSeparationDevModeEnabled = CmIsStateSeparationDevModeEnabled();
  LOBYTE(v18) = RtlIsStateSeparationEnabled();
  LOBYTE(v19) = IsStateSeparationDevModeEnabled;
  result = ExpInitializeStateSeparationPhase0(v18, v19);
  if ( (int)(result + 0x80000000) >= 0 && result != -1073741637 )
  {
    LODWORD(IopInitFailCode) = 19;
    return result;
  }
  LODWORD(v43) = 0;
  if ( RtlGetNtProductType(&v43) && (_DWORD)v43 == 1 )
  {
    AstIsActive = 1;
    Pool2 = ExAllocatePool2(0x100uLL, 0x1000uLL, 0x6E446341uLL);
    if ( !Pool2 )
    {
      LODWORD(IopInitFailCode) = 17;
      return -1073741801;
    }
    AstInitializeBloomFilter(v22, v21, Pool2);
  }
  else
  {
    AstIsActive = 0;
  }
  EtwInitialize(1u, a1);
  result = EtwRegister(&IoTraceProvider, (PETWENABLECALLBACK)IopEtwEnableCallback, 0LL, &IoTraceHandle);
  if ( result >= 0 )
  {
    result = McGenEventRegister_EtwRegister(
               (const GUID *)IoMgrProvider,
               v23,
               IoMgrProvider_Context,
               IoMgrProvider_Context);
    if ( result >= 0 )
    {
      result = TlgRegisterAggregateProviderEx((__int64)&unk_140E09FE8, (__int64)MiTracingEnabledCallback, 0LL);
      if ( result >= 0 )
      {
        *(_QWORD *)&qword_140E37518 = &unk_140E09FE8;
        if ( dword_140E301C0 )
          MiLogBadMapper(0LL, -1, 0LL);
        EtwRegister(&DumpProvGuid, (PETWENABLECALLBACK)IopDumpTracingControlCallback, 0LL, &IopDumpEtwRegHandle);
        TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E06DC8, 0LL, 0LL);
        IopInitializeDumpPolicySettings(1);
        TlgRegisterAggregateProvider((__int64)&dword_140E06E48);
        SeAuditBootConfiguration(*(_QWORD *)(*(_QWORD *)(a1 + 240) + 2880LL));
        BootApplicationPersistentDataProcess(1);
        KdInitialize(2LL, 0LL, &KdpContext, v24);
        KeInitSystem(2LL);
        if ( !IopErrorLogDisabledThisBoot )
        {
          v26 = KeAcquireSpinLockRaiseToDpc(&IopErrorLogLock);
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
          KeReleaseSpinLock(&IopErrorLogLock, v26);
        }
        if ( v3 )
          WheaSelLogCheckPoint();
        if ( (Microsoft_Windows_Kernel_IOEnableBits & 0x10) != 0 )
          McTemplateK0q_EtwWriteTransfer(IoMgrProvider_Context, (const EVENT_DESCRIPTOR *)WheaInitializeStart, v25, 0);
        WheaInitialize(a1, 0LL);
        if ( (Microsoft_Windows_Kernel_IOEnableBits & 0x10) != 0 )
          McTemplateK0_EtwWriteTransfer(IoMgrProvider_Context, (const EVENT_DESCRIPTOR *)WheaInitializeStop);
        if ( v3 )
          WheaSelLogCheckPoint();
        result = IopStoreArcInformation(a1);
        if ( result >= 0 )
        {
          Event = IopInitializePlugPlayServices(a1, 1LL);
          if ( Event < 0 )
          {
            HeadlessKernelAddLogEntry();
            LODWORD(IopInitFailCode) = 5;
            return Event;
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
          KitpInitAitSampleRate(a1);
          if ( EtwRegister(&MS_Windows_AIT_Provider, 0LL, 0LL, &KitEtwHandle) < 0 )
            KitEtwHandle = 0LL;
          KseInitialize(a1, 1LL);
          result = HvlPhase2Initialize(a1);
          if ( result >= 0 )
          {
            if ( v3 )
              WheaSelLogCheckPoint();
            KeOptimizeSpecCtrlSettings(0);
            PsInitializeSyscallProviders();
            VslpIumPhase4Initialize();
            BootApplicationPersistentDataProcess(2);
            BapdRecordFirmwareBootStats(a1);
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
            qword_140F8BF28 = (__int64)&ActiveConnectList;
            ActiveConnectList = (__int64)&ActiveConnectList;
            ActiveConnectListLock.Header.WaitListHead.Blink = &ActiveConnectListLock.Header.WaitListHead;
            ActiveConnectListLock.Header.WaitListHead.Flink = &ActiveConnectListLock.Header.WaitListHead;
            ActiveConnectListLock.Header.Size = 6;
            ActiveConnectListLock.Header.SignalState = 1;
            IopQueryPassiveInterruptRegistryOptions();
            qword_140F8BEA8 = (__int64)&PassiveInterruptList;
            PassiveInterruptList = (__int64)&PassiveInterruptList;
            PassiveInterruptListLock = 0LL;
            KeInitializeQueue(&PassiveInterruptRealtimeWorkQueue, (unsigned __int8)PassiveInterruptRealtimeWorkerCount);
            result = IopCreatePassiveInterruptRealtimeThreads(v27);
            if ( result >= 0 )
            {
              SecureDump_PrepareForInit(v28, &v40);
              if ( ForceDumpDisabled || (_BYTE)v40 || !AllowCrashDump )
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
              *(_QWORD *)&v50 = 65542LL;
              Object[1] = &IopIoRateHostTable;
              v51 = 0x200uLL;
              *((_QWORD *)&v50 + 1) = Object;
              LODWORD(Object[0]) = 1;
              v52 = 0LL;
              if ( (int)ExRegisterHost(&IopIoRateExtensionHost, v29, (unsigned __int16 *)&v50) < 0 )
                IopIoRateExtensionHost = 0LL;
              PsAltSystemCallRegistrationLock = 0LL;
              PsAltSystemCallHandlers[0] = (__int64)PsPicoAltSystemCallDispatch;
              IopReportBugCheckProgress = (__int64)HalSetEnvironmentVariableEx;
              if ( (*(_DWORD *)(a1 + 264) & 2) != 0 )
                IopReportBugCheckProgress = (__int64)VslReportBugCheckProgress;
              if ( v3 )
                WheaSelLogCheckPoint();
              if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 0x100000) != 0 )
              {
                if ( (Microsoft_Windows_Kernel_IOEnableBits & 0x10) != 0 )
                  McTemplateK0_EtwWriteTransfer(
                    IoMgrProvider_Context,
                    (const EVENT_DESCRIPTOR *)CrashDumpInitializeStart);
                LOBYTE(v30) = 1;
                inited = IopInitCrashDumpDuringSysInit(a1, v30);
                if ( (Microsoft_Windows_Kernel_IOEnableBits & 0x10) != 0 )
                  McTemplateK0q_EtwWriteTransfer(
                    IoMgrProvider_Context,
                    (const EVENT_DESCRIPTOR *)CrashDumpInitializeStop,
                    v32,
                    inited);
              }
              Event = IopInitializeBootDrivers(a1, &v48);
              if ( Event < 0 )
              {
                HeadlessKernelAddLogEntry();
                if ( !(_DWORD)IopInitFailCode )
                  LODWORD(IopInitFailCode) = 6;
                return Event;
              }
              if ( v3 )
                WheaSelLogCheckPoint();
              if ( (Microsoft_Windows_Kernel_IOEnableBits & 8) != 0 )
                McTemplateK0_EtwWriteTransfer(IoMgrProvider_Context, (const EVENT_DESCRIPTOR *)LoadBootHotPatchesStart);
              Event = MmRegisterHotPatches(a1);
              if ( (Microsoft_Windows_Kernel_IOEnableBits & 8) != 0 )
                McTemplateK0_EtwWriteTransfer(IoMgrProvider_Context, (const EVENT_DESCRIPTOR *)LoadBootHotPatchesStop);
              if ( Event < 0 )
              {
                LODWORD(IopInitFailCode) = 21;
                return Event;
              }
              if ( !(unsigned __int8)PoInitSystem(2LL, a1) )
                KeBugCheck(0xA0u);
              if ( v3 )
                WheaSelLogCheckPoint();
              SmInitSystem(1LL);
              EtwInitialize(2u, a1);
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
              v33 = IopInitCrashDumpDuringSysInit(a1, 0LL);
              v35 = v33;
              if ( (Microsoft_Windows_Kernel_IOEnableBits & 0x10) != 0 )
                McTemplateK0q_EtwWriteTransfer(
                  IoMgrProvider_Context,
                  (const EVENT_DESCRIPTOR *)CrashDumpInitializeStop,
                  v34,
                  v33);
              if ( v3 )
                WheaSelLogCheckPoint();
              if ( v35 < 0 )
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
              v36 = NtGlobalFlag;
              NtGlobalFlag |= 0x40000u;
              SystemDlls = PsLocateSystemDlls();
              NtGlobalFlag = v36;
              v38 = SystemDlls;
              if ( SystemDlls >= 0 )
              {
                MmInitializeImageViewExtension(1LL);
                PfSnBeginBootPhase(0);
                if ( !(unsigned __int8)IopReassignSystemRoot(a1, v47) )
                {
                  HeadlessKernelAddLogEntry();
                  LODWORD(IopInitFailCode) = 9;
                  return -1073741823;
                }
                if ( !(unsigned __int8)IopProtectSystemPartition(a1) )
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
                  v43 = 0LL;
                  if ( ObReferenceObjectByHandle(KeyHandle, 0x80u, 0LL, 0, &v43, 0LL) >= 0 )
                  {
                    PpPagePathAssign((struct _FILE_OBJECT *)v43);
                    ObfDereferenceObjectWithTag(v43, 0x746C6644u);
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
                    v39,
                    1);
                WheaInitialize(a1, 1LL);
                if ( (Microsoft_Windows_Kernel_IOEnableBits & 0x10) != 0 )
                  McTemplateK0_EtwWriteTransfer(IoMgrProvider_Context, (const EVENT_DESCRIPTOR *)WheaInitializeStop);
                if ( v3 )
                  WheaSelLogCheckPoint();
                return 0;
              }
              else
              {
                HeadlessKernelAddLogEntry();
                result = v38;
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
