/*
 * XREFs of MiIssueAsynchronousFlush @ 0x1403724FC
 * Callers:
 *     MiFlushSection @ 0x14023A550 (MiFlushSection.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x140253C60 (IopQueueThreadIrp.c)
 *     IopAllocateIrpExReturn @ 0x140253DC0 (IopAllocateIrpExReturn.c)
 *     KeWaitForMultipleObjects @ 0x14033D720 (KeWaitForMultipleObjects.c)
 *     MiFlushComplete @ 0x140370EF0 (MiFlushComplete.c)
 *     IoGetRelatedDeviceObject @ 0x140373C70 (IoGetRelatedDeviceObject.c)
 *     MmIsFileObjectAPagingFile @ 0x140373D0C (MmIsFileObjectAPagingFile.c)
 *     IofCallDriver @ 0x140374160 (IofCallDriver.c)
 *     IoSetDiskIoAttributionFromThread @ 0x140374220 (IoSetDiskIoAttributionFromThread.c)
 *     IopSetDiskIoAttributionExtension @ 0x1403743E4 (IopSetDiskIoAttributionExtension.c)
 *     IopAllocateReserveIrp @ 0x140374518 (IopAllocateReserveIrp.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     IopAllocateBackpocketIrp @ 0x140595CD8 (IopAllocateBackpocketIrp.c)
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
  __int64 v20; // rdx
  __int64 v21; // r8
  NTSTATUS v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // edi
  int v26; // esi
  unsigned __int8 v27; // di
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 ReserveIrp; // rax
  unsigned __int8 v32; // si
  __int64 v33; // rdx
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
  Irp = (IRP *)IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v16, 0LL);
  if ( !Irp )
  {
    if ( (unsigned int)MmIsFileObjectAPagingFile(FileObject) )
    {
      _InterlockedIncrement(&IoAsynchronousPageWriteIrpAllocationFailure);
      LOBYTE(v29) = RelatedDeviceObject->StackSize;
      ReserveIrp = IopAllocateReserveIrp(v30, v29, 1LL);
    }
    else
    {
      _InterlockedIncrement(&IoAsynchronousPageWriteNonPagefileIrpAllocationFailure);
      LOBYTE(v29) = RelatedDeviceObject->StackSize;
      ReserveIrp = IopAllocateBackpocketIrp(RelatedDeviceObject, v29, 0LL);
    }
    Irp = (IRP *)ReserveIrp;
    if ( !ReserveIrp )
    {
      v25 = -1073741670;
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
  IopQueueThreadIrp((__int64)Irp, v20, v21);
  v22 = IofCallDriver(RelatedDeviceObject, Irp);
  v24 = v22 & 0xC0000000;
  v25 = v22;
  if ( (_DWORD)v24 == -1073741824 )
  {
    *(_DWORD *)v11 = v22;
    *(_QWORD *)(v11 + 8) = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v23) = 1;
      LOBYTE(v24) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v24, v23);
    }
    MiFlushComplete(v11, v11);
    if ( KiIrqlFlags )
    {
      LOBYTE(v23) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v23);
    }
    __writecr8(CurrentIrql);
    v25 = 259;
  }
  if ( (v25 & 0xC0000000) == 0xC0000000 )
  {
LABEL_25:
    *(_DWORD *)v11 = v25;
    *(_QWORD *)(v11 + 8) = 0LL;
    v32 = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v23) = 1;
      LOBYTE(v24) = v32;
      KiRaiseIrqlProcessIrqlFlags(v24, v23);
    }
    MiFlushComplete(v11, v11);
    if ( KiIrqlFlags )
    {
      LOBYTE(v33) = v32;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v33);
    }
    __writecr8(v32);
    if ( a4 )
      *(_DWORD *)(a4 + 20) = v25;
    v12->ByteCount = 0;
    return 0LL;
  }
  v26 = 0;
  v27 = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !KiIrqlFlags )
    goto LABEL_15;
LABEL_14:
  LOBYTE(v23) = 1;
  LOBYTE(v24) = v27;
  KiRaiseIrqlProcessIrqlFlags(v24, v23);
  while ( 1 )
  {
LABEL_15:
    v11 += 264LL;
    if ( v11 >= a3 + 2112 )
      v11 = a3;
    if ( !*(_QWORD *)(v11 + 16) || *(_DWORD *)(v11 + 52) )
      break;
    if ( ++v26 == 8 )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v23) = v27;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v23);
      }
      __writecr8(v27);
      KeWaitForMultipleObjects(8u, (PVOID *)(a3 + 2112), WaitAny, WrPageOut, 0, 0, 0LL, (PKWAIT_BLOCK)(a3 + 2176));
      v11 = a3;
      while ( v26 )
      {
        if ( *(int *)v11 < 0 )
        {
          *(_DWORD *)(*(_QWORD *)(v11 + 72) + 40LL) = 0;
          return 0LL;
        }
        v11 += 264LL;
        --v26;
      }
      v27 = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !KiIrqlFlags )
        continue;
      goto LABEL_14;
    }
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(v23) = v27;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v23);
  }
  __writecr8(v27);
  return v11;
}
