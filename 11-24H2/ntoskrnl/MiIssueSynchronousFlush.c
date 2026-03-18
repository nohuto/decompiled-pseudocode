/*
 * XREFs of MiIssueSynchronousFlush @ 0x1403731E8
 * Callers:
 *     MiFlushSection @ 0x14023A550 (MiFlushSection.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x140253C60 (IopQueueThreadIrp.c)
 *     IopAllocateIrpExReturn @ 0x140253DC0 (IopAllocateIrpExReturn.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     IoGetRelatedDeviceObject @ 0x140373C70 (IoGetRelatedDeviceObject.c)
 *     MmIsFileObjectAPagingFile @ 0x140373D0C (MmIsFileObjectAPagingFile.c)
 *     IofCallDriver @ 0x140374160 (IofCallDriver.c)
 *     IoSetDiskIoAttributionFromThread @ 0x140374220 (IoSetDiskIoAttributionFromThread.c)
 *     IopSetDiskIoAttributionExtension @ 0x1403743E4 (IopSetDiskIoAttributionExtension.c)
 *     IopAllocateReserveIrp @ 0x140374518 (IopAllocateReserveIrp.c)
 *     IopAllocateBackpocketIrp @ 0x140595CD8 (IopAllocateBackpocketIrp.c)
 */

int __fastcall MiIssueSynchronousFlush(
        struct _FILE_OBJECT *a1,
        struct _MDL *a2,
        LARGE_INTEGER a3,
        char a4,
        __int64 a5,
        struct _IO_STATUS_BLOCK *a6)
{
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  PDEVICE_OBJECT RelatedDeviceObject; // rdi
  __int64 v12; // rdx
  IRP *Irp; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  struct _KTHREAD *CurrentThread; // rcx
  int v16; // edx
  unsigned __int64 v17; // rax
  int v18; // eax
  ULONG Flags; // eax
  ULONG ByteCount; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  int result; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 BackpocketIrp; // rax
  struct _KTHREAD *v27; // rcx
  _DWORD Object[2]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v29[3]; // [rsp+38h] [rbp-30h] BYREF

  Object[1] = 0;
  Object[0] = 393216;
  v29[1] = v29;
  v29[0] = v29;
  SectionObjectPointer = a1->SectionObjectPointer;
  if ( SectionObjectPointer && SectionObjectPointer->SharedCacheMap )
  {
    __incgsdword(0x8974u);
    __addgsdword(0x8978u, (a2->ByteCount + 4095) >> 12);
  }
  RelatedDeviceObject = IoGetRelatedDeviceObject(a1);
  LOBYTE(v12) = RelatedDeviceObject->StackSize;
  Irp = (IRP *)IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v12, 0LL);
  if ( Irp
    || (!(unsigned int)MmIsFileObjectAPagingFile(a1)
      ? (_InterlockedIncrement(&IoSynchronousPageWriteNonPagefileIrpAllocationFailure),
         LOBYTE(v24) = RelatedDeviceObject->StackSize,
         BackpocketIrp = IopAllocateBackpocketIrp(RelatedDeviceObject, v24, 0LL))
      : (_InterlockedIncrement(&IoSynchronousPageWriteIrpAllocationFailure),
         LOBYTE(v24) = RelatedDeviceObject->StackSize,
         BackpocketIrp = IopAllocateReserveIrp(v25, v24, 1LL)),
        (Irp = (IRP *)BackpocketIrp) != 0LL) )
  {
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
        v27 = KeGetCurrentThread();
        if ( (v27->MiscFlags & 0x400) != 0
          || v27->PreviousMode == 1
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
    Flags = Irp->Flags;
    Irp->RequestorMode = 0;
    Irp->UserIosb = a6;
    Irp->UserEvent = (PKEVENT)Object;
    Irp->Flags = Flags & 0xFFF1FFFF | ((v16 << 17) + 0x20000);
    Irp->UserBuffer = (char *)a2->StartVa + a2->ByteOffset;
    Irp->Tail.Overlay.OriginalFileObject = a1;
    Irp->Tail.Overlay.Thread = KeGetCurrentThread();
    CurrentStackLocation[-1].MajorFunction = 4;
    ByteCount = a2->ByteCount;
    CurrentStackLocation[-1].Flags |= a4;
    CurrentStackLocation[-1].Parameters.Read.Length = ByteCount;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset = a3;
    CurrentStackLocation[-1].FileObject = a1;
    if ( a5 )
      IopSetDiskIoAttributionExtension(Irp, *(_QWORD *)(a5 + 24), Irp->Tail.Overlay.Thread, 0LL);
    else
      IoSetDiskIoAttributionFromThread(Irp, Irp->Tail.Overlay.Thread);
    IopQueueThreadIrp((__int64)Irp, v21, v22);
    result = IofCallDriver(RelatedDeviceObject, Irp);
    if ( result >= 0 )
      return KeWaitForSingleObject(Object, WrPageOut, 0, 0, 0LL);
  }
  else
  {
    result = -1073741670;
  }
  a6->Status = result;
  return result;
}
