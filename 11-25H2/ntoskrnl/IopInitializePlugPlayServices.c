/*
 * XREFs of IopInitializePlugPlayServices @ 0x140C0DF14
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140C0996C (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExInitializeResourceLite2 @ 0x1402D6940 (ExInitializeResourceLite2.c)
 *     IoDeleteDevice @ 0x1402FDA50 (IoDeleteDevice.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     PnpDiagnosticTrace @ 0x140463F4C (PnpDiagnosticTrace.c)
 *     PnpRequestDeviceAction @ 0x14046E128 (PnpRequestDeviceAction.c)
 *     PipSetDevNodeState @ 0x140493D48 (PipSetDevNodeState.c)
 *     PnpGetRegistryDword @ 0x1404B5904 (PnpGetRegistryDword.c)
 *     McGenEventRegister_EtwRegister @ 0x14057A434 (McGenEventRegister_EtwRegister.c)
 *     PiDmaGuardInitialize @ 0x1405A5580 (PiDmaGuardInitialize.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwCreateKey @ 0x14069B4E0 (ZwCreateKey.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     TlgRegisterAggregateProvider @ 0x1406EFC6C (TlgRegisterAggregateProvider.c)
 *     ArbLibraryInitialize @ 0x1406F9BA0 (ArbLibraryInitialize.c)
 *     IoDeleteDriver @ 0x140707F30 (IoDeleteDriver.c)
 *     PipUpdateAsyncOptionsCallback @ 0x14070E1C0 (PipUpdateAsyncOptionsCallback.c)
 *     PipUpdateSetupInProgress @ 0x14070E278 (PipUpdateSetupInProgress.c)
 *     PipUpdateSetupInProgressNotify @ 0x14070E398 (PipUpdateSetupInProgressNotify.c)
 *     PnpLogEvent @ 0x140717360 (PnpLogEvent.c)
 *     PnpAllocateDeviceInstancePath @ 0x140718690 (PnpAllocateDeviceInstancePath.c)
 *     PnpCopyDeviceInstancePath @ 0x1407186D0 (PnpCopyDeviceInstancePath.c)
 *     IopMemInitialize @ 0x140719C98 (IopMemInitialize.c)
 *     IopPortInitialize @ 0x14071A120 (IopPortInitialize.c)
 *     IopDmaInitialize @ 0x14071A254 (IopDmaInitialize.c)
 *     IopIrqInitialize @ 0x14071A378 (IopIrqInitialize.c)
 *     IopBusNumberInitialize @ 0x14071A448 (IopBusNumberInitialize.c)
 *     PiPnpRtlInit @ 0x14071ACC4 (PiPnpRtlInit.c)
 *     PiDcHandleSystemFirmwareUpdate @ 0x14071B740 (PiDcHandleSystemFirmwareUpdate.c)
 *     CmRegisterSystemHiveLimitCallback @ 0x1407C2A1C (CmRegisterSystemHiveLimitCallback.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1408325D8 (PnpAcquireDependencyRelationsLock.c)
 *     PnpReleaseDependencyRelationsLock @ 0x140832A80 (PnpReleaseDependencyRelationsLock.c)
 *     PipSetDevNodeFlags @ 0x1408331E8 (PipSetDevNodeFlags.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x1408335B4 (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     PipSetDevNodeUserFlags @ 0x140833844 (PipSetDevNodeUserFlags.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1408B73B4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     EtwRegister @ 0x1408B7480 (EtwRegister.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1408C9F0C (_PnpCtxGetCachedContextBaseKey.c)
 *     _CmCreateDevice @ 0x14094E818 (_CmCreateDevice.c)
 *     _CmAddDeviceToContainer @ 0x14094F2F0 (_CmAddDeviceToContainer.c)
 *     _CmSetDeviceRegProp @ 0x140950F0C (_CmSetDeviceRegProp.c)
 *     RtlGUIDFromString @ 0x140959130 (RtlGUIDFromString.c)
 *     IoCreateDevice @ 0x14099E640 (IoCreateDevice.c)
 *     IopGetRegistryValue @ 0x1409B29DC (IopGetRegistryValue.c)
 *     IopOpenRegistryKeyEx @ 0x140A3E608 (IopOpenRegistryKeyEx.c)
 *     IopCreateRegistryKeyEx @ 0x140A6FC5C (IopCreateRegistryKeyEx.c)
 *     PipAllocateDeviceNode @ 0x140A80FB0 (PipAllocateDeviceNode.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x140A8151C (PnpMapDeviceObjectToDeviceInstance.c)
 *     IoCreateDriver @ 0x140AACA20 (IoCreateDriver.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     ArbInitializeOsInaccessibleRange @ 0x140C0482C (ArbInitializeOsInaccessibleRange.c)
 *     PiInitCacheGroupInformation @ 0x140C0ED64 (PiInitCacheGroupInformation.c)
 *     PiInitFirmwareResources @ 0x140C0EE44 (PiInitFirmwareResources.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140C0F108 (PipCheckSystemFirmwareUpdated.c)
 *     PipHardwareConfigInit @ 0x140C0F9A4 (PipHardwareConfigInit.c)
 *     PipInitDeviceOverrideCache @ 0x140C0FF48 (PipInitDeviceOverrideCache.c)
 *     PipMigratePnpState @ 0x140C10454 (PipMigratePnpState.c)
 *     PipResetDevices @ 0x140C10E10 (PipResetDevices.c)
 *     IoInvalidateInit @ 0x140C1188C (IoInvalidateInit.c)
 *     PnpInitializeNotification @ 0x140C11B74 (PnpInitializeNotification.c)
 *     IopInitializeResourceMap @ 0x140C11EA8 (IopInitializeResourceMap.c)
 *     PnpInitializePnpWatchdogs @ 0x140C1228C (PnpInitializePnpWatchdogs.c)
 *     PnpBusTypeGuidInitialize @ 0x140C129F0 (PnpBusTypeGuidInitialize.c)
 *     PiUEventInit @ 0x140C12A84 (PiUEventInit.c)
 *     PiUEventProcessRegistry @ 0x140C12C20 (PiUEventProcessRegistry.c)
 *     PpInitializeBootDDB @ 0x140C12D78 (PpInitializeBootDDB.c)
 *     PiDmInit @ 0x140C1314C (PiDmInit.c)
 *     PiDcInit @ 0x140C1323C (PiDcInit.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140C132D0 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140C13470 (PiAuCreateStandardSecurityObject.c)
 *     PiAuCreateUserSids @ 0x140C1398C (PiAuCreateUserSids.c)
 *     PiAuFreeUserSids @ 0x140C13BB4 (PiAuFreeUserSids.c)
 *     PiDqInit @ 0x140C13E80 (PiDqInit.c)
 *     PpDevCfgInit @ 0x140C13F04 (PpDevCfgInit.c)
 *     PnpInitializeDeviceEvents @ 0x140C142CC (PnpInitializeDeviceEvents.c)
 *     PiSwInit @ 0x140C143CC (PiSwInit.c)
 *     PipProcessPendingOsExtensionResources @ 0x140C14EB4 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x140C14F5C (PipProcessPendingServices.c)
 *     PiCslInitialize @ 0x140C15008 (PiCslInitialize.c)
 *     PiKsrNotifyInitialize @ 0x140C15290 (PiKsrNotifyInitialize.c)
 */

