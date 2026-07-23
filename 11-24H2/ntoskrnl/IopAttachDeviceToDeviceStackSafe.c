/*
 * XREFs of IopAttachDeviceToDeviceStackSafe @ 0x1403B38E4
 * Callers:
 *     IoAttachDeviceToDeviceStackSafe @ 0x1403B3BB0 (IoAttachDeviceToDeviceStackSafe.c)
 *     IoAttachDeviceToDeviceStack @ 0x1403B3CB0 (IoAttachDeviceToDeviceStack.c)
 *     IoAttachDeviceByPointer @ 0x1405938B0 (IoAttachDeviceByPointer.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1402CB820 (KeReleaseQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     IopGetDeviceAttachmentBase @ 0x140355DB8 (IopGetDeviceAttachmentBase.c)
 *     KeAcquireQueuedSpinLock @ 0x140357D70 (KeAcquireQueuedSpinLock.c)
 *     IoGetAttachedDevice @ 0x1403B3B80 (IoGetAttachedDevice.c)
 *     PnpCheckForWaitingReportedDevice @ 0x1403B3BD4 (PnpCheckForWaitingReportedDevice.c)
 *     IopIsKnownGoodLegacyFsFilter @ 0x1403B3C38 (IopIsKnownGoodLegacyFsFilter.c)
 *     IoGetDiskDeviceObject @ 0x140499000 (IoGetDiskDeviceObject.c)
 *     McTemplateK0hzr0_EtwWriteTransfer @ 0x140593F54 (McTemplateK0hzr0_EtwWriteTransfer.c)
 *     McTemplateK0hzr0hzr2_EtwWriteTransfer @ 0x140593FDC (McTemplateK0hzr0hzr2_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ObQueryNameString @ 0x1409524A0 (ObQueryNameString.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     IovAttachDeviceToDeviceStack @ 0x140B84514 (IovAttachDeviceToDeviceStack.c)
 */

