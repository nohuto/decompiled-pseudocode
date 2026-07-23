/*
 * XREFs of NtSetEaFile @ 0x140A5F1F0
 * Callers:
 *     <none>
 * Callees:
 *     IopAllocateIrpExReturn @ 0x1402537B0 (IopAllocateIrpExReturn.c)
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     IopResetEvent @ 0x1402A1570 (IopResetEvent.c)
 *     IoAllocateMdl @ 0x1402D5350 (IoAllocateMdl.c)
 *     IopProbeAndLockPages_1 @ 0x1402D5614 (IopProbeAndLockPages_1.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x14035CFA0 (IoGetRelatedDeviceObject.c)
 *     IopReferenceFileObject @ 0x1403F6490 (IopReferenceFileObject.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     IopSynchronousServiceTail @ 0x1408C5420 (IopSynchronousServiceTail.c)
 *     IopSynchronousApiServiceTail @ 0x140937538 (IopSynchronousApiServiceTail.c)
 *     IopExceptionCleanupEx @ 0x1409887B0 (IopExceptionCleanupEx.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1409888C0 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x14098A8E4 (IopAllocateIrpCleanup.c)
 *     IoCheckEaBufferValidity @ 0x140A15E10 (IoCheckEaBufferValidity.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtSetEaFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock, PVOID Buffer, ULONG Length)
{
  size_t v4; // rbx
  struct _KEVENT *v8; // r15
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v10; // rcx
  NTSTATUS result; // eax
  struct _FILE_OBJECT *v12; // r14
  char v13; // di
  struct _KTHREAD *v14; // rax
  PFILE_OBJECT v15; // rbx
  __int64 *v16; // rax
  NTSTATUS v17; // ebx
  __int64 v18; // rdx
  IRP *v19; // rax
  IRP *Irp; // rsi
  KPROCESSOR_MODE v21; // di
  PIO_STATUS_BLOCK v22; // rax
  struct _KEVENT *v23; // rcx
  __int64 v24; // rax
  ULONG Flags; // ecx
  char v26; // bl
  struct _KEVENT *Pool2; // rax
  _FILE_FULL_EA_INFORMATION *v28; // rdi
  int v29; // eax
  struct _MDL *Mdl; // rcx
  char v31; // [rsp+40h] [rbp-78h] BYREF
  KPROCESSOR_MODE v32; // [rsp+41h] [rbp-77h]
  char v33; // [rsp+42h] [rbp-76h]
  NTSTATUS v34; // [rsp+44h] [rbp-74h]
  PFILE_OBJECT FileObject; // [rsp+48h] [rbp-70h] BYREF
  ULONG ErrorOffset; // [rsp+50h] [rbp-68h] BYREF
  ULONG *p_Flags; // [rsp+58h] [rbp-60h]
  PVOID P; // [rsp+60h] [rbp-58h]
  struct _DEVICE_OBJECT *RelatedDeviceObject; // [rsp+68h] [rbp-50h]
  PIRP v40; // [rsp+70h] [rbp-48h]
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-40h]
  __int128 v42; // [rsp+80h] [rbp-38h] BYREF

  v4 = Length;
  FileObject = 0LL;
  v8 = 0LL;
  P = 0LL;
  v42 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v32 = PreviousMode;
  if ( PreviousMode )
  {
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v10 = (__int64)IoStatusBlock;
    *(_DWORD *)v10 = *(_DWORD *)v10;
    if ( Length && ((unsigned __int8)Buffer & 3) != 0 )
      ExRaiseDatatypeMisalignment();
  }
  result = IopReferenceFileObject(FileHandle, 0x10u, PreviousMode, (PVOID *)&FileObject, 0LL);
  v34 = result;
  if ( result >= 0 )
  {
    v12 = FileObject;
    p_Flags = &FileObject->Flags;
    if ( (FileObject->Flags & 2) != 0 )
    {
      v13 = (FileObject->Flags & 4) != 0;
      v14 = KeGetCurrentThread();
      --v14->KernelApcDisable;
      v15 = FileObject;
      v16 = KeAbPreAcquire((__int64)&FileObject->Lock, 0LL);
      v31 = 0;
      if ( _InterlockedExchange((volatile __int32 *)&v15->Busy, 1) )
      {
        v12 = FileObject;
        v17 = IopWaitAndAcquireFileObjectLock(
                (volatile signed __int32 *)&FileObject->Type,
                PreviousMode,
                v13,
                v16,
                &v31);
      }
      else
      {
        if ( v16 )
          *((_BYTE *)v16 + 10) = 1;
        v12 = FileObject;
        PsReferenceSiloContext(FileObject);
        v17 = 0;
      }
      v34 = v17;
      if ( !v31 )
      {
        v31 = 1;
        v4 = Length;
        goto LABEL_15;
      }
    }
    else
    {
      Pool2 = (struct _KEVENT *)ExAllocatePool2(0x40uLL);
      v8 = Pool2;
      P = Pool2;
      if ( Pool2 )
      {
        KeInitializeEvent(Pool2, SynchronizationEvent, 0);
        v31 = 0;
LABEL_15:
        IopResetEvent((__int64)v12);
        RelatedDeviceObject = IoGetRelatedDeviceObject(v12);
        LOBYTE(v18) = RelatedDeviceObject->StackSize;
        v19 = (IRP *)IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v18, 0LL);
        Irp = v19;
        v40 = v19;
        if ( v19 )
        {
          v19->Tail.Overlay.OriginalFileObject = v12;
          v19->Tail.Overlay.Thread = CurrentThread;
          v21 = v32;
          v19->RequestorMode = v32;
          if ( v31 )
          {
            v22 = IoStatusBlock;
            v23 = 0LL;
          }
          else
          {
            v19->Flags = 4;
            v22 = (PIO_STATUS_BLOCK)&v42;
            v23 = v8;
          }
          Irp->UserEvent = v23;
          Irp->UserIosb = v22;
          Irp->Overlay.AllocationSize.QuadPart = 0LL;
          v24 = (__int64)&Irp->Tail.Overlay.CurrentStackLocation[-1];
          p_Flags = (ULONG *)v24;
          *(_BYTE *)v24 = 8;
          *(_QWORD *)(v24 + 48) = v12;
          Flags = RelatedDeviceObject->Flags;
          if ( (Flags & 4) != 0 )
          {
            ErrorOffset = 0;
            if ( (_DWORD)v4 )
            {
              v33 = 0;
              v28 = (_FILE_FULL_EA_INFORMATION *)ExAllocatePool2(0x61uLL);
              Irp->AssociatedIrp.MasterIrp = (struct _IRP *)v28;
              memmove(v28, Buffer, v4);
              LODWORD(v4) = Length;
              v29 = IoCheckEaBufferValidity(v28, Length, &ErrorOffset);
              v34 = v29;
              if ( v29 < 0 )
              {
                v33 = 1;
                IoStatusBlock->Status = v29;
                IoStatusBlock->Information = ErrorOffset;
                RtlRaiseStatus(v29);
              }
              Irp->Flags |= 0x30u;
              v21 = v32;
              v24 = (__int64)p_Flags;
            }
            else
            {
              Irp->AssociatedIrp.MasterIrp = 0LL;
            }
          }
          else if ( (Flags & 0x10) != 0 )
          {
            if ( (_DWORD)v4 )
            {
              Mdl = IoAllocateMdl(Buffer, v4, 0, 1u, Irp);
              if ( !Mdl )
                RtlRaiseStatus(-1073741670);
              IopProbeAndLockPages_1(Mdl, v21, IoReadAccess, (__int64)RelatedDeviceObject, *(unsigned __int8 *)p_Flags);
              v24 = (__int64)p_Flags;
            }
          }
          else
          {
            Irp->UserBuffer = Buffer;
          }
          *(_DWORD *)(v24 + 8) = v4;
          v26 = v31;
          result = IopSynchronousServiceTail(RelatedDeviceObject, (__int64)Irp, (__int64)v12, 0, v21, v31, 2u);
          if ( !v26 )
            return IopSynchronousApiServiceTail(result, v8, Irp, v21, (unsigned int *)&v42, IoStatusBlock);
        }
        else
        {
          if ( (*p_Flags & 2) == 0 )
            ExFreePoolWithTag(v8, 0);
          IopAllocateIrpCleanup(v12, 0LL);
          return -1073741670;
        }
        return result;
      }
      v17 = -1073741670;
    }
    ObfDereferenceObject(v12);
    return v17;
  }
  return result;
}
