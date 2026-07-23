/*
 * XREFs of PiPagePathSetState @ 0x1407204F0
 * Callers:
 *     PpPagePathAssign @ 0x140720638 (PpPagePathAssign.c)
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x1407D8E48 (CmpVolumeContextSendDeviceUsageNotification.c)
 *     MiCreatePagingFile @ 0x1407EE934 (MiCreatePagingFile.c)
 *     MiDeletePagefile @ 0x1407EF4C8 (MiDeletePagefile.c)
 *     CmpVolumeContextCleanup @ 0x140A97254 (CmpVolumeContextCleanup.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14025C530 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x14025CA20 (IofCallDriver.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140355DE8 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     IoQueueThreadIrp @ 0x1404AC420 (IoQueueThreadIrp.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PpIrpAllocateDeviceUsageNotification @ 0x140731EBC (PpIrpAllocateDeviceUsageNotification.c)
 *     PpDevNodeLockTree @ 0x140A05140 (PpDevNodeLockTree.c)
 *     PpDevNodeUnlockTree @ 0x140A0D4DC (PpDevNodeUnlockTree.c)
 *     IoGetRelatedTargetDevice @ 0x140A4E0F8 (IoGetRelatedTargetDevice.c)
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
