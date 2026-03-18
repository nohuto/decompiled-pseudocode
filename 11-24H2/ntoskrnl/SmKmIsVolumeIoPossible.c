/*
 * XREFs of SmKmIsVolumeIoPossible @ 0x140799CF0
 * Callers:
 *     SmKmStoreFileCreateForIoType @ 0x14079ABFC (SmKmStoreFileCreateForIoType.c)
 * Callees:
 *     IoFreeIrp @ 0x14031A520 (IoFreeIrp.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     IoAllocateIrp @ 0x1403724A0 (IoAllocateIrp.c)
 *     IoGetRelatedDeviceObject @ 0x140373C70 (IoGetRelatedDeviceObject.c)
 *     IoSetThreadHardErrorMode @ 0x14045D2F0 (IoSetThreadHardErrorMode.c)
 *     ZwQueryVolumeInformationFile @ 0x1406A6D30 (ZwQueryVolumeInformationFile.c)
 *     SmKmSendUsageNotification @ 0x14079A678 (SmKmSendUsageNotification.c)
 */

__int64 __fastcall SmKmIsVolumeIoPossible(__int64 a1, _DWORD *a2)
{
  BOOLEAN v4; // r15
  PFILE_OBJECT *v5; // rsi
  NTSTATUS Status; // ebx
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  IRP *Irp; // rax
  IRP *v9; // rbp
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-28h] BYREF
  __int64 FsInformation; // [rsp+60h] [rbp+8h] BYREF

  FsInformation = 0LL;
  IoStatusBlock = 0LL;
  v4 = IoSetThreadHardErrorMode(0);
  v5 = (PFILE_OBJECT *)(a1 + 8);
  Status = ZwQueryVolumeInformationFile(*(HANDLE *)a1, &IoStatusBlock, &FsInformation, 8u, FileFsDeviceInformation);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&(*v5)->Event, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status < 0 )
    goto LABEL_8;
  if ( (FsInformation & 0x100000000LL) != 0 )
  {
    Status = 0;
    *a2 = 0;
    goto LABEL_9;
  }
  RelatedDeviceObject = IoGetRelatedDeviceObject(*v5);
  Irp = IoAllocateIrp(RelatedDeviceObject->StackSize, 0);
  v9 = Irp;
  if ( !Irp )
  {
    Status = -1073741670;
LABEL_8:
    *a2 = 0;
    goto LABEL_9;
  }
  Status = SmKmSendUsageNotification(Irp, *v5);
  if ( Status >= 0 )
  {
    *(_QWORD *)(a1 + 40) = v9;
    *a2 = 1;
  }
  else
  {
    Status = 0;
    *a2 = 0;
    IoFreeIrp(v9);
  }
LABEL_9:
  IoSetThreadHardErrorMode(v4);
  return (unsigned int)Status;
}
