/*
 * XREFs of IopGetSetSecurityObject @ 0x1408796F0
 * Callers:
 *     ObpCreateHandle @ 0x14084DAA0 (ObpCreateHandle.c)
 *     ObpGrantAccess @ 0x140851390 (ObpGrantAccess.c)
 *     ObpGetObjectSecurity @ 0x140853850 (ObpGetObjectSecurity.c)
 *     NtQuerySecurityObject @ 0x140879460 (NtQuerySecurityObject.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x140879E8C (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     ObCheckObjectAccess @ 0x14087A740 (ObCheckObjectAccess.c)
 *     SepAppendAceToTokenObjectAcl @ 0x14090F590 (SepAppendAceToTokenObjectAcl.c)
 *     ObGetObjectSecurity @ 0x1409B26F0 (ObGetObjectSecurity.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x140253C60 (IopQueueThreadIrp.c)
 *     IopAllocateIrpExReturn @ 0x140253DC0 (IopAllocateIrpExReturn.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     IopGetDevicePDO @ 0x1402D488C (IopGetDevicePDO.c)
 *     IopReleaseFileObjectLock @ 0x14031D520 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
 *     IoGetRelatedDeviceObject @ 0x140373C70 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140374160 (IofCallDriver.c)
 *     IopResetEvent @ 0x1403C4670 (IopResetEvent.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     ObLogSecurityDescriptor @ 0x140838F50 (ObLogSecurityDescriptor.c)
 *     SeQuerySecurityDescriptorInfo @ 0x140878A10 (SeQuerySecurityDescriptorInfo.c)
 *     ObDereferenceSecurityDescriptor @ 0x140879D10 (ObDereferenceSecurityDescriptor.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140970738 (IopWaitAndAcquireFileObjectLock.c)
 *     AstLogDeviceSDDLUpdated @ 0x1409A1FE8 (AstLogDeviceSDDLUpdated.c)
 *     SeAssignWorldSecurityDescriptor @ 0x140A59B64 (SeAssignWorldSecurityDescriptor.c)
 *     IopSetDeviceSecurityDescriptors @ 0x140A5AB7C (IopSetDeviceSecurityDescriptors.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140A5AC1C (IopSetDeviceSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopGetSetSecurityObject(
        __int64 BugCheckParameter2,
        int a2,
        ULONG *a3,
        __int16 *a4,
        PULONG Length,
        int a6,
        int a7,
        __int64 a8,
        char a9)
{
  __int64 v12; // r14
  struct _FILE_OBJECT *v13; // rbx
  struct _KTHREAD *v14; // r14
  unsigned __int8 PreviousMode; // r15
  char v16; // r12
  PDEVICE_OBJECT RelatedDeviceObject; // r15
  __int64 Irp; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  IRP *v21; // rdi
  struct _KEVENT *p_Event; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  ULONG *v24; // rax
  PULONG v25; // r14
  struct _KTHREAD *v26; // rax
  NTSTATUS v27; // eax
  unsigned int FinalStatus; // edi
  bool v30; // di
  struct _KTHREAD *v31; // rax
  _QWORD *v32; // r9
  struct _KTHREAD *v33; // rsi
  PSECURITY_DESCRIPTOR SecurityDescriptor; // rbx
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  ULONG *v38; // r8
  ULONG *v39; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  struct _KTHREAD *v44; // rdi
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  _DWORD *DevicePDO; // rax
  void *v49; // rbx
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+38h] [rbp-60h] BYREF
  __int64 v51; // [rsp+40h] [rbp-58h] BYREF
  __int128 v52; // [rsp+48h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-40h] BYREF
  char v54; // [rsp+A0h] [rbp+8h] BYREF
  ULONG *v55; // [rsp+B0h] [rbp+18h]

  v55 = a3;
  v51 = 0LL;
  if ( *(_WORD *)BugCheckParameter2 == 3 )
    v12 = BugCheckParameter2;
  else
    v12 = *(_QWORD *)(BugCheckParameter2 + 8);
  v13 = 0LL;
  if ( *(_WORD *)BugCheckParameter2 != 3 )
    v13 = (struct _FILE_OBJECT *)BugCheckParameter2;
  if ( !v13 || !v13->FileName.Length && !v13->RelatedFileObject || (v13->Flags & 0x800) != 0 )
  {
    switch ( a2 )
    {
      case 3:
        FinalStatus = 0;
        if ( !v13 || (v13->Flags & 0x100) == 0 )
        {
          FinalStatus = ObLogSecurityDescriptor(a4, &v51, 1u);
          if ( (FinalStatus & 0x80000000) == 0 )
          {
            ExFreePoolWithTag(a4, 0);
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquireResourceExclusiveLite(&IopSecurityResource, 1u);
            if ( *(_QWORD *)(v12 + 272) )
              *(_DWORD *)(*(_QWORD *)(v12 + 312) + 32LL) &= ~0x800u;
            *(_QWORD *)(v12 + 272) = v51;
            ExReleaseResourceLite(&IopSecurityResource);
            KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v41, v42, v43);
          }
        }
        return FinalStatus;
      case 0:
        DevicePDO = IopGetDevicePDO(v12);
        v49 = DevicePDO;
        if ( DevicePDO )
        {
          FinalStatus = IopSetDeviceSecurityDescriptors(v12, DevicePDO, a3, a4, a7, a8);
          ObfDereferenceObject(v49);
        }
        else
        {
          FinalStatus = IopSetDeviceSecurityDescriptor(v12, (_DWORD)a3, (_DWORD)a4, a7, a8);
        }
        AstLogDeviceSDDLUpdated(v12);
        return FinalStatus;
      case 1:
        v33 = KeGetCurrentThread();
        --v33->KernelApcDisable;
        ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
        SecurityDescriptor = *(PSECURITY_DESCRIPTOR *)(v12 + 272);
        ObjectsSecurityDescriptor = SecurityDescriptor;
        if ( SecurityDescriptor
          && _InterlockedExchangeAdd64((volatile signed __int64 *)SecurityDescriptor - 3, 1uLL) <= 0 )
        {
          __fastfail(0xEu);
        }
        ExReleaseResourceLite(&IopSecurityResource);
        KiLeaveCriticalRegionUnsafe((__int64)v33, v35, v36, v37);
        v38 = Length;
        v39 = a3;
        goto LABEL_44;
    }
    return 0;
  }
  if ( a2 == 2 )
    return 0;
  v52 = 0LL;
  memset(&Event, 0, sizeof(Event));
  v14 = KeGetCurrentThread();
  PreviousMode = v14->PreviousMode;
  PsReferenceSiloContext(v13);
  if ( (v13->Flags & 2) != 0 )
  {
    v30 = (v13->Flags & 4) != 0;
    v31 = KeGetCurrentThread();
    --v31->KernelApcDisable;
    v32 = KeAbPreAcquire((__int64)&v13->Lock, 0LL);
    v54 = 0;
    if ( _InterlockedExchange((volatile __int32 *)&v13->Busy, 1) )
    {
      FinalStatus = IopWaitAndAcquireFileObjectLock((_DWORD)v13, PreviousMode, v30, (_DWORD)v32, (__int64)&v54);
    }
    else
    {
      if ( v32 )
        *((_BYTE *)v32 + 10) = 1;
      PsReferenceSiloContext(v13);
      FinalStatus = 0;
    }
    if ( v54 )
    {
      ObfDereferenceObject(v13);
      return FinalStatus;
    }
    v16 = 1;
  }
  else
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v16 = 0;
  }
  IopResetEvent((__int64)v13);
  RelatedDeviceObject = IoGetRelatedDeviceObject(v13);
  Irp = IopAllocateIrpExReturn(
          (__int64)RelatedDeviceObject,
          (unsigned __int8)RelatedDeviceObject->StackSize,
          (unsigned __int8)v16 ^ 1u);
  v21 = (IRP *)Irp;
  if ( Irp )
  {
    *(_QWORD *)(Irp + 192) = v13;
    *(_QWORD *)(Irp + 152) = v14;
    *(_BYTE *)(Irp + 64) = a9;
    if ( (v13->Flags & 2) != 0 )
    {
      *(_BYTE *)(Irp + 71) |= 2u;
      p_Event = 0LL;
    }
    else
    {
      *(_DWORD *)(Irp + 16) = 4;
      p_Event = &Event;
    }
    v21->UserEvent = p_Event;
    v21->UserIosb = (PIO_STATUS_BLOCK)&v52;
    v21->Overlay.AllocationSize.QuadPart = 0LL;
    CurrentStackLocation = v21->Tail.Overlay.CurrentStackLocation;
    v24 = v55;
    v25 = Length;
    if ( a2 == 1 )
    {
      CurrentStackLocation[-1].MajorFunction = 20;
      CurrentStackLocation[-1].Parameters.Read.Length = *v24;
      CurrentStackLocation[-1].Parameters.Create.Options = *v25;
      v21->UserBuffer = a4;
    }
    else
    {
      CurrentStackLocation[-1].MajorFunction = 21;
      CurrentStackLocation[-1].Parameters.Read.Length = *v24;
      CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = (PUNICODE_STRING)a4;
    }
    CurrentStackLocation[-1].FileObject = v13;
    IopQueueThreadIrp((__int64)v21, v19, v20);
    v26 = KeGetCurrentThread();
    ++v26->OtherOperationCount;
    __incgsdword(0x2EE4u);
    v27 = IofCallDriver(RelatedDeviceObject, v21);
    FinalStatus = v27;
    if ( v16 )
    {
      if ( v27 == 259 )
      {
        KeWaitForSingleObject(&v13->Event, Executive, 0, 0, 0LL);
        FinalStatus = v13->FinalStatus;
      }
      IopReleaseFileObjectLock((ULONG_PTR)v13);
    }
    else if ( v27 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      FinalStatus = v52;
    }
    if ( FinalStatus != -1073741808 )
    {
      if ( a2 == 1 )
      {
        if ( FinalStatus == -2147483643 )
          FinalStatus = -1073741789;
        *v25 = DWORD2(v52);
      }
      return FinalStatus;
    }
    if ( a2 != 1 )
    {
      if ( !a2 && (RelatedDeviceObject->Flags & 0x100) != 0 )
        return (unsigned int)-1073741808;
      return 0;
    }
    if ( (RelatedDeviceObject->Characteristics & 0x100) == 0 )
      return (unsigned int)SeAssignWorldSecurityDescriptor(a4, v25, v55);
    v44 = KeGetCurrentThread();
    --v44->KernelApcDisable;
    ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
    SecurityDescriptor = RelatedDeviceObject->SecurityDescriptor;
    ObjectsSecurityDescriptor = SecurityDescriptor;
    if ( SecurityDescriptor && _InterlockedExchangeAdd64((volatile signed __int64 *)SecurityDescriptor - 3, 1uLL) <= 0 )
      __fastfail(0xEu);
    ExReleaseResourceLite(&IopSecurityResource);
    KiLeaveCriticalRegionUnsafe((__int64)v44, v45, v46, v47);
    v38 = v25;
    v39 = v55;
LABEL_44:
    FinalStatus = SeQuerySecurityDescriptorInfo(v39, a4, v38, &ObjectsSecurityDescriptor);
    if ( SecurityDescriptor )
      ObDereferenceSecurityDescriptor(ObjectsSecurityDescriptor, 1LL);
    return FinalStatus;
  }
  if ( (v13->Flags & 2) != 0 )
    IopReleaseFileObjectLock((ULONG_PTR)v13);
  ObfDereferenceObject(v13);
  return 3221225626LL;
}
