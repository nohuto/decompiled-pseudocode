/*
 * XREFs of DllInitialize @ 0x1400A3C90
 * Callers:
 *     <none>
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140056648 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     NvmeLoadAuthKeys @ 0x14006EE3C (NvmeLoadAuthKeys.c)
 *     RaidLoadATADeviceIdMappings @ 0x14006F48C (RaidLoadATADeviceIdMappings.c)
 *     RaidLoadEnclosureIdMappings @ 0x14006F6A0 (RaidLoadEnclosureIdMappings.c)
 *     StorpInitRegistryWatch @ 0x1400703B0 (StorpInitRegistryWatch.c)
 *     StorpUpdateDynamicRegistrySettings @ 0x1400704C0 (StorpUpdateDynamicRegistrySettings.c)
 *     StorpWatchForRegistryChanges @ 0x140070D70 (StorpWatchForRegistryChanges.c)
 *     RaDetectHeterogeneousCPU @ 0x140089D54 (RaDetectHeterogeneousCPU.c)
 *     Feature_EnableForwardedIo__private_IsEnabledPreCheck @ 0x1400A51F8 (Feature_EnableForwardedIo__private_IsEnabledPreCheck.c)
 *     Feature_FixFUAIssueForPerformance__private_IsEnabledDeviceUsageNoInline @ 0x1400A5260 (Feature_FixFUAIssueForPerformance__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_FixKcsanRacyAccessIssuesV2__private_IsEnabledDeviceUsageNoInline @ 0x1400A52B4 (Feature_FixKcsanRacyAccessIssuesV2__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_FixKcsanRacyAccessIssues__private_IsEnabledDeviceUsageNoInline @ 0x1400A5308 (Feature_FixKcsanRacyAccessIssues__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_FixPerformanceIssueWithTRIM__private_IsEnabledDeviceUsageNoInline @ 0x1400A535C (Feature_FixPerformanceIssueWithTRIM__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_NativeNVMeStackForGeClient__private_IsEnabledDeviceUsageNoInline @ 0x1400A53B0 (Feature_NativeNVMeStackForGeClient__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_NativeNVMeStackForGeServer__private_IsEnabledDeviceUsageNoInline @ 0x1400A5404 (Feature_NativeNVMeStackForGeServer__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_NativeNVMe__private_IsEnabledDeviceUsageNoInline @ 0x1400A5458 (Feature_Servicing_NativeNVMe__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_ScsiPassthroughRobustness__private_IsEnabledDeviceUsageNoInline @ 0x1400A54AC (Feature_Servicing_ScsiPassthroughRobustness__private_IsEnabledDeviceUsageNoInline.c)
 *     RaidpIsControlledUpdateOSEnvironment @ 0x1400A5500 (RaidpIsControlledUpdateOSEnvironment.c)
 *     RaidpIsControlledWinPEEnvironment @ 0x1400A56DC (RaidpIsControlledWinPEEnvironment.c)
 *     RaidpIsCurrentOsInstallationUpgrade @ 0x1400A5778 (RaidpIsCurrentOsInstallationUpgrade.c)
 *     RaidDecodeSmRegistryBlob @ 0x1400BE118 (RaidDecodeSmRegistryBlob.c)
 *     StorPortpInitializeDriverProxyInterfaces @ 0x1401193D4 (StorPortpInitializeDriverProxyInterfaces.c)
 *     GetCpuInformation @ 0x14012811C (GetCpuInformation.c)
 *     InitializeNumaNodeCompletionAffinity @ 0x1401287E8 (InitializeNumaNodeCompletionAffinity.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 *     StorpWheaAddErrorSource @ 0x140184C54 (StorpWheaAddErrorSource.c)
 *     SpVerifierInitialization @ 0x14018C0BC (SpVerifierInitialization.c)
 *     StorpRegisterShim @ 0x14018CD54 (StorpRegisterShim.c)
 *     StorKsrInitialize @ 0x140192A78 (StorKsrInitialize.c)
 *     wil_InitializeFeatureStaging @ 0x1401C3078 (wil_InitializeFeatureStaging.c)
 */

