/*
 * XREFs of IopFlushBuffersFile @ 0x140957794
 * Callers:
 *     IopIoRingDispatchFlush @ 0x1407141EC (IopIoRingDispatchFlush.c)
 *     NtFlushBuffersFileEx @ 0x140957700 (NtFlushBuffersFileEx.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14025C530 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x1402843D0 (IopAllocateIrpExReturn.c)
 *     IopReleaseFileObjectLock @ 0x1402C60B0 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     IopResetEvent @ 0x1403B3230 (IopResetEvent.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     IopExceptionFilter @ 0x140593308 (IopExceptionFilter.c)
 *     IopSynchronousServiceTail @ 0x1408C0CC0 (IopSynchronousServiceTail.c)
 *     IopSynchronousApiServiceTail @ 0x140957634 (IopSynchronousApiServiceTail.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140958F48 (IopWaitAndAcquireFileObjectLock.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopFlushBuffersFile(
        PFILE_OBJECT FileObject,
        char a2,
        __int64 a3,
        int a4,
        unsigned __int8 a5,
        PVOID Object,
        struct _IO_STATUS_BLOCK *a7,
        struct _IO_STATUS_BLOCK *a8)
{
  PFILE_OBJECT v9; // rsi
  struct _KEVENT *v10; // r12
  KPROCESSOR_MODE PreviousMode; // r14
  bool v12; // r8
  __int64 v13; // rcx
  ULONG Flags; // edi
  bool v15; // di
  struct _KTHREAD *v16; // rax
  _QWORD *v17; // rax
  int v18; // edx
  int v19; // r8d
  unsigned int v20; // edi
  PDEVICE_OBJECT RelatedDeviceObject; // rdi
  __int64 v22; // rdx
  __int64 Irp; // rax
  IRP *v24; // r14
  KPROCESSOR_MODE v25; // dl
  char v26; // cl
  struct _IO_STATUS_BLOCK *v27; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  char v29; // r14
  struct _KEVENT *Pool2; // rax
  char v32; // [rsp+40h] [rbp-58h]
  KPROCESSOR_MODE v33; // [rsp+41h] [rbp-57h]
  char v34[2]; // [rsp+42h] [rbp-56h] BYREF
  int v35; // [rsp+44h] [rbp-54h]
  PVOID P; // [rsp+48h] [rbp-50h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-48h]
  unsigned int v38[16]; // [rsp+58h] [rbp-40h] BYREF
  char v39; // [rsp+B0h] [rbp+18h]

  v9 = FileObject;
  *(_OWORD *)v38 = 0LL;
  v10 = 0LL;
  P = 0LL;
  v39 = 0;
  v35 = 0;
  if ( !a3 && !a4 )
  {
    if ( Object )
    {
      if ( !a8 )
        goto LABEL_5;
    }
    else if ( a8 )
    {
LABEL_5:
      CurrentThread = KeGetCurrentThread();
      PreviousMode = CurrentThread->PreviousMode;
      v33 = PreviousMode;
      v12 = (FileObject->Flags & 2) != 0 && !Object;
      v32 = v12;
      if ( PreviousMode && !Object )
      {
        v13 = 0x7FFFFFFF0000LL;
        if ( (unsigned __int64)a8 < 0x7FFFFFFF0000LL )
          v13 = (__int64)a8;
        *(_DWORD *)v13 = *(_DWORD *)v13;
      }
      Flags = v9->Flags;
      if ( ((~(unsigned __int8)(Flags >> 5) & 4 | 2) & a5) == 0 )
      {
        v20 = -1073741790;
        goto LABEL_32;
      }
      if ( v12 )
      {
        v15 = (Flags & 4) != 0;
        v16 = KeGetCurrentThread();
        --v16->KernelApcDisable;
        v17 = KeAbPreAcquire((__int64)&v9->Lock, 0LL);
        v34[0] = 0;
        if ( _InterlockedExchange((volatile __int32 *)&v9->Busy, 1) )
        {
          LOBYTE(v19) = v15;
          LOBYTE(v18) = PreviousMode;
          v20 = IopWaitAndAcquireFileObjectLock((_DWORD)v9, v18, v19, (_DWORD)v17, (__int64)v34);
        }
        else
        {
          if ( v17 )
            *((_BYTE *)v17 + 10) = 1;
          PsReferenceSiloContext(v9);
          v20 = 0;
        }
        if ( v34[0] )
          goto LABEL_32;
        v39 = 1;
      }
      else
      {
        if ( Object )
          goto LABEL_23;
        Pool2 = (struct _KEVENT *)ExAllocatePool2(0x40uLL, 0x18uLL, 0x76456F49u);
        v10 = Pool2;
        if ( !Pool2 )
        {
LABEL_46:
          v20 = -1073741670;
LABEL_32:
          v29 = v39;
          goto LABEL_33;
        }
        KeInitializeEvent(Pool2, SynchronizationEvent, 0);
      }
      if ( !Object )
        IopResetEvent((__int64)v9);
LABEL_23:
      RelatedDeviceObject = IoGetRelatedDeviceObject(v9);
      LOBYTE(v22) = RelatedDeviceObject->StackSize;
      Irp = IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v22, 0LL);
      v24 = (IRP *)Irp;
      if ( Irp )
      {
        *(_QWORD *)(Irp + 192) = v9;
        *(_QWORD *)(Irp + 152) = CurrentThread;
        v25 = v33;
        *(_BYTE *)(Irp + 64) = v33;
        *(_DWORD *)(Irp + 16) = 0;
        if ( Object )
        {
          ObfReferenceObjectWithTag(Object, 0x49526F49u);
          v24->Flags |= 0x200000u;
          v24->Overlay.AsynchronousParameters.UserApcContext = Object;
          v26 = v32;
          v25 = v33;
          v27 = a7;
        }
        else
        {
          v26 = v32;
          if ( v32 )
          {
            *(_QWORD *)(Irp + 80) = 0LL;
            v27 = a8;
          }
          else
          {
            *(_QWORD *)(Irp + 80) = v10;
            *(_DWORD *)(Irp + 16) = 4;
            v27 = (struct _IO_STATUS_BLOCK *)v38;
          }
        }
        v24->UserIosb = v27;
        v24->Overlay.AllocationSize.QuadPart = 0LL;
        CurrentStackLocation = v24->Tail.Overlay.CurrentStackLocation;
        CurrentStackLocation[-1].MajorFunction = 9;
        CurrentStackLocation[-1].FileObject = v9;
        if ( (a2 & 1) != 0 )
        {
          CurrentStackLocation[-1].MinorFunction = 2;
        }
        else if ( (a2 & 2) != 0 )
        {
          CurrentStackLocation[-1].MinorFunction = 3;
        }
        else if ( (a2 & 4) != 0 )
        {
          CurrentStackLocation[-1].MinorFunction = 4;
        }
        else
        {
          CurrentStackLocation[-1].MinorFunction = (a2 & 8) != 0;
        }
        v20 = IopSynchronousServiceTail(RelatedDeviceObject, (__int64)v24, (__int64)v9, 0, v25, v26, 2u);
        v9 = 0LL;
        if ( !v32 && !Object )
        {
          v20 = IopSynchronousApiServiceTail(v20, v10, v24, v33, v38, a8);
          v10 = 0LL;
        }
        goto LABEL_32;
      }
      goto LABEL_46;
    }
  }
  v20 = -1073741811;
  v29 = 0;
LABEL_33:
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( v9 )
  {
    if ( v29 )
      IopReleaseFileObjectLock((ULONG_PTR)v9);
    ObfDereferenceObject(v9);
  }
  return v20;
}
