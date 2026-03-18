/*
 * XREFs of DriverEntry @ 0x1400C64B0
 * Callers:
 *     GsDriverEntry @ 0x1400C6330 (GsDriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     memset @ 0x140070F40 (memset.c)
 *     AcpiInitializeExternalResourceTranslation @ 0x140096BFC (AcpiInitializeExternalResourceTranslation.c)
 *     WppInitKm @ 0x140097AA4 (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x1400986B8 (WppLoadTracingSupport.c)
 *     AcpiUseFlexibleOscHandoff @ 0x1400A0D78 (AcpiUseFlexibleOscHandoff.c)
 *     ArbLibraryInitialize @ 0x1400AB3E0 (ArbLibraryInitialize.c)
 *     ACPIInitReadRegistryKeys @ 0x1400C5868 (ACPIInitReadRegistryKeys.c)
 *     ACPIInitGetEmOverride @ 0x1400C5B8C (ACPIInitGetEmOverride.c)
 *     ACPIInitGetPlatformOverrides @ 0x1400C5E00 (ACPIInitGetPlatformOverrides.c)
 *     ACPIGlobalInitialize @ 0x1400C6008 (ACPIGlobalInitialize.c)
 *     ACPIInitRecordEmOverrides @ 0x1400C61A4 (ACPIInitRecordEmOverrides.c)
 *     AcpipInitPciBusStatePool @ 0x1400C62C8 (AcpipInitPciBusStatePool.c)
 *     AcpiDiagInitialize @ 0x1400C6398 (AcpiDiagInitialize.c)
 *     wil_InitializeFeatureStaging @ 0x1400C6ED0 (wil_InitializeFeatureStaging.c)
 *     AcpiDumpInit @ 0x1400C70A8 (AcpiDumpInit.c)
 *     ACPIInitializeWorker @ 0x1400C7E20 (ACPIInitializeWorker.c)
 *     Simulator_InitializeInterface @ 0x1400C81B0 (Simulator_InitializeInterface.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  NTSTATUS result; // eax
  __int64 v5; // rax
  ULONG ReturnLength; // [rsp+40h] [rbp-48h] BYREF
  __int128 SystemInformation; // [rsp+48h] [rbp-40h] BYREF

  WPP_MAIN_CB.Timer = (_IO_TIMER *)1;
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.DriverObject = (_DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_AcpiTraceGuid;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.DeviceExtension = 0LL;
  WPP_MAIN_CB.DeviceType = 0;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm((__int64)DriverObject, (__int64)RegistryPath);
  wil_InitializeFeatureStaging();
  AcpiDriverProxyExtension = 0LL;
  AcpiOverrideAttributes = 0;
  AcpiRetainDebugDeviceInD0 = 0;
  ACPIInitGetEmOverride();
  ACPIInitReadRegistryKeys();
  ACPIInitGetPlatformOverrides();
  result = ArbLibraryInitialize();
  if ( result >= 0 )
  {
    if ( (AcpiOverrideAttributes & 0x10000) != 0 )
    {
      AcpiLoadSimulatorTable = 1;
      Simulator_InitializeInterface();
    }
    AcpiRegistryPath.Length = 0;
    v5 = (unsigned __int16)(RegistryPath->Length + 2);
    AcpiDriverObject = DriverObject;
    AcpiRegistryPath.MaximumLength = v5;
    AcpiRegistryPath.Buffer = (wchar_t *)ExAllocatePool2(256LL, RegistryPath->Length + 2LL, 1299211073LL);
    if ( AcpiRegistryPath.Buffer )
      RtlCopyUnicodeString(&AcpiRegistryPath, RegistryPath);
    else
      AcpiRegistryPath.MaximumLength = 0;
    KeInitializeDpc(&AcpiPowerDpc, (PKDEFERRED_ROUTINE)ACPIDevicePowerDpc, 0LL);
    KeInitializeDpc(&AcpiBuildDpc, (PKDEFERRED_ROUTINE)ACPIBuildDeviceDpc, 0LL);
    KeInitializeDpc(&AcpiGpeDpc, (PKDEFERRED_ROUTINE)ACPIInterruptDispatchEventDpc, 0LL);
    KeInitializeTimer(&AcpiGpeTimer);
    KeInitializeSpinLock(&AcpiDeviceTreeLock);
    KeInitializeSpinLock(&AcpiPowerLock);
    KeInitializeSpinLock(&AcpiPowerQueueLock);
    KeInitializeSpinLock(&AcpiBuildQueueLock);
    KeInitializeSpinLock(&AcpiThermalLock);
    KeInitializeSpinLock(&AcpiThermalConstraintLock);
    KeInitializeSpinLock(&AcpiFanLock);
    KeInitializeSpinLock(&AcpiButtonLock);
    KeInitializeSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.ActiveThreadCount);
    KeInitializeSpinLock(&AcpiPm1EnableRegisterLock);
    KeInitializeSpinLock(&AcpiWatchdogLock);
    AcpiOpRegionLock.Count = 1;
    AcpiOpRegionLock.Owner = 0LL;
    AcpiOpRegionLock.Contention = 0;
    KeInitializeEvent(&AcpiOpRegionLock.Event, SynchronizationEvent, 0);
    AcpiProcessorStartupLock.Count = 1;
    AcpiProcessorStartupLock.Owner = 0LL;
    AcpiProcessorStartupLock.Contention = 0;
    KeInitializeEvent(&AcpiProcessorStartupLock.Event, SynchronizationEvent, 0);
    qword_14008B078 = (__int64)&AcpiPowerDelayedQueueList;
    AcpiPowerDelayedQueueList = (__int64)&AcpiPowerDelayedQueueList;
    qword_14008B088 = (__int64)&AcpiPowerQueueList;
    AcpiPowerQueueList = (__int64)&AcpiPowerQueueList;
    qword_14008B098 = (__int64)&AcpiPowerBlockedOnDependencyList;
    AcpiPowerBlockedOnDependencyList = (__int64)&AcpiPowerBlockedOnDependencyList;
    qword_14008B0A8 = (__int64)&AcpiPowerBlockedOnPhase3List;
    AcpiPowerBlockedOnPhase3List = (__int64)&AcpiPowerBlockedOnPhase3List;
    qword_14008B0B8 = (__int64)&AcpiPowerPhase0List;
    AcpiPowerPhase0List = &AcpiPowerPhase0List;
    qword_14008B0C8 = (__int64)&AcpiPowerPhase1List;
    AcpiPowerPhase1List = &AcpiPowerPhase1List;
    qword_14008B0D8 = (__int64)&AcpiPowerPhase2List;
    AcpiPowerPhase2List = (__int64)&AcpiPowerPhase2List;
    qword_14008B0E8 = (__int64)&AcpiPowerPhase3List;
    AcpiPowerPhase3List = (__int64)&AcpiPowerPhase3List;
    qword_14008B0F8 = (__int64)&AcpiPowerPhase4List;
    AcpiPowerPhase4List = &AcpiPowerPhase4List;
    qword_14008B108 = (__int64)&AcpiPowerPhase5List;
    AcpiPowerPhase5List = &AcpiPowerPhase5List;
    qword_14008B118 = (__int64)&AcpiPowerWaitWakeList;
    AcpiPowerWaitWakeList = (__int64)&AcpiPowerWaitWakeList;
    qword_140089BD8 = (__int64)&AcpiPowerWaitWakeInterruptList;
    AcpiPowerWaitWakeInterruptList = &AcpiPowerWaitWakeInterruptList;
    qword_14008B128 = (__int64)&AcpiPowerSynchronizeList;
    AcpiPowerSynchronizeList = (__int64)&AcpiPowerSynchronizeList;
    qword_14008B138 = (__int64)&AcpiPowerNodeList;
    AcpiPowerNodeList = (__int64)&AcpiPowerNodeList;
    qword_14008B148 = (__int64)&AcpiDevicesWhichMightNeedEnumerationList;
    AcpiDevicesWhichMightNeedEnumerationList = (__int64)&AcpiDevicesWhichMightNeedEnumerationList;
    qword_14008B398 = (__int64)&AcpiBuildQueueList;
    AcpiBuildQueueList = (__int64)&AcpiBuildQueueList;
    qword_14008B428 = (__int64)&AcpiBuildDeviceList;
    AcpiBuildDeviceList = (__int64)&AcpiBuildDeviceList;
    qword_14008B3A8 = (__int64)&AcpiBuildDelayedDependencyList;
    AcpiBuildDelayedDependencyList = &AcpiBuildDelayedDependencyList;
    qword_14008B3B8 = (__int64)&AcpiBuildOperationRegionList;
    AcpiBuildOperationRegionList = &AcpiBuildOperationRegionList;
    qword_14008B3C8 = (__int64)&AcpiBuildPowerResourceList;
    AcpiBuildPowerResourceList = &AcpiBuildPowerResourceList;
    qword_14008B3D8 = (__int64)&AcpiBuildRunMethodList;
    AcpiBuildRunMethodList = &AcpiBuildRunMethodList;
    qword_14008B3E8 = (__int64)&AcpiBuildSpecialSynchronizationList;
    AcpiBuildSpecialSynchronizationList = &AcpiBuildSpecialSynchronizationList;
    qword_14008B3F8 = (__int64)&AcpiBuildSynchronizationList;
    AcpiBuildSynchronizationList = &AcpiBuildSynchronizationList;
    qword_14008B408 = (__int64)&AcpiBuildThermalZoneList;
    AcpiBuildThermalZoneList = &AcpiBuildThermalZoneList;
    qword_14008B328 = (__int64)&AcpiUnresolvedEjectList;
    AcpiUnresolvedEjectList = (__int64)&AcpiUnresolvedEjectList;
    qword_140089C68 = (__int64)&AcpiThermalList;
    AcpiThermalList = (__int64)&AcpiThermalList;
    qword_140089C98 = (__int64)&AcpiThermalClientList;
    AcpiThermalClientList = (__int64)&AcpiThermalClientList;
    qword_140089C78 = (__int64)&AcpiThermalUnclaimedConstraintList;
    AcpiThermalUnclaimedConstraintList = (__int64)&AcpiThermalUnclaimedConstraintList;
    qword_140089CA8 = (__int64)&AcpiThermalZoneList;
    AcpiThermalZoneList = (__int64)&AcpiThermalZoneList;
    qword_14008AEE8 = (__int64)&AcpiFanList;
    AcpiFanList = (__int64)&AcpiFanList;
    qword_14008B318 = (__int64)&AcpiButtonList;
    AcpiButtonList = (__int64)&AcpiButtonList;
    qword_14008B658 = (__int64)&AcpiGetListEntry;
    AcpiGetListEntry = (__int64)&AcpiGetListEntry;
    qword_140089E88 = (__int64)&AcpiOpRegionHandlerList;
    AcpiOpRegionHandlerList = (__int64)&AcpiOpRegionHandlerList;
    qword_14008A298 = (__int64)&AcpiIgnoreResourceMapValidationList;
    AcpiIgnoreResourceMapValidationList = (__int64)&AcpiIgnoreResourceMapValidationList;
    qword_140089DD8 = (__int64)&AcpiProcessorContainerRootList;
    AcpiProcessorContainerRootList = (__int64)&AcpiProcessorContainerRootList;
    AcpiPowerDpcFlags = 0;
    AcpiPowerCurrentPagingPathTransitions = 0;
    AcpiBuildDpcFlags = 0;
    AcpiBuildFixedButtonEnumerated = 0;
    AcpiFatalOutstanding = 0;
    AcpiGpeDpcRunning = 0;
    AcpiGpeDpcScheduled = 0;
    AcpiGpeWorkDone = 0;
    AcpiRegisteredOpRegionMask = 0;
    BYTE1(WPP_MAIN_CB.Queue.ListEntry.Flink) = 0;
    AcpiUseFlexibleOscHandoffRegValue = AcpiUseFlexibleOscHandoff();
    ExInitializeNPagedLookasideList(&BuildRequestLookAsideList, 0LL, 0LL, 0x200u, 0x88uLL, 0x44706341u, 0x1Eu);
    ExInitializeNPagedLookasideList(&RequestLookAsideList, 0LL, 0LL, 0x200u, 0x108uLL, 0x50706341u, 0x3Eu);
    ExInitializeNPagedLookasideList(&DeviceExtensionLookAsideList, 0LL, 0LL, 0x200u, 0x468uLL, 0x44706341u, 0x40u);
    ExInitializeNPagedLookasideList(&RequestDependencyLookAsideList, 0LL, 0LL, 0x200u, 0x20uLL, 0x44706341u, 0x32u);
    ExInitializeNPagedLookasideList(&ObjectDataLookAsideList, 0LL, 0LL, 0x200u, 0x28uLL, 0x4F706341u, 0x66u);
    ExInitializeNPagedLookasideList(&XswContextLookAsideList, 0LL, 0LL, 0x200u, 0x30uLL, 0x50706341u, 0x10u);
    ExInitializeNPagedLookasideList(&WakeInterruptLookAsideList, 0LL, 0LL, 0x200u, 0x60uLL, 0x50706341u, 0x10u);
    ExInitializeNPagedLookasideList(&NotificationContextLookAsideList, 0LL, 0LL, 0x200u, 0x18uLL, 0x4D706341u, 0x10u);
    AcpipInitPciBusStatePool();
    ACPIInitializeWorker();
    DriverObject->DriverExtension->AddDevice = (int (__fastcall *)(_DRIVER_OBJECT *, _DEVICE_OBJECT *))ACPIDispatchAddDevice;
    memset64(DriverObject->MajorFunction, (unsigned __int64)ACPIDispatchIrp, 0x1CuLL);
    DriverObject->DriverUnload = (void (__fastcall *)(_DRIVER_OBJECT *))ACPIUnload;
    memset(&WPP_MAIN_CB.DeviceLock.Header.WaitListHead, 0, 0xE0uLL);
    LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink) = 224;
    qword_14008B5C8 = (__int64)ACPIFilterFastIoDetachCallback;
    DriverObject->FastIoDispatch = (_FAST_IO_DISPATCH *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead;
    AcpiDiagInitialize();
    ACPIInitRecordEmOverrides();
    ACPIGlobalInitialize();
    AcpiInitializeExternalResourceTranslation(DriverObject);
    qword_14008B168 = (__int64)&AcpiDeviceFirmwareLockHandlerList;
    AcpiDeviceFirmwareLockHandlerList = (__int64)&AcpiDeviceFirmwareLockHandlerList;
    KeInitializeSpinLock(&AcpiDeviceFirmwareLockGlobalLock);
    LOBYTE(WPP_MAIN_CB.Queue.ListEntry.Flink) = 0;
    IoRegisterBootDriverReinitialization(DriverObject, (PDRIVER_REINITIALIZE)BootCompleteCallback, &AcpiRegistryPath);
    ReturnLength = 0;
    SystemInformation = 0LL;
    if ( ZwQuerySystemInformation(SystemIsolatedUserModeInformation, &SystemInformation, 0x10u, &ReturnLength) >= 0 )
      BYTE1(WPP_MAIN_CB.Queue.ListEntry.Flink) = SystemInformation & 1;
    AcpiDumpInit();
    return 0;
  }
  return result;
}
