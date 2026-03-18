/*
 * XREFs of BuildQueryDirectoryIrp @ 0x1408C6A20
 * Callers:
 *     NtQueryDirectoryFileEx @ 0x1408C6930 (NtQueryDirectoryFileEx.c)
 *     NtQueryDirectoryFile @ 0x1408C7280 (NtQueryDirectoryFile.c)
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
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x140401BB0 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     IopProbeAndLockPages_2 @ 0x1404A69A4 (IopProbeAndLockPages_2.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 *     ExRaiseAccessViolation @ 0x140936B90 (ExRaiseAccessViolation.c)
 *     PsIsProcessAppContainer @ 0x140969C10 (PsIsProcessAppContainer.c)
 *     IopExceptionCleanupEx @ 0x1409887B0 (IopExceptionCleanupEx.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1409888C0 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x14098A8E4 (IopAllocateIrpCleanup.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 BuildQueryDirectoryIrp(
        HANDLE Handle,
        void *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        char *Address,
        SIZE_T Length,
        int a8,
        char a9,
        __m128i *a10,
        char a11,
        _BYTE *a12,
        PDEVICE_OBJECT *a13,
        __int64 *a14,
        struct _FILE_OBJECT **a15,
        ...)
{
  HANDLE v15; // rdi
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int8 PreviousMode; // r12
  unsigned int v18; // edx
  __int64 v19; // rcx
  int v20; // ecx
  void *v21; // r15
  int v22; // ecx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rdx
  char *Pool2; // r14
  __int64 v27; // rcx
  char *v28; // r13
  unsigned __int16 v29; // si
  NTSTATUS v31; // ebx
  struct _FILE_OBJECT *v32; // rdi
  bool v33; // si
  struct _KTHREAD *v34; // rax
  volatile __int32 *p_Type; // rbx
  __int64 *v36; // rax
  _BYTE *v37; // rbx
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  __int64 v39; // r8
  __int64 Irp; // rax
  IRP *v41; // rbx
  __int64 v42; // rsi
  ULONG Flags; // eax
  _DWORD *FileObjectExtension; // rax
  char IsProcessAppContainer; // al
  __int64 v46; // rax
  struct _MDL *Mdl; // rcx
  __int64 v48; // r8
  char *P; // [rsp+38h] [rbp-70h]
  PVOID v50; // [rsp+40h] [rbp-68h]
  PVOID v51; // [rsp+48h] [rbp-60h] BYREF
  struct _KTHREAD *v52; // [rsp+50h] [rbp-58h]
  ULONG *p_Flags; // [rsp+58h] [rbp-50h]
  __m128i v54; // [rsp+60h] [rbp-48h]
  __int64 v57; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v58; // [rsp+C8h] [rbp+20h]
  struct _FILE_OBJECT *Object; // [rsp+128h] [rbp+80h] BYREF
  va_list va; // [rsp+128h] [rbp+80h]
  va_list va1; // [rsp+130h] [rbp+88h] BYREF

  va_start(va1, a15);
  va_start(va, a15);
  Object = va_arg(va1, struct _FILE_OBJECT *);
  v58 = a4;
  v57 = a3;
  v15 = Handle;
  v50 = 0LL;
  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  v52 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  LOBYTE(Object->Type) = PreviousMode;
  if ( PreviousMode )
  {
    v18 = 0;
    v19 = a5;
    if ( a5 >= 0x7FFFFFFF0000LL )
      v19 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v19 = *(_DWORD *)v19;
    v20 = a8;
    if ( a8 == 1 )
    {
      v18 = 72;
    }
    else if ( a8 == 3 )
    {
      v18 = 96;
    }
    else
    {
      switch ( a8 )
      {
        case 2:
        case 29:
          v18 = 72;
          v20 = a8;
          goto LABEL_7;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        case 30:
        case 31:
        case 34:
        case 35:
        case 36:
        case 39:
        case 40:
        case 41:
        case 42:
        case 43:
        case 44:
        case 45:
        case 46:
        case 47:
        case 48:
        case 49:
        case 51:
        case 52:
        case 53:
        case 54:
        case 55:
        case 56:
        case 57:
        case 58:
        case 59:
        case 61:
        case 62:
        case 64:
        case 65:
        case 66:
        case 67:
        case 68:
        case 69:
        case 70:
        case 71:
        case 72:
        case 73:
        case 74:
        case 75:
        case 76:
        case 77:
          goto LABEL_35;
        case 12:
        case 33:
          v18 = 16;
          v20 = a8;
          goto LABEL_7;
        case 32:
          v18 = 56;
          v20 = a8;
          goto LABEL_7;
        case 37:
        case 79:
          v18 = 112;
          v20 = a8;
          goto LABEL_7;
        case 38:
        case 78:
          v18 = 88;
          v20 = a8;
          goto LABEL_7;
        case 50:
        case 60:
          v18 = 96;
          v20 = a8;
          goto LABEL_7;
        case 63:
          v18 = 120;
          v20 = a8;
          goto LABEL_7;
        case 80:
          v18 = 104;
          v20 = a8;
          goto LABEL_7;
        case 81:
          v18 = 128;
LABEL_35:
          v20 = a8;
          break;
        default:
          break;
      }
      if ( !v18 )
        return 3221225475LL;
    }
LABEL_7:
    if ( (unsigned int)Length < v18 )
      return 3221225476LL;
    v21 = Address;
    if ( CurrentThread->ApcState.Process[1].ReadyTime )
    {
      ProbeForWrite(Address, (unsigned int)Length, 4u);
    }
    else
    {
      v22 = *((unsigned __int8 *)IopQuerySetAlignmentRequirement + v20);
      if ( (_DWORD)Length )
      {
        v23 = (unsigned __int64)Address;
        if ( ((v22 - 1) & (unsigned int)Address) != 0 )
          ExRaiseDatatypeMisalignment();
        v24 = (unsigned __int64)&Address[(unsigned int)Length - 1];
        if ( v24 >= 0x7FFFFFFF0000LL || (unsigned __int64)Address > v24 )
          ExRaiseAccessViolation();
        v25 = (v24 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        do
        {
          *(_BYTE *)v23 = *(_BYTE *)v23;
          v23 = (v23 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        }
        while ( v23 != v25 );
      }
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
    v27 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a10 < 0x7FFFFFFF0000LL )
      v27 = (__int64)a10;
    v54.m128i_i32[0] = *(_DWORD *)v27;
    v28 = *(char **)(v27 + 8);
    v54.m128i_i64[1] = (__int64)v28;
  }
  else
  {
    v54 = *a10;
    v28 = (char *)_mm_srli_si128(v54, 8).m128i_u64[0];
  }
  if ( (v54.m128i_i8[0] & 1) != 0 )
    return 3221225485LL;
  v29 = v54.m128i_i16[0];
  if ( v54.m128i_i16[0] )
  {
    if ( PreviousMode )
    {
      if ( (unsigned __int64)&v28[v54.m128i_u16[0]] > 0x7FFFFFFF0000LL || &v28[v54.m128i_u16[0]] < v28 )
      {
        v28 = (char *)v54.m128i_i64[1];
        v29 = v54.m128i_i16[0];
      }
      if ( v29 >= 0x200u )
        RtlRaiseStatus(-1073741811);
    }
    Pool2 = (char *)ExAllocatePool2(0x61uLL);
    P = Pool2;
    memmove(Pool2 + 16, v28, v29);
    *(_WORD *)Pool2 = v29;
    *((_WORD *)Pool2 + 1) = v29;
    *((_QWORD *)Pool2 + 1) = Pool2 + 16;
    v15 = Handle;
  }
  else
  {
LABEL_18:
    Pool2 = 0LL;
  }
  Object = 0LL;
  v31 = ObReferenceObjectByHandle(v15, 1u, (POBJECT_TYPE)IoFileObjectType, PreviousMode, (PVOID *)va, 0LL);
  v32 = Object;
  if ( v31 >= 0 )
  {
    FileObjectExtension = Object->FileObjectExtension;
    if ( FileObjectExtension )
    {
      if ( (*FileObjectExtension & 4) != 0 )
      {
        IsProcessAppContainer = PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process);
        v32 = Object;
        if ( IsProcessAppContainer )
        {
          ObfDereferenceObject(Object);
          v31 = -1073739504;
        }
        Pool2 = P;
      }
    }
  }
  if ( v31 < 0 )
  {
    if ( Pool2 )
    {
      ExFreePoolWithTag(Pool2, 0);
      return (unsigned int)v31;
    }
    return (unsigned int)v31;
  }
  *a15 = v32;
  if ( !v32->CompletionContext || (v57 & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    if ( a2 )
    {
      v51 = 0LL;
      v31 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v51, 0LL);
      v50 = v51;
      if ( v31 < 0 )
      {
        if ( Pool2 )
          ExFreePoolWithTag(Pool2, 0);
LABEL_77:
        ObfDereferenceObject(v32);
        return (unsigned int)v31;
      }
      KeResetEvent((PRKEVENT)v51);
    }
    p_Flags = &v32->Flags;
    if ( (v32->Flags & 2) == 0 )
    {
      v37 = a12;
      *a12 = 0;
      if ( PreviousMode )
        IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&a5, &v57, 0);
LABEL_64:
      IopResetEvent((__int64)v32);
      RelatedDeviceObject = IoGetRelatedDeviceObject(v32);
      *a13 = RelatedDeviceObject;
      LOBYTE(v39) = *v37 == 0;
      Irp = IopAllocateIrpExReturn((__int64)RelatedDeviceObject, (unsigned __int8)RelatedDeviceObject->StackSize, v39);
      v41 = (IRP *)Irp;
      v51 = (PVOID)Irp;
      if ( Irp )
      {
        *a14 = Irp;
        *(_QWORD *)(Irp + 192) = v32;
        *(_QWORD *)(Irp + 152) = v52;
        *(_BYTE *)(Irp + 64) = PreviousMode;
        *(_QWORD *)(Irp + 80) = v50;
        *(_QWORD *)(Irp + 72) = a5;
        *(_QWORD *)(Irp + 88) = v57;
        *(_QWORD *)(Irp + 96) = v58;
        v42 = *(_QWORD *)(Irp + 184);
        *(_WORD *)(v42 - 72) = 268;
        *(_QWORD *)(v42 - 24) = v32;
        *(_QWORD *)(Irp + 160) = Pool2;
        *(_QWORD *)(Irp + 24) = 0LL;
        *(_QWORD *)(Irp + 8) = 0LL;
        Flags = RelatedDeviceObject->Flags;
        if ( (Flags & 4) == 0 )
        {
          if ( (Flags & 0x10) != 0 )
          {
            Mdl = IoAllocateMdl(v21, Length, 0, 1u, v41);
            if ( !Mdl )
              RtlRaiseStatus(-1073741670);
            IopProbeAndLockPages_2(
              Mdl,
              PreviousMode,
              v48,
              (struct _LIST_ENTRY *)RelatedDeviceObject,
              *(unsigned __int8 *)(v42 - 72));
            goto LABEL_68;
          }
LABEL_67:
          v41->UserBuffer = v21;
LABEL_68:
          *(_DWORD *)(v42 - 64) = Length;
          *(_DWORD *)(v42 - 48) = a8;
          *(_DWORD *)(v42 - 40) = 0;
          *(_QWORD *)(v42 - 56) = Pool2;
          *(_BYTE *)(v42 - 70) = a9 & 0x1B;
          v41->Flags |= 0x800u;
          return 0LL;
        }
        v46 = ExAllocatePool2(0x41uLL);
        v41->AssociatedIrp.MasterIrp = (struct _IRP *)v46;
        if ( v46 )
        {
          v41->Flags = 112;
          goto LABEL_67;
        }
        IopExceptionCleanupEx((ULONG_PTR)v32, v41, v50, 0LL, (*p_Flags & 2) != 0);
        if ( Pool2 )
          goto LABEL_82;
      }
      else
      {
        IopAllocateIrpCleanup((ULONG_PTR)v32, v50);
        if ( Pool2 )
LABEL_82:
          ExFreePoolWithTag(Pool2, 0);
      }
      return 3221225626LL;
    }
    v33 = (v32->Flags & 4) != 0;
    v34 = KeGetCurrentThread();
    --v34->KernelApcDisable;
    p_Type = (volatile __int32 *)&Object->Type;
    v36 = KeAbPreAcquire((__int64)&Object->Lock, 0LL);
    a11 = 0;
    if ( _InterlockedExchange(p_Type + 29, 1) )
    {
      v32 = Object;
      v31 = IopWaitAndAcquireFileObjectLock((_DWORD)Object, PreviousMode, v33, (_DWORD)v36, (__int64)&a11);
    }
    else
    {
      if ( v36 )
        *((_BYTE *)v36 + 10) = 1;
      v32 = Object;
      PsReferenceSiloContext(Object);
      v31 = 0;
    }
    if ( !a11 )
    {
      v37 = a12;
      *a12 = 1;
      Pool2 = P;
      goto LABEL_64;
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v50 )
      ObfDereferenceObject(v50);
    goto LABEL_77;
  }
  ObfDereferenceObject(v32);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return 3221225485LL;
}
