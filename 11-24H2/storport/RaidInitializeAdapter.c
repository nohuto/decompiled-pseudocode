/*
 * XREFs of RaidInitializeAdapter @ 0x1401BE038
 * Callers:
 *     RaDriverAddDevice @ 0x140045960 (RaDriverAddDevice.c)
 * Callees:
 *     RaidQueryAcpiDsdStorageD3Property @ 0x1400384B4 (RaidQueryAcpiDsdStorageD3Property.c)
 *     RaidDriverGetName @ 0x14003E03C (RaidDriverGetName.c)
 *     RaidAllocateDeviceProperty @ 0x140041B28 (RaidAllocateDeviceProperty.c)
 *     PortGetLinkTimeoutValue @ 0x1400422B0 (PortGetLinkTimeoutValue.c)
 *     RaGetBusInterface @ 0x1400428EC (RaGetBusInterface.c)
 *     StorpInitializeAdapterTelemetry @ 0x1400519B4 (StorpInitializeAdapterTelemetry.c)
 *     Feature_TBTNVMe_RTD3__private_IsEnabledDeviceUsageNoInline @ 0x14005669C (Feature_TBTNVMe_RTD3__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 *     RaFindDriverInitData @ 0x140181008 (RaFindDriverInitData.c)
 *     RiAllocateMiniportDeviceExtension @ 0x140181048 (RiAllocateMiniportDeviceExtension.c)
 *     PortRegistryReadDeviceKey @ 0x1401B8954 (PortRegistryReadDeviceKey.c)
 *     PortGetRegistrySettings @ 0x1401B969C (PortGetRegistrySettings.c)
 *     PortGetDriverParameters @ 0x1401B972C (PortGetDriverParameters.c)
 *     PortGetBusyRetryCountValue @ 0x1401B97BC (PortGetBusyRetryCountValue.c)
 *     PortRegistryWriteDeviceKey @ 0x1401BB6D4 (PortRegistryWriteDeviceKey.c)
 *     PortGetIoTimeoutValue @ 0x1401BD230 (PortGetIoTimeoutValue.c)
 *     PortGetBusyPauseTimeValue @ 0x1401BD34C (PortGetBusyPauseTimeValue.c)
 *     PortGetIoLatencyCapValue @ 0x1401BD464 (PortGetIoLatencyCapValue.c)
 */

