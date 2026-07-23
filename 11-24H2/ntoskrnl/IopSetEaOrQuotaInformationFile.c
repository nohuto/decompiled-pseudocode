/*
 * XREFs of IopSetEaOrQuotaInformationFile @ 0x140710530
 * Callers:
 *     NtSetQuotaInformationFile @ 0x140715EF0 (NtSetQuotaInformationFile.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     IoGetRelatedDeviceObject @ 0x14025C530 (IoGetRelatedDeviceObject.c)
 *     IoAllocateMdl @ 0x14025F1D0 (IoAllocateMdl.c)
 *     IopAllocateIrpExReturn @ 0x1402843D0 (IopAllocateIrpExReturn.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     IopResetEvent @ 0x1403B3230 (IopResetEvent.c)
 *     IopReferenceFileObject @ 0x1403EB740 (IopReferenceFileObject.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     IopProbeAndLockPages_0 @ 0x14042AF44 (IopProbeAndLockPages_0.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     IoCheckQuotaBufferValidity @ 0x140711790 (IoCheckQuotaBufferValidity.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     IopSynchronousServiceTail @ 0x1408C0CC0 (IopSynchronousServiceTail.c)
 *     IopSynchronousApiServiceTail @ 0x140957634 (IopSynchronousApiServiceTail.c)
 *     IopExceptionCleanupEx @ 0x140958E38 (IopExceptionCleanupEx.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140958F48 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140A0B2A4 (IopAllocateIrpCleanup.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopSetEaOrQuotaInformationFile(void *a1, unsigned __int64 a2, void *a3, ULONG a4, char a5)
{
  ULONG_PTR v5; // rbx
  struct _KEVENT *v9; // r15
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v11; // rcx
  __int64 result; // rax
  struct _FILE_OBJECT *v13; // r14
  bool v14; // di
  struct _KTHREAD *v15; // rax
  volatile __int32 *v16; // rbx
  _QWORD *v17; // rax
  int v18; // edx
  int v19; // r8d
  unsigned int v20; // ebx
  struct _KEVENT *Pool2; // rax
  __int64 v22; // rdx
  IRP *v23; // rax
  IRP *v24; // rsi
  char v25; // di
  struct _IO_STATUS_BLOCK *v26; // rax
  struct _KEVENT *v27; // rcx
  __int64 v28; // rax
  ULONG Flags; // ecx
  _FILE_QUOTA_INFORMATION *v30; // rdi
  int v31; // eax
  PMDL Mdl; // rcx
  char v33; // bl
  __int64 v34; // r9
  int Irp; // [rsp+20h] [rbp-98h]
  char v36; // [rsp+40h] [rbp-78h]
  PVOID Object; // [rsp+48h] [rbp-70h] BYREF
  ULONG ErrorOffset; // [rsp+50h] [rbp-68h] BYREF
  _DWORD *v39; // [rsp+58h] [rbp-60h]
  PVOID P; // [rsp+60h] [rbp-58h]
  PDEVICE_OBJECT RelatedDeviceObject; // [rsp+68h] [rbp-50h]
  PIRP v42; // [rsp+70h] [rbp-48h]
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-40h]
  __int128 v44; // [rsp+80h] [rbp-38h] BYREF

  v5 = a4;
  Object = 0LL;
  v9 = 0LL;
  P = 0LL;
  v44 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v36 = PreviousMode;
  if ( PreviousMode )
  {
    v11 = 0x7FFFFFFF0000LL;
    if ( a2 < 0x7FFFFFFF0000LL )
      v11 = a2;
    *(_DWORD *)v11 = *(_DWORD *)v11;
    if ( a4 && ((unsigned __int8)a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
  }
  result = IopReferenceFileObject(a1, 2u, PreviousMode, &Object, 0LL);
  if ( (int)result >= 0 )
  {
    v13 = (struct _FILE_OBJECT *)Object;
    v39 = (char *)Object + 80;
    if ( (*((_DWORD *)Object + 20) & 2) != 0 )
    {
      v14 = (*((_DWORD *)Object + 20) & 4) != 0;
      v15 = KeGetCurrentThread();
      --v15->KernelApcDisable;
      v16 = (volatile __int32 *)Object;
      v17 = KeAbPreAcquire((__int64)Object + 128, 0LL);
      a5 = 0;
      if ( _InterlockedExchange(v16 + 29, 1) )
      {
        LOBYTE(v19) = v14;
        LOBYTE(v18) = PreviousMode;
        v13 = (struct _FILE_OBJECT *)Object;
        v20 = IopWaitAndAcquireFileObjectLock((_DWORD)Object, v18, v19, (_DWORD)v17, (__int64)&a5);
      }
      else
      {
        if ( v17 )
          *((_BYTE *)v17 + 10) = 1;
        v13 = (struct _FILE_OBJECT *)Object;
        PsReferenceSiloContext(Object);
        v20 = 0;
      }
      if ( !a5 )
      {
        a5 = 1;
        v5 = a4;
        goto LABEL_20;
      }
    }
    else
    {
      Pool2 = (struct _KEVENT *)ExAllocatePool2(0x40uLL, 0x18uLL, 0x76456F49u);
      v9 = Pool2;
      P = Pool2;
      if ( Pool2 )
      {
        KeInitializeEvent(Pool2, SynchronizationEvent, 0);
        a5 = 0;
LABEL_20:
        IopResetEvent((__int64)v13);
        RelatedDeviceObject = IoGetRelatedDeviceObject(v13);
        LOBYTE(v22) = RelatedDeviceObject->StackSize;
        v23 = (IRP *)IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v22, 0LL);
        v24 = v23;
        v42 = v23;
        if ( !v23 )
        {
          if ( (*v39 & 2) == 0 )
            ExFreePoolWithTag(v9, 0);
          IopAllocateIrpCleanup((ULONG_PTR)v13, 0LL);
          return 3221225626LL;
        }
        v23->Tail.Overlay.OriginalFileObject = v13;
        v23->Tail.Overlay.Thread = CurrentThread;
        v25 = v36;
        v23->RequestorMode = v36;
        if ( a5 )
        {
          v23->AllocationFlags |= 2u;
          v26 = (struct _IO_STATUS_BLOCK *)a2;
          v27 = 0LL;
        }
        else
        {
          v23->Flags = 4;
          v26 = (struct _IO_STATUS_BLOCK *)&v44;
          v27 = v9;
        }
        v24->UserEvent = v27;
        v24->UserIosb = v26;
        v24->Overlay.AllocationSize.QuadPart = 0LL;
        v28 = (__int64)&v24->Tail.Overlay.CurrentStackLocation[-1];
        v39 = (_DWORD *)v28;
        *(_BYTE *)v28 = 26;
        *(_QWORD *)(v28 + 48) = v13;
        Flags = RelatedDeviceObject->Flags;
        if ( (Flags & 4) != 0 )
        {
          ErrorOffset = 0;
          if ( (_DWORD)v5 )
          {
            v30 = (_FILE_QUOTA_INFORMATION *)ExAllocatePool2(0x63uLL, v5, 0x42536F49u);
            v24->AssociatedIrp.MasterIrp = (struct _IRP *)v30;
            memmove(v30, a3, v5);
            LODWORD(v5) = a4;
            v31 = IoCheckQuotaBufferValidity(v30, a4, &ErrorOffset);
            if ( v31 < 0 )
            {
              *(_DWORD *)a2 = v31;
              *(_QWORD *)(a2 + 8) = ErrorOffset;
              RtlRaiseStatus(v31);
            }
            v24->Flags |= 0x30u;
            v25 = v36;
            v28 = (__int64)v39;
            goto LABEL_39;
          }
          v24->AssociatedIrp.MasterIrp = 0LL;
        }
        else if ( (Flags & 0x10) != 0 )
        {
          if ( (_DWORD)v5 )
          {
            Mdl = IoAllocateMdl(a3, v5, 0, 1u, v24);
            if ( !Mdl )
              RtlRaiseStatus(-1073741670);
            IopProbeAndLockPages_0((__int64)Mdl, v36, 0, (__int64)RelatedDeviceObject, *(unsigned __int8 *)v39);
            v28 = (__int64)v39;
          }
          goto LABEL_39;
        }
        v24->UserBuffer = a3;
LABEL_39:
        *(_DWORD *)(v28 + 8) = v5;
        v33 = a5;
        LOBYTE(Irp) = v25;
        result = IopSynchronousServiceTail(RelatedDeviceObject, v24, v13, 0LL, Irp, a5, 2);
        if ( !v33 )
        {
          LOBYTE(v34) = v25;
          return IopSynchronousApiServiceTail((unsigned int)result, v9, v24, v34, &v44, a2);
        }
        return result;
      }
      v20 = -1073741670;
    }
    ObfDereferenceObject(v13);
    return v20;
  }
  return result;
}
