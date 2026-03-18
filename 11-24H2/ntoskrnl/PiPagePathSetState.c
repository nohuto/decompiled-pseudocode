/*
 * XREFs of PiPagePathSetState @ 0x140722960
 * Callers:
 *     PpPagePathAssign @ 0x140722AA8 (PpPagePathAssign.c)
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x1407D88F8 (CmpVolumeContextSendDeviceUsageNotification.c)
 *     MiCreatePagingFile @ 0x1407EE364 (MiCreatePagingFile.c)
 *     MiDeletePagefile @ 0x1407EEEF8 (MiDeletePagefile.c)
 *     CmpVolumeContextCleanup @ 0x140A9BCE4 (CmpVolumeContextCleanup.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x1402D4B68 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     IoGetRelatedDeviceObject @ 0x140373C70 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140374160 (IofCallDriver.c)
 *     IoQueueThreadIrp @ 0x1404B1B90 (IoQueueThreadIrp.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PpIrpAllocateDeviceUsageNotification @ 0x140733F88 (PpIrpAllocateDeviceUsageNotification.c)
 *     PpDevNodeLockTree @ 0x140A08C10 (PpDevNodeLockTree.c)
 *     PpDevNodeUnlockTree @ 0x140A145FC (PpDevNodeUnlockTree.c)
 *     IoGetRelatedTargetDevice @ 0x140A561A8 (IoGetRelatedTargetDevice.c)
 */

__int64 __fastcall PiPagePathSetState(struct _FILE_OBJECT *Object, char a2)
{
  IRP *v4; // rax
  IRP *v5; // rbx
  NTSTATUS v7; // ebx
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v9; // r8
  __int64 v10; // rdx
  int v11; // eax
  int v12; // eax
  PDEVICE_OBJECT DeviceObject; // [rsp+30h] [rbp-40h] BYREF
  int v14; // [rsp+38h] [rbp-38h]
  char v15; // [rsp+3Ch] [rbp-34h]
  struct _FILE_OBJECT *v16; // [rsp+40h] [rbp-30h]
  NTSTATUS v17; // [rsp+48h] [rbp-28h]
  _BYTE Objecta[24]; // [rsp+58h] [rbp-18h] BYREF
  PVOID v19; // [rsp+80h] [rbp+10h] BYREF

  memset_0(&DeviceObject, 0, 0x40uLL);
  v19 = 0LL;
  PsReferenceSiloContext(Object);
  DeviceObject = IoGetRelatedDeviceObject(Object);
  v14 = 1;
  v15 = a2;
  v16 = Object;
  v4 = (IRP *)PpIrpAllocateDeviceUsageNotification(&DeviceObject);
  v5 = v4;
  if ( v4 )
  {
    IoQueueThreadIrp(v4);
    PpDevNodeLockTree(1LL);
    v7 = IofCallDriver(DeviceObject, v5);
    if ( v7 == 259 )
    {
      KeWaitForSingleObject(Objecta, Executive, 0, 0, 0LL);
      v7 = v17;
    }
    if ( v7 >= 0 && (int)IoGetRelatedTargetDevice(Object, &v19) >= 0 )
    {
      DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag((__int64)v19, 0x64446F50u);
      v9 = DeviceAttachmentBaseRefWithTag;
      if ( DeviceAttachmentBaseRefWithTag )
      {
        v10 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
        if ( v10 )
        {
          v11 = *(_DWORD *)(v10 + 768);
          if ( a2 )
            v12 = v11 + 1;
          else
            v12 = v11 - 1;
          *(_DWORD *)(v10 + 768) = v12;
        }
      }
      ObfDereferenceObjectWithTag(v9, 0x64446F50u);
      ObfDereferenceObject(v19);
    }
    PpDevNodeUnlockTree(1LL);
    return (unsigned int)v7;
  }
  else
  {
    ObfDereferenceObject(Object);
    return 3221225495LL;
  }
}
