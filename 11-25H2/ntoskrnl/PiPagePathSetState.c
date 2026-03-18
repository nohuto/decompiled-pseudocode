/*
 * XREFs of PiPagePathSetState @ 0x140716860
 * Callers:
 *     PpPagePathAssign @ 0x1407169A8 (PpPagePathAssign.c)
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x1407C9108 (CmpVolumeContextSendDeviceUsageNotification.c)
 *     MiCreatePagingFile @ 0x1407DE4C4 (MiCreatePagingFile.c)
 *     MiDeletePagefile @ 0x1407DF058 (MiDeletePagefile.c)
 *     CmpVolumeContextCleanup @ 0x1409F4E04 (CmpVolumeContextCleanup.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14035B058 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     IoGetRelatedDeviceObject @ 0x14035CFA0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x14035D320 (IofCallDriver.c)
 *     IoQueueThreadIrp @ 0x1404B0B80 (IoQueueThreadIrp.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PpIrpAllocateDeviceUsageNotification @ 0x140727CF0 (PpIrpAllocateDeviceUsageNotification.c)
 *     PpDevNodeLockTree @ 0x140A060F0 (PpDevNodeLockTree.c)
 *     PpDevNodeUnlockTree @ 0x140A0AA84 (PpDevNodeUnlockTree.c)
 *     IoGetRelatedTargetDevice @ 0x140A51834 (IoGetRelatedTargetDevice.c)
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
