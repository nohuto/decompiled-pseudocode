/*
 * XREFs of IopGetSetSecurityObject @ 0x14087DA20
 * Callers:
 *     ObpCreateHandle @ 0x140849D60 (ObpCreateHandle.c)
 *     ObpGrantAccess @ 0x14084D650 (ObpGrantAccess.c)
 *     ObpGetObjectSecurity @ 0x14084FB10 (ObpGetObjectSecurity.c)
 *     NtQuerySecurityObject @ 0x14087D790 (NtQuerySecurityObject.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x14087E1BC (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     ObCheckObjectAccess @ 0x14087E5F0 (ObCheckObjectAccess.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1408E6CE0 (SepAppendAceToTokenObjectAcl.c)
 *     ObGetObjectSecurity @ 0x1409A9A80 (ObGetObjectSecurity.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     IoGetRelatedDeviceObject @ 0x14025C530 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x14025CA20 (IofCallDriver.c)
 *     IopQueueThreadIrp @ 0x140284270 (IopQueueThreadIrp.c)
 *     IopAllocateIrpExReturn @ 0x1402843D0 (IopAllocateIrpExReturn.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     IopReleaseFileObjectLock @ 0x1402C60B0 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     IopGetDevicePDO @ 0x140355B0C (IopGetDevicePDO.c)
 *     IopResetEvent @ 0x1403B3230 (IopResetEvent.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     ObLogSecurityDescriptor @ 0x140836B60 (ObLogSecurityDescriptor.c)
 *     SeQuerySecurityDescriptorInfo @ 0x14087CD40 (SeQuerySecurityDescriptorInfo.c)
 *     ObDereferenceSecurityDescriptor @ 0x14087E040 (ObDereferenceSecurityDescriptor.c)
 *     AstLogDeviceSDDLUpdated @ 0x1408AE644 (AstLogDeviceSDDLUpdated.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140958F48 (IopWaitAndAcquireFileObjectLock.c)
 *     SeAssignWorldSecurityDescriptor @ 0x140A51424 (SeAssignWorldSecurityDescriptor.c)
 *     IopSetDeviceSecurityDescriptors @ 0x140A5243C (IopSetDeviceSecurityDescriptors.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140A524DC (IopSetDeviceSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopGetSetSecurityObject(
        __int64 BugCheckParameter2,
        int a2,
        DWORD *a3,
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
  _QWORD *v30; // r9
  struct _KTHREAD *v31; // rsi
  PSECURITY_DESCRIPTOR SecurityDescriptor; // rbx
  ULONG *v33; // r8
  DWORD *v34; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  struct _KTHREAD *v36; // rdi
  _DWORD *DevicePDO; // rax
  void *v38; // rbx
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+38h] [rbp-60h] BYREF
  __int64 v40; // [rsp+40h] [rbp-58h] BYREF
  __int128 v41; // [rsp+48h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-40h] BYREF
  char v43; // [rsp+A0h] [rbp+8h] BYREF
  DWORD *v44; // [rsp+B0h] [rbp+18h]

  v44 = a3;
  v40 = 0LL;
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
          FinalStatus = ObLogSecurityDescriptor(a4, &v40, 1u);
          if ( (FinalStatus & 0x80000000) == 0 )
          {
            ExFreePoolWithTag(a4, 0);
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquireResourceExclusiveLite(&IopSecurityResource, 1u);
            if ( *(_QWORD *)(v12 + 272) )
              *(_DWORD *)(*(_QWORD *)(v12 + 312) + 32LL) &= ~0x800u;
            *(_QWORD *)(v12 + 272) = v40;
            ExReleaseResourceLite(&IopSecurityResource);
            KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
          }
        }
        return FinalStatus;
      case 0:
        DevicePDO = IopGetDevicePDO(v12);
        v38 = DevicePDO;
        if ( DevicePDO )
        {
          FinalStatus = IopSetDeviceSecurityDescriptors(v12, DevicePDO, a3, a4, a7, a8);
          ObfDereferenceObject(v38);
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
        KiLeaveCriticalRegionUnsafe((__int64)v31);
        v33 = Length;
        v34 = a3;
        goto LABEL_44;
    }
    return 0;
  }
  if ( a2 == 2 )
    return 0;
  v41 = 0LL;
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
    v43 = 0;
    if ( _InterlockedExchange((volatile __int32 *)&v13->Busy, 1) )
    {
      FinalStatus = IopWaitAndAcquireFileObjectLock((_DWORD)v13, PreviousMode, v28, (_DWORD)v30, (__int64)&v43);
    }
    else
    {
      if ( v30 )
        *((_BYTE *)v30 + 10) = 1;
      PsReferenceSiloContext(v13);
      FinalStatus = 0;
    }
    if ( v43 )
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
    v19->UserIosb = (PIO_STATUS_BLOCK)&v41;
    v19->Overlay.AllocationSize.QuadPart = 0LL;
    CurrentStackLocation = v19->Tail.Overlay.CurrentStackLocation;
    v22 = v44;
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
      CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = (PUNICODE_STRING)a4;
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
      FinalStatus = v41;
    }
    if ( FinalStatus != -1073741808 )
    {
      if ( a2 == 1 )
      {
        if ( FinalStatus == -2147483643 )
          FinalStatus = -1073741789;
        *v23 = DWORD2(v41);
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
      return (unsigned int)SeAssignWorldSecurityDescriptor(a4, v23, v44);
    v36 = KeGetCurrentThread();
    --v36->KernelApcDisable;
    ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
    SecurityDescriptor = RelatedDeviceObject->SecurityDescriptor;
    ObjectsSecurityDescriptor = SecurityDescriptor;
    if ( SecurityDescriptor && _InterlockedExchangeAdd64((volatile signed __int64 *)SecurityDescriptor - 3, 1uLL) <= 0 )
      __fastfail(0xEu);
    ExReleaseResourceLite(&IopSecurityResource);
    KiLeaveCriticalRegionUnsafe((__int64)v36);
    v33 = v23;
    v34 = v44;
LABEL_44:
    FinalStatus = SeQuerySecurityDescriptorInfo(v34, a4, v33, &ObjectsSecurityDescriptor);
    if ( SecurityDescriptor )
      ObDereferenceSecurityDescriptor(ObjectsSecurityDescriptor, 1LL);
    return FinalStatus;
  }
  if ( (v13->Flags & 2) != 0 )
    IopReleaseFileObjectLock((ULONG_PTR)v13);
  ObfDereferenceObject(v13);
  return 3221225626LL;
}
