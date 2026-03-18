/*
 * XREFs of ACPIThermalStartDevice @ 0x1400A78E0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     AMLIGetNamedChild @ 0x14001D630 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_Lqss @ 0x14001E4C0 (WPP_RECORDER_SF_Lqss.c)
 *     WPP_RECORDER_SF_qqss @ 0x140033134 (WPP_RECORDER_SF_qqss.c)
 *     ACPIThermalLoopEx @ 0x140037A14 (ACPIThermalLoopEx.c)
 *     AMLIFreeDataBuffs @ 0x140040074 (AMLIFreeDataBuffs.c)
 *     AcpiGetDriverProxyEndpoint @ 0x1400441B8 (AcpiGetDriverProxyEndpoint.c)
 *     ACPIDeviceInternalDeviceRequest @ 0x14004541C (ACPIDeviceInternalDeviceRequest.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x140045528 (ACPIThermalAcquireCoolingInterfaces.c)
 *     ACPIRegisterForDeviceNotifications @ 0x14004FA40 (ACPIRegisterForDeviceNotifications.c)
 *     ACPIInternalSetDeviceInterface @ 0x1400507B8 (ACPIInternalSetDeviceInterface.c)
 *     ACPIThermalGetSensorDevice @ 0x1400688AC (ACPIThermalGetSensorDevice.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     ACPIAmliEvaluateDsm @ 0x1400B9FBC (ACPIAmliEvaluateDsm.c)
 */

