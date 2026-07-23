/*
 * XREFs of IopWriteFileGather @ 0x140A920EC
 * Callers:
 *     IopIoRingDispatchWriteGather @ 0x140714BB0 (IopIoRingDispatchWriteGather.c)
 *     NtWriteFileGather @ 0x140AA6DD0 (NtWriteFileGather.c)
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
 *     MmUpdateMdlTracker @ 0x14042B0A4 (MmUpdateMdlTracker.c)
 *     IopExceptionFilter @ 0x140593308 (IopExceptionFilter.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     IopSynchronousServiceTail @ 0x1408C0CC0 (IopSynchronousServiceTail.c)
 *     IopExceptionCleanupEx @ 0x140958E38 (IopExceptionCleanupEx.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopWriteFileGather(
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
        unsigned __int8 a11,
        PVOID a12,
        struct _IO_STATUS_BLOCK *a13,
        int a14)
{
  __int64 v15; // r13
  IRP *v16; // rsi
  char v17; // bl
  __int64 v18; // r8
  PDEVICE_OBJECT RelatedDeviceObject; // r12
  ULONG v20; // r14d
  unsigned __int64 DeviceType; // rcx
  __int64 v22; // rdx
  KPROCESSOR_MODE v23; // r9
  __int64 v24; // rcx
  int v25; // ebx
  __int64 i; // rdx
  __int64 v27; // rax
  size_t v28; // r12
  _KPROCESS *Process; // rax
  __int16 v30; // ax
  bool v31; // zf
  char v32; // al
  int SectorSize; // ecx
  __int64 Irp; // rax
  PVOID v35; // rbx
  __int64 v36; // r13
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  struct _MDL *Mdl; // rax
  unsigned __int64 v39; // r14
  unsigned int MajorFunction; // r12d
  __int64 v41; // rcx
  _DWORD *FileObjectExtension; // rax
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-88h]
  char v45; // [rsp+41h] [rbp-87h]
  char v46; // [rsp+42h] [rbp-86h]
  __int64 v47; // [rsp+48h] [rbp-80h]
  ULONG v48; // [rsp+50h] [rbp-78h]
  _FILE_SEGMENT_ELEMENT *P; // [rsp+60h] [rbp-68h]
  PDEVICE_OBJECT v50; // [rsp+68h] [rbp-60h]
  PVOID v51; // [rsp+70h] [rbp-58h]
  PVOID Object; // [rsp+78h] [rbp-50h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp-48h]
  __int64 v55; // [rsp+E0h] [rbp+18h] BYREF
  void *v56; // [rsp+E8h] [rbp+20h]

  v56 = a4;
  v55 = a3;
  v15 = a9;
  v16 = 0LL;
  P = 0LL;
  v51 = 0LL;
  v48 = 0;
  v47 = 0LL;
  v46 = 1;
  CurrentThread = KeGetCurrentThread();
  AccessMode = CurrentThread->PreviousMode;
  if ( (BugCheckParameter2->Flags & 2) == 0 || (v17 = 1, a14 < 0) )
    v17 = 0;
  v45 = v17;
  RelatedDeviceObject = IoGetRelatedDeviceObject(BugCheckParameter2);
  v50 = RelatedDeviceObject;
  if ( (BugCheckParameter2->Flags & 8) == 0 )
    goto LABEL_90;
  if ( v17 )
    goto LABEL_90;
  v20 = Length;
  if ( a6 != (Length >> 12) + ((Length & 0xFFF) != 0) || (RelatedDeviceObject->Flags & 4) != 0 )
    goto LABEL_90;
  DeviceType = RelatedDeviceObject->DeviceType;
  if ( (unsigned int)DeviceType > 0x36 || (v22 = 0x40000100100348LL, !_bittest64(&v22, DeviceType)) )
  {
    if ( (_DWORD)DeviceType != 83 )
      goto LABEL_90;
  }
  v23 = AccessMode;
  if ( !AccessMode || a12 )
  {
    if ( v15 )
      v47 = *(_QWORD *)v15;
    i = 3LL;
    if ( a10 )
      v48 = *a10;
  }
  else
  {
    v24 = a5;
    if ( a5 >= 0x7FFFFFFF0000LL )
      v24 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v24 = *(_DWORD *)v24;
    IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&a5, &v55, 0);
    if ( BugCheckParameter2->CompletionContext && (v55 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      v25 = -1073741811;
      goto LABEL_91;
    }
    i = 3LL;
    if ( v15 )
    {
      if ( (v15 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v47 = *(_QWORD *)v15;
    }
    if ( a10 )
    {
      v27 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a10 < 0x7FFFFFFF0000LL )
        v27 = (__int64)a10;
      v48 = *(_DWORD *)v27;
    }
    v23 = AccessMode;
  }
  if ( v23 )
  {
    if ( ((~(unsigned __int8)(BugCheckParameter2->Flags >> 5) & 4 | 2) & a11) == 0 )
    {
      v25 = -1073741790;
      goto LABEL_91;
    }
    v28 = 8LL * a6;
    if ( v28 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( !Process[1].ReadyTime )
        goto LABEL_40;
      v30 = WORD2(Process[3].PerProcessorCycleTimes);
      if ( v30 == 332 || (v31 = v30 == 452, v32 = 0, v31) )
        v32 = 1;
      if ( !v32 )
LABEL_40:
        i = 7LL;
      if ( (i & (unsigned __int64)Src) != 0 )
        ExRaiseDatatypeMisalignment();
    }
    if ( v20 )
    {
      P = (_FILE_SEGMENT_ELEMENT *)ExAllocatePool2(0x123uLL, 8LL * a6, 0x41536F49u);
      memmove(P, Src, v28);
      Src = P;
      v20 = Length;
      v23 = AccessMode;
    }
    RelatedDeviceObject = v50;
    if ( v23 )
    {
      if ( (BugCheckParameter2->Flags & 8) == 0
        || ((SectorSize = v50->SectorSize, !(_WORD)SectorSize)
         || (v18 = v50->SectorSize, ((SectorSize - 1) & v20) == 0)
         || (i = v20 % (unsigned int)v18) == 0)
        && (!v15 || v47 == -1 || !(_WORD)SectorSize || ((SectorSize - 1) & (unsigned int)v47) == 0) )
      {
        if ( v20 )
        {
          for ( i = 0LL; (unsigned int)i < a6; i = (unsigned int)(i + 1) )
          {
            if ( ((__int64)Src[(unsigned int)i].Buffer & 0xFFFLL) != 0 )
              goto LABEL_90;
          }
        }
        goto LABEL_59;
      }
LABEL_90:
      v25 = -1073741811;
      goto LABEL_91;
    }
  }
LABEL_59:
  if ( (a11 & 6) == 4 )
    v47 = -1LL;
  if ( a2 )
  {
    Object = 0LL;
    v25 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)ExEventObjectType, v23, &Object, 0LL);
    v51 = Object;
    if ( v25 < 0 )
      goto LABEL_91;
    KeResetEvent((PRKEVENT)Object);
  }
  if ( !v15 && (BugCheckParameter2->Flags & 0x280) == 0 || v47 < 0 && v47 != -1 )
    goto LABEL_90;
  if ( !a12 )
    IopResetEvent((__int64)BugCheckParameter2);
  LOBYTE(v18) = v45 ^ 1;
  LOBYTE(i) = RelatedDeviceObject->StackSize;
  Irp = IopAllocateIrpExReturn((__int64)RelatedDeviceObject, i, v18);
  v16 = (IRP *)Irp;
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
    *(_QWORD *)(Irp + 80) = v51;
    v35 = a12;
    if ( a12 )
    {
      ObfReferenceObjectWithTag(a12, 0x49526F49u);
      v16->Flags |= 0x200000u;
      v16->UserIosb = a13;
      v36 = a5;
    }
    else
    {
      v36 = a5;
      *(_QWORD *)(Irp + 72) = a5;
      *(_QWORD *)(Irp + 88) = v55;
      v35 = v56;
    }
    v16->Overlay.AsynchronousParameters.UserApcContext = v35;
    CurrentStackLocation = v16->Tail.Overlay.CurrentStackLocation;
    *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = 4;
    CurrentStackLocation[-1].FileObject = BugCheckParameter2;
    if ( (a14 & 1) != 0 || (BugCheckParameter2->Flags & 0x10) != 0 )
      CurrentStackLocation[-1].Flags = 4;
    v16->AssociatedIrp.MasterIrp = 0LL;
    v16->MdlAddress = 0LL;
    if ( v20 )
    {
      Mdl = IoAllocateMdl(Src->Buffer, v20, 0, 1u, v16);
      v39 = (unsigned __int64)Mdl;
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      MajorFunction = CurrentStackLocation[-1].MajorFunction;
      MmProbeAndLockSelectedPages(Mdl, Src, AccessMode, IoReadAccess);
      if ( (MmTrackLockedPages & 1) != 0 )
      {
        v41 = MajorFunction;
        RelatedDeviceObject = v50;
        MmUpdateMdlTracker(v39, (struct _LIST_ENTRY *)v50->DriverObject->MajorFunction[v41], (struct _LIST_ENTRY *)v50);
      }
      else
      {
        RelatedDeviceObject = v50;
      }
      v16->UserBuffer = Src->Buffer;
    }
    if ( P )
    {
      ExFreePoolWithTag(P, 0);
      P = 0LL;
    }
    v16->Flags |= ((BugCheckParameter2->Flags & 8) != 0) + 2560;
    CurrentStackLocation[-1].Parameters.Read.Length = Length;
    CurrentStackLocation[-1].Parameters.Create.Options = v48;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = v47;
    FileObjectExtension = BugCheckParameter2->FileObjectExtension;
    if ( FileObjectExtension && (*FileObjectExtension & 0x10) != 0 )
      CurrentStackLocation[-1].Parameters.Read.Flags = *(_DWORD *)(v36 + 8);
    v25 = IopSynchronousServiceTail(
            RelatedDeviceObject,
            (__int64)v16,
            (__int64)BugCheckParameter2,
            1,
            AccessMode,
            0,
            1u);
    v46 = 0;
  }
  else
  {
    v25 = -1073741670;
  }
LABEL_91:
  if ( v46 )
    IopExceptionCleanupEx((ULONG_PTR)BugCheckParameter2, v16, v51, 0LL, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v25;
}
