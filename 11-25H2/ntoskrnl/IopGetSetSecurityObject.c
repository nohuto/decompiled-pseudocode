/*
 * XREFs of IopGetSetSecurityObject @ 0x14086F330
 * Callers:
 *     ObpCreateHandle @ 0x1408518D0 (ObpCreateHandle.c)
 *     ObpGrantAccess @ 0x1408551F0 (ObpGrantAccess.c)
 *     ObCheckObjectAccess @ 0x14086E090 (ObCheckObjectAccess.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x14086ED34 (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     NtQuerySecurityObject @ 0x14086F0A0 (NtQuerySecurityObject.c)
 *     ObSetSecurityObjectByPointer @ 0x14089F830 (ObSetSecurityObjectByPointer.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1408A43D0 (SepAppendAceToTokenObjectAcl.c)
 *     ObGetObjectSecurity @ 0x1408A4D30 (ObGetObjectSecurity.c)
 *     ObpGetObjectSecurity @ 0x1409160F0 (ObpGetObjectSecurity.c)
 * Callees:
 *     IopAllocateIrpExReturn @ 0x1402537B0 (IopAllocateIrpExReturn.c)
 *     IopQueueThreadIrp @ 0x140253BB0 (IopQueueThreadIrp.c)
 *     IopReleaseFileObjectLock @ 0x140285FF0 (IopReleaseFileObjectLock.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     IopResetEvent @ 0x1402A1570 (IopResetEvent.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     IopGetDevicePDO @ 0x14035AF78 (IopGetDevicePDO.c)
 *     IoGetRelatedDeviceObject @ 0x14035CFA0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x14035D320 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     ObDereferenceSecurityDescriptor @ 0x14086EF20 (ObDereferenceSecurityDescriptor.c)
 *     SeQuerySecurityDescriptorInfo @ 0x140870750 (SeQuerySecurityDescriptorInfo.c)
 *     ObLogSecurityDescriptor @ 0x140899A00 (ObLogSecurityDescriptor.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1409888C0 (IopWaitAndAcquireFileObjectLock.c)
 *     AstLogDeviceSDDLUpdated @ 0x14099D0F8 (AstLogDeviceSDDLUpdated.c)
 *     SeAssignWorldSecurityDescriptor @ 0x140A56348 (SeAssignWorldSecurityDescriptor.c)
 *     IopSetDeviceSecurityDescriptors @ 0x140A57334 (IopSetDeviceSecurityDescriptors.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140A573D4 (IopSetDeviceSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopGetSetSecurityObject(
        __int64 BugCheckParameter2,
        int a2,
        DWORD *a3,
        UNICODE_STRING *a4,
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
  IRP *v19; // rdi
  struct _KEVENT *p_Event; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  ULONG *v22; // rax
  PULONG v23; // r14
  struct _KTHREAD *v24; // rax
  NTSTATUS v25; // eax
  unsigned int FinalStatus; // edi
  bool v28; // di
  struct _KTHREAD *v29; // rax
  __int64 *v30; // r9
  struct _KTHREAD *v31; // rsi
  PSECURITY_DESCRIPTOR SecurityDescriptor; // rbx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  ULONG *v36; // r8
  DWORD *v37; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  struct _KTHREAD *v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  _DWORD *DevicePDO; // rax
  void *v47; // rbx
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+38h] [rbp-60h] BYREF
  __int64 v49; // [rsp+40h] [rbp-58h]
  __int128 v50; // [rsp+48h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-40h] BYREF
  char v52; // [rsp+A0h] [rbp+8h] BYREF
  DWORD *v53; // [rsp+B0h] [rbp+18h]

  v53 = a3;
  v49 = 0LL;
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
          FinalStatus = ObLogSecurityDescriptor(a4);
          if ( (FinalStatus & 0x80000000) == 0 )
          {
            ExFreePoolWithTag(a4, 0);
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquireResourceExclusiveLite(&IopSecurityResource, 1u);
            if ( *(_QWORD *)(v12 + 272) )
              *(_DWORD *)(*(_QWORD *)(v12 + 312) + 32LL) &= ~0x800u;
            *(_QWORD *)(v12 + 272) = v49;
            ExReleaseResourceLite(&IopSecurityResource);
            KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v39, v40, v41);
          }
        }
        return FinalStatus;
      case 0:
        DevicePDO = IopGetDevicePDO(v12);
        v47 = DevicePDO;
        if ( DevicePDO )
        {
          FinalStatus = IopSetDeviceSecurityDescriptors(v12, DevicePDO, a3, a4, a7, a8);
          ObfDereferenceObject(v47);
        }
        else
        {
          FinalStatus = IopSetDeviceSecurityDescriptor(v12, (_DWORD)a3, (_DWORD)a4, a7, a8);
        }
        AstLogDeviceSDDLUpdated(v12);
        return FinalStatus;
      case 1:
        v31 = KeGetCurrentThread();
        --v31->KernelApcDisable;
        ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
        SecurityDescriptor = *(PSECURITY_DESCRIPTOR *)(v12 + 272);
        ObjectsSecurityDescriptor = SecurityDescriptor;
        if ( SecurityDescriptor
          && _InterlockedExchangeAdd64((volatile signed __int64 *)SecurityDescriptor - 3, 1uLL) <= 0 )
        {
          __fastfail(0xEu);
        }
        ExReleaseResourceLite(&IopSecurityResource);
        KiLeaveCriticalRegionUnsafe((__int64)v31, v33, v34, v35);
        v36 = Length;
        v37 = a3;
        goto LABEL_44;
    }
    return 0;
  }
  if ( a2 == 2 )
    return 0;
  v50 = 0LL;
  memset(&Event, 0, sizeof(Event));
  v14 = KeGetCurrentThread();
  PreviousMode = v14->PreviousMode;
  PsReferenceSiloContext(v13);
  if ( (v13->Flags & 2) != 0 )
  {
    v28 = (v13->Flags & 4) != 0;
    v29 = KeGetCurrentThread();
    --v29->KernelApcDisable;
    v30 = KeAbPreAcquire((__int64)&v13->Lock, 0LL);
    v52 = 0;
    if ( _InterlockedExchange((volatile __int32 *)&v13->Busy, 1) )
    {
      FinalStatus = IopWaitAndAcquireFileObjectLock((_DWORD)v13, PreviousMode, v28, (_DWORD)v30, (__int64)&v52);
    }
    else
    {
      if ( v30 )
        *((_BYTE *)v30 + 10) = 1;
      PsReferenceSiloContext(v13);
      FinalStatus = 0;
    }
    if ( v52 )
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
  v19 = (IRP *)Irp;
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
    v19->UserEvent = p_Event;
    v19->UserIosb = (PIO_STATUS_BLOCK)&v50;
    v19->Overlay.AllocationSize.QuadPart = 0LL;
    CurrentStackLocation = v19->Tail.Overlay.CurrentStackLocation;
    v22 = v53;
    v23 = Length;
    if ( a2 == 1 )
    {
      CurrentStackLocation[-1].MajorFunction = 20;
      CurrentStackLocation[-1].Parameters.Read.Length = *v22;
      CurrentStackLocation[-1].Parameters.Create.Options = *v23;
      v19->UserBuffer = a4;
    }
    else
    {
      CurrentStackLocation[-1].MajorFunction = 21;
      CurrentStackLocation[-1].Parameters.Read.Length = *v22;
      CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = a4;
    }
    CurrentStackLocation[-1].FileObject = v13;
    IopQueueThreadIrp((__int64)v19);
    v24 = KeGetCurrentThread();
    ++v24->OtherOperationCount;
    __incgsdword(0x2EE4u);
    v25 = IofCallDriver(RelatedDeviceObject, v19);
    FinalStatus = v25;
    if ( v16 )
    {
      if ( v25 == 259 )
      {
        KeWaitForSingleObject(&v13->Event, Executive, 0, 0, 0LL);
        FinalStatus = v13->FinalStatus;
      }
      IopReleaseFileObjectLock((ULONG_PTR)v13);
    }
    else if ( v25 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      FinalStatus = v50;
    }
    if ( FinalStatus != -1073741808 )
    {
      if ( a2 == 1 )
      {
        if ( FinalStatus == -2147483643 )
          FinalStatus = -1073741789;
        *v23 = DWORD2(v50);
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
      return (unsigned int)SeAssignWorldSecurityDescriptor(a4, v23, v53);
    v42 = KeGetCurrentThread();
    --v42->KernelApcDisable;
    ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
    SecurityDescriptor = RelatedDeviceObject->SecurityDescriptor;
    ObjectsSecurityDescriptor = SecurityDescriptor;
    if ( SecurityDescriptor && _InterlockedExchangeAdd64((volatile signed __int64 *)SecurityDescriptor - 3, 1uLL) <= 0 )
      __fastfail(0xEu);
    ExReleaseResourceLite(&IopSecurityResource);
    KiLeaveCriticalRegionUnsafe((__int64)v42, v43, v44, v45);
    v36 = v23;
    v37 = v53;
LABEL_44:
    FinalStatus = SeQuerySecurityDescriptorInfo(v37, a4, v36, &ObjectsSecurityDescriptor);
    if ( SecurityDescriptor )
      ObDereferenceSecurityDescriptor((__int64)ObjectsSecurityDescriptor, 1u);
    return FinalStatus;
  }
  if ( (v13->Flags & 2) != 0 )
    IopReleaseFileObjectLock((ULONG_PTR)v13);
  ObfDereferenceObject(v13);
  return 3221225626LL;
}
