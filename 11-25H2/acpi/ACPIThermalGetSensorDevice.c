/*
 * XREFs of ACPIThermalGetSensorDevice @ 0x1400688AC
 * Callers:
 *     ACPIThermalStartDevice @ 0x1400A78E0 (ACPIThermalStartDevice.c)
 * Callees:
 *     FreeDataBuffs @ 0x14000E530 (FreeDataBuffs.c)
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x140014164 (AMLIEvalNameSpaceObject.c)
 *     ACPIInternalDecrementIrpReferenceCount @ 0x14001B414 (ACPIInternalDecrementIrpReferenceCount.c)
 *     AMLIGetNamedChild @ 0x14001D630 (AMLIGetNamedChild.c)
 *     AMLIGetNameSpaceObject @ 0x140028510 (AMLIGetNameSpaceObject.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     ACPIAmliEvaluateDsm @ 0x1400B9FBC (ACPIAmliEvaluateDsm.c)
 */

__int64 __fastcall ACPIThermalGetSensorDevice(_QWORD *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rsi
  struct _DEVICE_OBJECT *v4; // r14
  IRP *Irp; // r12
  __int64 *v6; // rcx
  PDEVICE_OBJECT AttachedDeviceReference; // r13
  __int64 *v8; // rax
  NTSTATUS DeviceProperty; // ebx
  __int64 v10; // rcx
  int v11; // eax
  _OWORD *v12; // r15
  NTSTATUS v13; // eax
  KIRQL v14; // r8
  PVOID Pool2; // r15
  PVOID Object; // [rsp+60h] [rbp-A0h] BYREF
  ULONG BufferLength; // [rsp+68h] [rbp-98h] BYREF
  __int64 v19; // [rsp+70h] [rbp-90h] BYREF
  void *FileHandle; // [rsp+78h] [rbp-88h] BYREF
  PVOID P; // [rsp+80h] [rbp-80h] BYREF
  PVOID Context; // [rsp+88h] [rbp-78h]
  __int64 *v23; // [rsp+90h] [rbp-70h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-68h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v26; // [rsp+E0h] [rbp-20h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+F0h] [rbp-10h] BYREF
  _OWORD v28[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v29; // [rsp+120h] [rbp+20h]
  __int128 v30; // [rsp+128h] [rbp+28h] BYREF
  __int128 v31; // [rsp+138h] [rbp+38h]
  __int128 v32; // [rsp+148h] [rbp+48h]

  v1 = a1[25];
  P = 0LL;
  Object = 0LL;
  FileHandle = 0LL;
  v19 = 0LL;
  v3 = 0LL;
  BufferLength = 0;
  v4 = 0LL;
  Context = a1;
  Irp = 0LL;
  v6 = (__int64 *)a1[95];
  AttachedDeviceReference = 0LL;
  DestinationString = 0LL;
  *(_QWORD *)&v32 = 0LL;
  v30 = 0LL;
  DWORD2(v32) = 0;
  v31 = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v29 = 0LL;
  memset(v28, 0, sizeof(v28));
  v8 = AMLIGetNamedChild(v6, 1314083935);
  v23 = v8;
  if ( v8 )
  {
    v11 = AMLIEvalNameSpaceObject(v8, (__int64)v28, 0, 0LL);
    v12 = v28;
  }
  else
  {
    if ( (*(_DWORD *)(v1 + 128) & 4) == 0 )
    {
      DeviceProperty = 0;
      *(_QWORD *)(v1 + 208) = *(_QWORD *)(v1 + 192);
      *(_QWORD *)(v1 + 216) = *(_QWORD *)(v1 + 200);
      goto LABEL_40;
    }
    v30 = 0LL;
    v10 = a1[95];
    v31 = 0LL;
    v32 = 0LL;
    v26 = THRM_EXTENSIONS_DSM_UUID;
    v11 = ACPIAmliEvaluateDsm(v10, (unsigned int)&v26, 0, 2, (__int64)&v30, (__int64)&P);
    v12 = P;
  }
  DeviceProperty = v11;
  if ( v11 < 0 )
    goto LABEL_27;
  if ( *((_WORD *)v12 + 1) != 2 )
  {
    dword_140089138 = 0;
    pszDest = 0;
    DeviceProperty = -1072431095;
    FreeDataBuffs((__int64)v12, 1u);
LABEL_27:
    Pool2 = Object;
    goto LABEL_28;
  }
  v13 = AMLIGetNameSpaceObject(*((_BYTE **)v12 + 4), *((__int64 **)Context + 95), &v19, 0);
  dword_140089138 = 0;
  pszDest = 0;
  DeviceProperty = v13;
  FreeDataBuffs((__int64)v12, 1u);
  if ( DeviceProperty < 0 )
    goto LABEL_27;
  if ( !v19 )
    goto LABEL_26;
  v14 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v3 = *(_QWORD *)(*(_QWORD *)v19 + 104LL);
  if ( !v3 || (*(_BYTE *)(v3 + 8) & 4) != 0 )
  {
    v3 = 0LL;
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v14);
    goto LABEL_26;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v3 + 728));
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v14);
  v4 = *(struct _DEVICE_OBJECT **)(v3 + 784);
  if ( !v4 )
  {
LABEL_26:
    DeviceProperty = -1073741810;
    goto LABEL_27;
  }
  ObfReferenceObject(*(PVOID *)(v3 + 784));
  ACPIInternalDecrementIrpReferenceCount(v3);
  v3 = 0LL;
  if ( IoGetDeviceProperty(v4, DevicePropertyPhysicalDeviceObjectName, 0, 0LL, &BufferLength) != -1073741789 )
  {
    DeviceProperty = -1073741823;
    goto LABEL_27;
  }
  Pool2 = (PVOID)ExAllocatePool2(256LL, BufferLength, 1416651585LL);
  if ( Pool2 )
  {
    DeviceProperty = IoGetDeviceProperty(v4, DevicePropertyPhysicalDeviceObjectName, BufferLength, Pool2, &BufferLength);
    if ( DeviceProperty < 0 )
      goto LABEL_28;
    RtlInitUnicodeString(&DestinationString, (PCWSTR)Pool2);
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    DeviceProperty = ZwCreateFile(&FileHandle, 0x1F01FFu, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 3u, 1u, 0, 0LL, 0);
    if ( DeviceProperty < 0 )
    {
      FileHandle = 0LL;
      goto LABEL_28;
    }
    Object = 0LL;
    DeviceProperty = ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    if ( DeviceProperty < 0 )
      goto LABEL_28;
    AttachedDeviceReference = IoGetAttachedDeviceReference(v4);
    Irp = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
    if ( Irp )
    {
      DeviceProperty = IoRegisterPlugPlayNotification(
                         EventCategoryTargetDeviceChange,
                         0,
                         Object,
                         v4->DriverObject,
                         AcpiThermalDeviceTargetChange,
                         Context,
                         (PVOID *)(v1 + 240));
      if ( DeviceProperty >= 0 )
      {
        *(_QWORD *)(v1 + 208) = Irp;
        Irp = 0LL;
        *(_QWORD *)(v1 + 216) = AttachedDeviceReference;
        AttachedDeviceReference = 0LL;
        DeviceProperty = 0;
      }
      goto LABEL_28;
    }
  }
  DeviceProperty = -1073741670;
LABEL_28:
  if ( v23 )
    AMLIDereferenceHandleEx((__int64)v23);
  if ( v19 )
    AMLIDereferenceHandleEx(v19);
  if ( v4 )
    ObfDereferenceObject(v4);
  if ( AttachedDeviceReference )
    ObfDereferenceObject(AttachedDeviceReference);
  if ( v3 )
    ACPIInternalDecrementIrpReferenceCount(v3);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x54706341u);
LABEL_40:
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( Irp )
    IoFreeIrp(Irp);
  if ( P )
    ExFreePoolWithTag(P, 0x52706341u);
  return (unsigned int)DeviceProperty;
}
