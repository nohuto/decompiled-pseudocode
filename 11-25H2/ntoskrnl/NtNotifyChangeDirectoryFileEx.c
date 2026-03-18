/*
 * XREFs of NtNotifyChangeDirectoryFileEx @ 0x14098A4B0
 * Callers:
 *     NtNotifyChangeDirectoryFile @ 0x14098A450 (NtNotifyChangeDirectoryFile.c)
 * Callees:
 *     IopAllocateIrpExReturn @ 0x1402537B0 (IopAllocateIrpExReturn.c)
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     IopResetEvent @ 0x1402A1570 (IopResetEvent.c)
 *     IoAllocateMdl @ 0x1402D5350 (IoAllocateMdl.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 *     IoGetRelatedDeviceObject @ 0x14035CFA0 (IoGetRelatedDeviceObject.c)
 *     IopReferenceFileObject @ 0x1403F6490 (IopReferenceFileObject.c)
 *     IopProbeAndLockPages_2 @ 0x1404A69A4 (IopProbeAndLockPages_2.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     IopSynchronousServiceTail @ 0x1408C5420 (IopSynchronousServiceTail.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 *     IopExceptionCleanupEx @ 0x1409887B0 (IopExceptionCleanupEx.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1409888C0 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x14098A8E4 (IopAllocateIrpCleanup.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall NtNotifyChangeDirectoryFileEx(
        void *a1,
        HANDLE Handle,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        volatile void *Address,
        SIZE_T Length,
        int a8,
        char a9,
        int a10)
{
  PVOID v12; // r14
  struct _KTHREAD *CurrentThread; // rsi
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 v15; // rcx
  ULONG v16; // r13d
  __int64 result; // rax
  PFILE_OBJECT v18; // rbx
  _KPROCESS *Process; // rax
  __int16 v20; // ax
  char v21; // al
  __int64 v22; // rcx
  bool v23; // zf
  PDEVICE_OBJECT RelatedDeviceObject; // r15
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 Irp; // rax
  IRP *v28; // rdi
  __int64 v29; // rsi
  int v30; // ecx
  ULONG Flags; // eax
  int v32; // edi
  char v33; // di
  struct _KTHREAD *v34; // rax
  PFILE_OBJECT v35; // rbx
  __int64 *v36; // rax
  __int64 Pool2; // rax
  struct _MDL *Mdl; // rcx
  __int64 v39; // r8
  char v40; // [rsp+40h] [rbp-58h]
  _BYTE v41[7]; // [rsp+41h] [rbp-57h] BYREF
  PFILE_OBJECT FileObject; // [rsp+48h] [rbp-50h] BYREF
  PVOID v43; // [rsp+50h] [rbp-48h]
  PVOID Object; // [rsp+58h] [rbp-40h] BYREF
  struct _KTHREAD *v45; // [rsp+60h] [rbp-38h]

  FileObject = 0LL;
  v12 = 0LL;
  v43 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v15 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
      v15 = (__int64)a5;
    *(_DWORD *)v15 = *(_DWORD *)v15;
    v16 = Length;
    if ( (_DWORD)Length )
      ProbeForWrite(Address, (unsigned int)Length, 4u);
    if ( (a8 & 0xFFFFF000) != 0 || !a8 )
      return 3221225485LL;
  }
  else
  {
    v16 = Length;
  }
  result = IopReferenceFileObject(a1, 1u, PreviousMode, (PVOID *)&FileObject, 0LL);
  if ( (int)result >= 0 )
  {
    v18 = FileObject;
    if ( FileObject->CompletionContext && (a3 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      v32 = -1073741811;
LABEL_34:
      ObfDereferenceObject(v18);
      return (unsigned int)v32;
    }
    if ( Handle )
    {
      Object = 0LL;
      v32 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
      v12 = Object;
      v43 = Object;
      if ( v32 < 0 )
        goto LABEL_34;
      KeResetEvent((PRKEVENT)Object);
    }
    if ( (v18->Flags & 2) != 0 )
    {
      v33 = (v18->Flags & 4) != 0;
      v34 = KeGetCurrentThread();
      --v34->KernelApcDisable;
      v35 = FileObject;
      v36 = KeAbPreAcquire((__int64)&FileObject->Lock, 0LL);
      v41[0] = 0;
      if ( _InterlockedExchange((volatile __int32 *)&v35->Busy, 1) )
      {
        v18 = FileObject;
        v32 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)&FileObject->Type, PreviousMode, v33, v36, v41);
      }
      else
      {
        if ( v36 )
          *((_BYTE *)v36 + 10) = 1;
        v18 = FileObject;
        PsReferenceSiloContext(FileObject);
        v32 = 0;
      }
      if ( v41[0] )
      {
        if ( v12 )
          ObfDereferenceObject(v12);
        goto LABEL_34;
      }
      v40 = 1;
    }
    else
    {
      v40 = 0;
      if ( PreviousMode )
      {
        v45 = KeGetCurrentThread();
        Process = v45->ApcState.Process;
        if ( Process[1].ReadyTime )
        {
          v20 = WORD2(Process[3].PerProcessorCycleTimes);
          if ( v20 == 332 || (v23 = v20 == 452, v21 = 0, v23) )
            v21 = 1;
          v41[1] = v21;
          if ( v21 )
          {
            v22 = *a5;
            *(_DWORD *)v22 = *(_DWORD *)v22;
            a5 = (unsigned int *)v22;
            a3 |= 1uLL;
          }
        }
        v18 = FileObject;
      }
    }
    IopResetEvent((__int64)v18);
    RelatedDeviceObject = IoGetRelatedDeviceObject(v18);
    LOBYTE(v25) = v40 ^ 1;
    LOBYTE(v26) = RelatedDeviceObject->StackSize;
    Irp = IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v26, v25);
    v28 = (IRP *)Irp;
    Object = (PVOID)Irp;
    if ( Irp )
    {
      *(_QWORD *)(Irp + 192) = v18;
      *(_QWORD *)(Irp + 152) = CurrentThread;
      *(_BYTE *)(Irp + 64) = PreviousMode;
      *(_QWORD *)(Irp + 80) = v12;
      *(_QWORD *)(Irp + 72) = a5;
      *(_QWORD *)(Irp + 88) = a3;
      *(_QWORD *)(Irp + 96) = a4;
      v29 = *(_QWORD *)(Irp + 184);
      *(_BYTE *)(v29 - 72) = 12;
      v30 = a10;
      *(_BYTE *)(v29 - 71) = (a10 != 1) + 2;
      *(_QWORD *)(v29 - 24) = v18;
      if ( !v16 )
      {
LABEL_26:
        *(_DWORD *)(v29 - 64) = v16;
        *(_DWORD *)(v29 - 56) = a8;
        if ( *(_BYTE *)(v29 - 71) == 3 )
          *(_DWORD *)(v29 - 48) = v30;
        *(_BYTE *)(v29 - 70) = 0;
        if ( a9 )
          *(_BYTE *)(v29 - 70) = 1;
        return IopSynchronousServiceTail(RelatedDeviceObject, (__int64)v28, (__int64)v18, 0, PreviousMode, v40, 2u);
      }
      Flags = RelatedDeviceObject->Flags;
      if ( (Flags & 4) == 0 )
      {
        if ( (Flags & 0x10) != 0 )
        {
          Mdl = IoAllocateMdl((PVOID)Address, v16, 0, 1u, v28);
          if ( !Mdl )
            RtlRaiseStatus(-1073741670);
          IopProbeAndLockPages_2(
            Mdl,
            PreviousMode,
            v39,
            (struct _LIST_ENTRY *)RelatedDeviceObject,
            *(unsigned __int8 *)(v29 - 72));
          v30 = a10;
          goto LABEL_26;
        }
        goto LABEL_25;
      }
      Pool2 = ExAllocatePool2(0x41uLL);
      v28->AssociatedIrp.MasterIrp = (struct _IRP *)Pool2;
      if ( Pool2 )
      {
        v28->Flags = 112;
        v30 = a10;
LABEL_25:
        v28->UserBuffer = (PVOID)Address;
        goto LABEL_26;
      }
      IopExceptionCleanupEx((ULONG_PTR)v18, v28, v12, 0LL, (v18->Flags & 2) != 0);
    }
    else
    {
      IopAllocateIrpCleanup((ULONG_PTR)v18, v12);
    }
    return 3221225626LL;
  }
  return result;
}