__int64 __fastcall RaidInitializeAdapter(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        PDEVICE_OBJECT DeviceObject,
        __int128 *a6,
        unsigned int a7,
        int a8)
{
  __int64 v8; // rsi
  __int128 v11; // xmm0
  int BusInterface; // eax
  int v13; // edx
  _QWORD *DriverInitData; // rax
  __int64 result; // rax
  int v16; // eax
  __int64 v17; // rcx
  struct _UNICODE_STRING *v18; // rcx
  struct _UNICODE_STRING *v19; // rcx
  __int64 v20; // rcx
  struct _UNICODE_STRING *v21; // rcx
  unsigned int v22; // ecx
  char v23; // al
  char v24; // al
  char v25; // al
  char v26; // al
  char v27; // al
  char v28; // al
  char v29; // al
  char v30; // al
  int v31; // eax
  int v32; // eax
  char v33; // al
  char v34; // al
  char v35; // al
  __int64 v36; // rcx
  __int64 v37; // rdx
  bool v38; // zf
  __int64 v39; // rax
  int KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  __int64 p_Uuid; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING v42; // [rsp+50h] [rbp-B0h] BYREF
  int v43; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  int v45; // [rsp+78h] [rbp-88h] BYREF
  int v46; // [rsp+7Ch] [rbp-84h] BYREF
  int v47; // [rsp+80h] [rbp-80h] BYREF
  int v48; // [rsp+84h] [rbp-7Ch] BYREF
  int v49; // [rsp+88h] [rbp-78h] BYREF
  int v50; // [rsp+8Ch] [rbp-74h] BYREF
  int v51; // [rsp+90h] [rbp-70h] BYREF
  int v52; // [rsp+94h] [rbp-6Ch] BYREF
  int v53; // [rsp+98h] [rbp-68h] BYREF
  int v54; // [rsp+9Ch] [rbp-64h] BYREF
  int v55; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v56; // [rsp+A8h] [rbp-58h] BYREF
  int v57[4]; // [rsp+C0h] [rbp-40h] BYREF
  __m128i si128; // [rsp+D0h] [rbp-30h]
  int v59; // [rsp+E0h] [rbp-20h]
  int v60; // [rsp+ECh] [rbp-14h]
  UUID Uuid; // [rsp+210h] [rbp+110h] BYREF

  v8 = a1 + 376;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a3;
  *(_QWORD *)(a1 + 32) = DeviceObject;
  *(_QWORD *)(a1 + 24) = a4;
  DestinationString = 0LL;
  v45 = 0;
  v56 = 0LL;
  v46 = 0;
  v11 = *a6;
  *(_DWORD *)(a1 + 5712) = -1;
  *(_DWORD *)(a1 + 1992) = a7;
  *(_OWORD *)(a1 + 40) = v11;
  *(_DWORD *)(a1 + 2076) = 1;
  *(_BYTE *)(a1 + 4893) = 1;
  *(_DWORD *)(a1 + 5364) = 0;
  *(_QWORD *)(a1 + 376) = a1;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v52 = 0;
  v53 = 0;
  v43 = 0;
  v55 = 0;
  v51 = 0;
  v42 = 0LL;
  v54 = 0;
  BusInterface = RaGetBusInterface(DeviceObject);
  v13 = 0;
  if ( BusInterface != -1 )
    v13 = BusInterface;
  if ( !v13 )
    *(_BYTE *)(a1 + 104) |= 8u;
  DriverInitData = RaFindDriverInitData(*(_QWORD *)(a1 + 16), v13);
  *(_QWORD *)(a1 + 608) = DriverInitData;
  if ( !DriverInitData )
    return 3221225486LL;
  v16 = *((_DWORD *)DriverInitData + 1);
  *(_BYTE *)(a1 + 109) |= 4u;
  *(_DWORD *)(a1 + 392) = v16;
  result = RiAllocateMiniportDeviceExtension(v8);
  if ( (int)result >= 0 )
  {
    PortGetDriverParameters(*(_QWORD *)(a1 + 16) + 40LL, a7, (PVOID *)(a1 + 2000));
    v17 = *(_QWORD *)(a1 + 16) + 40LL;
    *(_DWORD *)(a1 + 2072) = 30;
    PortGetLinkTimeoutValue(v17, a7);
    v18 = (struct _UNICODE_STRING *)(*(_QWORD *)(a1 + 16) + 40LL);
    *(_DWORD *)(a1 + 4124) = 0;
    PortGetIoTimeoutValue(v18, (_DWORD *)(a1 + 4124));
    v19 = (struct _UNICODE_STRING *)(*(_QWORD *)(a1 + 16) + 40LL);
    *(_QWORD *)(a1 + 4904) = 0LL;
    PortGetIoLatencyCapValue(v19, (_DWORD *)(a1 + 4904));
    if ( *(_QWORD *)(a1 + 4904) )
      *(_QWORD *)(a1 + 4904) *= 10000LL;
    v20 = *(_QWORD *)(a1 + 16) + 40LL;
    *(_DWORD *)(a1 + 5668) = 0;
    PortGetBusyRetryCountValue(v20, (_DWORD *)(a1 + 5668));
    v21 = (struct _UNICODE_STRING *)(*(_QWORD *)(a1 + 16) + 40LL);
    *(_DWORD *)(a1 + 5672) = 0;
    PortGetBusyPauseTimeValue(v21, (_DWORD *)(a1 + 5672));
    RtlInitUnicodeString(&DestinationString, L"StorPort");
    RtlInitUnicodeString(&v42, L"TotalSenseDataBytes");
    p_Uuid = (__int64)&v45;
    KeyHandle = 4;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, &DestinationString, (__int64)&v42, 4u, &p_Uuid, &KeyHandle) >= 0 )
    {
      v22 = v45;
    }
    else
    {
      v22 = 256;
      v45 = 256;
    }
    if ( v22 > 0x12 )
    {
      v23 = v22;
      if ( v22 >= 0xFF )
        v23 = -1;
      *(_BYTE *)(a1 + 4892) = v23;
    }
    else
    {
      *(_BYTE *)(a1 + 4892) = 18;
    }
    RtlInitUnicodeString(&v42, L"EnableIdlePowerManagement");
    *(_BYTE *)(a1 + 104) &= ~0x20u;
    p_Uuid = (__int64)&v46;
    KeyHandle = 4;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, &DestinationString, (__int64)&v42, 4u, &p_Uuid, &KeyHandle) >= 0 )
    {
      v24 = *(_BYTE *)(a1 + 104);
      if ( v46 )
        v25 = v24 | 0x20;
      else
        v25 = v24 & 0xDF;
      *(_BYTE *)(a1 + 104) = v25;
    }
    RtlInitUnicodeString(&v42, L"DisableRuntimePowerManagement");
    *(_BYTE *)(a1 + 107) &= ~0x20u;
    p_Uuid = (__int64)&v47;
    KeyHandle = 4;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, &DestinationString, (__int64)&v42, 4u, &p_Uuid, &KeyHandle) >= 0 )
    {
      v26 = *(_BYTE *)(a1 + 107);
      if ( v47 )
        v27 = v26 | 0x20;
      else
        v27 = v26 & 0xDF;
      *(_BYTE *)(a1 + 107) = v27;
    }
    RtlInitUnicodeString(&v42, L"DisableD3Cold");
    v28 = *(_BYTE *)(a1 + 107) & 0xEF;
    KeyHandle = 4;
    *(_BYTE *)(a1 + 107) = v28 | 8;
    p_Uuid = (__int64)&v48;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, &DestinationString, (__int64)&v42, 4u, &p_Uuid, &KeyHandle) >= 0 )
    {
      v29 = *(_BYTE *)(a1 + 107);
      if ( v48 )
        v30 = v29 & 0xF7;
      else
        v30 = v29 | 8;
      *(_BYTE *)(a1 + 107) = v30;
    }
    RtlInitUnicodeString(&v42, L"IdleTimeoutInMS");
    *(_DWORD *)(a1 + 4976) = 60000;
    p_Uuid = (__int64)&v49;
    KeyHandle = 4;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, &DestinationString, (__int64)&v42, 4u, &p_Uuid, &KeyHandle) >= 0 )
    {
      v31 = v49;
      *(_BYTE *)(a1 + 107) |= 0x80u;
      *(_DWORD *)(a1 + 4976) = v31;
    }
    if ( (unsigned int)Feature_TBTNVMe_RTD3__private_IsEnabledDeviceUsageNoInline() )
    {
      *(_DWORD *)(a1 + 4980) = 30000;
      RtlInitUnicodeString(&v42, L"TBTIdleTimeoutInMS");
      KeyHandle = 4;
      p_Uuid = (__int64)&v50;
      if ( (int)PortRegistryReadDeviceKey(DeviceObject, &DestinationString, (__int64)&v42, 4u, &p_Uuid, &KeyHandle) >= 0 )
      {
        v32 = v50;
        *(_BYTE *)(a1 + 113) |= 4u;
        *(_DWORD *)(a1 + 4980) = v32;
      }
    }
    *(_BYTE *)(a1 + 113) &= ~1u;
    RtlInitUnicodeString(&v42, L"DlrmDisable");
    KeyHandle = 4;
    p_Uuid = (__int64)&v51;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, &DestinationString, (__int64)&v42, 4u, &p_Uuid, &KeyHandle) >= 0 )
      *(_BYTE *)(a1 + 113) = (v51 != 0) | *(_BYTE *)(a1 + 113) & 0xFE;
    RtlInitUnicodeString(&v42, L"UseDMAv3");
    *(_BYTE *)(a1 + 108) &= ~4u;
    p_Uuid = (__int64)&v52;
    KeyHandle = 4;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, &DestinationString, (__int64)&v42, 4u, &p_Uuid, &KeyHandle) >= 0 )
      *(_BYTE *)(a1 + 108) = (v52 != 0 ? 4 : 0) | *(_BYTE *)(a1 + 108) & 0xFB;
    RtlInitUnicodeString(&v42, L"PowerSrbTimeout");
    *(_DWORD *)(a1 + 5608) = *(_DWORD *)(a1 + 4124);
    KeyHandle = 4;
    p_Uuid = (__int64)&v53;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, &DestinationString, (__int64)&v42, 4u, &p_Uuid, &KeyHandle) >= 0
      && v53 )
    {
      *(_DWORD *)(a1 + 5608) = v53;
    }
    if ( *(_DWORD *)(a1 + 5608) > 0x6Eu )
      *(_DWORD *)(a1 + 5608) = 110;
    RtlInitUnicodeString(&v42, L"BusSpecificResetTimeout");
    *(_DWORD *)(a1 + 6032) = 5;
    p_Uuid = (__int64)&v43;
    KeyHandle = 4;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, &DestinationString, (__int64)&v42, 4u, &p_Uuid, &KeyHandle) >= 0
      && v43 )
    {
      *(_DWORD *)(a1 + 6032) = v43;
    }
    RtlInitUnicodeString(&v42, L"PLDRTimeout");
    *(_DWORD *)(a1 + 6036) = 10;
    p_Uuid = (__int64)&v43;
    v43 = 0;
    KeyHandle = 4;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, &DestinationString, (__int64)&v42, 4u, &p_Uuid, &KeyHandle) >= 0
      && v43 )
    {
      *(_DWORD *)(a1 + 6036) = v43;
    }
    RtlInitUnicodeString(&v42, L"DisableNVMeActiveNamespaceIDListCheck");
    *(_BYTE *)(a1 + 111) &= ~0x40u;
    p_Uuid = (__int64)&v54;
    KeyHandle = 4;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, &DestinationString, (__int64)&v42, 4u, &p_Uuid, &KeyHandle) >= 0 )
    {
      v33 = *(_BYTE *)(a1 + 111);
      if ( v54 )
        v34 = v33 | 0x40;
      else
        v34 = v33 & 0xBF;
      *(_BYTE *)(a1 + 111) = v34;
    }
    v35 = *(_BYTE *)(a1 + 108) & 0xFE;
    *(_QWORD *)(a1 + 4968) = 0LL;
    *(_BYTE *)(a1 + 108) = v35 | 0x20;
    memset_0(v57, 0, 0x148uLL);
    v36 = *(_QWORD *)(a1 + 16) + 40LL;
    v57[0] = 255;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v60 = 0;
    v59 = -1;
    PortGetRegistrySettings(v36, a7);
    *(_QWORD *)(a1 + 4288) = si128.m128i_i64[1];
    *(_QWORD *)(a1 + 4296) = si128.m128i_i64[0];
    *(_DWORD *)(a1 + 4272) = v59;
    *(_DWORD *)(a1 + 4280) = v60;
    *(_QWORD *)(a1 + 4304) = 0LL;
    *(_QWORD *)(a1 + 4312) = 0LL;
    *(_QWORD *)(a1 + 4320) = 0xFFFFFFFFLL;
    *(_DWORD *)(a1 + 4276) = 6;
    if ( a8 != 127 )
      *(_DWORD *)(a1 + 4276) = a8;
    RaidDriverGetName(a3, (__int64)&v56);
    *(_QWORD *)(a1 + 4720) = *((_QWORD *)&v56 + 1);
    RaidAllocateDeviceProperty(DeviceObject, v37, (_QWORD *)(a1 + 4728));
    v38 = RaidLogListSize == 0;
    *(_DWORD *)(a1 + 4932) = RaidLogListSize;
    v39 = a1 + 6272;
    *(_DWORD *)(a1 + 4928) = -1;
    if ( v38 )
      v39 = 0LL;
    *(_QWORD *)(a1 + 4936) = v39;
    if ( StorageD3AllowedOnCurrentPlatform )
      StorageD3InModernStandbyEnabled = 1;
    if ( RaidQueryAcpiDsdStorageD3Property(*(PDEVICE_OBJECT *)(a1 + 8), (_DWORD *)(a1 + 5712)) )
      StorageD3InModernStandbyEnabled = *(_DWORD *)(a1 + 5712) != 0;
    if ( StorageD3RegistryState == 1 )
    {
      StorageD3InModernStandbyEnabled = 1;
    }
    else
    {
      if ( !StorageD3RegistryState )
        StorageD3InModernStandbyEnabled = 0;
      if ( !StorageD3InModernStandbyEnabled )
        goto LABEL_72;
    }
    *(_BYTE *)(a1 + 112) |= 0x40u;
