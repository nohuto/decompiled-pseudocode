/*
 * XREFs of IopFlushBuffersFile @ 0x14096E4A4
 * Callers:
 *     IopIoRingDispatchFlush @ 0x14071665C (IopIoRingDispatchFlush.c)
 *     NtFlushBuffersFileEx @ 0x14096E410 (NtFlushBuffersFileEx.c)
 * Callees:
 *     IopAllocateIrpExReturn @ 0x140253DC0 (IopAllocateIrpExReturn.c)
 *     IopReleaseFileObjectLock @ 0x14031D520 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     IoGetRelatedDeviceObject @ 0x140373C70 (IoGetRelatedDeviceObject.c)
 *     IopResetEvent @ 0x1403C4670 (IopResetEvent.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     IopExceptionFilter @ 0x1405962D8 (IopExceptionFilter.c)
 *     IopSynchronousServiceTail @ 0x1408C3300 (IopSynchronousServiceTail.c)
 *     IopSynchronousApiServiceTail @ 0x14096F574 (IopSynchronousApiServiceTail.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140970738 (IopWaitAndAcquireFileObjectLock.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopFlushBuffersFile(
        PFILE_OBJECT FileObject,
        char a2,
        __int64 a3,
        int a4,
        unsigned __int8 a5,
        PVOID Object,
        _OWORD *a7,
        unsigned __int64 a8)
{
  PFILE_OBJECT v9; // rsi
  struct _KEVENT *v10; // r12
  char PreviousMode; // r14
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
  __int64 v24; // r14
  KPROCESSOR_MODE v25; // dl
  unsigned __int8 v26; // cl
  _OWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // r9
  char v30; // r14
  struct _KEVENT *Pool2; // rax
  unsigned __int8 v33; // [rsp+40h] [rbp-58h]
  KPROCESSOR_MODE v34; // [rsp+41h] [rbp-57h]
  _BYTE v35[2]; // [rsp+42h] [rbp-56h] BYREF
  int v36; // [rsp+44h] [rbp-54h]
  PVOID P; // [rsp+48h] [rbp-50h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-48h]
  _OWORD v39[4]; // [rsp+58h] [rbp-40h] BYREF
  char v40; // [rsp+B0h] [rbp+18h]

  v9 = FileObject;
  v39[0] = 0LL;
  v10 = 0LL;
  P = 0LL;
  v40 = 0;
  v36 = 0;
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
      v34 = PreviousMode;
      v12 = (FileObject->Flags & 2) != 0 && !Object;
      v33 = v12;
      if ( PreviousMode && !Object )
      {
        v13 = 0x7FFFFFFF0000LL;
        if ( a8 < 0x7FFFFFFF0000LL )
          v13 = a8;
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
        v35[0] = 0;
        if ( _InterlockedExchange((volatile __int32 *)&v9->Busy, 1) )
        {
          LOBYTE(v19) = v15;
          LOBYTE(v18) = PreviousMode;
          v20 = IopWaitAndAcquireFileObjectLock((_DWORD)v9, v18, v19, (_DWORD)v17, (__int64)v35);
        }
        else
        {
          if ( v17 )
            *((_BYTE *)v17 + 10) = 1;
          PsReferenceSiloContext(v9);
          v20 = 0;
        }
        if ( v35[0] )
          goto LABEL_32;
        v40 = 1;
      }
      else
      {
        if ( Object )
          goto LABEL_23;
        Pool2 = (struct _KEVENT *)ExAllocatePool2(0x40uLL);
        v10 = Pool2;
        if ( !Pool2 )
        {
LABEL_46:
          v20 = -1073741670;
LABEL_32:
          v30 = v40;
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
      v24 = Irp;
      if ( Irp )
      {
        *(_QWORD *)(Irp + 192) = v9;
        *(_QWORD *)(Irp + 152) = CurrentThread;
        v25 = v34;
        *(_BYTE *)(Irp + 64) = v34;
        *(_DWORD *)(Irp + 16) = 0;
        if ( Object )
        {
          ObfReferenceObjectWithTag(Object, 0x49526F49u);
          *(_DWORD *)(v24 + 16) |= 0x200000u;
          *(_QWORD *)(v24 + 96) = Object;
          v26 = v33;
          v25 = v34;
          v27 = a7;
        }
        else
        {
          v26 = v33;
          if ( v33 )
          {
            *(_QWORD *)(Irp + 80) = 0LL;
            v27 = (_OWORD *)a8;
          }
          else
          {
            *(_QWORD *)(Irp + 80) = v10;
            *(_DWORD *)(Irp + 16) = 4;
            v27 = v39;
          }
        }
        *(_QWORD *)(v24 + 72) = v27;
        *(_QWORD *)(v24 + 88) = 0LL;
        v28 = *(_QWORD *)(v24 + 184);
        *(_BYTE *)(v28 - 72) = 9;
        *(_QWORD *)(v28 - 24) = v9;
        if ( (a2 & 1) != 0 )
        {
          *(_BYTE *)(v28 - 71) = 2;
        }
        else if ( (a2 & 2) != 0 )
        {
          *(_BYTE *)(v28 - 71) = 3;
        }
        else if ( (a2 & 4) != 0 )
        {
          *(_BYTE *)(v28 - 71) = 4;
        }
        else
        {
          *(_BYTE *)(v28 - 71) = (a2 & 8) != 0;
        }
        v20 = IopSynchronousServiceTail(RelatedDeviceObject, v24, (__int64)v9, 0, v25, v26, 2u);
        v9 = 0LL;
        if ( !v33 && !Object )
        {
          LOBYTE(v29) = v34;
          v20 = IopSynchronousApiServiceTail(v20, v10, v24, v29, v39, a8);
          v10 = 0LL;
        }
        goto LABEL_32;
      }
      goto LABEL_46;
    }
  }
  v20 = -1073741811;
  v30 = 0;
LABEL_33:
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( v9 )
  {
    if ( v30 )
      IopReleaseFileObjectLock((ULONG_PTR)v9);
    ObfDereferenceObject(v9);
  }
  return v20;
}