__int64 DllInitialize()
{
  int v0; // ebx
  bool v1; // zf
  char v2; // al
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int v7; // edi
  _QWORD *Pool; // rax
  void *v9; // rcx
  ULONG ResultLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  void *DestinationString[3]; // [rsp+40h] [rbp-C8h] BYREF
  int OutputBuffer; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v14; // [rsp+5Ch] [rbp-ACh] BYREF
  int v15; // [rsp+60h] [rbp-A8h] BYREF
  int v16; // [rsp+64h] [rbp-A4h] BYREF
  int v17; // [rsp+68h] [rbp-A0h] BYREF
  int v18; // [rsp+6Ch] [rbp-9Ch] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-98h] BYREF
  struct _UNICODE_STRING v20; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE SystemInformation[12]; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v22; // [rsp+C4h] [rbp-44h]
  unsigned int v23; // [rsp+CCh] [rbp-3Ch]
  struct _OSVERSIONINFOW VersionInformation; // [rsp+F8h] [rbp-10h] BYREF
  char v25; // [rsp+212h] [rbp+10Ah]
  _BYTE KeyValueInformation[4]; // [rsp+218h] [rbp+110h] BYREF
  int v27; // [rsp+21Ch] [rbp+114h]
  unsigned int Buffer[65]; // [rsp+224h] [rbp+11Ch] BYREF

  v0 = 0;
  memset(DestinationString, 0, sizeof(DestinationString));
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ResultLength[0] = 0;
  v20 = 0LL;
  memset_0(&VersionInformation.dwMajorVersion, 0, 0x118uLL);
  LOBYTE(OutputBuffer) = 0;
  memset_0(SystemInformation, 0, 0x40uLL);
  v17 = 0;
  v14 = 4;
  v15 = 0;
  v18 = 0;
  if ( ZwPowerInformation((POWER_INFORMATION_LEVEL)66, 0LL, 0, &OutputBuffer, 1u) >= 0 && (_BYTE)OutputBuffer )
    IsSystemAoAC = 1;
  if ( ZwQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) >= 0 )
  {
    HighestPhysicalAddress = (unsigned __int64)v23 << 12;
    PhysicalMemorySize = (unsigned __int64)v22 << 12;
  }
  g_HeterogenousCPU = RaDetectHeterogeneousCPU();
  g_InWinPE = RaidpIsControlledWinPEEnvironment();
  RaidpIsControlledUpdateOSEnvironment();
  g_OSisUpgrade = RaidpIsCurrentOsInstallationUpgrade();
  VersionInformation.dwOSVersionInfoSize = 284;
  RtlGetVersion(&VersionInformation);
  if ( (unsigned __int8)(v25 - 2) > 1u )
    g_OSisClient = 1;
  RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"SMR-HostManaged-Enabled");
  if ( (int)ZwQueryLicenseValue(&DestinationString[1], &v17, &v15, v14, &v14) >= 0 && v15 == 1 )
    IsSMREnabled = 1;
  if ( !_InterlockedExchangeAdd(&NumDllInitialize, 1u) )
  {
    StorpRegisterShim();
    qword_140171458 = (__int64)&EnclosureIdList;
    EnclosureIdList = &EnclosureIdList;
    ExInitializeResourceLite(&EnclosureIdListLock);
    RaidLoadEnclosureIdMappings();
    WPP_MAIN_CB.DeviceObjectExtension = (_DEVOBJ_EXTENSION *)&WPP_MAIN_CB.SectorSize;
    *(_QWORD *)&WPP_MAIN_CB.SectorSize = &WPP_MAIN_CB.SectorSize;
    ExInitializeResourceLite((PERESOURCE)&WPP_MAIN_CB.DeviceExtension);
    RaidLoadATADeviceIdMappings();
    qword_140171168 = (__int64)&NvmeIceList;
    NvmeIceList = &NvmeIceList;
    ExInitializeResourceLite(&NvmeIceListLock);
    RtlInitializeGenericTable(
      &NvmeAuthKeyTable,
      (PRTL_GENERIC_COMPARE_ROUTINE)NvmeAuthKeyTableCompareRoutine,
      (PRTL_GENERIC_ALLOCATE_ROUTINE)NvmeAuthKeyTableAllocateRoutine,
      (PRTL_GENERIC_FREE_ROUTINE)NvmeAuthKeyTableFreeRoutine,
      0LL);
    ExInitializeResourceLite((PERESOURCE)&WPP_MAIN_CB.DeviceQueue.32);
    NvmeLoadAuthKeys();
    StorpWheaAddErrorSource();
    StorKsrInitialize();
    wil_InitializeFeatureStaging();
    if ( (unsigned int)Feature_NativeNVMeStackForGeServer__private_IsEnabledDeviceUsageNoInline()
      || (v1 = (unsigned int)Feature_Servicing_NativeNVMe__private_IsEnabledDeviceUsageNoInline() == 0, v2 = 0, !v1) )
    {
      v2 = 1;
    }
    GeNativeNVMeEnabledForServer = v2;
    GeNativeNVMeEnabledForClient = (unsigned int)Feature_NativeNVMeStackForGeClient__private_IsEnabledDeviceUsageNoInline() != 0;
    FeatureServicingScsiPassthroughRobustness = (unsigned int)Feature_Servicing_ScsiPassthroughRobustness__private_IsEnabledDeviceUsageNoInline() != 0;
    FeatureFixKcsanRacyAccess = (unsigned int)Feature_FixKcsanRacyAccessIssues__private_IsEnabledDeviceUsageNoInline() != 0;
    FeatureFixKcsanRacyAccessV2 = (unsigned int)Feature_FixKcsanRacyAccessIssuesV2__private_IsEnabledDeviceUsageNoInline() != 0;
    FeatureFixFUAForReadIoPerf = (unsigned int)Feature_FixFUAIssueForPerformance__private_IsEnabledDeviceUsageNoInline() != 0;
    FeatureFixTRIMAddSCSIPassthrough = (unsigned int)Feature_FixPerformanceIssueWithTRIM__private_IsEnabledDeviceUsageNoInline() != 0;
    if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
      KeInitializeSpinLock(&NvmeIceListSpinLock);
  }
  g_MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  g_RecommendedSharedDataAlignment = KeGetRecommendedSharedDataAlignment();
  if ( FeatureFixTRIMAddSCSIPassthrough )
  {
    KeQueryPerformanceCounter(&QpcFrequency);
    if ( QpcFrequency.QuadPart != 10000000 )
      IsQpcInUnitOf100Ns = 0;
  }
  RtlInitUnicodeString(&v20, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\StorPort\\");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &v20;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(DestinationString, 0x20019u, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"DpcCompletionLimit");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v27 == 4
      && ResultLength[0] >= 4 )
    {
      DpcCompletionLimit = Buffer[0];
      if ( !Buffer[0] )
        DpcCompletionLimit = -1;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"HiberFileHybridPriority");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v27 == 3 )
    {
      HiberFileHybridPriority = RaidDecodeSmRegistryBlob((PUCHAR)Buffer);
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"HmbAllocationPolicy");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v27 == 4 )
    {
      HmbAllocationPolicy = Buffer[0];
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"HmbMaximumSizeInBytes");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) < 0 )
    {
      LODWORD(v3) = 0x4000000;
      v4 = (unsigned __int64)PhysicalMemorySize >> 6;
      if ( (unsigned __int64)PhysicalMemorySize >> 6 >= 0x4000000 )
      {
        LODWORD(v3) = 0x40000000;
        if ( v4 <= 0x40000000 )
        {
          v3 = (unsigned __int64)PhysicalMemorySize >> 6;
          if ( (v4 & 0xFFF) != 0 )
            LODWORD(v3) = v4 & 0x7FFFF000;
        }
      }
    }
    else
    {
      if ( v27 != 4 )
        goto LABEL_42;
      LODWORD(v3) = 0x40000000;
      HmbMaximumSize = Buffer[0];
      if ( Buffer[0] <= 0x40000000 )
      {
        if ( (Buffer[0] & 0xFFF) != 0 )
          HmbMaximumSize = Buffer[0] & 0x7FFFF000;
        goto LABEL_42;
      }
    }
    HmbMaximumSize = v3;
