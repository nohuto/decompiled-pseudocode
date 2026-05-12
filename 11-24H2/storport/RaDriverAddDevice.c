/*
 * XREFs of RaDriverAddDevice @ 0x140045960
 * Callers:
 *     <none>
 * Callees:
 *     RaidCreateDeviceName @ 0x1400396C8 (RaidCreateDeviceName.c)
 *     RaidAdapterHack @ 0x140039D6C (RaidAdapterHack.c)
 *     RaGetBusInterface @ 0x1400428EC (RaGetBusInterface.c)
 *     RaidCreateAdapter @ 0x140043580 (RaidCreateAdapter.c)
 *     RaidDeleteAdapter @ 0x1400437A8 (RaidDeleteAdapter.c)
 *     WPP_SF_qq @ 0x140067E84 (WPP_SF_qq.c)
 *     CreateNvmeAdapter @ 0x1400CB1EC (CreateNvmeAdapter.c)
 *     DeleteNvmeAdapter @ 0x1400CB320 (DeleteNvmeAdapter.c)
 *     RaFindDriverInitData @ 0x140181008 (RaFindDriverInitData.c)
 *     PortReadStorageBusType @ 0x1401810C8 (PortReadStorageBusType.c)
 *     PortRegistryReadDeviceKey @ 0x1401B8954 (PortRegistryReadDeviceKey.c)
 *     PortRegistryWriteDeviceKey @ 0x1401BB6D4 (PortRegistryWriteDeviceKey.c)
 *     RaidInitializeAdapter @ 0x1401BE038 (RaidInitializeAdapter.c)
 *     InitializeNvmeAdapter @ 0x1401BEFA0 (InitializeNvmeAdapter.c)
 */

__int64 __fastcall RaDriverAddDevice(PDRIVER_OBJECT DriverObject, PDEVICE_OBJECT DeviceObject)
{
  struct _DRIVER_OBJECT *v3; // r14
  _DWORD *v4; // rsi
  char *DeviceExtension; // r15
  char v6; // bl
  KSPIN_LOCK *DriverObjectExtension; // r13
  unsigned int BusInterface; // eax
  __int64 v9; // rdx
  __int64 DriverInitData; // rdi
  char v11; // al
  int v12; // ecx
  ULONG v13; // edx
  int NvmeAdapter; // edi
  __int64 v15; // r8
  PDEVICE_OBJECT v16; // rax
  struct _DEVICE_OBJECT *v17; // r14
  int v18; // eax
  KSPIN_LOCK **v19; // rcx
  KSPIN_LOCK v20; // rdx
  KSPIN_LOCK *v21; // rax
  PDEVICE_OBJECT SourceDevice; // [rsp+40h] [rbp-49h] BYREF
  int v24; // [rsp+48h] [rbp-41h] BYREF
  int v25; // [rsp+4Ch] [rbp-3Dh] BYREF
  int v26; // [rsp+50h] [rbp-39h] BYREF
  BOOL v27; // [rsp+54h] [rbp-35h] BYREF
  int v28; // [rsp+58h] [rbp-31h]
  __int64 v29; // [rsp+60h] [rbp-29h] BYREF
  struct _UNICODE_STRING v30; // [rsp+68h] [rbp-21h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-11h] BYREF
  struct _UNICODE_STRING DeviceName; // [rsp+88h] [rbp-1h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+98h] [rbp+Fh] BYREF
  char v35; // [rsp+100h] [rbp+77h]
  int KeyHandle; // [rsp+108h] [rbp+7Fh] BYREF

  KeyHandle = 0;
  SourceDevice = 0LL;
  v3 = DriverObject;
  v24 = 0;
  v4 = 0LL;
  v25 = 0;
  DeviceExtension = 0LL;
  v6 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v26 = 0;
  DestinationString = 0LL;
  v27 = 0;
  v30 = 0LL;
  v35 = 0;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(
      WPP_GLOBAL_Control->AttachedDevice,
      11LL,
      &WPP_ce0a347073b43ea6ed7ab85136c3e909_Traceguids,
      DriverObject,
      DeviceObject);
  }
  DeviceName = 0LL;
  DriverObjectExtension = (KSPIN_LOCK *)IoGetDriverObjectExtension(v3, DriverEntry);
  RaidCreateDeviceName((__int64)DeviceObject, &DeviceName, (unsigned __int32 *)&v24);
  BusInterface = RaGetBusInterface(DeviceObject);
  v9 = 0LL;
  if ( BusInterface != -1 )
    v9 = BusInterface;
  DriverInitData = RaFindDriverInitData(DriverObjectExtension, v9);
  v11 = PortReadStorageBusType(DriverObjectExtension + 5, &KeyHandle);
  v12 = KeyHandle;
  if ( !v11 )
    v12 = 127;
  v28 = v12;
  if ( v12 == 20 )
  {
    v6 = 1;
    goto LABEL_30;
  }
  if ( v12 == 17 )
  {
    if ( DisableNativeNVMeStack )
      goto LABEL_36;
    if ( DriverInitData && (*(_DWORD *)(DriverInitData + 184) & 0x40000000) != 0 )
    {
      if ( g_OSisClient )
      {
        if ( GeNativeNVMeEnabledForClient )
          v6 = 1;
      }
      else if ( GeNativeNVMeEnabledForServer )
      {
        v6 = 1;
      }
    }
    RtlInitUnicodeString(&DestinationString, L"StorPort");
    RtlInitUnicodeString(&v30, L"EnableNVMeInterface");
    v29 = (__int64)&v25;
    KeyHandle = 4;
    if ( (int)PortRegistryReadDeviceKey(
                (int)DeviceObject,
                (int)&DestinationString,
                (int)&v30,
                4,
                (__int64)&v29,
                &KeyHandle) < 0 )
    {
      if ( !v6 )
        goto LABEL_29;
    }
    else
    {
      if ( !v25 )
      {
LABEL_23:
        v6 = 0;
LABEL_29:
        v3 = DriverObject;
        goto LABEL_30;
      }
      v6 = 1;
    }
    if ( !DriverInitData || (*(_DWORD *)(DriverInitData + 184) & 0x40000000) != 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"StorPort");
      RtlInitUnicodeString(&v30, L"DMArSupport");
      v29 = (__int64)&v26;
      KeyHandle = 4;
      if ( (int)PortRegistryReadDeviceKey(
                  (int)DeviceObject,
                  (int)&DestinationString,
                  (int)&v30,
                  4,
                  (__int64)&v29,
                  &KeyHandle) >= 0 )
      {
        v27 = v26 != 0;
        RtlInitUnicodeString(&DestinationString, L"DMA Management");
        RtlInitUnicodeString(&v30, L"RemappingSupported");
        PortRegistryWriteDeviceKey(
          (_DWORD)DeviceObject,
          (unsigned int)&DestinationString,
          (unsigned int)&v30,
          4,
          (__int64)&v27,
          4);
      }
      goto LABEL_29;
    }
    goto LABEL_23;
  }