int __fastcall IopInitializePlugPlayServices(__int64 a1, __int64 a2)
{
  unsigned int *v3; // rbx
  unsigned int *v4; // rdi
  int result; // eax
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int CachedContextBaseKey; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int16 v18; // ax
  __int16 v19; // cx
  void *v20; // rbx
  struct _DEVICE_OBJECT *v21; // rsi
  PDEVICE_OBJECT v22; // rcx
  NTSTATUS v23; // eax
  int v24; // ebx
  __int64 v25; // rcx
  __int64 v26; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B8h] BYREF
  PVOID P; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING v29; // [rsp+60h] [rbp-A8h] BYREF
  int v30; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v31; // [rsp+74h] [rbp-94h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp-90h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+80h] [rbp-88h] BYREF
  ULONG Disposition; // [rsp+88h] [rbp-80h] BYREF
  int v35; // [rsp+8Ch] [rbp-7Ch] BYREF
  __int128 v36; // [rsp+90h] [rbp-78h] BYREF
  PVOID v37; // [rsp+A0h] [rbp-68h] BYREF
  void *v38; // [rsp+A8h] [rbp-60h] BYREF
  PVOID v39; // [rsp+B0h] [rbp-58h] BYREF
  PVOID v40; // [rsp+B8h] [rbp-50h] BYREF
  UNICODE_STRING v41; // [rsp+C0h] [rbp-48h] BYREF
  UNICODE_STRING GuidString; // [rsp+D0h] [rbp-38h] BYREF
  UNICODE_STRING v43; // [rsp+E0h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+F0h] [rbp-18h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+100h] [rbp-8h] BYREF
  _BYTE v46[64]; // [rsp+138h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+178h] [rbp+70h] BYREF
  __int64 v48; // [rsp+188h] [rbp+80h]
  __int64 v49; // [rsp+190h] [rbp+88h]

  *(_QWORD *)&v36 = 0LL;
  Handle = 0LL;
  v38 = 0LL;
  *(_DWORD *)(&v29.MaximumLength + 1) = 0;
  DeviceObject = 0LL;
  Disposition = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v37 = 0LL;
  P = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  KeyHandle = 0LL;
  *(_DWORD *)(&v41.MaximumLength + 1) = 0;
  *(_DWORD *)(&GuidString.MaximumLength + 1) = 0;
  LOBYTE(v26) = 0;
  DestinationString = 0LL;
  v43 = 0LL;
  if ( (_DWORD)a2 )
  {
    if ( (_DWORD)a2 != 1 )
      return -1073741584;
    v23 = McGenEventRegister_EtwRegister(
            (const GUID *)MS_KernelPnP_Provider,
            a2,
            MS_KernelPnP_Provider_Context,
            MS_KernelPnP_Provider_Context);
    PnpEtwHandle = MS_KernelPnP_Provider_Context[0];
    v24 = 0;
    if ( v23 < 0 )
      v24 = v23;
    result = EtwRegister(
               &MS_KernelPnP_Rundown_Provider,
               (PETWENABLECALLBACK)PnpDiagRundownRegisterCallback,
               0LL,
               &PnpRundownEtwHandle);
    if ( result >= 0 )
    {
      result = v24;
      if ( v24 >= 0 )
      {
        TlgRegisterAggregateProvider((__int64)&dword_140E06FA8);
        TlgRegisterAggregateProvider((__int64)&dword_140E06F70);
        TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E06F38, 0LL, 0LL);
        result = PiDcInit(1LL);
        if ( result >= 0 )
        {
          result = PiUEventInit(1LL);
          if ( result >= 0 )
          {
            v25 = *(_QWORD *)(a1 + 240);
            *(_QWORD *)&UserData.Size = 80LL;
            v49 = 8LL;
            UserData.Ptr = v25 + 136;
            v48 = v25 + 3864;
            PnpDiagnosticTrace(&KMPnPEvt_OsLoader_Time, 2u, &UserData);
            result = PiPnpRtlInit(1u);
            if ( result >= 0 )
            {
              result = PiCslInitialize();
              if ( result >= 0 )
              {
                CachedContextBaseKey = PiDmaGuardInitialize(1);
                if ( CachedContextBaseKey < 0 )
                  return CachedContextBaseKey;
                DeviceObject = 0LL;
                if ( (int)KsrGetFirmwareInformation(&DeviceObject) < 0 )
                {
                  PnpKsrEnabled = 0;
                }
                else
                {
                  PnpKsrEnabled = 1;
                  result = PiKsrNotifyInitialize();
                  if ( result < 0 )
                    return result;
                }
                PnpRequestDeviceAction(*((PVOID *)IopRootDeviceNode + 4), 0xAu, 0, 0LL, 0LL, 0LL, 0LL);
                LOWORD(PnpShutdownEvent.Header.Lock) = 0;
                PnpShutdownEvent.Header.WaitListHead.Blink = &PnpShutdownEvent.Header.WaitListHead;
                PnpShutdownEvent.Header.WaitListHead.Flink = &PnpShutdownEvent.Header.WaitListHead;
                PnpShutdownEvent.Header.Size = 6;
                PnpShutdownEvent.Header.SignalState = 0;
                if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 0x400) == 0 )
                  PpInitializeBootDDB(a1, 1LL);
                return 0;
              }
            }
          }
        }
      }
    }
  }
  else
  {
    PnPInitialized = 0;
    PnpSystemHiveLimits = 80;
    dword_140E65F3C = 90;
    CmRegisterSystemHiveLimitCallback(a1, a2, (__int64)&PnpSystemHiveLimits);
    PnpSystemHiveTooLarge = 0;
    ObjectAttributes.ObjectName = &CmRegistryMachineHardwareDescriptionSystemName;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition) >= 0 )
    {
      if ( IopGetRegistryValue(KeyHandle, L"OldSystemBiosDate", 0, &v37) >= 0 )
      {
        v3 = (unsigned int *)v37;
        if ( v37 )
        {
          if ( IopGetRegistryValue(KeyHandle, L"SystemBiosDate", 0, &P) >= 0 )
          {
            v4 = (unsigned int *)P;
            if ( P )
            {
              RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)v3 + v3[2]));
              RtlInitUnicodeString(&v43, (PCWSTR)((char *)v4 + v4[2]));
              PnpLogEvent((const void **)&DestinationString, (const void **)&v43, 1073741868, 0LL, 0);
              ExFreePoolWithTag(v4, 0);
            }
          }
          ExFreePoolWithTag(v3, 0);
        }
      }
      ZwClose(KeyHandle);
    }
    qword_140F8AE28 = 0LL;
    qword_140F8ADE8 = (__int64)&PnpDeviceCompletionQueue;
    *(_QWORD *)&PnpDeviceCompletionQueue = &PnpDeviceCompletionQueue;
    Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
    Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
    qword_140F8AE00 = (__int64)&qword_140F8ADF8;
    qword_140F8ADF8 = (__int64)&qword_140F8ADF8;
    dword_140F8ADF0 = 0;
    Object.Header.Type = 5;
    Object.Header.Size = 8;
    Object.Header.SignalState = 0;
    Object.Limit = 0x7FFFFFFF;
    PiInitFirmwareResources(a1);
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 0x400) == 0 )
      PpInitializeBootDDB(a1, 0LL);
    PipInitDeviceOverrideCache();
    LOWORD(PnpSystemDeviceEnumerationComplete.Header.Lock) = 0;
    PnpSystemDeviceEnumerationComplete.Header.WaitListHead.Blink = &PnpSystemDeviceEnumerationComplete.Header.WaitListHead;
    PnpSystemDeviceEnumerationComplete.Header.WaitListHead.Flink = &PnpSystemDeviceEnumerationComplete.Header.WaitListHead;
    PnpSystemDeviceEnumerationComplete.Header.Size = 6;
    PnpSystemDeviceEnumerationComplete.Header.SignalState = 0;
    result = PiInitCacheGroupInformation();
    if ( result >= 0 )
    {
      PpRegistrySemaphore.Header.Type = 5;
      PpRegistrySemaphore.Header.WaitListHead.Blink = &PpRegistrySemaphore.Header.WaitListHead;
      PpRegistrySemaphore.Header.WaitListHead.Flink = &PpRegistrySemaphore.Header.WaitListHead;
      v6 = &IopLegacyBusInformationTable;
      PpRegistrySemaphore.Header.Size = 8;
      PpRegistrySemaphore.Header.SignalState = 1;
      PpRegistrySemaphore.Limit = 1;
      do
      {
        v6[1] = v6;
        *v6 = v6;
        v6 += 2;
      }
      while ( (__int64)v6 < (__int64)&PiDDBLock );
      IopInitializeResourceMap(a1);
      IopAllocateBootResourcesRoutine = (__int64)&IopReportBootResources;
      IopInitReservedResourceList = 0LL;
      PnpDefaultInterfaceType = 1;
      ArbInitializeOsInaccessibleRange(dword_140E2D8F8);
      CachedContextBaseKey = ArbLibraryInitialize();
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      CachedContextBaseKey = IopPortInitialize(v8, v7);
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      CachedContextBaseKey = IopMemInitialize(v11, v10);
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      CachedContextBaseKey = IopDmaInitialize(v13, v12);
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      CachedContextBaseKey = IopIrqInitialize(v15, v14);
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      CachedContextBaseKey = IopBusNumberInitialize(v17, v16);
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      CachedContextBaseKey = PiPnpRtlInit(0);
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      PipMigratePnpState();
      CachedContextBaseKey = PiDmInit();
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 4, &v38);
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      v29.Buffer = L"Control\\Pnp";
      *(_DWORD *)&v29.Length = 1572886;
      if ( (int)IopCreateRegistryKeyEx(&Handle, v38, &v29, 0xF003Fu, 0, 0LL) < 0 )
        goto LABEL_45;
      if ( IopGetRegistryValue(Handle, L"BootOptions", 0, &v39) >= 0 )
      {
        if ( *((_DWORD *)v39 + 1) == 4 && *((_DWORD *)v39 + 3) == 4 )
          PnpBootOptions = *(_DWORD *)((char *)v39 + *((unsigned int *)v39 + 2));
        ExFreePoolWithTag(v39, 0);
      }
      if ( IopGetRegistryValue(Handle, L"FindBestConfigurationTimeout", 0, &v40) >= 0 )
      {
        if ( *((_DWORD *)v40 + 1) == 4 && *((_DWORD *)v40 + 3) == 4 )
          PnpFindBestConfigurationTimeout = *(_DWORD *)((char *)v40 + *((unsigned int *)v40 + 2));
        ExFreePoolWithTag(v40, 0);
      }
      v30 = 0;
      if ( (int)PnpGetRegistryDword(Handle, (__int64)L"DmaGuardTestMode", &v30) >= 0 && v30 == 1 )
        PipDmaGuardTestMode = 1;
      PiUEventProcessRegistry(Handle);
      v31 = 0;
      if ( (int)PnpGetRegistryDword(Handle, (__int64)L"KEventNotificationLong", &v31) < 0 )
      {
        v18 = 5000;
      }
      else
      {
        v18 = v31;
        v19 = 100;
        if ( v31 < 0x64 || (v19 = -5536, v31 > 0xEA60) )
        {
          PiNotifyLongRunningMs = v19;
LABEL_44:
          qword_140F8BAD0 = (__int64)PipUpdateAsyncOptionsCallback;
          qword_140F8BAD8 = (__int64)Handle;
          *(_QWORD *)PnpAsyncOptionsWorkItem = 0LL;
          PipUpdateAsyncOptionsCallback(Handle);
          Handle = 0LL;
LABEL_45:
          *(_DWORD *)&v29.Length = 4063292;
          v29.Buffer = L"\\Registry\\Machine\\System\\Setup";
          if ( IopOpenRegistryKeyEx(&Handle, 0LL, &v29, 0x20019u) >= 0 )
          {
            PipUpdateSetupInProgress(Handle);
            if ( IopGetRegistryValue(Handle, L"Upgrade", 0, &P) >= 0 )
            {
              if ( *((_DWORD *)P + 1) == 4
                && *((_DWORD *)P + 3) == 4
                && *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
              {
                PnpSetupUpgradeInProgress = 1;
              }
              ExFreePoolWithTag(P, 0);
            }
            if ( IopGetRegistryValue(Handle, L"RollbackActive", 0, &P) >= 0 )
            {
              if ( *((_DWORD *)P + 1) == 4
                && *((_DWORD *)P + 3) == 4
                && *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
              {
                PnpSetupRollbackActiveInProgress = 1;
              }
              ExFreePoolWithTag(P, 0);
            }
            if ( PnpSetupInProgress || PnpSetupOOBEInProgress )
            {
              qword_140F8BA50 = (__int64)PipUpdateSetupInProgressCallback;
              qword_140F8BA58 = (__int64)Handle;
              *(_QWORD *)PnpSetupWorkItem = 0LL;
              PipUpdateSetupInProgressNotify(Handle, 0);
            }
            else
            {
              ZwClose(Handle);
            }
            Handle = 0LL;
          }
          CachedContextBaseKey = PipHardwareConfigInit((GUID *)(*(_QWORD *)(a1 + 240) + 2568LL));
          if ( CachedContextBaseKey < 0 )
            return CachedContextBaseKey;
          PipCheckSystemFirmwareUpdated(&v26);
          CachedContextBaseKey = PiDcInit(0LL);
          if ( CachedContextBaseKey < 0 )
            return CachedContextBaseKey;
          memset_0(v46, 0, sizeof(v46));
          CachedContextBaseKey = PiAuCreateUserSids(v46);
          if ( CachedContextBaseKey >= 0 )
          {
            CachedContextBaseKey = PiAuCreateStandardSecurityObject(v46);
            if ( CachedContextBaseKey >= 0 )
              CachedContextBaseKey = PiAuCreateLocalSystemSecurityObject(v46);
          }
          PiAuFreeUserSids(v46);
          if ( CachedContextBaseKey < 0 )
            return CachedContextBaseKey;
          CachedContextBaseKey = PiDqInit();
          if ( CachedContextBaseKey < 0 )
            return CachedContextBaseKey;
          CachedContextBaseKey = PpDevCfgInit();
          if ( CachedContextBaseKey < 0 )
            return CachedContextBaseKey;
          PipResetDevices();
          CachedContextBaseKey = CmCreateDevice(
                                   *(__int64 *)&PiPnpRtlCtx,
                                   (int)L"HTREE\\ROOT\\0",
                                   983103,
                                   (HANDLE *)&v36,
                                   0LL,
                                   0);
          if ( CachedContextBaseKey < 0 )
            return CachedContextBaseKey;
          v20 = (void *)v36;
          CmSetDeviceRegProp(
            *(__int64 *)&PiPnpRtlCtx,
            (__int64)L"HTREE\\ROOT\\0",
            v36,
            0x25u,
            1,
            (__int64)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}",
            78,
            0);
          v35 = 0;
          CmSetDeviceRegProp(
            *(__int64 *)&PiPnpRtlCtx,
            (__int64)L"HTREE\\ROOT\\0",
            (__int64)v20,
            0xBu,
            4,
            (__int64)&v35,
            4,
            0);
          ZwClose(v20);
          qword_140F8B0A8 = (__int64)&IopPendingEjects;
          IopPendingEjects = (__int64)&IopPendingEjects;
          qword_140F8B098 = (__int64)&IopPendingSurpriseRemovals;
          IopPendingSurpriseRemovals = &IopPendingSurpriseRemovals;
          ExInitializeResourceLite2(&IopDeviceTreeLock, -1);
          ExInitializeResourceLite2(&IopSurpriseRemoveListLock, -1);
          ExInitializeResourceLite2(&PiEngineLock, -1);
          PnpSpinLock = 0LL;
          PiResourceListLock.Event.Header.WaitListHead.Blink = &PiResourceListLock.Event.Header.WaitListHead;
          PiResourceListLock.Event.Header.WaitListHead.Flink = &PiResourceListLock.Event.Header.WaitListHead;
          PiResourceListLock.Count = 1;
          PnpRebuildPowerRelationsQueueLock.Event.Header.WaitListHead.Blink = &PnpRebuildPowerRelationsQueueLock.Event.Header.WaitListHead;
          PnpRebuildPowerRelationsQueueLock.Event.Header.WaitListHead.Flink = &PnpRebuildPowerRelationsQueueLock.Event.Header.WaitListHead;
          PiResourceListLock.Owner = 0LL;
          PiResourceListLock.Contention = 0;
          LOWORD(PiResourceListLock.Event.Header.Lock) = 1;
          PiResourceListLock.Event.Header.Size = 6;
          PiResourceListLock.Event.Header.SignalState = 0;
          PnpRebuildPowerRelationsQueueLock.Count = 1;
          PnpRebuildPowerRelationsQueueLock.Owner = 0LL;
          PnpRebuildPowerRelationsQueueLock.Contention = 0;
          LOWORD(PnpRebuildPowerRelationsQueueLock.Event.Header.Lock) = 1;
          PnpRebuildPowerRelationsQueueLock.Event.Header.Size = 6;
          PnpRebuildPowerRelationsQueueLock.Event.Header.SignalState = 0;
          ExInitializeResourceLite2(&PiDependencyRelationsLock, -1);
          PiDependencyEdgeWriteLock = 0LL;
          PnpAcquireDependencyRelationsLock(1);
          qword_140F8B9F8 = (__int64)&PiDependencyNodeListHead;
          PiDependencyNodeListHead = (__int64)&PiDependencyNodeListHead;
          qword_140F8B9D8 = (__int64)&PiDependencyNodeEmptyList;
          PiDependencyNodeEmptyList = (__int64)&PiDependencyNodeEmptyList;
          qword_140F8B9E8 = (__int64)&PiRebuildPowerRelationsQueue;
          PiRebuildPowerRelationsQueue = (__int64)&PiRebuildPowerRelationsQueue;
          PnpReleaseDependencyRelationsLock();
          _InterlockedExchange64((volatile __int64 *)&PnpDeviceActionThread, 0LL);
          PnpEnumerationInProgress = 0;
          LOWORD(PnpEnumerationLock.Header.Lock) = 0;
          PnpEnumerationLock.Header.Size = 6;
          PnpEnumerationLock.Header.SignalState = 1;
          PiProfileDeviceListLock.Count = 1;
          PnpEnumerationLock.Header.WaitListHead.Blink = &PnpEnumerationLock.Header.WaitListHead;
          PnpEnumerationLock.Header.WaitListHead.Flink = &PnpEnumerationLock.Header.WaitListHead;
          PiProfileDeviceListLock.Owner = 0LL;
          qword_140F89848 = (__int64)&PnpEnumerationRequestList;
          PnpEnumerationRequestList = (__int64)&PnpEnumerationRequestList;
          qword_140F89768 = (__int64)&PiProfileDeviceListHead;
          PiProfileDeviceListHead = (__int64)&PiProfileDeviceListHead;
          PiProfileDeviceListLock.Event.Header.WaitListHead.Blink = &PiProfileDeviceListLock.Event.Header.WaitListHead;
          PiProfileDeviceListLock.Event.Header.WaitListHead.Flink = &PiProfileDeviceListLock.Event.Header.WaitListHead;
          PiProfileChangeSemaphore.Header.WaitListHead.Blink = &PiProfileChangeSemaphore.Header.WaitListHead;
          PiProfileChangeSemaphore.Header.WaitListHead.Flink = &PiProfileChangeSemaphore.Header.WaitListHead;
          IopWarmEjectLock.Header.WaitListHead.Blink = &IopWarmEjectLock.Header.WaitListHead;
          IopWarmEjectLock.Header.WaitListHead.Flink = &IopWarmEjectLock.Header.WaitListHead;
          v29.Buffer = L"\\Driver\\PnpManager";
          PiProfileDeviceListLock.Contention = 0;
          LOWORD(PiProfileDeviceListLock.Event.Header.Lock) = 1;
          PiProfileDeviceListLock.Event.Header.Size = 6;
          PiProfileDeviceListLock.Event.Header.SignalState = 0;
          PiProfileDeviceCount = 0;
          PiProfileChangeSemaphore.Header.Type = 5;
          PiProfileChangeSemaphore.Header.Size = 8;
          PiProfileChangeSemaphore.Header.SignalState = 1;
          PiProfileChangeSemaphore.Limit = 1;
          IopWarmEjectPdo = 0LL;
          LOWORD(IopWarmEjectLock.Header.Lock) = 1;
          IopWarmEjectLock.Header.Size = 6;
          IopWarmEjectLock.Header.SignalState = 1;
          *(_DWORD *)&v29.Length = 2490404;
          CachedContextBaseKey = IoCreateDriver(&v29, PipPnPDriverEntry);
          if ( CachedContextBaseKey < 0 )
            return CachedContextBaseKey;
          CachedContextBaseKey = IoCreateDevice(PnpDriverObject, 0, 0LL, 4u, 0, 0, &DeviceObject);
          if ( CachedContextBaseKey < 0 )
            return CachedContextBaseKey;
          v21 = DeviceObject;
          v22 = DeviceObject;
          DeviceObject->Flags |= 0x1000u;
          CachedContextBaseKey = PipAllocateDeviceNode((__int64)v22, (__int64)&IopRootDeviceNode);
          if ( IopRootDeviceNode )
          {
            PipSetDevNodeFlags((__int64)IopRootDeviceNode, 0x131u);
            PipSetDevNodeUserFlags((__int64)IopRootDeviceNode, 0xAu);
            *((_DWORD *)IopRootDeviceNode + 165) = -2;
            CachedContextBaseKey = PnpAllocateDeviceInstancePath((__int64)IopRootDeviceNode, 26);
            if ( CachedContextBaseKey >= 0 )
            {
              *(_DWORD *)&v41.Length = 1703960;
              v41.Buffer = (wchar_t *)L"HTREE\\ROOT\\0";
              PnpCopyDeviceInstancePath((__int64)IopRootDeviceNode, &v41);
              CachedContextBaseKey = PnpMapDeviceObjectToDeviceInstance(
                                       *((_QWORD *)IopRootDeviceNode + 4),
                                       (__int64)IopRootDeviceNode + 40);
              if ( CachedContextBaseKey >= 0 )
              {
                *(_DWORD *)&GuidString.Length = 5111884;
                GuidString.Buffer = (wchar_t *)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}";
                RtlGUIDFromString(&GuidString, (GUID *)((char *)IopRootDeviceNode + 664));
                PnpQueryAndSaveDeviceNodeCapabilities((__int64)IopRootDeviceNode);
                PipSetDevNodeState((__int64)IopRootDeviceNode, 778);
                goto LABEL_80;
              }
            }
          }
          else
          {
            IoDeleteDevice(v21);
            IoDeleteDriver((char *)PnpDriverObject);
            if ( CachedContextBaseKey >= 0 )
            {
LABEL_80:
              CachedContextBaseKey = CmAddDeviceToContainer(
                                       *(__int64 *)&PiPnpRtlCtx,
                                       (__int64)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}",
                                       (__int64)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}",
                                       (__int64)L"HTREE\\ROOT\\0",
                                       0LL);
              if ( CachedContextBaseKey >= 0 )
              {
                if ( (_BYTE)v26 )
                  PiDcHandleSystemFirmwareUpdate();
                PnpInitializePnpWatchdogs();
                CachedContextBaseKey = PnpInitializeDeviceEvents();
                if ( CachedContextBaseKey >= 0 )
                {
                  PnpInitializeNotification();
                  CachedContextBaseKey = PnpBusTypeGuidInitialize();
                  if ( CachedContextBaseKey >= 0 )
                  {
                    LOWORD(PnpReplaceEvent.Header.Lock) = 1;
                    PnpReplaceEvent.Header.WaitListHead.Blink = &PnpReplaceEvent.Header.WaitListHead;
                    PnpReplaceEvent.Header.WaitListHead.Flink = &PnpReplaceEvent.Header.WaitListHead;
                    PnpReplaceEvent.Header.Size = 6;
                    PnpReplaceEvent.Header.SignalState = 1;
                    CachedContextBaseKey = PiSwInit();
                    if ( CachedContextBaseKey >= 0 )
                    {
                      CachedContextBaseKey = PiUEventInit(0LL);
                      if ( CachedContextBaseKey >= 0 )
                      {
                        *(_QWORD *)&v36 = 2359330LL;
                        *((_QWORD *)&v36 + 1) = L"\\Driver\\DeviceApi";
                        CachedContextBaseKey = IoCreateDriver(&v36, PiDaDriverEntry);
                        if ( CachedContextBaseKey >= 0 )
                        {
                          CachedContextBaseKey = PiDmaGuardInitialize(0);
                          if ( CachedContextBaseKey >= 0 )
                          {
                            IoInvalidateInit();
                            if ( (int)PipProcessPendingServices() >= 0 )
                              PipProcessPendingOsExtensionResources();
                            PnpRequestDeviceAction(*((PVOID *)IopRootDeviceNode + 4), 0xAu, 0, 0LL, 0LL, 0LL, 0LL);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          return CachedContextBaseKey;
        }
      }
      PiNotifyLongRunningMs = v18;
      goto LABEL_44;
    }
  }
  return result;
}
