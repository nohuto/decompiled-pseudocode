/*
 * XREFs of StorPortInitialize @ 0x14006FD50
 * Callers:
 *     StorPortInitializeVrfy @ 0x14018C120 (StorPortInitializeVrfy.c)
 * Callees:
 *     RaidGetPortData @ 0x140009B64 (RaidGetPortData.c)
 *     McTemplateK0d_EtwWriteTransfer @ 0x14006EA70 (McTemplateK0d_EtwWriteTransfer.c)
 *     McTemplateK0dqddddddiiiii_EtwWriteTransfer @ 0x14006EB48 (McTemplateK0dqddddddiiiii_EtwWriteTransfer.c)
 *     WPP_SF_qqqq @ 0x140071338 (WPP_SF_qqqq.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 *     RaDeleteDriver @ 0x140181190 (RaDeleteDriver.c)
 *     RaCreateDriver @ 0x1401840E4 (RaCreateDriver.c)
 *     RaInitializeDriver @ 0x140184138 (RaInitializeDriver.c)
 *     RaSaveDriverInitData @ 0x14018427C (RaSaveDriverInitData.c)
 *     WppCleanupKm @ 0x14018431C (WppCleanupKm.c)
 *     WppInitKm @ 0x140184608 (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x140184698 (WppLoadTracingSupport.c)
 *     __security_init_cookie @ 0x1401C3044 (__security_init_cookie.c)
 */

__int64 __fastcall StorPortInitialize(__int64 DriverObject, _DWORD *a2, unsigned int *a3, __int64 a4)
{
  _DWORD *v6; // r15
  struct _DRIVER_OBJECT *v7; // r14
  char v8; // r12
  NTSTATUS v9; // ebx
  void (__fastcall *v10)(struct _DRIVER_OBJECT *, _DWORD *); // rax
  __int64 PortData; // rsi
  __int64 v12; // r8
  int v13; // r9d
  int inited; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  NTSTATUS v17; // r9d
  void (__fastcall *v18)(struct _DRIVER_OBJECT *); // rax
  __int64 v20; // [rsp+58h] [rbp-61h]
  __int64 v21; // [rsp+60h] [rbp-59h]
  __int64 v22; // [rsp+68h] [rbp-51h]
  __int64 v23; // [rsp+70h] [rbp-49h]
  __int64 v24; // [rsp+78h] [rbp-41h]
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-39h] BYREF
  struct _UNICODE_STRING SymbolicLinkName; // [rsp+90h] [rbp-29h] BYREF
  struct _PCW_REGISTRATION_INFORMATION Info; // [rsp+A0h] [rbp-19h] BYREF
  PVOID DriverObjectExtension; // [rsp+120h] [rbp+67h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+128h] [rbp+6Fh] BYREF

  DeviceObject = 0LL;
  DriverObjectExtension = 0LL;
  v6 = a2;
  v7 = (struct _DRIVER_OBJECT *)DriverObject;
  DestinationString = 0LL;
  v8 = 0;
  SymbolicLinkName = 0LL;
  memset(&Info, 0, 52);
  if ( !InitSecurityCookie )
  {
    _security_init_cookie();
    InitSecurityCookie = 1;
  }
  if ( !v7 || !v6 || !a3 )
    goto LABEL_68;
  DriverObject = *a3;
  if ( (_DWORD)DriverObject != 208 && (_DWORD)DriverObject != 176 && (_DWORD)DriverObject != 136
    || !*((_QWORD *)a3 + 1)
    || !*((_QWORD *)a3 + 4)
    || !*((_QWORD *)a3 + 5) )
  {
    goto LABEL_9;
  }
  a2 = a3 + 46;
  if ( (_DWORD)DriverObject == 208 && (*a2 & 0x40000) != 0 )
  {
    if ( *((_QWORD *)a3 + 2) )
      goto LABEL_9;
    goto LABEL_19;
  }
  if ( !*((_QWORD *)a3 + 2) )
  {
LABEL_9:
    v9 = -1073741735;
    goto LABEL_69;
  }
  if ( (_DWORD)DriverObject == 208 )
  {
LABEL_19:
    if ( (*a2 & 0x4000) == 0 || (a3[47] & 2) != 0 )
      goto LABEL_21;
LABEL_68:
    v9 = -1073741811;
LABEL_69:
    if ( _InterlockedExchangeAdd(&InitializeCount, 0xFFFFFFFF) == 1 && IsWppInitialized )
    {
      WppCleanupKm(DriverObject, a2);
      IsWppInitialized = 0;
    }
    if ( DriverObjectExtension )
      RaDeleteDriver(DriverObjectExtension);
    DriverObjectExtension = 0LL;
    if ( v8 )
    {
      v18 = (void (__fastcall *)(struct _DRIVER_OBJECT *))*((_QWORD *)a3 + 21);
      if ( v18 )
        v18(v7);
    }
    return (unsigned int)v9;
  }
