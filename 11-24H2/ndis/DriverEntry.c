/*
 * XREFs of DriverEntry @ 0x14018B234
 * Callers:
 *     GsDriverEntry @ 0x14018B010 (GsDriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400075C0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     NdisAllocatePacketPoolEx @ 0x1400421F0 (NdisAllocatePacketPoolEx.c)
 *     WPP_RECORDER_SF_D @ 0x1400527F0 (WPP_RECORDER_SF_D_ea_1400527F0.c)
 *     NdisAllocateNetBufferPool @ 0x140055870 (NdisAllocateNetBufferPool.c)
 *     NdisAllocateNetBufferListPool @ 0x140055B30 (NdisAllocateNetBufferListPool.c)
 *     ?ndisVerifierInitialization@@YAEXZ @ 0x14008C580 (-ndisVerifierInitialization@@YAEXZ.c)
 *     Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline @ 0x140092F58 (Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_NVBugFixes2507__private_IsEnabledDeviceUsageNoInline @ 0x14009593C (Feature_NVBugFixes2507__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_NdisDetectCircularNblChain__private_IsEnabledDeviceUsageNoInline @ 0x140095990 (Feature_NdisDetectCircularNblChain__private_IsEnabledDeviceUsageNoInline.c)
 *     McGenEventRegister_EtwRegister @ 0x1400959E4 (McGenEventRegister_EtwRegister.c)
 *     NdisDllInitialize @ 0x140095A10 (NdisDllInitialize.c)
 *     ?ndisInitializeGlobalTriageData@@YAXXZ @ 0x140098B08 (-ndisInitializeGlobalTriageData@@YAXXZ.c)
 *     ?ndisReadRegistry@@YAXXZ @ 0x140098C18 (-ndisReadRegistry@@YAXXZ.c)
 *     ?ndisRegisterPDCounterSets@@YAXXZ @ 0x1400A47B0 (-ndisRegisterPDCounterSets@@YAXXZ.c)
 *     ?ndisStackExpansionInitializeSubsystem@@YAJXZ @ 0x1400C4A60 (-ndisStackExpansionInitializeSubsystem@@YAJXZ.c)
 *     ?ndisWppInitTracingEx@@YAXPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@@Z @ 0x1400C547C (-ndisWppInitTracingEx@@YAXPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisInitializeNblPoolGlobal@@YAXXZ @ 0x1400C6F28 (-ndisInitializeNblPoolGlobal@@YAXXZ.c)
 *     ?ndisInitializeDmaSubsystem@@YAXXZ @ 0x1400DA01C (-ndisInitializeDmaSubsystem@@YAXXZ.c)
 *     ?ndisDoesSystemSupportSriov@@YAXXZ @ 0x1400DD68C (-ndisDoesSystemSupportSriov@@YAXXZ.c)
 *     ?ndisInitializeThreadMonitorSubsystem@@YAJXZ @ 0x1400E4648 (-ndisInitializeThreadMonitorSubsystem@@YAJXZ.c)
 *     InitializeTelemetryAssertsKMByDriverObject @ 0x1400E4DB8 (InitializeTelemetryAssertsKMByDriverObject.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?InitializeBase@?$KWaitEventBase@U?$integral_constant@W4_EVENT_TYPE@@$0A@@wistd@@@@IEAAXXZ @ 0x140136040 (-InitializeBase@-$KWaitEventBase@U-$integral_constant@W4_EVENT_TYPE@@$0A@@wistd@@@@IEAAXXZ.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140137350 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     ?ndisReinitializeHistograms@@YAJXZ @ 0x140138CD8 (-ndisReinitializeHistograms@@YAJXZ.c)
 *     ?ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z @ 0x1401394B4 (-ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z.c)
 *     ?Initialize@KPushLockManualConstruct@@QEAAXXZ @ 0x140142708 (-Initialize@KPushLockManualConstruct@@QEAAXXZ.c)
 *     ?ndisInitializeStackTraces@@YAXXZ @ 0x14014A27C (-ndisInitializeStackTraces@@YAXXZ.c)
 *     ??0KLoader@@QEAA@XZ @ 0x14014AC08 (--0KLoader@@QEAA@XZ.c)
 *     TlgRegisterAggregateProviderEx @ 0x14014F3D8 (TlgRegisterAggregateProviderEx.c)
 *     ??0KnobNamespace@@QEAA@PEAU_DRIVER_OBJECT@@PEAU_CONFIG_KNOB_NAMESPACE@@@Z @ 0x140166400 (--0KnobNamespace@@QEAA@PEAU_DRIVER_OBJECT@@PEAU_CONFIG_KNOB_NAMESPACE@@@Z.c)
 *     ?ndisAllocateEventLog@@YAPEAUNDIS_EVENT_LOG_HANDLE__@@W4_NDIS_EVENT_LOG_SIZE@@G@Z @ 0x14016D4A0 (-ndisAllocateEventLog@@YAPEAUNDIS_EVENT_LOG_HANDLE__@@W4_NDIS_EVENT_LOG_SIZE@@G@Z.c)
 *     ?ndisAoAcInitializeSubsystem@@YAJXZ @ 0x14018B078 (-ndisAoAcInitializeSubsystem@@YAJXZ.c)
 *     wil_InitializeFeatureStaging @ 0x14018BC94 (wil_InitializeFeatureStaging.c)
 *     ?ndisMiniportFdoInitializeSubsystem@@YAJXZ @ 0x14018C020 (-ndisMiniportFdoInitializeSubsystem@@YAJXZ.c)
 *     ?ndisNblTrackerInitialize@@YAXXZ @ 0x14018C098 (-ndisNblTrackerInitialize@@YAXXZ.c)
 *     ?ndisCpuInitializeSubsystemPhase2@@YAJXZ @ 0x14018C23C (-ndisCpuInitializeSubsystemPhase2@@YAJXZ.c)
 *     ?ndisFdoInitializeSubsystem@@YAJXZ @ 0x14018CA40 (-ndisFdoInitializeSubsystem@@YAJXZ.c)
 *     ?ndisPDInitialize@@YAJXZ @ 0x14018CBA0 (-ndisPDInitialize@@YAJXZ.c)
 *     ?ndisCreateAcl@@YAPEAU_ACL@@EEEEEEK@Z @ 0x14018D1BC (-ndisCreateAcl@@YAPEAU_ACL@@EEEEEEK@Z.c)
 *     ?ndisCreateGenericSD@@YAJPEAU_ACL@@PEAD@Z @ 0x14018D4C8 (-ndisCreateGenericSD@@YAJPEAU_ACL@@PEAD@Z.c)
 *     ?ndisPcwInitialize@@YAJXZ @ 0x14018D5C4 (-ndisPcwInitialize@@YAJXZ.c)
 *     ?ndisInitializePerProcRcvTracker@@YAXXZ @ 0x14018D72C (-ndisInitializePerProcRcvTracker@@YAXXZ.c)
 *     ?ndisInitializePeriodicReceives@@YAHXZ @ 0x14018D7A4 (-ndisInitializePeriodicReceives@@YAHXZ.c)
 *     ?ndisVBusNmrInitializeClient@@YAJXZ @ 0x14018DC34 (-ndisVBusNmrInitializeClient@@YAJXZ.c)
 *     ?ndisBindInitialize@@YAJXZ @ 0x14018DD14 (-ndisBindInitialize@@YAJXZ.c)
 *     ?ndisMpHookNmrInitializeClient@@YAJXZ @ 0x14018DFD8 (-ndisMpHookNmrInitializeClient@@YAJXZ.c)
 *     ?ndisIfInitializePhase1@@YAJXZ @ 0x14018E8A4 (-ndisIfInitializePhase1@@YAJXZ.c)
 *     ?ndisLwmInitializeSubsystem@@YAJXZ @ 0x14018E9AC (-ndisLwmInitializeSubsystem@@YAJXZ.c)
 *     ?ndisKLoaderCreateControlDeviceObject@@YAPEAU_DEVICE_OBJECT@@PEAU_DRIVER_OBJECT@@@Z @ 0x14018EA84 (-ndisKLoaderCreateControlDeviceObject@@YAPEAU_DEVICE_OBJECT@@PEAU_DRIVER_OBJECT@@@Z.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  int v6; // eax
  int v7; // edx
  NTSTATUS v8; // ebx
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned __int8 (*v10)(void *, const struct KnobDescriptor *, unsigned __int64 *); // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int8 (*v13)(void *, const struct KnobDescriptor *, unsigned __int64 *); // r8
  char *v14; // rbx
  __int64 v15; // rsi
  NTSTATUS v16; // eax
  int v17; // eax
  int v18; // edx
  SIZE_T v19; // rax
  SIZE_T v20; // rax
  unsigned __int8 v21; // dl
  unsigned __int8 v22; // cl
  unsigned __int8 v23; // r8
  unsigned __int8 v24; // r9
  unsigned __int8 v25; // dl
  unsigned __int8 v26; // cl
  unsigned __int8 v27; // r8
  unsigned __int8 v28; // r9
  unsigned __int8 v29; // dl
  unsigned __int8 v30; // cl
  unsigned __int8 v31; // r8
  unsigned __int8 v32; // r9
  unsigned __int8 v33; // dl
  unsigned __int8 v34; // cl
  unsigned __int8 v35; // r8
  unsigned __int8 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  unsigned __int8 (*v39)(void *, const struct KnobDescriptor *, unsigned __int64 *); // r8
  struct _DRIVER_OBJECT *v40; // rcx
  unsigned __int8 (*v41)(void *, const struct KnobDescriptor *, unsigned __int64 *); // r8
  unsigned __int8 (*v42)(void *, const struct KnobDescriptor *, unsigned __int64 *); // r8
  void *v43; // rcx
  unsigned __int8 Handle; // [rsp+20h] [rbp-E0h]
  unsigned __int8 Handlea; // [rsp+20h] [rbp-E0h]
  unsigned __int8 Handleb; // [rsp+20h] [rbp-E0h]
  unsigned __int8 Handlec; // [rsp+20h] [rbp-E0h]
  int Status; // [rsp+40h] [rbp-C0h] BYREF
  struct _NET_BUFFER_LIST_POOL_PARAMETERS Parameters; // [rsp+48h] [rbp-B8h] BYREF
  struct _NET_BUFFER_POOL_PARAMETERS v51; // [rsp+60h] [rbp-A0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  struct _PCW_REGISTRATION_INFORMATION Info; // [rsp+80h] [rbp-80h] BYREF
  __int64 v54; // [rsp+B0h] [rbp-50h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-48h] BYREF
  _OWORD OutputBuffer[2]; // [rsp+E8h] [rbp-18h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  memset(OutputBuffer, 0, sizeof(OutputBuffer));
  ndisWppInitTracingEx(DriverObject, RegistryPath);
  traceInited = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      1,
      10,
      (struct _GUID *)&WPP_c0469a4afcf83610621648f15e3ec860_Traceguids);
  }
  McGenEventRegister_EtwRegister(
    (const GUID *)&NDIS_PROVIDER_ID,
    v4,
    NDIS_PROVIDER_ID_Context,
    NDIS_PROVIDER_ID_Context);
  McGenEventRegister_EtwRegister(
    &SLEEPSTUDY_ETW_PROVIDER,
    v5,
    SLEEPSTUDY_ETW_PROVIDER_Context,
    SLEEPSTUDY_ETW_PROVIDER_Context);
  if ( Microsoft_Windows_Networking_CorrelationHandle
    || !EtwRegister(
          &Microsoft_Windows_Networking_CorrelationId,
          (PETWENABLECALLBACK)Microsoft_Windows_Networking_Correlation_EtwEnableCallback,
          0LL,
          &Microsoft_Windows_Networking_CorrelationHandle) )
  {
    Microsoft_Windows_Networking_ProviderId = NDIS_PROVIDER_ID;
  }
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_14011A7E8, 0LL, 0LL);
  InitializeTelemetryAssertsKMByDriverObject((__int64)DriverObject);
  v6 = TlgRegisterAggregateProviderEx();
  if ( v6 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 3;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      1,
      11,
      (struct _GUID *)&WPP_c0469a4afcf83610621648f15e3ec860_Traceguids,
      v6);
  }
  DbgSetDebugFilterState(0x78u, 0xFFFFFFFF, 1u);
  ndisRegistryPath.Length = 0;
  ndisRegistryPath.MaximumLength = RegistryPath->Length;
  ndisRegistryPath.Buffer = (wchar_t *)ExAllocatePool2(258LL, RegistryPath->Length + 2LL, 538985550LL);
  if ( !ndisRegistryPath.Buffer )
    return -1073741670;
  RtlCopyUnicodeString(&ndisRegistryPath, RegistryPath);
  ndisDriverObject = DriverObject;
  wil_InitializeFeatureStaging();
  g_featureNVBugFixes2507 = Feature_NVBugFixes2507__private_IsEnabledDeviceUsageNoInline() != 0;
  IsEnabledDeviceUsageNoInline = Feature_NdisDetectCircularNblChain__private_IsEnabledDeviceUsageNoInline();
  ndisEtwRundownEnabled = 1;
  g_featureNdisDetectCircularNblChain = IsEnabledDeviceUsageNoInline != 0;
  NdisDllInitialize();
  qword_14011CB00 = (__int64)&qword_14011CAF8;
  qword_14011CAF8 = (__int64)&qword_14011CAF8;
  KPushLockManualConstruct::Initialize((KPushLockManualConstruct *)&stru_14011CAF0);
  memset(&Parameters, 0, sizeof(Parameters));
  KnobNamespace::KnobNamespace(
    &stru_14011C8F0,
    (struct _DRIVER_OBJECT *)ndisDriverObject,
    (struct _CONFIG_KNOB_NAMESPACE *)&Parameters);
  ndisNblTrackerInitialize();
  ndisRegisterKnobs(&stru_1400F4DF0, 17LL, v10, 0LL);
  v8 = ndisFdoInitializeSubsystem();
  if ( v8 >= 0 )
  {
    v8 = ndisLwmInitializeSubsystem();
    if ( v8 >= 0 )
    {
      v8 = ndisStackExpansionInitializeSubsystem(v12, v11, v13);
      if ( v8 >= 0 )
      {
        DriverObject->DriverUnload = 0LL;
        KeInitializeSpinLock(&ndisGlobalLock);
        KeInitializeSpinLock(&ndisMiniDriverListLock);
        KeInitializeSpinLock(&ndisProtocolListLock);
        KeInitializeSpinLock(&ndisMiniportListLock);
        KeInitializeSpinLock(&ndisGlobalPacketPoolListLock);
        KeInitializeSpinLock(&ndisGlobalOpenListLock);
        KeInitializeSpinLock(&ndisGlobalFilterListLock);
        KeInitializeSpinLock(&ndisFilterDriverListLock);
        KeInitializeSpinLock(&ndisAbortedRequestsListLock);
        KeInitializeSpinLock(&ndisGlobalTimerListLock);
        ndisDmaAlignment = 8;
        ndisTimeIncrement = KeQueryTimeIncrement();
        ExInitializeResourceLite(&SharedMemoryResource);
        ndisReadRegistry();
        ndisFlags &= ~0x400u;
        KeBootTime.QuadPart = MEMORY[0xFFFFF78000000014];
        PoolAgingTicks.HighPart = 0;
        PoolAgingTicks.LowPart = 0x23C34600 / KeQueryTimeIncrement();
        *((_QWORD *)ndisDriverObject + 10) = &unk_1400F3260;
        ndisInitializeStackTraces();
        ndisWorkItemLog = (struct NDIS_EVENT_LOG_HANDLE__ *)ndisAllocateEventLog(0, 7);
        imp_WppRecorderIsDefaultLogAvailable(WPP_GLOBAL_Control);
        if ( (ndisFlags & 0x100) == 0 )
          ndisVerifierInitialization();
        v14 = (char *)&ndisAbortedRequests;
        v15 = 16LL;
        do
        {
          memset(v14, 0, 0xB0uLL);
          v14 += 248;
          --v15;
        }
        while ( v15 );
        RtlInitUnicodeString(&DestinationString, L"\\CallBack\\NdisBindUnbind");
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 592;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v16 = ExCreateCallback((PCALLBACK_OBJECT *)&ndisBindUnbindCallbackObject, &ObjectAttributes, 1u, 1u);
        if ( v16 < 0 )
          DbgPrint("Ndis: failed to create a Callback object. Status %lx\n", v16);
        if ( PoRegisterPowerSettingCallback(
               0LL,
               &GUID_ACDC_POWER_SOURCE,
               (PPOWER_SETTING_CALLBACK)ndisPowerStateCallback,
               0LL,
               &ndisPowerStateCallbackHandle) < 0 )
          DbgPrint("Ndis: failed to register a power state Callback routine\n");
        if ( ZwPowerInformation(SystemBatteryState, 0LL, 0, OutputBuffer, 0x20u) < 0 )
          goto LABEL_26;
        if ( LOBYTE(OutputBuffer[0]) )
        {
          if ( LOBYTE(OutputBuffer[0]) != 1 )
            goto LABEL_25;
        }
        else if ( BYTE1(OutputBuffer[0]) )
        {
LABEL_25:
          ndisAcOnLine = 0;
LABEL_26:
          ndisAoAcInitializeSubsystem();
          KeInitializeSpinLock(&qword_14011C940);
          qword_14011D0C8 = (__int64)&qword_14011D0C0;
          qword_14011D0C0 = (__int64)&qword_14011D0C0;
          ndisInitializeNblPoolGlobal();
          qword_14011CD80 = (__int64)&ndisGlobalPacketPoolList;
          ndisGlobalPacketPoolList.Flink = &ndisGlobalPacketPoolList;
          qword_14011B388 = (__int64)&ndisGlobalTimerList;
          ndisGlobalTimerList.Flink = &ndisGlobalTimerList;
          KeInitializeMutex(&ndisPnPMutex, 0xFFFFu);
          KeInitializeMutex(&ndisPeriodicReceivesMutex, 0xFFFFu);
          ndisPcwInitialize();
          KPushLockManualConstruct::Initialize((KPushLockManualConstruct *)&WPP_MAIN_CB.Dpc.DeferredContext);
          *(_QWORD *)&Parameters.DataSize = 0LL;
          WPP_MAIN_CB.Dpc.SystemArgument2 = &WPP_MAIN_CB.Dpc.SystemArgument1;
          WPP_MAIN_CB.Dpc.SystemArgument1 = &WPP_MAIN_CB.Dpc.SystemArgument1;
          Parameters.PoolTag = 1684948046;
          Parameters.Header = (_NDIS_OBJECT_HEADER)1311104;
          *(_DWORD *)&Parameters.ProtocolId = 256;
          ndisNetBufferListPool = NdisAllocateNetBufferListPool(0LL, &Parameters);
          if ( !ndisNetBufferListPool )
            DbgPrint("NDIS: failed to create ndis net buffer list special pool.\n");
          *(_QWORD *)&v51.DataSize = 0LL;
          v51.Header = (_NDIS_OBJECT_HEADER)1048960;
          v51.PoolTag = 1684948046;
          ndisNetBufferPool = NdisAllocateNetBufferPool(0LL, &v51);
          if ( !ndisNetBufferPool )
            DbgPrint("NDIS: failed to create ndis net buffer special pool.\n");
          v17 = ndisInitializePeriodicReceives();
          if ( v17 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v18) = 1;
            WPP_RECORDER_SF_D(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v18,
              1,
              12,
              (struct _GUID *)&WPP_c0469a4afcf83610621648f15e3ec860_Traceguids,
              v17);
          }
          ndisInitializePerProcRcvTracker();
          Status = 0;
          NdisAllocatePacketPoolEx(&Status, &ndisSendPacketPool, 0xFFFFu, 0, 0x20u);
          NdisAllocatePacketPoolEx(&Status, &ndisRecvPacketPool, 0xFFFFu, 0, 0x30u);
          v19 = MmSizeOfMdl((PVOID)0xFFF, 0x64uLL);
          ExInitializeNPagedLookasideList(
            &ndisRcv100BytesLL,
            0LL,
            0LL,
            0x200u,
            ((v19 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 100,
            0x7254444Eu,
            0);
          v20 = MmSizeOfMdl((PVOID)0xFFF, 0x5EAuLL);
          ExInitializeNPagedLookasideList(
            &ndisRcv1514BytesLL,
            0LL,
            0LL,
            0x200u,
            ((v20 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 1514,
            0x7254444Eu,
            0);
          AllUsersAclRead = ndisCreateAcl(v22, v21, v23, v24, Handle, 1, 0x80000001);
          AllUsersAclWrite = ndisCreateAcl(v26, v25, v27, v28, Handlea, 1, 0x40000002u);
          AllUsersAclReadWrite = ndisCreateAcl(v30, v29, v31, v32, Handleb, 1, 0xC0000013);
          AdminsAcl = ndisCreateAcl(v34, v33, v35, v36, Handlec, 0, 0xC0000013);
          ndisCreateGenericSD(AllUsersAclRead, &AllUsersReadSecurityDescriptor);
          ndisCreateGenericSD(AllUsersAclWrite, &AllUsersWriteSecurityDescriptor);
          ndisCreateGenericSD(AllUsersAclReadWrite, &AllUsersReadWriteSecurityDescriptor);
          ndisCreateGenericSD(AdminsAcl, &AdminsSecurityDescriptor);
          IoRegisterBootDriverReinitialization(DriverObject, (PDRIVER_REINITIALIZE)ndisBootDriverReinit, 0LL);
          ndisCpuInitializeSubsystemPhase2();
          v8 = ndisBindInitialize();
          if ( v8 >= 0 )
          {
            ndisIfInitializePhase1();
            v8 = ndisPDInitialize();
            if ( v8 >= 0 )
            {
              ndisVBusNmrInitializeClient();
              ndisMiniportFdoInitializeSubsystem();
              *(_QWORD *)&Info.Version = 512LL;
              Info.Name = (PCUNICODE_STRING)&`ndisInitRegistrationInformationNetworkDirectCounterSet'::`2'::Name;
              *(_QWORD *)&Info.CounterCount = 10LL;
              Info.Counters = (PPCW_COUNTER_DESCRIPTOR)&`ndisInitRegistrationInformationNetworkDirectCounterSet'::`2'::Descriptors;
              v54 = 0LL;
              Info.Callback = (PPCW_CALLBACK)ndisNdkPcwProviderCallback;
              Info.CallbackContext = 0LL;
              PcwRegister(&ndisNetworkDirectCounterSet, &Info);
              qword_14011D810 = 0LL;
              qword_14011D818 = (__int64 (__fastcall *)(_QWORD))ndisPktMonComponentNotify;
              KeInitializeMutex(&PktMonCompMutex, 0);
              qword_14011D8A8 = &PktMonCompList;
              PktMonCompList = (__int64)&PktMonCompList;
              PktMonClientNotify.ClientRegistrationInstance.ModuleId = &NPI_MS_NDIS_MODULEID;
              qword_14011D808 = (__int64)ndisPktMonRegisterComponentsCallback;
              NmrRegisterClient(&PktMonClientNotify, &PktMon, &PktMon);
              ndisRegisterPDCounterSets();
              word_14011AD0E = *(_WORD *)ndisNblTrackerMode;
              word_14011AD10 = ndisMaxNumberOfProcessors;
              qword_14011AD18 = (__int64)&qword_14011D0D0;
              NetioSetTriageBlock(0LL, &ndisGlobalTriageBlock);
              ndisDoesSystemSupportSriov();
              ndisReinitializeHistograms();
              ndisInitializeDmaSubsystem(v38, v37, v39);
              qword_14011CB28 = (struct KPushLockBase *)KLoader::KLoader((KLoader *)&unk_14011CB10);
              ndisLoaderDeviceObject = ndisKLoaderCreateControlDeviceObject(v40);
              ndisRegisterKnobs(&stru_1400F4C40, 2LL, v41, 0LL);
              ndisRegisterKnobs(&stru_1400F4BE0, 1LL, v42, 0LL);
              KWaitEventBase<wistd::integral_constant<enum _EVENT_TYPE,0>>::InitializeBase((struct _KEVENT *)&WPP_MAIN_CB.ActiveThreadCount);
              KPushLockManualConstruct::Initialize((KPushLockManualConstruct *)&WPP_MAIN_CB.Dpc.DpcData);
              ndisMpHookNmrInitializeClient();
              KeInitializeSpinLock(&qword_14011C890);
              ndisInitializeThreadMonitorSubsystem();
              if ( (unsigned int)Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline() )
                ndisInitializeGlobalTriageData(v43);
            }
          }
          return v8;
        }
        ndisAcOnLine = 1;
        goto LABEL_26;
      }
    }
  }
  return v8;
}
