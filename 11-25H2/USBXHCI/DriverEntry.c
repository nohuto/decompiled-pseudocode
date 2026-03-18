/*
 * XREFs of DriverEntry @ 0x14007AA30
 * Callers:
 *     FxDriverEntryWorker @ 0x140056704 (FxDriverEntryWorker.c)
 * Callees:
 *     McGenEventRegister_EtwRegister @ 0x1400464DC (McGenEventRegister_EtwRegister.c)
 *     InitializeTelemetryAssertsKMByDriverObject @ 0x140057780 (InitializeTelemetryAssertsKMByDriverObject.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140059AC0 (memset.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14007AE78 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     WppCleanupKm @ 0x14007AF28 (WppCleanupKm.c)
 *     WppInitKm @ 0x14007AFD8 (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x14007B0B4 (WppLoadTracingSupport.c)
 *     wil_UninitializeFeatureStaging @ 0x14007B488 (wil_UninitializeFeatureStaging.c)
 *     Counter_Register @ 0x14007F25C (Counter_Register.c)
 *     SleepstudyHelper_Initialize @ 0x140080578 (SleepstudyHelper_Initialize.c)
 *     wil_InitializeFeatureStaging @ 0x14008503C (wil_InitializeFeatureStaging.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  int v4; // ebx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  ULONG ReturnLength; // [rsp+40h] [rbp-C0h] BYREF
  __int64 SystemInformation; // [rsp+48h] [rbp-B8h] BYREF
  int v11; // [rsp+50h] [rbp-B0h] BYREF
  int v12; // [rsp+54h] [rbp-ACh]
  __int64 (__fastcall *v13)(__int64, __int64); // [rsp+58h] [rbp-A8h]
  __int64 v14; // [rsp+60h] [rbp-A0h]
  int v15; // [rsp+68h] [rbp-98h]
  int v16; // [rsp+6Ch] [rbp-94h]
  __int64 v17; // [rsp+70h] [rbp-90h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  int v19; // [rsp+88h] [rbp-78h] BYREF
  int v20; // [rsp+8Ch] [rbp-74h]
  __int64 (__fastcall *v21)(__int64); // [rsp+90h] [rbp-70h]
  __int64 v22; // [rsp+98h] [rbp-68h]
  int v23; // [rsp+A0h] [rbp-60h]
  int v24; // [rsp+A4h] [rbp-5Ch]
  __int128 v25; // [rsp+A8h] [rbp-58h]
  void *v26; // [rsp+B8h] [rbp-48h]
  __int128 v27; // [rsp+C0h] [rbp-40h] BYREF
  struct _OSVERSIONINFOW VersionInformation; // [rsp+D0h] [rbp-30h] BYREF

  *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = DriverObject;
  ReturnLength = 0;
  v17 = 0LL;
  v20 = 0;
  v22 = 0LL;
  v12 = 0;
  v14 = 0LL;
  DestinationString = 0LL;
  v15 = 0;
  v27 = 0LL;
  v25 = 0LL;
  memset(&VersionInformation.dwMajorVersion, 0, 0x110uLL);
  VersionInformation.dwOSVersionInfoSize = 276;
  if ( RtlGetVersion(&VersionInformation) >= 0
    && (VersionInformation.dwMajorVersion > 6
     || VersionInformation.dwMajorVersion == 6 && VersionInformation.dwMinorVersion >= 2) )
  {
    ExDefaultNonPagedPoolType = 512;
    ExDefaultMdlProtection = 0x40000000;
  }
  wil_InitializeFeatureStaging();
  RtlInitUnicodeString(&DestinationString, L"KseQueryDeviceFlags");
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = MmGetSystemRoutineAddress(&DestinationString);
  RtlInitUnicodeString(&DestinationString, L"IoTryQueueWorkItem");
  WPP_MAIN_CB.Queue.Wcb.DeviceObject = MmGetSystemRoutineAddress(&DestinationString);
  WPP_MAIN_CB.DriverObject = (_DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_USBXHCI;
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.Timer = (struct _IO_TIMER *)1;
  WPP_MAIN_CB.DeviceExtension = 0LL;
  WPP_MAIN_CB.DeviceType = 0;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm(DriverObject, RegistryPath);
  LODWORD(v27) = 16;
  *((_QWORD *)&v27 + 1) = 0x200000002LL;
  BYTE4(v27) = 0;
  imp_WppRecorderConfigure(WPP_GLOBAL_Control, &v27);
  v20 = 0;
  v22 = 0LL;
  v25 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x26 )
      v19 = -1;
    else
      v19 = *(_DWORD *)(WdfStructures + 304);
  }
  else
  {
    v19 = 56;
  }
  v26 = off_14006B088;
  v21 = DriverCleanup;
  v23 = 1;
  v24 = 1;
  v12 = 0;
  v14 = 0LL;
  v15 = 0;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x18 )
      v11 = -1;
    else
      v11 = *(_DWORD *)(WdfStructures + 192);
  }
  else
  {
    v11 = 32;
  }
  v16 = 1464027224;
  v13 = Controller_WdfEvtDeviceAdd;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _DRIVER_OBJECT *, PUNICODE_STRING, int *, int *, __int64 *))(WdfFunctions_01033 + 928))(
         WdfDriverGlobals,
         DriverObject,
         RegistryPath,
         &v19,
         &v11,
         &v17);
  if ( v4 >= 0 )
  {
    v5 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                     WdfDriverGlobals,
                     v17,
                     off_14006B088);
    g_WdfDriverUsbXhciContext = (__int64)v5;
    v5[1] = v5;
    *v5 = v5;
    KeInitializeSpinLock(v5 + 2);
    *(_DWORD *)(g_WdfDriverUsbXhciContext + 24) = 0;
    SystemInformation = 8LL;
    v4 = ZwQuerySystemInformation(SystemCodeIntegrityInformation, &SystemInformation, 8u, &ReturnLength);
    if ( v4 >= 0 && (SystemInformation & 0x200000000LL) != 0 )
    {
      *(_BYTE *)(g_WdfDriverUsbXhciContext + 28) = 1;
    }
    else
    {
      v4 = 0;
      *(_BYTE *)(g_WdfDriverUsbXhciContext + 28) = 0;
    }
    imp_WppRecorderGetTriageInfo(WPP_GLOBAL_Control, &WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    dword_14006B338 = WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey;
    qword_14006B33C = (__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
    dword_14006B344 = *((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 5);
    dword_14006B348 = (int)WPP_MAIN_CB.Queue.Wcb.DeviceContext;
    qword_14006B360 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01033 + 3448))(WdfDriverGlobals);
    InitializeTelemetryAssertsKMByDriverObject((__int64)DriverObject);
    McGenEventRegister_EtwRegister(v7, v6, &MS_USBXHCI_ETW_PROVIDER_Context, &MS_USBXHCI_ETW_PROVIDER_Context);
    SleepstudyHelper_Initialize(g_WdfDriverUsbXhciContext + 32, DriverObject);
    EtwSetInformation(
      MS_USBXHCI_ETW_PROVIDER_Context,
      EventProviderSetTraits,
      &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
      (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_14006B470);
    Counter_Register();
  }
  else
  {
    WppCleanupKm(DriverObject);
    wil_UninitializeFeatureStaging();
  }
  return v4;
}
