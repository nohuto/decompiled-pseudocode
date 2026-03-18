/*
 * XREFs of NtQueryEaFile @ 0x14096E890
 * Callers:
 *     <none>
 * Callees:
 *     IopAllocateIrpExReturn @ 0x140253DC0 (IopAllocateIrpExReturn.c)
 *     IoAllocateMdl @ 0x140267BF0 (IoAllocateMdl.c)
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 *     IopReleaseFileObjectLock @ 0x14031D520 (IopReleaseFileObjectLock.c)
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
 *     ProbeForWrite @ 0x1408C0590 (ProbeForWrite.c)
 *     IopSynchronousServiceTail @ 0x1408C3300 (IopSynchronousServiceTail.c)
 *     IopSynchronousApiServiceTail @ 0x14096F574 (IopSynchronousApiServiceTail.c)
 *     IopExceptionCleanupEx @ 0x140970628 (IopExceptionCleanupEx.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140970738 (IopWaitAndAcquireFileObjectLock.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtQueryEaFile(
        void *a1,
        unsigned __int64 a2,
        void *a3,
        ULONG a4,
        char a5,
        void *Src,
        size_t Size,
        ULONG *a8,
        char a9)
{
  struct _KEVENT *v11; // r12
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v13; // rcx
  UNICODE_STRING *v14; // rbx
  UNICODE_STRING *v15; // rdi
  int v16; // ecx
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 result; // rax
  __int64 v20; // rax
  int v21; // edi
  int v22; // edi
  struct _FILE_OBJECT *v23; // rsi
  ULONG *p_Flags; // r13
  bool v25; // di
  struct _KTHREAD *v26; // rax
  PFILE_OBJECT v27; // rbx
  int v28; // edx
  int v29; // r8d
  _QWORD *v30; // r9
  unsigned int v31; // ebx
  unsigned __int8 v32; // r15
  __int64 v33; // rdx
  IRP *v34; // rax
  IRP *Irp; // rdi
  ULONG *v36; // r12
  struct _IO_STATUS_BLOCK *v37; // rax
  struct _KEVENT *v38; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  struct _DEVICE_OBJECT *v40; // rcx
  ULONG Flags; // eax
  ULONG v42; // eax
  KPROCESSOR_MODE v43; // r12
  char v44; // al
  unsigned __int8 v45; // bl
  __int64 v46; // r9
  struct _KEVENT *v47; // rax
  UNICODE_STRING *Pool2; // rax
  bool v49; // zf
  __int64 v50; // rax
  PMDL Mdl; // rcx
  char v52; // [rsp+40h] [rbp-88h]
  char v53; // [rsp+41h] [rbp-87h]
  unsigned __int8 v54[2]; // [rsp+42h] [rbp-86h] BYREF
  int v55; // [rsp+44h] [rbp-84h]
  PVOID P; // [rsp+48h] [rbp-80h]
  ULONG v57; // [rsp+50h] [rbp-78h]
  PFILE_OBJECT FileObject; // [rsp+58h] [rbp-70h] BYREF
  PVOID v59; // [rsp+60h] [rbp-68h]
  PDEVICE_OBJECT RelatedDeviceObject; // [rsp+68h] [rbp-60h]
  UNICODE_STRING *v61; // [rsp+70h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-50h]
  PIRP v63; // [rsp+80h] [rbp-48h]
  __int128 v64; // [rsp+88h] [rbp-40h] BYREF

  FileObject = 0LL;
  v11 = 0LL;
  v59 = 0LL;
  P = 0LL;
  v52 = 0;
  v57 = 0;
  v64 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v53 = PreviousMode;
  if ( !PreviousMode )
  {
    if ( Src && (_DWORD)Size )
    {
      v52 = 1;
      Pool2 = (UNICODE_STRING *)ExAllocatePool2(0x41uLL);
      v14 = Pool2;
      P = Pool2;
      if ( !Pool2 )
        return 3221225626LL;
      memmove(Pool2, Src, (unsigned int)Size);
    }
    else
    {
      v14 = (UNICODE_STRING *)P;
    }
    if ( a8 )
      v57 = *a8;
LABEL_27:
    v22 = IopReferenceFileObject(a1, 8u, PreviousMode, (PVOID *)&FileObject, 0LL);
    if ( v22 < 0 )
    {
      if ( v52 )
        ExFreePoolWithTag(v14, 0);
      return (unsigned int)v22;
    }
    v23 = FileObject;
    p_Flags = &FileObject->Flags;
    if ( (FileObject->Flags & 2) != 0 )
    {
      v25 = (FileObject->Flags & 4) != 0;
      v26 = KeGetCurrentThread();
      --v26->KernelApcDisable;
      v27 = FileObject;
      v30 = KeAbPreAcquire((__int64)&FileObject->Lock, 0LL);
      v54[0] = 0;
      if ( _InterlockedExchange((volatile __int32 *)&v27->Busy, 1) )
      {
        LOBYTE(v29) = v25;
        LOBYTE(v28) = PreviousMode;
        v23 = FileObject;
        v31 = IopWaitAndAcquireFileObjectLock((_DWORD)FileObject, v28, v29, (_DWORD)v30, (__int64)v54);
      }
      else
      {
        if ( v30 )
          *((_BYTE *)v30 + 10) = 1;
        v23 = FileObject;
        PsReferenceSiloContext(FileObject);
        v31 = 0;
      }
      if ( !v54[0] )
      {
        v32 = 1;
        v14 = (UNICODE_STRING *)P;
LABEL_35:
        v54[0] = v32;
        IopResetEvent((__int64)v23);
        RelatedDeviceObject = IoGetRelatedDeviceObject(v23);
        LOBYTE(v33) = RelatedDeviceObject->StackSize;
        v34 = (IRP *)IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v33, 0LL);
        Irp = v34;
        v63 = v34;
        if ( v34 )
        {
          v34->Tail.Overlay.OriginalFileObject = v23;
          v34->Tail.Overlay.Thread = CurrentThread;
          v34->RequestorMode = v53;
          v36 = &v34->Flags;
          if ( v32 )
          {
            v37 = (struct _IO_STATUS_BLOCK *)a2;
            v38 = 0LL;
          }
          else
          {
            *v36 = 4;
            v37 = (struct _IO_STATUS_BLOCK *)&v64;
            v38 = (struct _KEVENT *)v59;
          }
          Irp->UserEvent = v38;
          Irp->UserIosb = v37;
          Irp->Overlay.AllocationSize.QuadPart = 0LL;
          CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
          CurrentStackLocation[-1].MajorFunction = 7;
          CurrentStackLocation[-1].FileObject = v23;
          if ( v52 )
          {
            Irp->Tail.Overlay.AuxiliaryBuffer = (PCHAR)v14;
            CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = v14;
            CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = Size;
          }
          v40 = RelatedDeviceObject;
          Flags = RelatedDeviceObject->Flags;
          if ( (Flags & 4) == 0 )
          {
            if ( (Flags & 0x10) != 0 )
            {
              if ( a4 )
              {
                Mdl = IoAllocateMdl(a3, a4, 0, 1u, Irp);
                if ( !Mdl )
                  RtlRaiseStatus(-1073741670);
                v43 = v53;
                IopProbeAndLockPages_0(
                  (__int64)Mdl,
                  v53,
                  1,
                  (__int64)RelatedDeviceObject,
                  CurrentStackLocation[-1].MajorFunction);
                v40 = RelatedDeviceObject;
                v42 = a4;
                goto LABEL_45;
              }
              goto LABEL_43;
            }
LABEL_42:
            Irp->UserBuffer = a3;
LABEL_43:
            v42 = a4;
LABEL_44:
            v43 = v53;
LABEL_45:
            CurrentStackLocation[-1].Parameters.Read.Length = v42;
            CurrentStackLocation[-1].Parameters.Create.EaLength = v57;
            CurrentStackLocation[-1].Flags = 0;
            v44 = 0;
            if ( a9 )
            {
              CurrentStackLocation[-1].Flags = 1;
              v44 = 1;
            }
            if ( a5 )
            {
              v44 |= 2u;
              CurrentStackLocation[-1].Flags = v44;
            }
            if ( a8 )
              CurrentStackLocation[-1].Flags = v44 | 4;
            v45 = v54[0];
            result = IopSynchronousServiceTail(v40, (__int64)Irp, (__int64)v23, 0, v43, v54[0], 2u);
            if ( !v45 )
            {
              LOBYTE(v46) = v43;
              return IopSynchronousApiServiceTail((unsigned int)result, v59, Irp, v46, &v64, a2);
            }
            return result;
          }
          v42 = a4;
          if ( !a4 )
          {
            Irp->AssociatedIrp.MasterIrp = 0LL;
            *v36 |= 0x50u;
            goto LABEL_44;
          }
          v50 = ExAllocatePool2(0x41uLL);
          Irp->AssociatedIrp.MasterIrp = (struct _IRP *)v50;
          if ( v50 )
          {
            *v36 |= 0x70u;
            v40 = RelatedDeviceObject;
            goto LABEL_42;
          }
          IopExceptionCleanupEx((ULONG_PTR)v23, Irp, 0LL, v59, (*p_Flags & 2) != 0);
          v49 = v14 == 0LL;
        }
        else
        {
          if ( (*p_Flags & 2) == 0 )
            ExFreePoolWithTag(v11, 0);
          if ( (*p_Flags & 2) != 0 )
            IopReleaseFileObjectLock((ULONG_PTR)v23);
          ObfDereferenceObject(v23);
          v49 = v52 == 0;
        }
        if ( !v49 )
          ExFreePoolWithTag(v14, 0);
        return 3221225626LL;
      }
      if ( v52 )
        ExFreePoolWithTag(P, 0);
    }
    else
    {
      v47 = (struct _KEVENT *)ExAllocatePool2(0x40uLL);
      v11 = v47;
      v59 = v47;
      if ( v47 )
      {
        KeInitializeEvent(v47, SynchronizationEvent, 0);
        v32 = 0;
        goto LABEL_35;
      }
      if ( v52 )
        ExFreePoolWithTag(v14, 0);
      v31 = -1073741670;
    }
    ObfDereferenceObject(v23);
    return v31;
  }
  v13 = 0x7FFFFFFF0000LL;
  if ( a2 < 0x7FFFFFFF0000LL )
    v13 = a2;
  *(_DWORD *)v13 = *(_DWORD *)v13;
  ProbeForWrite(a3, a4, 4u);
  if ( a8 )
  {
    v20 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a8 < 0x7FFFFFFF0000LL )
      v20 = (__int64)a8;
    v57 = *(_DWORD *)v20;
  }
  if ( !Src || !(_DWORD)Size )
  {
    v14 = (UNICODE_STRING *)P;
    goto LABEL_27;
  }
  v61 = 0LL;
  v55 = 0;
  v52 = 1;
  if ( ((unsigned __int8)Src & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v14 = (UNICODE_STRING *)ExAllocatePool2(0x61uLL);
  P = v14;
  memmove(v14, Src, (unsigned int)Size);
  v15 = v14;
  v61 = v14;
  v16 = Size;
  v55 = Size;
  while ( 1 )
  {
    if ( v16 < 5 )
    {
      v55 = 0;
      ExFreePoolWithTag(v14, 0);
      P = 0LL;
      *(_DWORD *)a2 = -2147483628;
      *(_QWORD *)(a2 + 8) = 0LL;
      return 2147483668LL;
    }
    v17 = *((unsigned __int8 *)&v15->MaximumLength + 2) + 6;
    if ( v16 < v17 )
      break;
    v18 = *(unsigned int *)&v15->Length;
    if ( !(_DWORD)v18 )
    {
      v55 = v16 - v17;
      if ( (int)(v16 - v17) >= 0 )
      {
        v11 = 0LL;
        goto LABEL_27;
      }
      break;
    }
    if ( ((*((unsigned __int8 *)&v15->MaximumLength + 2) + 9) & 0xFFFFFFFC) != (_DWORD)v18 )
      break;
    if ( (int)v18 < 0 )
      break;
    v16 -= v18;
    v55 = v16;
    if ( v16 < 0 )
      break;
    v15 = (UNICODE_STRING *)((char *)v15 + v18);
    v61 = v15;
  }
  v21 = (_DWORD)v15 - (_DWORD)v14;
  v55 = v21;
  ExFreePoolWithTag(v14, 0);
  P = 0LL;
  *(_DWORD *)a2 = -2147483628;
  *(_QWORD *)(a2 + 8) = v21;
  return 2147483668LL;
}