LABEL_30:
  if ( !DisableNativeNVMeStack && DriverInitData && (*(_DWORD *)(DriverInitData + 184) & 0x40000) != 0 )
  {
    v6 = 1;
    v35 = 1;
LABEL_35:
    v13 = 1424;
    goto LABEL_37;
  }
  if ( v6 )
    goto LABEL_35;
LABEL_36:
  v13 = 48 * RaidLogListSize + 6272;
LABEL_37:
  NvmeAdapter = IoCreateDevice(v3, v13, &DeviceName, 4u, 0x100u, 0, &SourceDevice);
  if ( NvmeAdapter < 0 )
    goto LABEL_57;
  if ( v6 )
  {
    LOBYTE(v15) = v35;
    DeviceExtension = (char *)SourceDevice->DeviceExtension;
    NvmeAdapter = CreateNvmeAdapter(DeviceExtension, SourceDevice, v15);
    if ( NvmeAdapter < 0 )
      goto LABEL_58;
  }
  else
  {
    v4 = SourceDevice->DeviceExtension;
    NvmeAdapter = RaidCreateAdapter(v4);
    if ( NvmeAdapter < 0 )
      goto LABEL_60;
  }
  v16 = IoAttachDeviceToDeviceStack(SourceDevice, DeviceObject);
  v17 = v16;
  if ( !v16 )
  {
    NvmeAdapter = -1073741823;
    goto LABEL_57;
  }
  if ( v6 )
    v18 = InitializeNvmeAdapter(
            (int)DeviceExtension,
            (int)SourceDevice,
            (int)DriverObjectExtension,
            (int)v16,
            DeviceObject,
            (__int64)&DeviceName,
            v24,
            v28);
  else
    v18 = RaidInitializeAdapter(
            (int)v4,
            (int)SourceDevice,
            (int)DriverObjectExtension,
            (int)v16,
            DeviceObject,
            (__int64)&DeviceName,
            v24,
            v28);
  DeviceName.Buffer = 0LL;
  NvmeAdapter = v18;
  if ( v18 < 0 )
  {
    IoDetachDevice(v17);
LABEL_57:
    if ( v6 )
    {
LABEL_58:
      if ( DeviceExtension )
        DeleteNvmeAdapter(DeviceExtension);
LABEL_62:
      if ( SourceDevice )
        IoDeleteDevice(SourceDevice);
      goto LABEL_64;
    }
LABEL_60:
    if ( v4 )
      RaidDeleteAdapter((__int64)v4);
    goto LABEL_62;
  }
  KeAcquireInStackQueuedSpinLock(DriverObjectExtension + 10, &LockHandle);
  v19 = (KSPIN_LOCK **)(DriverObjectExtension + 7);
  v20 = DriverObjectExtension[7];
  if ( v6 )
    v21 = (KSPIN_LOCK *)(DeviceExtension + 64);
  else
    v21 = (KSPIN_LOCK *)(v4 + 16);
  if ( *(KSPIN_LOCK ***)(v20 + 8) != v19 )
    __fastfail(3u);
  *v21 = v20;
  v21[1] = (KSPIN_LOCK)v19;
  *(_QWORD *)(v20 + 8) = v21;
  *v19 = v21;
  ++*((_DWORD *)DriverObjectExtension + 18);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !v6 )
    RaidAdapterHack((__int64)v4);
  SourceDevice->Flags |= 0x10u;
  SourceDevice->Flags &= ~0x80u;
LABEL_64:
  if ( DeviceName.Buffer )
    ExFreePoolWithTag(DeviceName.Buffer, 0x53446152u);
  return (unsigned int)NvmeAdapter;
}
