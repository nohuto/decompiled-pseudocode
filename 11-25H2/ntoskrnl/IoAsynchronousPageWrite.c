/*
 * XREFs of IoAsynchronousPageWrite @ 0x14035BA6C
 * Callers:
 *     MiGatherPagefilePages @ 0x1403C0730 (MiGatherPagefilePages.c)
 *     MiGatherMappedPages @ 0x14040CB20 (MiGatherMappedPages.c)
 * Callees:
 *     IopAllocateIrpExReturn @ 0x1402537B0 (IopAllocateIrpExReturn.c)
 *     IopQueueThreadIrp @ 0x140253BB0 (IopQueueThreadIrp.c)
 *     IoGetRelatedDeviceObject @ 0x14035CFA0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x14035D320 (IofCallDriver.c)
 *     MmIsFileObjectAPagingFile @ 0x14035D458 (MmIsFileObjectAPagingFile.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14035D5D0 (IoSetDiskIoAttributionFromThread.c)
 *     IopSetDiskIoAttributionExtension @ 0x14035D794 (IopSetDiskIoAttributionExtension.c)
 *     IopAllocateReserveIrp @ 0x14035D8C8 (IopAllocateReserveIrp.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     IopAllocateBackpocketIrp @ 0x140592628 (IopAllocateBackpocketIrp.c)
 *     StRtlIoStorInfoSetNvCachePriority @ 0x140693BB0 (StRtlIoStorInfoSetNvCachePriority.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
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
  NTSTATUS result; // eax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 ReserveIrp; // rax
  unsigned __int8 CurrentIrql; // bl
  __int64 v27; // rdx

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
      LOBYTE(v23) = RelatedDeviceObject->StackSize;
      ReserveIrp = IopAllocateReserveIrp(v24, v23, 1LL);
    }
    else
    {
      _InterlockedAdd(&IoAsynchronousPageWriteNonPagefileIrpAllocationFailure, 1u);
      LOBYTE(v23) = RelatedDeviceObject->StackSize;
      ReserveIrp = IopAllocateBackpocketIrp(RelatedDeviceObject, v23, 0LL);
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
  IopQueueThreadIrp((__int64)Irp);
  if ( a7 )
    StRtlIoStorInfoSetNvCachePriority(Irp);
  result = IofCallDriver(RelatedDeviceObject, Irp);
  v22 = result & 0xC0000000;
  if ( (_DWORD)v22 == -1073741824 )
  {
    a10->Status = result;
    a10->Information = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v22) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v22);
    }
    guard_dispatch_icall_no_overrides(a5, a10);
    if ( KiIrqlFlags )
    {
      LOBYTE(v27) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v27);
    }
    __writecr8(CurrentIrql);
    return 259;
  }
  return result;
}