LABEL_21:
  if ( _InterlockedIncrement(&InitializeCount) == 1 )
  {
    if ( !IsWppInitialized )
    {
      *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
      WPP_MAIN_CB.DriverObject = (_DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_wppCtlGuid;
      WPP_MAIN_CB.NextDevice = 0LL;
      WPP_MAIN_CB.CurrentIrp = 0LL;
      WPP_MAIN_CB.Timer = (struct _IO_TIMER *)1;
      WppLoadTracingSupport(DriverObject, a2);
      WPP_MAIN_CB.CurrentIrp = 0LL;
      WppInitKm();
      IsWppInitialized = 1;
    }
    *(_QWORD *)&Info.Version = 256LL;
    Info.Name = (const _UNICODE_STRING *)L"&(";
    *(_QWORD *)&Info.CounterCount = 56LL;
    Info.Counters = (_PCW_COUNTER_DESCRIPTOR *)&`SpPerfInitRegistrationInformationUnitWriteCounterSet'::`2'::Descriptors;
    *(_QWORD *)&Info.Flags = 0LL;
    Info.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))RaUnitReadIoCounterSetCallback;
    Info.CallbackContext = 0LL;
    if ( PcwRegister(&SpPerfUnitReadCounterSet, &Info) < 0 )
      SpPerfUnitReadCounterSet = 0LL;
    *(_QWORD *)&Info.Version = 256LL;
    Info.Name = (const _UNICODE_STRING *)L"(*";
    *(_QWORD *)&Info.CounterCount = 56LL;
    Info.Counters = (_PCW_COUNTER_DESCRIPTOR *)&`SpPerfInitRegistrationInformationUnitWriteCounterSet'::`2'::Descriptors;
    *(_QWORD *)&Info.Flags = 0LL;
    Info.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))RaUnitWriteIoCounterSetCallback;
    Info.CallbackContext = 0LL;
    if ( PcwRegister(&SpPerfUnitWriteCounterSet, &Info) < 0 )
      SpPerfUnitWriteCounterSet = 0LL;
    *(_QWORD *)&Info.Version = 256LL;
    Info.Name = (const _UNICODE_STRING *)L".0";
    *(_QWORD *)&Info.CounterCount = 56LL;
    Info.Counters = (_PCW_COUNTER_DESCRIPTOR *)&`SpPerfInitRegistrationInformationUnitWriteCounterSet'::`2'::Descriptors;
    *(_QWORD *)&Info.Flags = 0LL;
    Info.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))RaUnitTransferIoCounterSetCallback;
    Info.CallbackContext = 0LL;
    if ( PcwRegister(&SpPerfUnitTransferCounterSet, &Info) < 0 )
      SpPerfUnitTransferCounterSet = 0LL;
    *(_QWORD *)&Info.Version = 256LL;
    Info.Name = (const _UNICODE_STRING *)L"&(";
    *(_QWORD *)&Info.CounterCount = 2LL;
    Info.Counters = (_PCW_COUNTER_DESCRIPTOR *)&`SpPerfInitRegistrationInformationUnitQueueCounterSet'::`2'::Descriptors;
    *(_QWORD *)&Info.Flags = 0LL;
    Info.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))RaUnitQueueCounterSetCallback;
    Info.CallbackContext = 0LL;
    if ( PcwRegister(&SpPerfUnitQueueCounterSet, &Info) < 0 )
      SpPerfUnitQueueCounterSet = 0LL;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqqq(
      WPP_GLOBAL_Control->AttachedDevice,
      10LL,
      &WPP_06774e7355223c9a0fce0b422852f215_Traceguids,
      v7,
      v6,
      a3,
      a4);
  }
  if ( *a3 == 176 || *a3 == 208 && (a3[46] & 1) != 0 )
  {
    v10 = (void (__fastcall *)(struct _DRIVER_OBJECT *, _DWORD *))*((_QWORD *)a3 + 20);
    if ( v10 )
    {
      v10(v7, v6);
      v8 = 1;
    }
  }
  PortData = RaidGetPortData();
  if ( !PortData )
  {
    v9 = -1073741801;
    goto LABEL_69;
  }
  DriverObjectExtension = IoGetDriverObjectExtension(v7, DriverEntry);
  if ( !DriverObjectExtension )
  {
    v9 = IoAllocateDriverObjectExtension(v7, DriverEntry, 0x70u, &DriverObjectExtension);
    if ( v9 < 0 )
      goto LABEL_69;
    RaCreateDriver(DriverObjectExtension);
    v9 = RaInitializeDriver(DriverObjectExtension, v7, PortData, v6);
    if ( v9 < 0 )
      goto LABEL_69;
  }
  v13 = *a3;
  if ( *a3 == 208 )
  {
    if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
      McTemplateK0dqddddddiiiii_EtwWriteTransfer(
        DriverObject,
        (__int64)a2,
        v12,
        208,
        a3[1],
        a3[16],
        a3[17],
        a3[18],
        a3[46],
        a3[47],
        a3[48],
        *((_QWORD *)a3 + 17),
        *((_QWORD *)a3 + 18),
        *((_QWORD *)a3 + 19),
        *((_QWORD *)a3 + 20),
        *((_QWORD *)a3 + 21));
  }
  else
  {
    if ( v13 == 176 )
    {
      if ( (Microsoft_Windows_StorPortEnableBits & 0x10) == 0 )
        goto LABEL_55;
      v24 = *((_QWORD *)a3 + 21);
      v23 = *((_QWORD *)a3 + 20);
      v22 = *((_QWORD *)a3 + 19);
      v21 = *((_QWORD *)a3 + 18);
      v20 = *((_QWORD *)a3 + 17);
    }
    else
    {
      if ( (Microsoft_Windows_StorPortEnableBits & 0x10) == 0 )
        goto LABEL_55;
      LOBYTE(v24) = 0;
      LOBYTE(v23) = 0;
      LOBYTE(v22) = 0;
      LOBYTE(v21) = 0;
      LOBYTE(v20) = 0;
    }
    McTemplateK0dqddddddiiiii_EtwWriteTransfer(
      DriverObject,
      (__int64)a2,
      v12,
      v13,
      a3[1],
      a3[16],
      a3[17],
      a3[18],
      0,
      0,
      0,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
LABEL_55:
  inited = RaSaveDriverInitData(DriverObjectExtension, a3);
  v9 = inited;
  if ( inited >= 0 )
    v8 = 0;
  *((_WORD *)a3 + 52) |= 0x10u;
  if ( !CreateControlObject || *a3 != 208 || (a3[46] & 0x8000) == 0 || StorpControl )
  {
    if ( inited >= 0 )
      return (unsigned int)v9;
    goto LABEL_69;
  }
  RtlInitUnicodeString(&DestinationString, L"\\Device\\StorportControl");
  v17 = IoCreateDevice(v7, 4u, &DestinationString, 0x15u, 0x100u, 0, &DeviceObject);
  if ( v17 < 0 )
  {
    if ( (byte_140171467 & 1) != 0 )
      McTemplateK0d_EtwWriteTransfer(v15, &EventStorportControlCreationFailed, v16, v17);
  }
  else
  {
    StorpControl = DeviceObject;
    *(_DWORD *)DeviceObject->DeviceExtension = 1146246738;
    RtlInitUnicodeString(&SymbolicLinkName, L"\\DosDevices\\StorportControl");
    IoCreateSymbolicLink(&SymbolicLinkName, &DestinationString);
  }
  return 0;
}
