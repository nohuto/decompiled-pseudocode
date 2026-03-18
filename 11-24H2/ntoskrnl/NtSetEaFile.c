/*
 * XREFs of NtSetEaFile @ 0x140A60FA0
 * Callers:
 *     <none>
 * Callees:
 *     IopAllocateIrpExReturn @ 0x140253DC0 (IopAllocateIrpExReturn.c)
 *     IoAllocateMdl @ 0x140267BF0 (IoAllocateMdl.c)
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     IoGetRelatedDeviceObject @ 0x140373C70 (IoGetRelatedDeviceObject.c)
 *     IopResetEvent @ 0x1403C4670 (IopResetEvent.c)
 *     IopReferenceFileObject @ 0x1403F5300 (IopReferenceFileObject.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     IopProbeAndLockPages_0 @ 0x140438384 (IopProbeAndLockPages_0.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     IopSynchronousServiceTail @ 0x1408C3300 (IopSynchronousServiceTail.c)
 *     IopSynchronousApiServiceTail @ 0x14096F574 (IopSynchronousApiServiceTail.c)
 *     IopExceptionCleanupEx @ 0x140970628 (IopExceptionCleanupEx.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140970738 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140A0C064 (IopAllocateIrpCleanup.c)
 *     IoCheckEaBufferValidity @ 0x140A20A20 (IoCheckEaBufferValidity.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtSetEaFile(void *a1, unsigned __int64 a2, void *a3, ULONG a4)
{
  size_t v4; // rbx
  struct _KEVENT *v8; // r15
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v10; // rcx
  __int64 result; // rax
  struct _FILE_OBJECT *v12; // r14
  bool v13; // di
  struct _KTHREAD *v14; // rax
  PFILE_OBJECT v15; // rbx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned int v19; // ebx
  __int64 v20; // rdx
  IRP *v21; // rax
  IRP *Irp; // rsi
  char v23; // di
  struct _IO_STATUS_BLOCK *v24; // rax
  struct _KEVENT *v25; // rcx
  __int64 v26; // rax
  ULONG Flags; // ecx
  unsigned __int8 v28; // bl
  struct _KEVENT *Pool2; // rax
  struct _FILE_FULL_EA_INFORMATION *v30; // rdi
  NTSTATUS v31; // eax
  PMDL Mdl; // rcx
  unsigned __int8 v33; // [rsp+40h] [rbp-78h] BYREF
  KPROCESSOR_MODE v34; // [rsp+41h] [rbp-77h]
  char v35; // [rsp+42h] [rbp-76h]
  unsigned int v36; // [rsp+44h] [rbp-74h]
  PFILE_OBJECT FileObject; // [rsp+48h] [rbp-70h] BYREF
  ULONG ErrorOffset; // [rsp+50h] [rbp-68h] BYREF
  ULONG *p_Flags; // [rsp+58h] [rbp-60h]
  PVOID P; // [rsp+60h] [rbp-58h]
  struct _DEVICE_OBJECT *RelatedDeviceObject; // [rsp+68h] [rbp-50h]
  PIRP v42; // [rsp+70h] [rbp-48h]
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-40h]
  __int128 v44; // [rsp+80h] [rbp-38h] BYREF

  v4 = a4;
  FileObject = 0LL;
  v8 = 0LL;
  P = 0LL;
  v44 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v34 = PreviousMode;
  if ( PreviousMode )
  {
    v10 = 0x7FFFFFFF0000LL;
    if ( a2 < 0x7FFFFFFF0000LL )
      v10 = a2;
    *(_DWORD *)v10 = *(_DWORD *)v10;
    if ( a4 && ((unsigned __int8)a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
  }
  result = IopReferenceFileObject(a1, 0x10u, PreviousMode, (PVOID *)&FileObject, 0LL);
  v36 = result;
  if ( (int)result >= 0 )
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
      v33 = 0;
      if ( _InterlockedExchange((volatile __int32 *)&v15->Busy, 1) )
      {
        LOBYTE(v18) = v13;
        LOBYTE(v17) = PreviousMode;
        v12 = FileObject;
        v19 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)&FileObject->Type, v17, v18, v16, &v33);
      }
      else
      {
        if ( v16 )
          *((_BYTE *)v16 + 10) = 1;
        v12 = FileObject;
        PsReferenceSiloContext(FileObject);
        v19 = 0;
      }
      v36 = v19;
      if ( !v33 )
      {
        v33 = 1;
        v4 = a4;
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
        v33 = 0;
LABEL_15:
        IopResetEvent((__int64)v12);
        RelatedDeviceObject = IoGetRelatedDeviceObject(v12);
        LOBYTE(v20) = RelatedDeviceObject->StackSize;
        v21 = (IRP *)IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v20, 0LL);
        Irp = v21;
        v42 = v21;
        if ( v21 )
        {
          v21->Tail.Overlay.OriginalFileObject = v12;
          v21->Tail.Overlay.Thread = CurrentThread;
          v23 = v34;
          v21->RequestorMode = v34;
          if ( v33 )
          {
            v24 = (struct _IO_STATUS_BLOCK *)a2;
            v25 = 0LL;
          }
          else
          {
            v21->Flags = 4;
            v24 = (struct _IO_STATUS_BLOCK *)&v44;
            v25 = v8;
          }
          Irp->UserEvent = v25;
          Irp->UserIosb = v24;
          Irp->Overlay.AllocationSize.QuadPart = 0LL;
          v26 = (__int64)&Irp->Tail.Overlay.CurrentStackLocation[-1];
          p_Flags = (ULONG *)v26;
          *(_BYTE *)v26 = 8;
          *(_QWORD *)(v26 + 48) = v12;
          Flags = RelatedDeviceObject->Flags;
          if ( (Flags & 4) != 0 )
          {
            ErrorOffset = 0;
            if ( (_DWORD)v4 )
            {
              v35 = 0;
              v30 = (struct _FILE_FULL_EA_INFORMATION *)ExAllocatePool2(0x61uLL);
              Irp->AssociatedIrp.MasterIrp = (struct _IRP *)v30;
              memmove(v30, a3, v4);
              LODWORD(v4) = a4;
              v31 = IoCheckEaBufferValidity(v30, a4, &ErrorOffset);
              v36 = v31;
              if ( v31 < 0 )
              {
                v35 = 1;
                *(_DWORD *)a2 = v31;
                *(_QWORD *)(a2 + 8) = ErrorOffset;
                RtlRaiseStatus(v31);
              }
              Irp->Flags |= 0x30u;
              v23 = v34;
              v26 = (__int64)p_Flags;
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
              Mdl = IoAllocateMdl(a3, v4, 0, 1u, Irp);
              if ( !Mdl )
                RtlRaiseStatus(-1073741670);
              IopProbeAndLockPages_0((__int64)Mdl, v23, 0, (__int64)RelatedDeviceObject, *(unsigned __int8 *)p_Flags);
              v26 = (__int64)p_Flags;
            }
          }
          else
          {
            Irp->UserBuffer = a3;
          }
          *(_DWORD *)(v26 + 8) = v4;
          v28 = v33;
          result = IopSynchronousServiceTail(RelatedDeviceObject, (__int64)Irp, (__int64)v12, 0, v23, v33, 2u);
          if ( !v28 )
            return IopSynchronousApiServiceTail(result, v8, Irp, v23, (unsigned int *)&v44, (_OWORD *)a2);
        }
        else
        {
          if ( (*p_Flags & 2) == 0 )
            ExFreePoolWithTag(v8, 0);
          IopAllocateIrpCleanup(v12, 0LL);
          return 3221225626LL;
        }
        return result;
      }
      v19 = -1073741670;
    }
    ObfDereferenceObject(v12);
    return v19;
  }
  return result;
}
