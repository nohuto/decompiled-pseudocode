/*
 * XREFs of ACPIDispatchAddDevice @ 0x14005DCE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x14001E4C0 (WPP_RECORDER_SF_Lqss.c)
 *     WPP_RECORDER_SF_qq @ 0x140023BC4 (WPP_RECORDER_SF_qq.c)
 *     RtlStringCchCopyA @ 0x1400256A0 (RtlStringCchCopyA.c)
 *     WPP_RECORDER_SF_ @ 0x1400283FC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003A7DC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_sL @ 0x14005AC40 (WPP_RECORDER_SF_sL.c)
 *     ACPIGetPortRangeInterfaces @ 0x14005E33C (ACPIGetPortRangeInterfaces.c)
 *     memset @ 0x140070F40 (memset.c)
 *     ACPICreateRootSymbolicLink @ 0x14009C570 (ACPICreateRootSymbolicLink.c)
 *     AcpiSetupNativeMethodInterface @ 0x1400A1BC0 (AcpiSetupNativeMethodInterface.c)
 */

__int64 __fastcall ACPIDispatchAddDevice(PDRIVER_OBJECT DriverObject, PDEVICE_OBJECT DeviceObject)
{
  char v2; // bl
  struct _DEVICE_OBJECT *v5; // rbp
  char *Pool2; // r15
  unsigned int v7; // edi
  char *v8; // rax
  char *v9; // r12
  NTSTATUS v10; // eax
  int v11; // edx
  _QWORD *v12; // rax
  int v13; // edx
  _QWORD *v14; // r14
  const char *v15; // rax
  const char *v16; // rcx
  KIRQL v17; // al
  KIRQL v18; // al
  int v19; // edx
  __int64 v20; // rdx
  PDEVICE_OBJECT SourceDevice; // [rsp+90h] [rbp+18h] BYREF

  v2 = 0;
  SourceDevice = 0LL;
  v5 = 0LL;
  Pool2 = (char *)ExAllocatePool2(64LL, 14LL, 1399874369LL);
  if ( !Pool2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        6u,
        0xBu,
        (__int64)&WPP_9c896f3fb25c3899c55b6b55cc08feda_Traceguids,
        14);
    v7 = -1073741670;
LABEL_24:
    if ( SourceDevice )
      IoDeleteDevice(SourceDevice);
    v15 = (const char *)&unk_1400C3BB3;
    v16 = (const char *)&unk_1400C3BB3;
    goto LABEL_33;
  }
  RtlStringCchCopyA(Pool2, 0xEuLL, "ACPI\\PNP0C08");
  v8 = (char *)ExAllocatePool2(64LL, 11LL, 1399874369LL);
  v9 = v8;
  if ( !v8 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        6u,
        0xCu,
        (__int64)&WPP_9c896f3fb25c3899c55b6b55cc08feda_Traceguids,
        11);
LABEL_19:
    v7 = -1073741670;
LABEL_20:
    ExFreePoolWithTag(Pool2, 0);
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
    if ( v5 )
      IoDetachDevice(v5);
    goto LABEL_24;
  }
  RtlStringCchCopyA(v8, 0xBuLL, "0x5F534750");
  v10 = IoCreateDevice(DriverObject, 0, 0LL, 0x32u, 0x100u, 0, &SourceDevice);
  v7 = v10;
  if ( v10 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sL(
        WPP_GLOBAL_Control->DeviceExtension,
        v11,
        6,
        13,
        (__int64)&WPP_9c896f3fb25c3899c55b6b55cc08feda_Traceguids,
        (__int64)Pool2,
        v10);
    SourceDevice = 0LL;
    goto LABEL_20;
  }
  v5 = IoAttachDeviceToDeviceStack(SourceDevice, DeviceObject);
  if ( !v5 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        6u,
        0xEu,
        (__int64)&WPP_9c896f3fb25c3899c55b6b55cc08feda_Traceguids,
        SourceDevice,
        DeviceObject);
    v7 = -1073741810;
    goto LABEL_20;
  }
  v12 = ExAllocateFromNPagedLookasideList(&DeviceExtensionLookAsideList);
  v14 = v12;
  if ( !v12 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v13,
        22,
        15,
        (__int64)&WPP_9c896f3fb25c3899c55b6b55cc08feda_Traceguids);
    }
    goto LABEL_19;
  }
  memset(v12, 0, 0x468uLL);
  *((_DWORD *)v14 + 183) = 1;
  _InterlockedIncrement((volatile signed __int32 *)v14 + 182);
  v17 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  SourceDevice->DeviceExtension = v14;
  v14[96] = SourceDevice;
  v14[97] = v5;
  v14[76] = Pool2;
  v14[3] = &AcpiFdoIrpDispatch;
  v14[98] = DeviceObject;
  *((_DWORD *)v14 + 4) = 1599293264;
  v14[77] = v9;
  *((_DWORD *)v14 + 127) = 0;
  *((_DWORD *)v14 + 128) = 1;
  *((_DWORD *)v14 + 129) = 1;
  *((_DWORD *)v14 + 130) = 1;
  *((_DWORD *)v14 + 131) = 1;
  *((_DWORD *)v14 + 132) = 4;
  *(_QWORD *)((char *)v14 + 532) = 4LL;
  *((_DWORD *)v14 + 135) = 0;
  *((_DWORD *)v14 + 137) = 1;
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v17);
  _InterlockedOr64(v14 + 1, 0x1E00000200010uLL);
  v14[101] = v14 + 100;
  v14[100] = v14 + 100;
  v14[103] = v14 + 102;
  v14[102] = v14 + 102;
  v14[105] = v14 + 104;
  v14[104] = v14 + 104;
  v14[107] = v14 + 106;
  v14[106] = v14 + 106;
  v14[74] = v14 + 73;
  v14[73] = v14 + 73;
  *((_DWORD *)v14 + 176) = -1;
  v14[90] = v14 + 89;
  v14[89] = v14 + 89;
  *v14 = &gAcpiTriageInfo;
  ::DriverObject = DriverObject;
  v18 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  RootDeviceExtension = (ULONG_PTR)v14;
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v18);
  ACPIGetPortRangeInterfaces(DeviceObject);
  if ( IoWMIRegistrationControl(SourceDevice, 1u) < 0
    && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v19) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v19,
      1,
      10,
      (__int64)&WPP_3ad0379a4aff33c3a6e5470e3717ea43_Traceguids);
  }
  AcpiSetupNativeMethodInterface();
  SourceDevice->Flags &= ~0x80u;
  ACPICreateRootSymbolicLink(DeviceObject);
  IoRegisterPlugPlayNotification(
    EventCategoryDeviceInterfaceChange,
    1u,
    &GUID_PRM_DEVICE,
    ::DriverObject,
    AcpiPrmNotifyInterfaceChange,
    0LL,
    &NotificationEntry);
  v20 = v14[1];
  v15 = (const char *)&unk_1400C3BB3;
  v16 = (const char *)&unk_1400C3BB3;
  v2 = (char)v14;
  if ( (v20 & 0x200000000000LL) != 0 )
  {
    v16 = (const char *)v14[76];
    if ( (v20 & 0x400000000000LL) != 0 )
      v15 = (const char *)v14[77];
  }
LABEL_33:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x10u,
      (__int64)&WPP_9c896f3fb25c3899c55b6b55cc08feda_Traceguids,
      v7,
      v2,
      v16,
      v15);
  return v7;
}
