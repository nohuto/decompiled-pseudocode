/*
 * XREFs of BuildQueryDirectoryIrp @ 0x1408C22B0
 * Callers:
 *     NtQueryDirectoryFileEx @ 0x1408C21C0 (NtQueryDirectoryFileEx.c)
 *     NtQueryDirectoryFile @ 0x1408C2AE0 (NtQueryDirectoryFile.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     IoGetRelatedDeviceObject @ 0x14025C530 (IoGetRelatedDeviceObject.c)
 *     IoAllocateMdl @ 0x14025F1D0 (IoAllocateMdl.c)
 *     IopAllocateIrpExReturn @ 0x1402843D0 (IopAllocateIrpExReturn.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     IopResetEvent @ 0x1403B3230 (IopResetEvent.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x1404032C0 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     IopProbeAndLockPages_2 @ 0x1404A1C64 (IopProbeAndLockPages_2.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     PsIsProcessAppContainer @ 0x1408592D0 (PsIsProcessAppContainer.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     ExRaiseAccessViolation @ 0x1408BEAA0 (ExRaiseAccessViolation.c)
 *     IopExceptionCleanupEx @ 0x140958E38 (IopExceptionCleanupEx.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140958F48 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140A0B2A4 (IopAllocateIrpCleanup.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BuildQueryDirectoryIrp(
        HANDLE Handle,
        void *a2,
        __int64 a3,
        void *a4,
        unsigned __int64 a5,
        char *Address,
        SIZE_T Length,
        ULONG a8,
        char a9,
        __m128i *a10,
        char a11,
        _BYTE *a12,
        PDEVICE_OBJECT *a13,
        PIRP *a14,
        struct _FILE_OBJECT **a15,
        PIRP Irp)
{
  HANDLE v16; // rdi
  struct _KTHREAD *CurrentThread; // r11
  unsigned __int8 PreviousMode; // r13
  unsigned int v19; // edx
  __int64 v20; // rcx
  void *v21; // r15
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rdx
  UNICODE_STRING *Pool2; // r14
  __int64 v26; // rcx
  char *v27; // r12
  unsigned __int16 v28; // si
  NTSTATUS v30; // ebx
  struct _FILE_OBJECT *v31; // rdi
  bool v32; // si
  struct _KTHREAD *v33; // rax
  volatile __int32 *v34; // rbx
  _QWORD *v35; // rax
  _BYTE *v36; // rbx
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  __int64 v38; // r8
  PIRP v39; // rax
  IRP *v40; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  ULONG Flags; // eax
  _DWORD *v43; // rax
  bool IsProcessAppContainer; // al
  __int64 v45; // rax
  struct _MDL *Mdl; // rcx
  __int64 v47; // r8
  KPROCESSOR_MODE v48; // [rsp+34h] [rbp-84h]
  PVOID Object; // [rsp+38h] [rbp-80h] BYREF
  PVOID P; // [rsp+40h] [rbp-78h]
  PVOID v51; // [rsp+48h] [rbp-70h]
  __m128i v52; // [rsp+50h] [rbp-68h]
  PVOID v53; // [rsp+60h] [rbp-58h] BYREF
  struct _KTHREAD *v54; // [rsp+68h] [rbp-50h]
  ULONG *p_Flags; // [rsp+70h] [rbp-48h]
  __int64 v58; // [rsp+D0h] [rbp+18h] BYREF
  void *v59; // [rsp+D8h] [rbp+20h]

  v59 = a4;
  v58 = a3;
  v16 = Handle;
  v51 = 0LL;
  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  v54 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v48 = PreviousMode;
  LOBYTE(Irp->Type) = PreviousMode;
  if ( PreviousMode )
  {
    v19 = 0;
    v20 = a5;
    if ( a5 >= 0x7FFFFFFF0000LL )
      v20 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v20 = *(_DWORD *)v20;
    if ( a8 == 1 )
    {
      v19 = 72;
    }
    else if ( a8 == 3 )
    {
      v19 = 96;
    }
    else
    {
      switch ( a8 )
      {
        case 2u:
        case 0x1Du:
          v19 = 72;
          goto LABEL_7;
        case 0xCu:
        case 0x21u:
          v19 = 16;
          goto LABEL_7;
        case 0x20u:
          v19 = 56;
          goto LABEL_7;
        case 0x25u:
        case 0x4Fu:
          v19 = 112;
          goto LABEL_7;
        case 0x26u:
        case 0x4Eu:
          v19 = 88;
          goto LABEL_7;
        case 0x32u:
        case 0x3Cu:
          v19 = 96;
          goto LABEL_7;
        case 0x3Fu:
          v19 = 120;
          goto LABEL_7;
        case 0x50u:
          v19 = 104;
          goto LABEL_7;
        case 0x51u:
          v19 = 128;
          break;
        default:
          break;
      }
      if ( !v19 )
        return 3221225475LL;
    }
LABEL_7:
    if ( (unsigned int)Length < v19 )
      return 3221225476LL;
    LOBYTE(Irp) = CurrentThread->ApcState.Process[1].ReadyTime != 0;
    v21 = Address;
    if ( (_BYTE)Irp )
    {
      ProbeForWrite(Address, (unsigned int)Length, 4u);
    }
    else if ( (_DWORD)Length )
    {
      v22 = (unsigned __int64)Address;
      if ( ((*((unsigned __int8 *)IopQuerySetAlignmentRequirement + (int)a8) - 1) & (unsigned int)Address) != 0 )
        ExRaiseDatatypeMisalignment();
      v23 = (unsigned __int64)&Address[(unsigned int)Length - 1];
      if ( (unsigned __int64)Address > v23 || v23 >= 0x7FFFFFFF0000LL )
        ExRaiseAccessViolation();
      v24 = (v23 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v22 = *(_BYTE *)v22;
        v22 = (v22 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v22 != v24 );
    }
  }
  else
  {
    v21 = Address;
  }
  if ( !a10 )
    goto LABEL_18;
  if ( PreviousMode )
  {
    v26 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a10 < 0x7FFFFFFF0000LL )
      v26 = (__int64)a10;
    v52.m128i_i32[0] = *(_DWORD *)v26;
    v27 = *(char **)(v26 + 8);
    v52.m128i_i64[1] = (__int64)v27;
  }
  else
  {
    v52 = *a10;
    v27 = (char *)_mm_srli_si128(v52, 8).m128i_u64[0];
  }
  if ( (v52.m128i_i8[0] & 1) != 0 )
    return 3221225485LL;
  v28 = v52.m128i_i16[0];
  if ( v52.m128i_i16[0] )
  {
    if ( PreviousMode )
    {
      if ( (unsigned __int64)&v27[v52.m128i_u16[0]] > 0x7FFFFFFF0000LL || &v27[v52.m128i_u16[0]] < v27 )
      {
        v27 = (char *)v52.m128i_i64[1];
        v28 = v52.m128i_i16[0];
      }
      if ( v28 >= 0x200u )
        RtlRaiseStatus(-1073741811);
    }
    Pool2 = (UNICODE_STRING *)ExAllocatePool2(0x61uLL, v28 + 16LL, 0x69446F49u);
    P = Pool2;
    memmove(&Pool2[1], v27, v28);
    Pool2->Length = v28;
    Pool2->MaximumLength = v28;
    Pool2->Buffer = &Pool2[1].Length;
    v16 = Handle;
  }
  else
  {
LABEL_18:
    Pool2 = (UNICODE_STRING *)P;
  }
  Object = 0LL;
  v30 = ObReferenceObjectByHandle(v16, 1u, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, 0LL);
  v31 = (struct _FILE_OBJECT *)Object;
  if ( v30 >= 0 )
  {
    v43 = (_DWORD *)*((_QWORD *)Object + 26);
    if ( v43 )
    {
      if ( (*v43 & 4) != 0 )
      {
        IsProcessAppContainer = PsIsProcessAppContainer((__int64)KeGetCurrentThread()->ApcState.Process);
        v31 = (struct _FILE_OBJECT *)Object;
        if ( IsProcessAppContainer )
        {
          ObfDereferenceObject(Object);
          v30 = -1073739504;
        }
        Pool2 = (UNICODE_STRING *)P;
      }
    }
  }
  if ( v30 < 0 )
  {
    if ( Pool2 )
    {
      ExFreePoolWithTag(Pool2, 0);
      return (unsigned int)v30;
    }
    return (unsigned int)v30;
  }
  *a15 = v31;
  if ( !v31->CompletionContext || (v58 & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    if ( a2 )
    {
      v53 = 0LL;
      v30 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v53, 0LL);
      v51 = v53;
      if ( v30 < 0 )
      {
        if ( Pool2 )
          ExFreePoolWithTag(Pool2, 0);
LABEL_77:
        ObfDereferenceObject(v31);
        return (unsigned int)v30;
      }
      KeResetEvent((PRKEVENT)v53);
    }
    p_Flags = &v31->Flags;
    if ( (v31->Flags & 2) == 0 )
    {
      v36 = a12;
      *a12 = 0;
      if ( PreviousMode )
        IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&a5, &v58, 0);
LABEL_64:
      IopResetEvent((__int64)v31);
      RelatedDeviceObject = IoGetRelatedDeviceObject(v31);
      *a13 = RelatedDeviceObject;
      LOBYTE(v38) = *v36 == 0;
      v39 = (PIRP)IopAllocateIrpExReturn(
                    (__int64)RelatedDeviceObject,
                    (unsigned __int8)RelatedDeviceObject->StackSize,
                    v38);
      v40 = v39;
      Irp = v39;
      if ( v39 )
      {
        *a14 = v39;
        v39->Tail.Overlay.OriginalFileObject = v31;
        v39->Tail.Overlay.Thread = v54;
        v39->RequestorMode = v48;
        v39->UserEvent = (PKEVENT)v51;
        v39->UserIosb = (PIO_STATUS_BLOCK)a5;
        v39->Overlay.AllocationSize.QuadPart = v58;
        v39->Overlay.AsynchronousParameters.UserApcContext = v59;
        CurrentStackLocation = v39->Tail.Overlay.CurrentStackLocation;
        *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 268;
        CurrentStackLocation[-1].FileObject = v31;
        v39->Tail.Overlay.AuxiliaryBuffer = (PCHAR)Pool2;
        v39->AssociatedIrp.MasterIrp = 0LL;
        v39->MdlAddress = 0LL;
        Flags = RelatedDeviceObject->Flags;
        if ( (Flags & 4) == 0 )
        {
          if ( (Flags & 0x10) != 0 )
          {
            Mdl = IoAllocateMdl(v21, Length, 0, 1u, v40);
            if ( !Mdl )
              RtlRaiseStatus(-1073741670);
            IopProbeAndLockPages_2(
              Mdl,
              v48,
              v47,
              (struct _LIST_ENTRY *)RelatedDeviceObject,
              CurrentStackLocation[-1].MajorFunction);
            goto LABEL_68;
          }
LABEL_67:
          v40->UserBuffer = v21;
LABEL_68:
          CurrentStackLocation[-1].Parameters.Read.Length = Length;
          CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = a8;
          CurrentStackLocation[-1].Parameters.Create.EaLength = 0;
          CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = Pool2;
          CurrentStackLocation[-1].Flags = a9 & 0x1B;
          v40->Flags |= 0x800u;
          return 0LL;
        }
        v45 = ExAllocatePool2(0x41uLL, (unsigned int)Length, 0x42536F49u);
        v40->AssociatedIrp.MasterIrp = (struct _IRP *)v45;
        if ( v45 )
        {
          v40->Flags = 112;
          goto LABEL_67;
        }
        IopExceptionCleanupEx((ULONG_PTR)v31, v40, v51, 0LL, (*p_Flags & 2) != 0);
        if ( Pool2 )
          goto LABEL_82;
      }
      else
      {
        IopAllocateIrpCleanup((ULONG_PTR)v31, v51);
        if ( Pool2 )
LABEL_82:
          ExFreePoolWithTag(Pool2, 0);
      }
      return 3221225626LL;
    }
    v32 = (v31->Flags & 4) != 0;
    v33 = KeGetCurrentThread();
    --v33->KernelApcDisable;
    v34 = (volatile __int32 *)Object;
    v35 = KeAbPreAcquire((__int64)Object + 128, 0LL);
    a11 = 0;
    if ( _InterlockedExchange(v34 + 29, 1) )
    {
      v31 = (struct _FILE_OBJECT *)Object;
      v30 = IopWaitAndAcquireFileObjectLock((_DWORD)Object, PreviousMode, v32, (_DWORD)v35, (__int64)&a11);
    }
    else
    {
      if ( v35 )
        *((_BYTE *)v35 + 10) = 1;
      v31 = (struct _FILE_OBJECT *)Object;
      PsReferenceSiloContext(Object);
      v30 = 0;
    }
    if ( !a11 )
    {
      v36 = a12;
      *a12 = 1;
      Pool2 = (UNICODE_STRING *)P;
      goto LABEL_64;
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v51 )
      ObfDereferenceObject(v51);
    goto LABEL_77;
  }
  ObfDereferenceObject(v31);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return 3221225485LL;
}
