/*
 * XREFs of MiIssueAsynchronousFlush @ 0x14025ADBC
 * Callers:
 *     MiFlushSection @ 0x140272630 (MiFlushSection.c)
 * Callees:
 *     MiFlushComplete @ 0x140259230 (MiFlushComplete.c)
 *     IoGetRelatedDeviceObject @ 0x14025C530 (IoGetRelatedDeviceObject.c)
 *     MmIsFileObjectAPagingFile @ 0x14025C5CC (MmIsFileObjectAPagingFile.c)
 *     IofCallDriver @ 0x14025CA20 (IofCallDriver.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14025CAE0 (IoSetDiskIoAttributionFromThread.c)
 *     IopSetDiskIoAttributionExtension @ 0x14025CCA4 (IopSetDiskIoAttributionExtension.c)
 *     IopAllocateReserveIrp @ 0x14025CDD8 (IopAllocateReserveIrp.c)
 *     IopQueueThreadIrp @ 0x140284270 (IopQueueThreadIrp.c)
 *     IopAllocateIrpExReturn @ 0x1402843D0 (IopAllocateIrpExReturn.c)
 *     KeWaitForMultipleObjects @ 0x14031CC00 (KeWaitForMultipleObjects.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     IopAllocateBackpocketIrp @ 0x140592D08 (IopAllocateBackpocketIrp.c)
 */