LABEL_42:
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"MiniportBugActionPolicy");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v27 == 4 )
    {
      MiniportBugActionPolicy = Buffer[0];
      if ( Buffer[0] >= 3 )
        MiniportBugActionPolicy = 1;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"AsyncStart");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v27 == 4 )
    {
      StorageAsyncStart = Buffer[0] != 0;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"TelemetryPerformanceHighResolutionTimer");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v27 == 4
      && ResultLength[0] >= 4 )
    {
      g_StorpTraceLoggingPerformanceHighResolutionTimer = Buffer[0];
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"TelemetryPerformanceEnabled");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v27 == 4
      && ResultLength[0] >= 4 )
    {
      g_StorpTraceLoggingPerformanceEnabled = Buffer[0];
    }
    if ( g_StorpTraceLoggingPerformanceEnabled )
    {
      RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"TelemetryIoSizeDistributionEnabled");
      if ( ZwQueryValueKey(
             DestinationString[0],
             (PUNICODE_STRING)&DestinationString[1],
             KeyValuePartialInformation,
             KeyValueInformation,
             0x110u,
             ResultLength) >= 0
        && v27 == 4
        && ResultLength[0] >= 4 )
      {
        g_StorpTraceLoggingIoSizeDistributionEnabled = Buffer[0];
      }
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"TelemetryPerformancePeriod");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v27 == 4
      && ResultLength[0] >= 4 )
    {
      v5 = Buffer[0];
      if ( Buffer[0] )
      {
        if ( Buffer[0] >= 0x18uLL )
          v5 = 24LL;
        g_StorpTraceLoggingPerformancePeriod = 36000000000LL * v5;
      }
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"TelemetryErrorDataEnabled");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v27 == 4
      && ResultLength[0] >= 4 )
    {
      g_StorpTraceLoggingErrorDataEnabled = Buffer[0];
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"TelemetryDeviceHealthEnabled");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v27 == 4
      && ResultLength[0] >= 4 )
    {
      g_StorpTraceLoggingDeviceHealthEnabled = Buffer[0];
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"TelemetryDeviceHealthPeriod");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v27 == 4
      && ResultLength[0] >= 4 )
    {
      v6 = Buffer[0];
      if ( Buffer[0] )
      {
        if ( Buffer[0] >= 0x18uLL )
          v6 = 24LL;
        g_StorpTraceLoggingDeviceHealthTick = v6;
        g_StorpTraceLoggingDeviceHealthPeriod = 36000000000LL * v6;
      }
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"TelemetryCriticalEventEnabled");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v27 == 4
      && ResultLength[0] >= 4 )
    {
      g_StorpTraceLoggingCriticalEventEnabled = Buffer[0];
      g_StorpTraceLoggingCriticalEventEnabledSetByRegistry = 1;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"TelemetryCriticalEventMaximum");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v27 == 4
      && ResultLength[0] >= 4 )
    {
      g_StorpTraceLoggingCriticalEventMaximum = Buffer[0];
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"ExtendedDSMCommandsSupported");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v27 == 4
      && ResultLength[0] >= 4 )
    {
      ExtendedDSMCommandsSupported = Buffer[0] != 0;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"FUAEnable");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v27 == 4
      && ResultLength[0] >= 4 )
    {
      FUAEnabled = Buffer[0] != 0;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"ForwardedIo");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v27 == 4
      && ResultLength[0] >= 4 )
    {
      Feature_EnableForwardedIo__private_IsEnabledPreCheck();
      ForwardedIoEnabled = Buffer[0] != 0;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"QoSFlags");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v27 == 4
      && ResultLength[0] >= 4 )
    {
      g_QosFlags = Buffer[0];
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"MaxPreAllocatedIoResourceCount");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v27 == 4
      && ResultLength[0] >= 4
      && Buffer[0] )
    {
      StorPreAllocatedMaxIoResourceCount = Buffer[0];
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"DFxEnable");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v27 == 4
      && ResultLength[0] >= 4 )
    {
      DFxEnabled = Buffer[0] != 0;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"OverrideDeviceUniqueIDCapability");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v27 == 4
      && ResultLength[0] >= 4 )
    {
      OverrideDeviceUniqueIDCapability = Buffer[0] != 0;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"DisableRuntimePower");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v27 == 4
      && ResultLength[0] >= 4 )
    {
      RuntimePowerDisabled = Buffer[0] != 0;
    }
    g_ProcessorCountPerGateway = 8;
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"ProcsPerGateway");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v27 == 4
      && ResultLength[0] >= 4 )
    {
      g_ProcessorCountPerGateway = Buffer[0];
      if ( Buffer[0] >= 4 )
      {
        if ( Buffer[0] > 0x10 )
          g_ProcessorCountPerGateway = 16;
      }
      else
      {
        g_ProcessorCountPerGateway = 4;
      }
    }
    if ( g_ProcessorCountPerGateway > (unsigned int)g_MaximumProcessorCount )
      g_ProcessorCountPerGateway = g_MaximumProcessorCount;
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"MFNDEnable");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v27 == 4
      && ResultLength[0] >= 4 )
    {
      MFNDEnabled = Buffer[0] != 0;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"CreateControlObject");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v27 == 4
      && ResultLength[0] >= 4 )
    {
      CreateControlObject = Buffer[0] != 0;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"DisableIEEE1667");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v27 == 4
      && ResultLength[0] >= 4 )
    {
      DisableIEEE1667 = Buffer[0] != 0;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"EnableNativeTcg");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v27 == 4
      && ResultLength[0] >= 4 )
    {
      EnableNativeTcg = Buffer[0] != 0;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"EnableRegistryWatch");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v27 == 4
      && ResultLength[0] >= 4 )
    {
      EnableRegistryWatch = Buffer[0] != 0;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"KsrPowerDownOptimizationEnabled");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v27 == 4
      && ResultLength[0] >= 4 )
    {
      KsrPowerDownOptimizationEnabled = Buffer[0] != 0;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"EnableNVMeICE");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v27 == 4
      && ResultLength[0] >= 4 )
    {
      v7 = Buffer[0];
      EnableNVMeICE = Buffer[0] != 0;
      if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
        EnableNVMeICEV2 = v7 >= 2;
    }
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"DisableNativeNVMeStack");
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           ResultLength) >= 0
      && v27 == 4
      && ResultLength[0] >= 4 )
    {
      DisableNativeNVMeStack = Buffer[0] != 0;
    }
    StorpUpdateDynamicRegistrySettings(DestinationString[0]);
    if ( EnableRegistryWatch
      && (Pool = (_QWORD *)RaidAllocatePool(64LL, 192LL, 1465016658LL, 0LL), (RegWatchContext = Pool) != 0LL) )
    {
      *Pool = DestinationString[0];
      Pool[1] = StorpUpdateDynamicRegistrySettings;
      StorpInitRegistryWatch((__int64)DestinationString[0], (__int64)Pool);
      StorpWatchForRegistryChanges((__int64)RegWatchContext);
      v9 = 0LL;
      DestinationString[0] = 0LL;
    }
    else
    {
      v9 = DestinationString[0];
    }
    if ( v9 )
      ZwClose(v9);
  }
  StorPortpInitializeDriverProxyInterfaces();
  if ( SpVrfyLevel != -1 )
  {
    RtlInitUnicodeString(
      (PUNICODE_STRING)&DestinationString[1],
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\StorPort\\Verifier");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&DestinationString[1];
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(DestinationString, 0x20019u, &ObjectAttributes) >= 0 )
    {
      RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"VerifyLevel");
      if ( ZwQueryValueKey(
             DestinationString[0],
             (PUNICODE_STRING)&DestinationString[1],
             KeyValuePartialInformation,
             KeyValueInformation,
             0x110u,
             ResultLength) >= 0
        && v27 == 4
        && ResultLength[0] >= 4 )
      {
        SpVrfyLevel |= Buffer[0];
        if ( SpVrfyLevel != -1 && !StorPortVerifierInitialized && (unsigned __int8)SpVerifierInitialization() )
        {
          StorPortVerifierInitialized = 1;
          RaidVerifierEnabled = 1;
        }
      }
      ZwClose(DestinationString[0]);
    }
    v16 = 1;
    EmClientQueryRuleState(&GUID_STORAGE_DEVICE_D3_ALLOWED_RULE, &v16);
    if ( v16 == 2 && g_OSisClient )
      StorageD3AllowedOnCurrentPlatform = 1;
    RtlInitUnicodeString(
      (PUNICODE_STRING)&DestinationString[1],
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Storage");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&DestinationString[1];
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(DestinationString, 0x20019u, &ObjectAttributes) >= 0 )
    {
      RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"StorageD3InModernStandby");
      if ( ZwQueryValueKey(
             DestinationString[0],
             (PUNICODE_STRING)&DestinationString[1],
             KeyValuePartialInformation,
             KeyValueInformation,
             0x110u,
             ResultLength) >= 0
        && v27 == 4
        && ResultLength[0] >= 4 )
      {
        LOBYTE(v0) = Buffer[0] != 0;
        StorageD3RegistryState = v0;
      }
      ZwClose(DestinationString[0]);
    }
    ExQueryTimerResolution(&StorMaximumTimeInterval, &StorMinimumTimeInterval, &v18);
    GetCpuInformation();
    InitializeNumaNodeCompletionAffinity();
  }
  return 0LL;
}
