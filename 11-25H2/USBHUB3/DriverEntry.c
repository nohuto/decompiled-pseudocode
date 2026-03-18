/*
 * XREFs of DriverEntry @ 0x14009603C
 * Callers:
 *     FxDriverEntryWorker @ 0x140042144 (FxDriverEntryWorker.c)
 * Callees:
 *     McGenEventRegister_EtwRegister @ 0x1400019C8 (McGenEventRegister_EtwRegister.c)
 *     RtlStringCchPrintfA @ 0x140002474 (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     HUBREG_QueryGlobalUsbLtmSettings @ 0x140034CB8 (HUBREG_QueryGlobalUsbLtmSettings.c)
 *     InitializeTelemetryAssertsKMByDriverObject @ 0x140042554 (InitializeTelemetryAssertsKMByDriverObject.c)
 *     __security_check_cookie @ 0x140045CC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 *     memset @ 0x1400460C0 (memset.c)
 *     WppCleanupKm @ 0x140079F2C (WppCleanupKm.c)
 *     WppInitKm @ 0x140079FDC (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x14007A0B8 (WppLoadTracingSupport.c)
 *     HUBREG_QueryGlobalHubValues @ 0x14008941C (HUBREG_QueryGlobalHubValues.c)
 *     HUBREG_QueryGlobalUsb20HardwareLpmSettings @ 0x1400898F0 (HUBREG_QueryGlobalUsb20HardwareLpmSettings.c)
 *     HUBUTIL_GetAcpiVersion @ 0x140093428 (HUBUTIL_GetAcpiVersion.c)
 *     SleepstudyHelper_Initialize @ 0x1400938E8 (SleepstudyHelper_Initialize.c)
 *     TlgRegisterAggregateProvider @ 0x14009480C (TlgRegisterAggregateProvider.c)
 *     wil_InitializeFeatureStaging @ 0x1400966B0 (wil_InitializeFeatureStaging.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  NTSTATUS v4; // edi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  unsigned __int8 *v12; // rsi
  int AcpiVersion; // eax
  __int64 v15; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v18; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+68h] [rbp-98h]
  __int64 v20; // [rsp+70h] [rbp-90h]
  __int128 v21; // [rsp+78h] [rbp-88h]
  void *v22; // [rsp+88h] [rbp-78h]
  __int64 v23; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v24[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v25; // [rsp+A8h] [rbp-58h]
  int v26; // [rsp+B0h] [rbp-50h]
  int v27; // [rsp+B4h] [rbp-4Ch]
  __int128 v28; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v29; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v30; // [rsp+D8h] [rbp-28h]
  char pszDest[16]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v32; // [rsp+F8h] [rbp-8h]
  struct _OSVERSIONINFOW VersionInformation; // [rsp+100h] [rbp+0h] BYREF

  g_Usbhub3DriverObject = (__int64)DriverObject;
  HIDWORD(v24[0]) = 0;
  v25 = 0LL;
  v26 = 0;
  DWORD1(v18) = 0;
  v19 = 0LL;
  v21 = 0LL;
  v16 = 0LL;
  DestinationString = 0LL;
  v32 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  *(_OWORD *)pszDest = 0LL;
  wil_InitializeFeatureStaging();
  memset(&VersionInformation.dwMajorVersion, 0, 0x110uLL);
  VersionInformation.dwOSVersionInfoSize = 276;
  if ( RtlGetVersion(&VersionInformation) >= 0
    && (VersionInformation.dwMajorVersion > 6
     || VersionInformation.dwMajorVersion == 6 && VersionInformation.dwMinorVersion >= 2) )
  {
    ExDefaultNonPagedPoolType = 512;
    ExDefaultMdlProtection = 0x40000000;
  }
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.DriverObject = (_DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_USBHUB3;
  WPP_MAIN_CB.Timer = (struct _IO_TIMER *)1;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.DeviceExtension = 0LL;
  WPP_MAIN_CB.DeviceType = 0;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm((__int64)DriverObject, (__int64)RegistryPath);
  LODWORD(v28) = 16;
  *((_QWORD *)&v28 + 1) = 0x200000002LL;
  BYTE4(v28) = 0;
  imp_WppRecorderConfigure(WPP_GLOBAL_Control, &v28);
  v24[0] = 32LL;
  v24[1] = HUBFDO_EvtDeviceAdd;
  v22 = off_14006C1E8;
  *((_QWORD *)&v18 + 1) = DriverCleanup;
  v25 = 0LL;
  v26 = 0;
  v27 = 1999849557;
  *(_QWORD *)&v18 = 56LL;
  v19 = 0LL;
  v21 = 0LL;
  v20 = 0x100000001LL;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _DRIVER_OBJECT *, PUNICODE_STRING, __int128 *, _QWORD *, unsigned __int64 *))(WdfFunctions_01015 + 928))(
         WdfDriverGlobals,
         DriverObject,
         RegistryPath,
         &v18,
         v24,
         &v16);
  if ( v4 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           v16,
           off_14006C1E8);
    *(_QWORD *)&v29 = 56LL;
    HIDWORD(v30) = 16;
    pszDest[0] = 0;
    v6 = v5;
    *(_QWORD *)&v30 = 0LL;
    BYTE8(v30) = 0;
    v32 = 0x200000002LL;
    *((_QWORD *)&v29 + 1) = 0x20000000400LL;
    RtlStringCchPrintfA(pszDest, 0x10uLL, "hub driver");
    v7 = (__int64 *)(v6 + 64);
    v4 = imp_WppRecorderLogCreate(WPP_GLOBAL_Control, &v29, v6 + 64);
    if ( v4 >= 0 )
    {
      v22 = 0LL;
      v19 = 0LL;
      v20 = 0x100000001LL;
      v21 = v16;
      v18 = 0LL;
      LODWORD(v18) = 56;
      v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64))(WdfFunctions_01015 + 2496))(
             WdfDriverGlobals,
             &v18,
             v6 + 32);
      if ( v4 >= 0 )
      {
        *(_QWORD *)(v6 + 24) = v6 + 16;
        *(_QWORD *)(v6 + 16) = v6 + 16;
        v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64))(WdfFunctions_01015 + 2496))(
               WdfDriverGlobals,
               &v18,
               v6 + 56);
        if ( v4 >= 0 )
        {
          *(_QWORD *)(v6 + 48) = v6 + 40;
          *(_QWORD *)(v6 + 40) = v6 + 40;
          McGenEventRegister_EtwRegister(v9, v8, &MS_USBHUB3_ETW_PROVIDER_Context, &MS_USBHUB3_ETW_PROVIDER_Context);
          v10 = SleepstudyHelper_Initialize((_QWORD *)(v6 + 96), (__int64)DriverObject);
          if ( v10 < 0 )
          {
            *(_BYTE *)(v6 + 92) = 0;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v15) = v10;
              WPP_RECORDER_SF_d(*v7, 4u, 2u, 0xAu, (__int64)&WPP_fcb91a355b2c39f481323e62bc6862ee_Traceguids, v15);
            }
          }
          else
          {
            *(_BYTE *)(v6 + 92) = 1;
          }
          InitializeTelemetryAssertsKMByDriverObject((__int64)DriverObject);
          EtwSetInformation(
            MS_USBHUB3_ETW_PROVIDER_Context,
            EventProviderSetTraits,
            &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
            (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
          HUBREG_QueryGlobalHubValues(v6);
          HUBREG_QueryGlobalUsb20HardwareLpmSettings(v6);
          HUBREG_QueryGlobalUsbLtmSettings(v6);
          RtlInitUnicodeString(&DestinationString, L"KseQueryDeviceFlags");
          WPP_MAIN_CB.Queue.ListEntry.Flink = (_LIST_ENTRY *)MmGetSystemRoutineAddress(&DestinationString);
          RtlInitUnicodeString(&DestinationString, L"IoGetActivityIdIrp");
          *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = MmGetSystemRoutineAddress(&DestinationString);
          RtlInitUnicodeString(&DestinationString, L"IoSetActivityIdIrp");
          g_IoSetActivityIdIrp = (__int64 (__fastcall *)(_QWORD, _QWORD))MmGetSystemRoutineAddress(&DestinationString);
          v23 = 0LL;
          if ( WPP_MAIN_CB.Queue.ListEntry.Flink )
          {
            ((void (__fastcall *)(const wchar_t *, const wchar_t *, __int64 *))WPP_MAIN_CB.Queue.ListEntry.Flink)(
              L"USBHUB:GLOBAL_FLAGS",
              L"USBHUB",
              &v23);
            if ( (v23 & 1) != 0 )
              _InterlockedOr((volatile signed __int32 *)(v6 + 4), 0x20000u);
          }
          imp_WppRecorderGetTriageInfo(WPP_GLOBAL_Control, &WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
          qword_14006F700 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 3448))(WdfDriverGlobals);
          dword_14006F6D0 = WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey;
          qword_14006F6D4 = (__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
          dword_14006F6DC = *((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 5);
          dword_14006F6E0 = (int)WPP_MAIN_CB.Queue.Wcb.DeviceContext;
          v11 = TlgRegisterAggregateProvider();
          if ( v11 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v15) = v11;
            WPP_RECORDER_SF_d(*v7, 2u, 2u, 0xBu, (__int64)&WPP_fcb91a355b2c39f481323e62bc6862ee_Traceguids, v15);
          }
          v12 = (unsigned __int8 *)(v6 + 104);
          AcpiVersion = HUBUTIL_GetAcpiVersion((_WORD *)(v6 + 104));
          v4 = AcpiVersion;
          if ( AcpiVersion >= 0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v15) = *(unsigned __int8 *)(v6 + 105);
              WPP_RECORDER_SF_dD(
                *v7,
                4u,
                2u,
                0xDu,
                (__int64)&WPP_fcb91a355b2c39f481323e62bc6862ee_Traceguids,
                v15,
                *v12);
            }
          }
          else
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v15) = AcpiVersion;
              WPP_RECORDER_SF_d(*v7, 2u, 2u, 0xCu, (__int64)&WPP_fcb91a355b2c39f481323e62bc6862ee_Traceguids, v15);
            }
            v4 = 0;
            *(_WORD *)v12 = 0;
          }
          if ( v6 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v15) = *(_DWORD *)(v6 + 4);
            WPP_RECORDER_SF_d(
              *(_QWORD *)(v6 + 64),
              4u,
              2u,
              0xEu,
              (__int64)&WPP_fcb91a355b2c39f481323e62bc6862ee_Traceguids,
              v15);
          }
        }
      }
    }
  }
  else
  {
    WppCleanupKm((__int64)DriverObject);
    if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
    {
      RtlUnregisterFeatureConfigurationChangeNotification();
      *(_QWORD *)&WPP_MAIN_CB.SectorSize = 0LL;
    }
    if ( g_wil_details_featureUsageProvider )
    {
      RtlUnregisterFeatureUsageProvider();
      g_wil_details_featureUsageProvider = 0LL;
    }
    g_wil_details_isFeatureStagingInitialized = 0;
  }
  return v4;
}