LABEL_72:
    if ( EnableNVMeICE && (*(_DWORD *)(*(_QWORD *)(a1 + 608) + 184LL) & 0x20000) != 0 )
      IoRegisterPlugPlayNotification(
        EventCategoryDeviceInterfaceChange,
        1u,
        (PVOID)&GUID_DEVINTERFACE_NVME_ICE,
        *(PDRIVER_OBJECT *)(a3 + 8),
        (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)RegisterForNvmeIceInterfaceCallback,
        0LL,
        (PVOID *)(a1 + 6200));
    Uuid = 0LL;
    RtlInitUnicodeString(&v42, L"AdapterGuid");
    p_Uuid = (__int64)&Uuid;
    KeyHandle = 16;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, &DestinationString, (__int64)&v42, 3u, &p_Uuid, &KeyHandle) < 0
      && ExUuidCreate(&Uuid) >= 0 )
    {
      PortRegistryWriteDeviceKey(DeviceObject, (__int64)&DestinationString, (__int64)&v42, 3u, p_Uuid, 16);
    }
    *(UUID *)(a1 + 5064) = Uuid;
    StorpInitializeAdapterTelemetry(a1);
    *(_DWORD *)(a1 + 6176) = FirmwareActivateTimeout;
    RtlInitUnicodeString(&v42, L"FwActivateTimeoutForController");
    KeyHandle = 4;
    p_Uuid = (__int64)&v55;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, &DestinationString, (__int64)&v42, 4u, &p_Uuid, &KeyHandle) >= 0 )
      *(_DWORD *)(a1 + 6176) = v55;
    KeInitializeDpc(
      (PRKDPC)(*(_QWORD *)(a1 + 8) + 200LL),
      (PKDEFERRED_ROUTINE)RaidpAdapterDpcRoutine,
      *(PVOID *)(a1 + 8));
    KeInitializeEvent((PRKEVENT)(a1 + 6104), SynchronizationEvent, 0);
    *(_DWORD *)(a1 + 128) &= ~2u;
    result = 0LL;
    *(_QWORD *)(a1 + 120) = 0LL;
  }
  return result;
}