unsigned __int64 __fastcall MiIssueAsynchronousFlush(
        PFILE_OBJECT FileObject,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        int a7,
        __int64 a8)
{
  unsigned __int64 v11; // rbx
  struct _MDL *v12; // r14
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  IRP **v14; // r12
  PDEVICE_OBJECT RelatedDeviceObject; // rsi
  __int64 v16; // rdx
  IRP *Irp; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  struct _KTHREAD *CurrentThread; // rdx
  NTSTATUS v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // edi
  int v24; // esi
  unsigned __int8 v25; // di
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 ReserveIrp; // rax
  unsigned __int8 v30; // si
  __int64 v31; // rdx
  unsigned __int8 CurrentIrql; // di

  *(_BYTE *)(a2 + 50) = 6;
  *(_WORD *)(a2 + 48) = 0;
  v11 = a2;
  *(_DWORD *)(a2 + 52) = 0;
  *(_QWORD *)(a2 + 64) = a2 + 56;
  *(_QWORD *)(a2 + 56) = a2 + 56;
  v12 = *(struct _MDL **)(a2 + 72);
  *(_DWORD *)a2 = 0;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = (char *)v12 + 8 * ((unsigned __int64)v12->ByteCount >> 12) + 48;
  if ( a4 )
    _InterlockedAdd((volatile signed __int32 *)(a4 + 16), 1u);
  SectionObjectPointer = FileObject->SectionObjectPointer;
  v14 = (IRP **)(a2 + 24);
  if ( SectionObjectPointer && SectionObjectPointer->SharedCacheMap )
  {
    __incgsdword(0x8974u);
    __addgsdword(0x8978u, (v12->ByteCount + 4095) >> 12);
  }
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  LOBYTE(v16) = RelatedDeviceObject->StackSize;
  Irp = (IRP *)IopAllocateIrpExReturn(RelatedDeviceObject, v16, 0LL);
  if ( !Irp )
  {
    if ( (unsigned int)MmIsFileObjectAPagingFile(FileObject) )
    {
      _InterlockedIncrement(&IoAsynchronousPageWriteIrpAllocationFailure);
      LOBYTE(v27) = RelatedDeviceObject->StackSize;
      ReserveIrp = IopAllocateReserveIrp(v28, v27, 1LL);
    }
    else
    {
      _InterlockedIncrement(&IoAsynchronousPageWriteNonPagefileIrpAllocationFailure);
      LOBYTE(v27) = RelatedDeviceObject->StackSize;
      ReserveIrp = IopAllocateBackpocketIrp(RelatedDeviceObject, v27, 0LL);
    }
    Irp = (IRP *)ReserveIrp;
    if ( !ReserveIrp )
    {
      v23 = -1073741670;
      goto LABEL_25;
    }
  }
  if ( v14 )
    *v14 = Irp;
  Irp->AllocationFlags |= 0x20u;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Irp->MdlAddress = v12;
  Irp->Flags = ((a7 << 17) + 0x20000) | 3;
  Irp->Tail.Overlay.Thread = KeGetCurrentThread();
  Irp->Tail.Overlay.OriginalFileObject = FileObject;
  Irp->UserBuffer = (char *)v12->StartVa + v12->ByteOffset;
  Irp->Overlay.AllocationSize.QuadPart = (LONGLONG)MiFlushComplete;
  Irp->RequestorMode = 0;
  Irp->UserIosb = (PIO_STATUS_BLOCK)v11;
  Irp->Overlay.AsynchronousParameters.UserApcContext = (PVOID)v11;
  CurrentStackLocation[-1].MajorFunction = 4;
  CurrentStackLocation[-1].Parameters.Read.Length = v12->ByteCount;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = a5;
  CurrentStackLocation[-1].Flags |= a6;
  CurrentStackLocation[-1].FileObject = FileObject;
  CurrentThread = KeGetCurrentThread();
  if ( a8 )
    IopSetDiskIoAttributionExtension(Irp, *(_QWORD *)(a8 + 24), CurrentThread, 0LL);
  else
    IoSetDiskIoAttributionFromThread(Irp, CurrentThread);
  IopQueueThreadIrp(Irp);
  v20 = IofCallDriver(RelatedDeviceObject, Irp);
  v22 = v20 & 0xC0000000;
  v23 = v20;
  if ( (_DWORD)v22 == -1073741824 )
  {
    *(_DWORD *)v11 = v20;
    *(_QWORD *)(v11 + 8) = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v21) = 1;
      LOBYTE(v22) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v22, v21);
    }
    MiFlushComplete(v11, v11);
    if ( KiIrqlFlags )
    {
      LOBYTE(v21) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v21);
    }
    __writecr8(CurrentIrql);
    v23 = 259;
  }
  if ( (v23 & 0xC0000000) == 0xC0000000 )
  {
LABEL_25:
    *(_DWORD *)v11 = v23;
    *(_QWORD *)(v11 + 8) = 0LL;
    v30 = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v21) = 1;
      LOBYTE(v22) = v30;
      KiRaiseIrqlProcessIrqlFlags(v22, v21);
    }
    MiFlushComplete(v11, v11);
    if ( KiIrqlFlags )
    {
      LOBYTE(v31) = v30;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v31);
    }
    __writecr8(v30);
    if ( a4 )
      *(_DWORD *)(a4 + 20) = v23;
    v12->ByteCount = 0;
    return 0LL;
  }
  v24 = 0;
  v25 = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !KiIrqlFlags )
    goto LABEL_15;
LABEL_14:
  LOBYTE(v21) = 1;
  LOBYTE(v22) = v25;
  KiRaiseIrqlProcessIrqlFlags(v22, v21);
  while ( 1 )
  {
LABEL_15:
    v11 += 264LL;
    if ( v11 >= a3 + 2112 )
      v11 = a3;
    if ( !*(_QWORD *)(v11 + 16) || *(_DWORD *)(v11 + 52) )
      break;
    if ( ++v24 == 8 )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v21) = v25;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v21);
      }
      __writecr8(v25);
      KeWaitForMultipleObjects(8u, (PVOID *)(a3 + 2112), WaitAny, WrPageOut, 0, 0, 0LL, (PKWAIT_BLOCK)(a3 + 2176));
      v11 = a3;
      while ( v24 )
      {
        if ( *(int *)v11 < 0 )
        {
          *(_DWORD *)(*(_QWORD *)(v11 + 72) + 40LL) = 0;
          return 0LL;
        }
        v11 += 264LL;
        --v24;
      }
      v25 = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !KiIrqlFlags )
        continue;
      goto LABEL_14;
    }
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(v21) = v25;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v21);
  }
  __writecr8(v25);
  return v11;
}
