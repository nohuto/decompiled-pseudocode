/*
 * XREFs of MiSynchronousPageWrite @ 0x14035C250
 * Callers:
 *     MiZeroPageFileFirstPage @ 0x1407DFB48 (MiZeroPageFileFirstPage.c)
 * Callees:
 *     IopAllocateIrpExReturn @ 0x1402537B0 (IopAllocateIrpExReturn.c)
 *     IopQueueThreadIrp @ 0x140253BB0 (IopQueueThreadIrp.c)
 *     PsGetBaseIoPriorityThread @ 0x14035C4A0 (PsGetBaseIoPriorityThread.c)
 *     IoGetRelatedDeviceObject @ 0x14035CFA0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x14035D320 (IofCallDriver.c)
 *     MmIsFileObjectAPagingFile @ 0x14035D458 (MmIsFileObjectAPagingFile.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14035D5D0 (IoSetDiskIoAttributionFromThread.c)
 *     IopSetDiskIoAttributionExtension @ 0x14035D794 (IopSetDiskIoAttributionExtension.c)
 *     IopAllocateReserveIrp @ 0x14035D8C8 (IopAllocateReserveIrp.c)
 *     IopAllocateBackpocketIrp @ 0x140592628 (IopAllocateBackpocketIrp.c)
 */

NTSTATUS __fastcall MiSynchronousPageWrite(
        struct _FILE_OBJECT *a1,
        struct _MDL *a2,
        _QWORD *a3,
        struct _KEVENT *a4,
        char a5,
        __int64 a6,
        struct _IO_STATUS_BLOCK *a7)
{
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  PDEVICE_OBJECT RelatedDeviceObject; // rdi
  __int64 v13; // rdx
  __int64 v14; // rdx
  IRP *Irp; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r9
  struct _KTHREAD *CurrentThread; // rcx
  int BaseIoPriorityThread; // edx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 ReserveIrp; // rax
  struct _KTHREAD *v26; // rcx

  SectionObjectPointer = a1->SectionObjectPointer;
  if ( SectionObjectPointer && SectionObjectPointer->SharedCacheMap )
  {
    __incgsdword(0x8974u);
    __addgsdword(0x8978u, (a2->ByteCount + 4095) >> 12);
  }
  RelatedDeviceObject = IoGetRelatedDeviceObject(a1);
  LOBYTE(v13) = RelatedDeviceObject->StackSize;
  Irp = (IRP *)IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v13, 0LL);
  if ( !Irp )
  {
    if ( (unsigned int)MmIsFileObjectAPagingFile(a1) )
    {
      _InterlockedIncrement(&IoSynchronousPageWriteIrpAllocationFailure);
      LOBYTE(v23) = RelatedDeviceObject->StackSize;
      ReserveIrp = IopAllocateReserveIrp(v24, v23, 1LL);
    }
    else
    {
      _InterlockedIncrement(&IoSynchronousPageWriteNonPagefileIrpAllocationFailure);
      LOBYTE(v23) = RelatedDeviceObject->StackSize;
      ReserveIrp = IopAllocateBackpocketIrp(RelatedDeviceObject, v23, 0LL);
    }
    Irp = (IRP *)ReserveIrp;
    if ( !ReserveIrp )
      return -1073741670;
  }
  Irp->AllocationFlags |= 0x20u;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Irp->MdlAddress = a2;
  Irp->Flags = 67;
  CurrentThread = KeGetCurrentThread();
  BaseIoPriorityThread = PsGetBaseIoPriorityThread(CurrentThread, v14, CurrentThread, CurrentStackLocation);
  if ( BaseIoPriorityThread < 2 )
  {
    if ( (struct _KTHREAD *)v19 == KeGetCurrentThread() && *(_DWORD *)(v19 + 1504) )
    {
      BaseIoPriorityThread = 2;
    }
    else
    {
      v26 = KeGetCurrentThread();
      if ( (v26->MiscFlags & 0x400) != 0
        || v26->PreviousMode == 1
        || ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0
        || KeGetCurrentThread()[1].TrapFrame == (_KTRAP_FRAME *)2 )
      {
        ++IoPagingWriteLowPriorityCount;
      }
      else
      {
        ++IoPagingWriteLowPriorityBumpedCount;
        BaseIoPriorityThread = 2;
      }
    }
  }
  v21 = Irp->Flags & 0xFFF1FFFF;
  Irp->RequestorMode = 0;
  Irp->UserEvent = a4;
  Irp->UserIosb = a7;
  Irp->Flags = v21 | ((BaseIoPriorityThread << 17) + 0x20000);
  Irp->UserBuffer = (char *)a2->StartVa + a2->ByteOffset;
  Irp->Tail.Overlay.OriginalFileObject = a1;
  Irp->Tail.Overlay.Thread = KeGetCurrentThread();
  *(_BYTE *)(v20 - 72) = 4;
  *(_DWORD *)(v20 - 64) = a2->ByteCount;
  *(_QWORD *)(v20 - 48) = *a3;
  *(_BYTE *)(v20 - 70) |= a5;
  *(_QWORD *)(v20 - 24) = a1;
  if ( a6 )
    IopSetDiskIoAttributionExtension(Irp, *(_QWORD *)(a6 + 24), Irp->Tail.Overlay.Thread, 0LL);
  else
    IoSetDiskIoAttributionFromThread(Irp, Irp->Tail.Overlay.Thread);
  IopQueueThreadIrp((__int64)Irp);
  return IofCallDriver(RelatedDeviceObject, Irp);
}
