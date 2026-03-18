/*
 * XREFs of IoAsynchronousPageWrite @ 0x14037286C
 * Callers:
 *     MiGatherMappedPages @ 0x140369B20 (MiGatherMappedPages.c)
 *     MiGatherPagefilePages @ 0x14039C8C8 (MiGatherPagefilePages.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x140253C60 (IopQueueThreadIrp.c)
 *     IopAllocateIrpExReturn @ 0x140253DC0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x140373C70 (IoGetRelatedDeviceObject.c)
 *     MmIsFileObjectAPagingFile @ 0x140373D0C (MmIsFileObjectAPagingFile.c)
 *     IofCallDriver @ 0x140374160 (IofCallDriver.c)
 *     IoSetDiskIoAttributionFromThread @ 0x140374220 (IoSetDiskIoAttributionFromThread.c)
 *     IopSetDiskIoAttributionExtension @ 0x1403743E4 (IopSetDiskIoAttributionExtension.c)
 *     IopAllocateReserveIrp @ 0x140374518 (IopAllocateReserveIrp.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     IopAllocateBackpocketIrp @ 0x140595CD8 (IopAllocateBackpocketIrp.c)
 *     StRtlIoStorInfoSetNvCachePriority @ 0x14069EF50 (StRtlIoStorInfoSetNvCachePriority.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __fastcall IoAsynchronousPageWrite(
        struct _FILE_OBJECT *a1,
        struct _MDL *a2,
        LARGE_INTEGER *a3,
        LARGE_INTEGER a4,
        void *a5,
        int a6,
        int a7,
        char a8,
        __int64 a9,
        struct _IO_STATUS_BLOCK *a10,
        IRP **a11)
{
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  PDEVICE_OBJECT RelatedDeviceObject; // rdi
  __int64 v17; // rdx
  IRP *Irp; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v21; // rdx
  __int64 v22; // r8
  NTSTATUS result; // eax
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 ReserveIrp; // rax
  unsigned __int8 CurrentIrql; // bl
  __int64 v30; // rdx

  SectionObjectPointer = a1->SectionObjectPointer;
  if ( SectionObjectPointer && SectionObjectPointer->SharedCacheMap )
  {
    __incgsdword(0x8974u);
    __addgsdword(0x8978u, (a2->ByteCount + 4095) >> 12);
  }
  RelatedDeviceObject = IoGetRelatedDeviceObject(a1);
  LOBYTE(v17) = RelatedDeviceObject->StackSize;
  Irp = (IRP *)IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v17, 0LL);
  if ( !Irp )
  {
    if ( (unsigned int)MmIsFileObjectAPagingFile(a1) )
    {
      _InterlockedAdd(&IoAsynchronousPageWriteIrpAllocationFailure, 1u);
      LOBYTE(v26) = RelatedDeviceObject->StackSize;
      ReserveIrp = IopAllocateReserveIrp(v27, v26, 1LL);
    }
    else
    {
      _InterlockedAdd(&IoAsynchronousPageWriteNonPagefileIrpAllocationFailure, 1u);
      LOBYTE(v26) = RelatedDeviceObject->StackSize;
      ReserveIrp = IopAllocateBackpocketIrp(RelatedDeviceObject, v26, 0LL);
    }
    Irp = (IRP *)ReserveIrp;
    if ( !ReserveIrp )
      return -1073741670;
  }
  if ( a11 )
    *a11 = Irp;
  Irp->AllocationFlags |= 0x20u;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Irp->MdlAddress = a2;
  Irp->Flags = ((a6 << 17) + 0x20000) | 3;
  Irp->Tail.Overlay.Thread = KeGetCurrentThread();
  Irp->Tail.Overlay.OriginalFileObject = a1;
  Irp->UserBuffer = (char *)a2->StartVa + a2->ByteOffset;
  Irp->RequestorMode = 0;
  Irp->UserIosb = a10;
  Irp->Overlay.AllocationSize = a4;
  Irp->Overlay.AsynchronousParameters.UserApcContext = a5;
  CurrentStackLocation[-1].MajorFunction = 4;
  CurrentStackLocation[-1].Parameters.Read.Length = a2->ByteCount;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset = *a3;
  CurrentStackLocation[-1].Flags |= a8;
  CurrentStackLocation[-1].FileObject = a1;
  CurrentThread = KeGetCurrentThread();
  if ( a9 )
    IopSetDiskIoAttributionExtension(Irp, *(_QWORD *)(a9 + 24), CurrentThread, 0LL);
  else
    IoSetDiskIoAttributionFromThread(Irp, CurrentThread);
  IopQueueThreadIrp((__int64)Irp, v21, v22);
  if ( a7 )
    StRtlIoStorInfoSetNvCachePriority(Irp);
  result = IofCallDriver(RelatedDeviceObject, Irp);
  v25 = result & 0xC0000000;
  if ( (_DWORD)v25 == -1073741824 )
  {
    a10->Status = result;
    a10->Information = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v25) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v25, 1LL);
    }
    guard_dispatch_icall_no_overrides(a5, a10, 0LL, v24);
    if ( KiIrqlFlags )
    {
      LOBYTE(v30) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v30);
    }
    __writecr8(CurrentIrql);
    return 259;
  }
  return result;
}