PDEVICE_OBJECT __fastcall IopAttachDeviceToDeviceStackSafe(__int64 a1, struct _DEVICE_OBJECT *a2, PDEVICE_OBJECT *a3)
{
  bool v4; // r15
  bool v5; // si
  PDEVICE_OBJECT AttachedDevice; // rdi
  char v9; // r12
  struct _DEVICE_OBJECT *v10; // r13
  unsigned __int64 DeviceType; // rcx
  __int64 v12; // rax
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rax
  int v14; // ecx
  __int64 v15; // rdx
  PDEVICE_OBJECT v16; // rax
  int v17; // edx
  int v18; // ecx
  unsigned int v19; // eax
  int v20; // r8d
  __int64 v22; // rax
  _OBJECT_NAME_INFORMATION *p_ObjectNameInfo; // rsi
  _OBJECT_NAME_INFORMATION *v24; // r15
  int v25; // r9d
  PDEVICE_OBJECT v26; // r13
  NTSTATUS v27; // r12d
  _OBJECT_NAME_INFORMATION *Pool2; // rax
  __int16 v29; // dx
  bool v30; // [rsp+40h] [rbp-B8h]
  bool v31; // [rsp+41h] [rbp-B7h]
  KIRQL OldIrql; // [rsp+42h] [rbp-B6h]
  KIRQL OldIrqla[2]; // [rsp+42h] [rbp-B6h]
  ULONG Length; // [rsp+44h] [rbp-B4h] BYREF
  PDEVICE_OBJECT DiskDeviceObject; // [rsp+48h] [rbp-B0h] BYREF
  _QWORD v36[2]; // [rsp+50h] [rbp-A8h] BYREF
  struct _DEVICE_OBJECT *DeviceAttachmentBase; // [rsp+60h] [rbp-98h]
  struct _DEVICE_OBJECT *v38; // [rsp+68h] [rbp-90h]
  _OBJECT_NAME_INFORMATION ObjectNameInfo; // [rsp+70h] [rbp-88h] BYREF

  v4 = 0;
  DiskDeviceObject = *(PDEVICE_OBJECT *)(a1 + 312);
  v5 = 0;
  v30 = 0;
  v31 = 0;
  v38 = a2;
  OldIrql = KeAcquireQueuedSpinLock(0xAuLL);
  if ( (MmVerifierData & 0x10) != 0 )
    IovAttachDeviceToDeviceStack((unsigned int)MmVerifierData, a2);
  AttachedDevice = IoGetAttachedDevice(a2);
  v9 = 0;
  DeviceAttachmentBase = (struct _DEVICE_OBJECT *)IopGetDeviceAttachmentBase((__int64)a2);
  v10 = DeviceAttachmentBase;
  DeviceType = DeviceAttachmentBase->DeviceType;
  if ( (unsigned int)DeviceType <= 0x35 )
  {
    v12 = 0x20000100100108LL;
    if ( _bittest64(&v12, DeviceType) )
    {
      DeviceObjectExtension = DeviceAttachmentBase->DeviceObjectExtension;
      v14 = DeviceAttachmentBase->Flags & 0x10000000;
      v4 = v14 != 0;
      v15 = DeviceObjectExtension->ExtensionFlags & 0x2000;
      v30 = v14 != 0;
      v5 = (DeviceObjectExtension->ExtensionFlags & 0x2000) != 0;
      v31 = v5;
      if ( IopBlockLegacyFsFilters || v14 || (_DWORD)v15 )
      {
        v9 = 1;
        if ( (unsigned __int8)IopIsKnownGoodLegacyFsFilter(*(_QWORD *)(a1 + 8) + 56LL, v15) )
          v9 = 0;
        else
          ObfReferenceObjectWithTag(DeviceAttachmentBase, 0x746C6644u);
        v31 = v5;
        v30 = v4;
      }
    }
  }
  if ( (AttachedDevice->Flags & 0x80u) != 0
    || (AttachedDevice->DeviceObjectExtension->ExtensionFlags & 0xF) != 0
    || AttachedDevice->StackSize >= 0x7Du
    || v9 )
  {
    AttachedDevice = 0LL;
    if ( a3 )
      *a3 = 0LL;
  }
  else
  {
    if ( a3 )
      *a3 = AttachedDevice;
    *(_BYTE *)(a1 + 76) = AttachedDevice->StackSize + 1;
    *(_DWORD *)(a1 + 152) = AttachedDevice->AlignmentRequirement;
    *(_WORD *)(a1 + 304) = AttachedDevice->SectorSize;
    if ( (AttachedDevice->DeviceObjectExtension->ExtensionFlags & 0x10) != 0 )
      *(_DWORD *)(*(_QWORD *)(a1 + 312) + 32LL) |= 0x10u;
    if ( (AttachedDevice->Flags & 0x8000000) != 0 )
      *(_DWORD *)(a1 + 48) |= 0x8000000u;
    _InterlockedExchange64((volatile __int64 *)&AttachedDevice->AttachedDevice, a1);
    v16 = DiskDeviceObject;
    ++AttachedDevice->Spare1;
    *(_QWORD *)&v16->Flags = AttachedDevice;
    PnpCheckForWaitingReportedDevice(v10);
  }
  KeReleaseQueuedSpinLock(0xAuLL, OldIrql);
  if ( v9 )
  {
    if ( IopBlockLegacyFsFilters )
    {
      if ( (Microsoft_Windows_Kernel_IOEnableBits & 4) != 0 )
        McTemplateK0hzr0_EtwWriteTransfer(
          v18,
          v17,
          0,
          *(_WORD *)(*(_QWORD *)(a1 + 8) + 56LL) >> 1,
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL));
    }
    else if ( v4 && (Microsoft_Windows_Kernel_IOEnableBits & 4) != 0
           || v5 && (Microsoft_Windows_Kernel_IOEnableBits & 4) != 0 )
    {
      v22 = *(_QWORD *)(a1 + 8);
      p_ObjectNameInfo = &ObjectNameInfo;
      v36[0] = 1835034LL;
      v24 = (_OBJECT_NAME_INFORMATION *)v36;
      v25 = *(unsigned __int16 *)(v22 + 56);
      LOWORD(v25) = (unsigned __int16)v25 >> 1;
      DiskDeviceObject = 0LL;
      *(_WORD *)OldIrqla = v25;
      v36[1] = L"(Unavailable)";
      Length = 64;
      if ( KeGetCurrentIrql() < 2u )
      {
        if ( IoGetDiskDeviceObject(v10, &DiskDeviceObject) >= 0 )
        {
          v26 = DiskDeviceObject;
          v27 = ObQueryNameString(DiskDeviceObject, &ObjectNameInfo, Length, &Length);
          if ( v27 == -1073741820 )
          {
            Pool2 = (_OBJECT_NAME_INFORMATION *)ExAllocatePool2(0x100uLL, Length, 0x6E4F6F49u);
            p_ObjectNameInfo = Pool2;
            if ( Pool2 )
              v27 = ObQueryNameString(v26, Pool2, Length, &Length);
            else
              v27 = -1073741670;
          }
          ObfDereferenceObjectWithTag(v26, 0x746C6644u);
          v10 = DeviceAttachmentBase;
          if ( v27 >= 0 )
            v24 = p_ObjectNameInfo;
        }
        v25 = *(unsigned __int16 *)OldIrqla;
      }
      v29 = v24->Name.Length >> 1;
      if ( v30 )
      {
        if ( (Microsoft_Windows_Kernel_IOEnableBits & 4) != 0 )
          McTemplateK0hzr0hzr2_EtwWriteTransfer(
            *(_QWORD *)(a1 + 8),
            (unsigned int)IoMgr_LegacyFsFilterBlockedOnScm,
            KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink,
            v25,
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
            v29,
            (__int64)v24->Name.Buffer);
      }
      else if ( v31 && (Microsoft_Windows_Kernel_IOEnableBits & 4) != 0 )
      {
        McTemplateK0hzr0hzr2_EtwWriteTransfer(
          *(_QWORD *)(a1 + 8),
          (unsigned int)IoMgr_LegacyFsFilterAttachDisallowed,
          KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink,
          v25,
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
          v29,
          (__int64)v24->Name.Buffer);
      }
      if ( p_ObjectNameInfo && p_ObjectNameInfo != &ObjectNameInfo )
        ExFreePoolWithTag(p_ObjectNameInfo, 0);
    }
    ObfDereferenceObjectWithTag(v10, 0x746C6644u);
  }
  v19 = v38->DeviceType;
  if ( v19 <= 0x14 )
  {
    v20 = 1048840;
    if ( _bittest(&v20, v19) )
    {
      if ( FltMgrCallbacks )
        guard_dispatch_icall_no_overrides(a1, v38);
    }
  }
  return AttachedDevice;
}
