/*
 * XREFs of IopReadFileScatter @ 0x140A8AFD8
 * Callers:
 *     IopIoRingDispatchReadScatter @ 0x1407142CC (IopIoRingDispatchReadScatter.c)
 *     NtReadFileScatter @ 0x140ABB0B0 (NtReadFileScatter.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     IoGetRelatedDeviceObject @ 0x14025C530 (IoGetRelatedDeviceObject.c)
 *     IoAllocateMdl @ 0x14025F1D0 (IoAllocateMdl.c)
 *     IopAllocateIrpExReturn @ 0x1402843D0 (IopAllocateIrpExReturn.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     MmProbeAndLockSelectedPages @ 0x140390AC0 (MmProbeAndLockSelectedPages.c)
 *     IopResetEvent @ 0x1403B3230 (IopResetEvent.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x1404032C0 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     IopExceptionFilter @ 0x140593308 (IopExceptionFilter.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     IopSynchronousServiceTail @ 0x1408C0CC0 (IopSynchronousServiceTail.c)
 *     IopExceptionCleanupEx @ 0x140958E38 (IopExceptionCleanupEx.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopReadFileScatter(
        struct _FILE_OBJECT *BugCheckParameter2,
        void *a2,
        __int64 a3,
        void *a4,
        unsigned __int64 a5,
        unsigned int a6,
        _FILE_SEGMENT_ELEMENT *Src,
        ULONG Length,
        __int64 a9,
        ULONG *a10,
        PVOID a11,
        struct _IO_STATUS_BLOCK *a12)
{
  IRP *v13; // rsi
  KPROCESSOR_MODE PreviousMode; // r14
  PVOID v15; // r13
  char v16; // di
  PDEVICE_OBJECT RelatedDeviceObject; // rdx
  __int64 v18; // r8
  ULONG v19; // r12d
  unsigned __int64 DeviceType; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // edi
  __int64 i; // rdx
  __int64 v25; // rax
  size_t v26; // r12
  _KPROCESS *Process; // rax
  __int16 v28; // ax
  bool v29; // zf
  char v30; // al
  __int64 v31; // rax
  int SectorSize; // ecx
  __int64 v33; // r14
  __int64 Irp; // rax
  __int64 v36; // r13
  PVOID v37; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  struct _MDL *Mdl; // rax
  _FILE_SEGMENT_ELEMENT *v40; // r14
  _DWORD *FileObjectExtension; // rax
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-88h]
  char v43; // [rsp+41h] [rbp-87h]
  char v44; // [rsp+42h] [rbp-86h]
  ULONG v45; // [rsp+48h] [rbp-80h]
  LARGE_INTEGER v46; // [rsp+50h] [rbp-78h]
  _FILE_SEGMENT_ELEMENT *P; // [rsp+60h] [rbp-68h]
  struct _DEVICE_OBJECT *v48; // [rsp+68h] [rbp-60h]
  PVOID v49; // [rsp+70h] [rbp-58h]
  PVOID Object; // [rsp+78h] [rbp-50h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp-48h]
  __int64 v53; // [rsp+E0h] [rbp+18h] BYREF
  void *v54; // [rsp+E8h] [rbp+20h]

  v54 = a4;
  v53 = a3;
  v13 = 0LL;
  P = 0LL;
  v49 = 0LL;
  v45 = 0;
  v46.QuadPart = 0LL;
  v44 = 1;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  AccessMode = PreviousMode;
  v15 = a11;
  if ( (BugCheckParameter2->Flags & 2) == 0 || (v16 = 1, a11) )
    v16 = 0;
  v43 = v16;
  RelatedDeviceObject = IoGetRelatedDeviceObject(BugCheckParameter2);
  v48 = RelatedDeviceObject;
  if ( (BugCheckParameter2->Flags & 8) == 0 )
    goto LABEL_51;
  if ( v16 )
    goto LABEL_51;
  v19 = Length;
  if ( a6 != (Length >> 12) + ((Length & 0xFFF) != 0) || (RelatedDeviceObject->Flags & 4) != 0 )
    goto LABEL_51;
  DeviceType = RelatedDeviceObject->DeviceType;
  if ( (unsigned int)DeviceType > 0x36 || (v21 = 0x40000100100348LL, !_bittest64(&v21, DeviceType)) )
  {
    if ( (_DWORD)DeviceType != 83 )
      goto LABEL_51;
  }
  if ( !PreviousMode || v15 )
  {
    i = a9;
    if ( a9 )
      v46 = *(LARGE_INTEGER *)a9;
    if ( a10 )
      v45 = *a10;
  }
  else
  {
    v22 = a5;
    if ( a5 >= 0x7FFFFFFF0000LL )
      v22 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v22 = *(_DWORD *)v22;
    IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&a5, &v53, 0);
    if ( BugCheckParameter2->CompletionContext && (v53 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      v23 = -1073741811;
      goto LABEL_52;
    }
    i = a9;
    if ( a9 )
    {
      if ( (a9 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v46 = *(LARGE_INTEGER *)a9;
    }
    if ( a10 )
    {
      v25 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a10 < 0x7FFFFFFF0000LL )
        v25 = (__int64)a10;
      v45 = *(_DWORD *)v25;
    }
  }
  if ( PreviousMode )
  {
    v26 = 8LL * a6;
    if ( v26 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( !Process[1].ReadyTime )
        goto LABEL_38;
      v28 = WORD2(Process[3].PerProcessorCycleTimes);
      if ( v28 == 332 || (v29 = v28 == 452, v30 = 0, v29) )
        v30 = 1;
      v29 = v30 == 0;
      v31 = 3LL;
      if ( v29 )
LABEL_38:
        v31 = 7LL;
      if ( (v31 & (unsigned __int64)Src) != 0 )
        ExRaiseDatatypeMisalignment();
    }
    if ( Length )
    {
      P = (_FILE_SEGMENT_ELEMENT *)ExAllocatePool2(0x123uLL, 8LL * a6, 0x41536F49u);
      memmove(P, Src, v26);
      Src = P;
    }
    v19 = Length;
    if ( (BugCheckParameter2->Flags & 8) != 0 )
    {
      SectorSize = v48->SectorSize;
      if ( (_WORD)SectorSize )
      {
        v18 = v48->SectorSize;
        if ( ((SectorSize - 1) & Length) != 0 )
        {
          i = Length % (unsigned int)v18;
          if ( Length % (unsigned int)v18 )
            goto LABEL_51;
        }
      }
      v33 = a9;
      if ( a9 )
      {
        if ( (_WORD)SectorSize && ((SectorSize - 1) & v46.LowPart) != 0 )
          goto LABEL_51;
      }
    }
    else
    {
      v33 = a9;
    }
    if ( Length )
    {
      for ( i = 0LL; (unsigned int)i < a6; i = (unsigned int)(i + 1) )
      {
        if ( ((__int64)Src[(unsigned int)i].Buffer & 0xFFFLL) != 0 )
          goto LABEL_51;
      }
    }
  }
  else
  {
    v33 = a9;
  }
  if ( a2 )
  {
    Object = 0LL;
    v23 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)ExEventObjectType, AccessMode, &Object, 0LL);
    v49 = Object;
    if ( v23 < 0 )
      goto LABEL_52;
    KeResetEvent((PRKEVENT)Object);
  }
  if ( !v33 && (BugCheckParameter2->Flags & 0x280) == 0 || v46.HighPart < 0 )
  {
LABEL_51:
    v23 = -1073741811;
    goto LABEL_52;
  }
  if ( !v15 )
    IopResetEvent((__int64)BugCheckParameter2);
  LOBYTE(v18) = v43 ^ 1;
  LOBYTE(i) = v48->StackSize;
  Irp = IopAllocateIrpExReturn((__int64)v48, i, v18);
  v13 = (IRP *)Irp;
  if ( Irp )
  {
    *(_QWORD *)(Irp + 192) = BugCheckParameter2;
    *(_QWORD *)(Irp + 152) = CurrentThread;
    *(_QWORD *)(Irp + 160) = 0LL;
    *(_BYTE *)(Irp + 64) = AccessMode;
    *(_BYTE *)(Irp + 65) = 0;
    *(_BYTE *)(Irp + 68) = 0;
    *(_QWORD *)(Irp + 104) = 0LL;
    *(_DWORD *)(Irp + 16) = 0;
    *(_QWORD *)(Irp + 80) = v49;
    if ( v15 )
    {
      ObfReferenceObjectWithTag(v15, 0x49526F49u);
      v13->Flags |= 0x200000u;
      v13->UserIosb = a12;
      v36 = a5;
      v37 = a11;
    }
    else
    {
      v36 = a5;
      *(_QWORD *)(Irp + 72) = a5;
      *(_QWORD *)(Irp + 88) = v53;
      v37 = v54;
    }
    v13->Overlay.AsynchronousParameters.UserApcContext = v37;
    CurrentStackLocation = v13->Tail.Overlay.CurrentStackLocation;
    *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = 3;
    CurrentStackLocation[-1].FileObject = BugCheckParameter2;
    v13->AssociatedIrp.MasterIrp = 0LL;
    v13->MdlAddress = 0LL;
    if ( v19 )
    {
      Mdl = IoAllocateMdl(Src->Buffer, v19, 0, 1u, v13);
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      v40 = Src;
      MmProbeAndLockSelectedPages(Mdl, Src, AccessMode, IoWriteAccess);
      v13->UserBuffer = v40->Buffer;
    }
    if ( P )
    {
      ExFreePoolWithTag(P, 0);
      P = 0LL;
    }
    v13->Flags |= ((BugCheckParameter2->Flags & 8) != 0) + 2304;
    CurrentStackLocation[-1].Parameters.Read.Length = v19;
    CurrentStackLocation[-1].Parameters.Create.Options = v45;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset = v46;
    FileObjectExtension = BugCheckParameter2->FileObjectExtension;
    if ( FileObjectExtension && (*FileObjectExtension & 0x10) != 0 )
      CurrentStackLocation[-1].Parameters.Read.Flags = *(_DWORD *)(v36 + 8);
    v23 = IopSynchronousServiceTail(v48, (__int64)v13, (__int64)BugCheckParameter2, 1, AccessMode, 0, 0);
    v44 = 0;
  }
  else
  {
    v23 = -1073741670;
  }
LABEL_52:
  if ( v44 )
    IopExceptionCleanupEx((ULONG_PTR)BugCheckParameter2, v13, v49, 0LL, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v23;
}
