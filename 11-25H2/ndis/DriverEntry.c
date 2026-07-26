/*
 * XREFs of DriverEntry @ 0x140196234
 * Callers:
 *     GsDriverEntry @ 0x140196010 (GsDriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140026510 (WPP_RECORDER_SF_d.c)
 *     NdisAllocatePacketPoolEx @ 0x1400302A0 (NdisAllocatePacketPoolEx.c)
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x14006D370 (WPP_RECORDER_SF_D_ea_14006D370.c)
 *     NdisAllocateNetBufferPool @ 0x140070A50 (NdisAllocateNetBufferPool.c)
 *     NdisAllocateNetBufferListPool @ 0x140070D10 (NdisAllocateNetBufferListPool.c)
 *     ?ndisVerifierInitialization@@YAEXZ @ 0x140097D30 (-ndisVerifierInitialization@@YAEXZ.c)
 *     Feature_NDPQualitySpring25__private_IsEnabledDeviceUsageNoInline @ 0x14009F48C (Feature_NDPQualitySpring25__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_NDPQualityWinter25__private_IsEnabledDeviceUsageNoInline @ 0x14009F4E0 (Feature_NDPQualityWinter25__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_NVBugFixes2507__private_IsEnabledDeviceUsageNoInline @ 0x14009F534 (Feature_NVBugFixes2507__private_IsEnabledDeviceUsageNoInline.c)
 *     McGenEventRegister_EtwRegister @ 0x14009F588 (McGenEventRegister_EtwRegister.c)
 *     NdisDllInitialize @ 0x14009F5C0 (NdisDllInitialize.c)
 *     ?ndisReadRegistry@@YAXXZ @ 0x1400A2340 (-ndisReadRegistry@@YAXXZ.c)
 *     ?ndisRegisterPDCounterSets@@YAXXZ @ 0x1400AC960 (-ndisRegisterPDCounterSets@@YAXXZ.c)
 *     ?ndisStackExpansionInitializeSubsystem@@YAJXZ @ 0x1400CBB88 (-ndisStackExpansionInitializeSubsystem@@YAJXZ.c)
 *     ?ndisWppInitTracingEx@@YAXPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@@Z @ 0x1400CC5AC (-ndisWppInitTracingEx@@YAXPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisInitializeNblPoolGlobal@@YAXXZ @ 0x1400CDFB8 (-ndisInitializeNblPoolGlobal@@YAXXZ.c)
 *     ?ndisInitializeDmaSubsystem@@YAXXZ @ 0x1400E1218 (-ndisInitializeDmaSubsystem@@YAXXZ.c)
 *     ?ndisDoesSystemSupportSriov@@YAXXZ @ 0x1400E489C (-ndisDoesSystemSupportSriov@@YAXXZ.c)
 *     ?ndisInitializeThreadMonitorSubsystem@@YAJXZ @ 0x1400EB858 (-ndisInitializeThreadMonitorSubsystem@@YAJXZ.c)
 *     InitializeTelemetryAssertsKMByDriverObject @ 0x1400EBCE8 (InitializeTelemetryAssertsKMByDriverObject.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?InitializeBase@?$KWaitEventBase@U?$integral_constant@W4_EVENT_TYPE@@$0A@@wistd@@@@IEAAXXZ @ 0x140141030 (-InitializeBase@-$KWaitEventBase@U-$integral_constant@W4_EVENT_TYPE@@$0A@@wistd@@@@IEAAXXZ.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14014236C (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     ?ndisReinitializeHistograms@@YAJXZ @ 0x140143CD8 (-ndisReinitializeHistograms@@YAJXZ.c)
 *     ?ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z @ 0x14014439C (-ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z.c)
 *     ?Initialize@KPushLockManualConstruct@@QEAAXXZ @ 0x14014D3C4 (-Initialize@KPushLockManualConstruct@@QEAAXXZ.c)
 *     ?ndisInitializeStackTraces@@YAXXZ @ 0x140154F4C (-ndisInitializeStackTraces@@YAXXZ.c)
 *     ??0KLoader@@QEAA@XZ @ 0x1401558D8 (--0KLoader@@QEAA@XZ.c)
 *     TlgRegisterAggregateProviderEx @ 0x14015A0A8 (TlgRegisterAggregateProviderEx.c)
 *     ?ndisAllocateEventLog@@YAPEAUNDIS_EVENT_LOG_HANDLE__@@W4_NDIS_EVENT_LOG_SIZE@@G@Z @ 0x14016D010 (-ndisAllocateEventLog@@YAPEAUNDIS_EVENT_LOG_HANDLE__@@W4_NDIS_EVENT_LOG_SIZE@@G@Z.c)
 *     ??0KnobNamespace@@QEAA@PEAU_DRIVER_OBJECT@@PEAU_CONFIG_KNOB_NAMESPACE@@@Z @ 0x140172C90 (--0KnobNamespace@@QEAA@PEAU_DRIVER_OBJECT@@PEAU_CONFIG_KNOB_NAMESPACE@@@Z.c)
 *     ?ndisAoAcInitializeSubsystem@@YAJXZ @ 0x140196078 (-ndisAoAcInitializeSubsystem@@YAJXZ.c)
 *     wil_InitializeFeatureStaging @ 0x140196C88 (wil_InitializeFeatureStaging.c)
 *     ?ndisMiniportFdoInitializeSubsystem@@YAJXZ @ 0x140197040 (-ndisMiniportFdoInitializeSubsystem@@YAJXZ.c)
 *     ?ndisNblTrackerInitialize@@YAXXZ @ 0x1401970B8 (-ndisNblTrackerInitialize@@YAXXZ.c)
 *     ?ndisCpuInitializeSubsystemPhase2@@YAJXZ @ 0x14019725C (-ndisCpuInitializeSubsystemPhase2@@YAJXZ.c)
 *     ?ndisFdoInitializeSubsystem@@YAJXZ @ 0x140197A78 (-ndisFdoInitializeSubsystem@@YAJXZ.c)
 *     ?ndisPDInitialize@@YAJXZ @ 0x140197BD8 (-ndisPDInitialize@@YAJXZ.c)
 *     ?ndisCreateAcl@@YAPEAU_ACL@@EEEEEEK@Z @ 0x1401981F4 (-ndisCreateAcl@@YAPEAU_ACL@@EEEEEEK@Z.c)
 *     ?ndisCreateGenericSD@@YAJPEAU_ACL@@PEAD@Z @ 0x140198500 (-ndisCreateGenericSD@@YAJPEAU_ACL@@PEAD@Z.c)
 *     ?ndisPcwInitialize@@YAJXZ @ 0x1401985FC (-ndisPcwInitialize@@YAJXZ.c)
 *     ?ndisInitializePerProcRcvTracker@@YAXXZ @ 0x140198764 (-ndisInitializePerProcRcvTracker@@YAXXZ.c)
 *     ?ndisInitializePeriodicReceives@@YAHXZ @ 0x1401987DC (-ndisInitializePeriodicReceives@@YAHXZ.c)
 *     ?ndisVBusNmrInitializeClient@@YAJXZ @ 0x140198C6C (-ndisVBusNmrInitializeClient@@YAJXZ.c)
 *     ?ndisBindInitialize@@YAJXZ @ 0x140198D4C (-ndisBindInitialize@@YAJXZ.c)
 *     ?ndisMpHookNmrInitializeClient@@YAJXZ @ 0x140199010 (-ndisMpHookNmrInitializeClient@@YAJXZ.c)
 *     ?ndisIfInitializePhase1@@YAJXZ @ 0x1401998DC (-ndisIfInitializePhase1@@YAJXZ.c)
 *     ?ndisLwmInitializeSubsystem@@YAJXZ @ 0x140199A14 (-ndisLwmInitializeSubsystem@@YAJXZ.c)
 *     ?ndisKLoaderCreateControlDeviceObject@@YAPEAU_DEVICE_OBJECT@@PEAU_DRIVER_OBJECT@@@Z @ 0x140199AEC (-ndisKLoaderCreateControlDeviceObject@@YAPEAU_DEVICE_OBJECT@@PEAU_DRIVER_OBJECT@@@Z.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  int v6; // eax
  NTSTATUS v7; // ebx
  unsigned __int8 (*v8)(void *, const struct KnobDescriptor *, unsigned __int64 *); // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int8 (*v11)(void *, const struct KnobDescriptor *, unsigned __int64 *); // r8
  char *v12; // rbx
  __int64 v13; // rsi
  NTSTATUS v14; // eax
  int v15; // eax
  SIZE_T v16; // rax
  SIZE_T v17; // rax
  unsigned __int8 v18; // dl
  unsigned __int8 v19; // cl
  unsigned __int8 v20; // r8
  unsigned __int8 v21; // r9
  unsigned __int8 v22; // dl
  unsigned __int8 v23; // cl
  unsigned __int8 v24; // r8
  unsigned __int8 v25; // r9
  unsigned __int8 v26; // dl
  unsigned __int8 v27; // cl
  unsigned __int8 v28; // r8
  unsigned __int8 v29; // r9
  unsigned __int8 v30; // dl
  unsigned __int8 v31; // cl
  unsigned __int8 v32; // r8
  unsigned __int8 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned __int8 (*v36)(void *, const struct KnobDescriptor *, unsigned __int64 *); // r8
  struct _DRIVER_OBJECT *v37; // rcx
  unsigned __int8 (*v38)(void *, const struct KnobDescriptor *, unsigned __int64 *); // r8
  unsigned __int8 (*v39)(void *, const struct KnobDescriptor *, unsigned __int64 *); // r8
  unsigned __int8 Handle; // [rsp+20h] [rbp-E0h]
  unsigned __int8 Handlea; // [rsp+20h] [rbp-E0h]
  unsigned __int8 Handleb; // [rsp+20h] [rbp-E0h]
  unsigned __int8 Handlec; // [rsp+20h] [rbp-E0h]
  __int64 Tag; // [rsp+28h] [rbp-D8h]
  int Status; // [rsp+40h] [rbp-C0h] BYREF
  struct _NET_BUFFER_LIST_POOL_PARAMETERS Parameters; // [rsp+48h] [rbp-B8h] BYREF
  struct _NET_BUFFER_POOL_PARAMETERS v48; // [rsp+60h] [rbp-A0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  struct _PCW_REGISTRATION_INFORMATION Info; // [rsp+80h] [rbp-80h] BYREF
  __int64 v51; // [rsp+B0h] [rbp-50h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-48h] BYREF
  _OWORD OutputBuffer[2]; // [rsp+E8h] [rbp-18h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  memset(OutputBuffer, 0, sizeof(OutputBuffer));
  ndisWppInitTracingEx(DriverObject, RegistryPath);
  traceInited = 1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      1,
      10,
      (struct _GUID *)&WPP_8fbc1cc06b7c3545de9dd125af2ab871_Traceguids);
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
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_1401247E8, 0LL, 0LL);
  InitializeTelemetryAssertsKMByDriverObject((__int64)DriverObject);
  v6 = TlgRegisterAggregateProviderEx();
  if ( v6 && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      3u,
      1u,
      0xBu,
      (struct _GUID *)&WPP_8fbc1cc06b7c3545de9dd125af2ab871_Traceguids,
      v6);
  DbgSetDebugFilterState(0x78u, 0xFFFFFFFF, 1u);
  ndisRegistryPath.Length = 0;
  ndisRegistryPath.MaximumLength = RegistryPath->Length;
  ndisRegistryPath.Buffer = (wchar_t *)ExAllocatePool2(258LL, RegistryPath->Length + 2LL, 538985550);
  if ( !ndisRegistryPath.Buffer )
    return -1073741670;
  RtlCopyUnicodeString(&ndisRegistryPath, RegistryPath);
  ndisDriverObject = DriverObject;
  wil_InitializeFeatureStaging();
  g_featureNVBugFixes2507 = Feature_NVBugFixes2507__private_IsEnabledDeviceUsageNoInline() != 0;
  if ( (unsigned int)Feature_NDPQualityWinter25__private_IsEnabledDeviceUsageNoInline() )
    ndisEtwRundownEnabled = 1;
  NdisDllInitialize();
  qword_140126BA0 = (__int64)&qword_140126B98;
  qword_140126B98 = (__int64)&qword_140126B98;
  KPushLockManualConstruct::Initialize((KPushLockManualConstruct *)&stru_140126B90);
  memset(&Parameters, 0, sizeof(Parameters));
  KnobNamespace::KnobNamespace(
    &stru_140126930,
    (struct _DRIVER_OBJECT *)ndisDriverObject,
    (struct _CONFIG_KNOB_NAMESPACE *)&Parameters);
  ndisNblTrackerInitialize();
  ndisRegisterKnobs(&stru_1400FDEB0, 17LL, v8, 0LL);
  v7 = ndisFdoInitializeSubsystem();
  if ( v7 >= 0 )
  {
    v7 = ndisLwmInitializeSubsystem();
    if ( v7 >= 0 )
    {
      v7 = ndisStackExpansionInitializeSubsystem(v10, v9, v11);
      if ( v7 >= 0 )
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
        *((_QWORD *)ndisDriverObject + 10) = &unk_1400FC250;
        ndisInitializeStackTraces();
        ndisWorkItemLog = (struct NDIS_EVENT_LOG_HANDLE__ *)ndisAllocateEventLog(0, 7);
        imp_WppRecorderIsDefaultLogAvailable(WPP_GLOBAL_Control);
        if ( (ndisFlags & 0x100) == 0 )
          ndisVerifierInitialization();
        v12 = (char *)&ndisAbortedRequests;
        v13 = 16LL;
        do
        {
          memset(v12, 0, 0xB0uLL);
          v12 += 248;
          --v13;
        }
        while ( v13 );
        RtlInitUnicodeString(&DestinationString, L"\\CallBack\\NdisBindUnbind");
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 592;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v14 = ExCreateCallback((PCALLBACK_OBJECT *)&ndisBindUnbindCallbackObject, &ObjectAttributes, 1u, 1u);
        if ( v14 < 0 )
          DbgPrint("Ndis: failed to create a Callback object. Status %lx\n", v14);
        if ( PoRegisterPowerSettingCallback(
               0LL,
               &GUID_ACDC_POWER_SOURCE,
               (PPOWER_SETTING_CALLBACK)ndisPowerStateCallback,
               0LL,
               &ndisPowerStateCallbackHandle) < 0 )
          DbgPrint("Ndis: failed to register a power state Callback routine\n");
        if ( ZwPowerInformation(SystemBatteryState, 0LL, 0, OutputBuffer, 0x20u) < 0 )
          goto LABEL_28;
        if ( LOBYTE(OutputBuffer[0]) )
        {
          if ( LOBYTE(OutputBuffer[0]) != 1 )
            goto LABEL_27;
        }
        else if ( BYTE1(OutputBuffer[0]) )
        {
LABEL_27:
          ndisAcOnLine = 0;
LABEL_28:
          ndisAoAcInitializeSubsystem();
          KeInitializeSpinLock(&qword_140126980);
          qword_140127178 = (__int64)&qword_140127170;
          qword_140127170 = (__int64)&qword_140127170;
          ndisInitializeNblPoolGlobal();
          qword_140126E40 = (__int64)&ndisGlobalPacketPoolList;
          ndisGlobalPacketPoolList.Flink = &ndisGlobalPacketPoolList;
          qword_1401253C8 = (__int64)&ndisGlobalTimerList;
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
          *(_QWORD *)&v48.DataSize = 0LL;
          v48.Header = (_NDIS_OBJECT_HEADER)1048960;
          v48.PoolTag = 1684948046;
          ndisNetBufferPool = NdisAllocateNetBufferPool(0LL, &v48);
          if ( !ndisNetBufferPool )
            DbgPrint("NDIS: failed to create ndis net buffer special pool.\n");
          v15 = ndisInitializePeriodicReceives();
          if ( v15 < 0 && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LODWORD(Tag) = v15;
            WPP_RECORDER_SF_D(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              1u,
              1u,
              0xCu,
              (struct _GUID *)&WPP_8fbc1cc06b7c3545de9dd125af2ab871_Traceguids,
              Tag);
          }
          ndisInitializePerProcRcvTracker();
          Status = 0;
          NdisAllocatePacketPoolEx(&Status, &ndisSendPacketPool, 0xFFFFu, 0, 0x20u);
          NdisAllocatePacketPoolEx(&Status, &ndisRecvPacketPool, 0xFFFFu, 0, 0x30u);
          v16 = MmSizeOfMdl((PVOID)0xFFF, 0x64uLL);
          ExInitializeNPagedLookasideList(
            &ndisRcv100BytesLL,
            0LL,
            0LL,
            0x200u,
            ((v16 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 100,
            0x7254444Eu,
            0);
          v17 = MmSizeOfMdl((PVOID)0xFFF, 0x5EAuLL);
          ExInitializeNPagedLookasideList(
            &ndisRcv1514BytesLL,
            0LL,
            0LL,
            0x200u,
            ((v17 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 1514,
            0x7254444Eu,
            0);
          AllUsersAclRead = ndisCreateAcl(v19, v18, v20, v21, Handle, 1, 0x80000001);
          AllUsersAclWrite = ndisCreateAcl(v23, v22, v24, v25, Handlea, 1, 0x40000002u);
          AllUsersAclReadWrite = ndisCreateAcl(v27, v26, v28, v29, Handleb, 1, 0xC0000013);
          AdminsAcl = ndisCreateAcl(v31, v30, v32, v33, Handlec, 0, 0xC0000013);
          ndisCreateGenericSD(AllUsersAclRead, &AllUsersReadSecurityDescriptor);
          ndisCreateGenericSD(AllUsersAclWrite, &AllUsersWriteSecurityDescriptor);
          ndisCreateGenericSD(AllUsersAclReadWrite, &AllUsersReadWriteSecurityDescriptor);
          ndisCreateGenericSD(AdminsAcl, &AdminsSecurityDescriptor);
          IoRegisterBootDriverReinitialization(DriverObject, (PDRIVER_REINITIALIZE)ndisBootDriverReinit, 0LL);
          ndisCpuInitializeSubsystemPhase2();
          v7 = ndisBindInitialize();
          if ( v7 >= 0 )
          {
            ndisIfInitializePhase1();
            v7 = ndisPDInitialize();
            if ( v7 >= 0 )
            {
              ndisVBusNmrInitializeClient();
              ndisMiniportFdoInitializeSubsystem();
              *(_QWORD *)&Info.Version = 512LL;
              Info.Name = (PCUNICODE_STRING)&`ndisInitRegistrationInformationNetworkDirectCounterSet'::`2'::Name;
              *(_QWORD *)&Info.CounterCount = 10LL;
              Info.Counters = (PPCW_COUNTER_DESCRIPTOR)&`ndisInitRegistrationInformationNetworkDirectCounterSet'::`2'::Descriptors;
              v51 = 0LL;
              Info.Callback = (PPCW_CALLBACK)ndisNdkPcwProviderCallback;
              Info.CallbackContext = 0LL;
              PcwRegister(&ndisNetworkDirectCounterSet, &Info);
              qword_1401278C0 = 0LL;
              qword_1401278C8 = (__int64 (__fastcall *)(_QWORD))ndisPktMonComponentNotify;
              KeInitializeMutex(&PktMonCompMutex, 0);
              qword_140127948 = &PktMonCompList;
              PktMonCompList = (__int64)&PktMonCompList;
              PktMonClientNotify.ClientRegistrationInstance.ModuleId = &NPI_MS_NDIS_MODULEID;
              qword_1401278B8 = (__int64)ndisPktMonRegisterComponentsCallback;
              NmrRegisterClient(&PktMonClientNotify, &PktMon, &PktMon);
              ndisRegisterPDCounterSets();
              word_140124D0E = *(_WORD *)ndisNblTrackerMode;
              word_140124D10 = ndisMaxNumberOfProcessors;
              qword_140124D18 = (__int64)&qword_140127180;
              NetioSetTriageBlock(0LL, &ndisGlobalTriageBlock);
              ndisDoesSystemSupportSriov();
              ndisReinitializeHistograms();
              ndisInitializeDmaSubsystem(v35, v34, v36);
              qword_140126BC8 = (struct KPushLockBase *)KLoader::KLoader((KLoader *)&unk_140126BB0);
              ndisLoaderDeviceObject = ndisKLoaderCreateControlDeviceObject(v37);
              ndisRegisterKnobs(&stru_1400FDD00, 2LL, v38, 0LL);
              ndisRegisterKnobs(&stru_1400FDCA0, 1LL, v39, 0LL);
              KWaitEventBase<wistd::integral_constant<enum _EVENT_TYPE,0>>::InitializeBase((struct _KEVENT *)&WPP_MAIN_CB.ActiveThreadCount);
              KPushLockManualConstruct::Initialize((KPushLockManualConstruct *)&WPP_MAIN_CB.Dpc.DpcData);
              ndisMpHookNmrInitializeClient();
              KeInitializeSpinLock(&qword_1401268D0);
              if ( (unsigned int)Feature_NDPQualitySpring25__private_IsEnabledDeviceUsageNoInline() )
                ndisInitializeThreadMonitorSubsystem();
            }
          }
          return v7;
        }
        ndisAcOnLine = 1;
        goto LABEL_28;
      }
    }
  }
  return v7;
}
