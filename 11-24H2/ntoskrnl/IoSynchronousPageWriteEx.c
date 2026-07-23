/*
 * XREFs of IoSynchronousPageWriteEx @ 0x14025BD80
 * Callers:
 *     IoSynchronousPageWrite @ 0x14025B350 (IoSynchronousPageWrite.c)
 *     MiZeroPageWrite @ 0x14025FE14 (MiZeroPageWrite.c)
 *     IoWriteCapturedPristineTriageDumpToDedicatedDumpFile @ 0x14058F5E0 (IoWriteCapturedPristineTriageDumpToDedicatedDumpFile.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14025C530 (IoGetRelatedDeviceObject.c)
 *     MmIsFileObjectAPagingFile @ 0x14025C5CC (MmIsFileObjectAPagingFile.c)
 *     IofCallDriver @ 0x14025CA20 (IofCallDriver.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14025CAE0 (IoSetDiskIoAttributionFromThread.c)
 *     IopSetDiskIoAttributionExtension @ 0x14025CCA4 (IopSetDiskIoAttributionExtension.c)
 *     IopAllocateReserveIrp @ 0x14025CDD8 (IopAllocateReserveIrp.c)
 *     IopQueueThreadIrp @ 0x140284270 (IopQueueThreadIrp.c)
 *     IopAllocateIrpExReturn @ 0x1402843D0 (IopAllocateIrpExReturn.c)
 *     IopAllocateBackpocketIrp @ 0x140592D08 (IopAllocateBackpocketIrp.c)
 */

NTSTATUS __fastcall IoSynchronousPageWriteEx(
        struct _FILE_OBJECT *a1,
        struct _MDL *a2,
        LARGE_INTEGER *a3,
        struct _KEVENT *a4,
        char a5,
        __int64 a6,
        struct _IO_STATUS_BLOCK *a7)
{
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  PDEVICE_OBJECT RelatedDeviceObject; // rsi
  IRP *Irp; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  struct _KTHREAD *CurrentThread; // rcx
  int v16; // edx
  unsigned __int64 v17; // rax
  int v18; // eax
  unsigned int v19; // eax
  __int64 v21; // rcx
  struct _KTHREAD *v22; // rcx

  SectionObjectPointer = a1->SectionObjectPointer;
  if ( SectionObjectPointer && SectionObjectPointer->SharedCacheMap )
  {
    __incgsdword(0x8974u);
    __addgsdword(0x8978u, (a2->ByteCount + 4095) >> 12);
  }
  RelatedDeviceObject = IoGetRelatedDeviceObject(a1);
  Irp = (IRP *)IopAllocateIrpExReturn(RelatedDeviceObject, (unsigned __int8)RelatedDeviceObject->StackSize, 0LL);
  if ( Irp )
    goto LABEL_5;
  if ( (unsigned int)MmIsFileObjectAPagingFile(a1) )
  {
    _InterlockedIncrement(&IoSynchronousPageWriteIrpAllocationFailure);
    Irp = (IRP *)IopAllocateReserveIrp(v21, (unsigned __int8)RelatedDeviceObject->StackSize, 1LL);
    if ( !Irp )
      return -1073741670;
  }
  else
  {
    _InterlockedIncrement(&IoSynchronousPageWriteNonPagefileIrpAllocationFailure);
    Irp = (IRP *)IopAllocateBackpocketIrp(RelatedDeviceObject, (unsigned __int8)RelatedDeviceObject->StackSize, 0LL);
    if ( !Irp )
      return -1073741670;
  }
LABEL_5:
  Irp->AllocationFlags |= 0x20u;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Irp->MdlAddress = a2;
  Irp->Flags = 67;
  CurrentThread = KeGetCurrentThread();
  v16 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 9) & 7;
  v17 = CurrentThread->Process[1].Padding[3];
  if ( v17 )
  {
    v18 = *(_DWORD *)(v17 + 1084);
    if ( v16 >= v18 )
      v16 = v18;
  }
  if ( v16 < 2 )
  {
    if ( CurrentThread == KeGetCurrentThread() && LODWORD(CurrentThread[1].Timer.TimerListEntry.Flink) )
    {
      v16 = 2;
    }
    else
    {
      v22 = KeGetCurrentThread();
      if ( (v22->MiscFlags & 0x400) != 0
        || v22->PreviousMode == 1
        || ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0
        || KeGetCurrentThread()[1].TrapFrame == (_KTRAP_FRAME *)2 )
      {
        ++IoPagingWriteLowPriorityCount;
      }
      else
      {
        ++IoPagingWriteLowPriorityBumpedCount;
        v16 = 2;
      }
    }
  }
  v19 = Irp->Flags & 0xFFF1FFFF;
  Irp->RequestorMode = 0;
  Irp->UserEvent = a4;
  Irp->UserIosb = a7;
  Irp->Flags = v19 | ((v16 << 17) + 0x20000);
  Irp->UserBuffer = (char *)a2->StartVa + a2->ByteOffset;
  Irp->Tail.Overlay.OriginalFileObject = a1;
  Irp->Tail.Overlay.Thread = KeGetCurrentThread();
  CurrentStackLocation[-1].MajorFunction = 4;
  CurrentStackLocation[-1].Parameters.Read.Length = a2->ByteCount;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset = *a3;
  CurrentStackLocation[-1].Flags |= a5;
  CurrentStackLocation[-1].FileObject = a1;
  if ( a6 )
    IopSetDiskIoAttributionExtension(Irp, *(_QWORD *)(a6 + 24), Irp->Tail.Overlay.Thread, 0LL);
  else
    IoSetDiskIoAttributionFromThread(Irp, Irp->Tail.Overlay.Thread);
  IopQueueThreadIrp(Irp);
  return IofCallDriver(RelatedDeviceObject, Irp);
}