__int64 __fastcall ACPIThermalStartDevice(PDEVICE_OBJECT PhysicalDeviceObject, PIRP Irp)
{
  __int64 DeviceExtension; // rdi
  const char *v5; // rbp
  __int64 v6; // rcx
  const char *v7; // rcx
  const char *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r14
  struct _KEVENT *v11; // r12
  __int64 *v12; // rax
  __int64 v13; // rcx
  PVOID v14; // rbx
  int SensorDevice; // esi
  __int64 v16; // rcx
  const char *v17; // rax
  PVOID *v18; // r15
  PIRP *v19; // r14
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  PIRP v21; // rax
  __int64 Pool2; // rax
  __int64 v23; // rax
  struct _DEVICE_OBJECT *v24; // rcx
  __int64 v25; // rax
  ULONG v26; // r8d
  __int64 v27; // rcx
  const char *v28; // rax
  int v29; // ebx
  void *v30; // rcx
  PVOID P[2]; // [rsp+50h] [rbp-98h] BYREF
  __int128 v33; // [rsp+60h] [rbp-88h] BYREF
  _OWORD v34[3]; // [rsp+70h] [rbp-78h] BYREF

  DWORD1(v34[0]) = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)PhysicalDeviceObject);
  v5 = byte_140075488;
  v6 = *(_QWORD *)(DeviceExtension + 200);
  *(_DWORD *)(v6 + 92) = -1;
  *(_DWORD *)(v6 + 96) = 100;
  v7 = byte_140075488;
  *(_DWORD *)(DeviceExtension + 192) |= 0x8000000u;
  v8 = byte_140075488;
  v9 = *(_QWORD *)(DeviceExtension + 8);
  if ( (v9 & 0x200000000000LL) != 0 )
  {
    v7 = *(const char **)(DeviceExtension + 608);
    if ( (v9 & 0x400000000000LL) != 0 )
      v8 = *(const char **)(DeviceExtension + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x14u,
      (__int64)&WPP_d279f2bc80703de7af54b101c3d5140c_Traceguids,
      (char)Irp,
      DeviceExtension,
      v7,
      v8);
  v10 = *(_QWORD *)(DeviceExtension + 200);
  v11 = (struct _KEVENT *)(v10 + 280);
  KeClearEvent((PRKEVENT)(v10 + 280));
  v12 = AMLIGetNamedChild(*(__int64 **)(DeviceExtension + 760), 1347245151);
  P[0] = 0LL;
  *(_QWORD *)(v10 + 112) = v12;
  memset(v34, 0, sizeof(v34));
  v13 = *(_QWORD *)(DeviceExtension + 760);
  v33 = THRM_EXTENSIONS_DSM_UUID;
  if ( (int)ACPIAmliEvaluateDsm(v13, (unsigned int)&v33, 0, 0, (__int64)v34, (__int64)P) < 0 )
  {
    *(_DWORD *)(v10 + 128) = 0;
  }
  else
  {
    v14 = P[0];
    if ( *((_WORD *)P[0] + 1) == 3 && *((_DWORD *)P[0] + 6) )
      *(_DWORD *)(v10 + 128) = **((unsigned __int8 **)P[0] + 4);
    AMLIFreeDataBuffs((__int64)v14);
    ExFreePoolWithTag(v14, 0x52706341u);
  }
  SensorDevice = ACPIInternalSetDeviceInterface(PhysicalDeviceObject, &GUID_DEVICE_THERMAL_ZONE);
  if ( SensorDevice < 0 )
  {
    v16 = *(_QWORD *)(DeviceExtension + 8);
    v17 = byte_140075488;
    if ( (v16 & 0x200000000000LL) != 0 )
    {
      v5 = *(const char **)(DeviceExtension + 608);
      if ( (v16 & 0x400000000000LL) != 0 )
        v17 = *(const char **)(DeviceExtension + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x15u,
        0x15u,
        (__int64)&WPP_d279f2bc80703de7af54b101c3d5140c_Traceguids,
        SensorDevice,
        DeviceExtension,
        v5,
        v17);
    v18 = (PVOID *)(v10 + 200);
    v19 = (PIRP *)(v10 + 192);
    goto LABEL_32;
  }
  AttachedDeviceReference = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(DeviceExtension + 768));
  v18 = (PVOID *)(v10 + 200);
  *(_QWORD *)(v10 + 200) = AttachedDeviceReference;
  v21 = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
  v19 = (PIRP *)(v10 + 192);
  *v19 = v21;
  if ( !v21
    || (ACPIRegisterForDeviceNotifications(
          *(_QWORD *)(DeviceExtension + 768),
          (__int64)ACPIThermalEvent,
          *(_QWORD *)(DeviceExtension + 768)),
        (Pool2 = ExAllocatePool2(256LL, 64LL, 1416651585LL)) == 0) )
  {
    SensorDevice = -1073741670;
LABEL_32:
    if ( *v18 )
    {
      ObfDereferenceObject(*v18);
      *v18 = 0LL;
    }
    if ( *v19 )
    {
      IoFreeIrp(*v19);
      *v19 = 0LL;
    }
    v30 = *(void **)(DeviceExtension + 224);
    if ( v30 )
    {
      ExFreePoolWithTag(v30, 0x54706341u);
      *(_QWORD *)(DeviceExtension + 224) = 0LL;
    }
    KeSetEvent(v11, 0, 0);
    goto LABEL_39;
  }
  *(_QWORD *)(Pool2 + 8) = &ACPIThermalGuidList;
  *(_DWORD *)Pool2 = 1;
  AcpiGetDriverProxyEndpoint((_QWORD *)(Pool2 + 16), (__int64)ACPIThermalQueryWmiRegInfo);
  AcpiGetDriverProxyEndpoint((_QWORD *)(v23 + 24), (__int64)ACPIThermalQueryWmiDataBlock);
  v24 = *(struct _DEVICE_OBJECT **)(DeviceExtension + 768);
  *(_QWORD *)(DeviceExtension + 224) = v25;
  SensorDevice = IoWMIRegistrationControl(v24, v26);
  if ( SensorDevice < 0 )
    goto LABEL_32;
  SensorDevice = ACPIThermalGetSensorDevice((_QWORD *)DeviceExtension);
  if ( SensorDevice < 0 )
  {
    IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(DeviceExtension + 768), 2u);
    v27 = *(_QWORD *)(DeviceExtension + 8);
    v28 = byte_140075488;
    if ( (v27 & 0x200000000000LL) != 0 )
    {
      v5 = *(const char **)(DeviceExtension + 608);
      if ( (v27 & 0x400000000000LL) != 0 )
        v28 = *(const char **)(DeviceExtension + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x15u,
        0x16u,
        (__int64)&WPP_d279f2bc80703de7af54b101c3d5140c_Traceguids,
        SensorDevice,
        DeviceExtension,
        v5,
        v28);
    goto LABEL_32;
  }
  ACPIThermalAcquireCoolingInterfaces(DeviceExtension);
  *(_DWORD *)(DeviceExtension + 368) = 2;
  v29 = ACPIDeviceInternalDeviceRequest((_QWORD *)DeviceExtension, 1LL, 0LL, 0LL, 0);
  ACPIThermalLoopEx(DeviceExtension, 0x8000000, 0x10000000);
  SensorDevice = 0;
  if ( v29 != 259 )
    SensorDevice = v29;
  if ( SensorDevice < 0 )
    goto LABEL_32;
LABEL_39:
  Irp->IoStatus.Status = SensorDevice;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)SensorDevice;
}
