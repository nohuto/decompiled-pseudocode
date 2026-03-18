/*
 * XREFs of IopQueryXxxInformation @ 0x1408C1900
 * Callers:
 *     IopValidateJunctionTarget @ 0x140707338 (IopValidateJunctionTarget.c)
 *     MiAttemptPageFileExtension @ 0x1407DDEFC (MiAttemptPageFileExtension.c)
 *     MiCreatePagingFile @ 0x1407DE4C4 (MiCreatePagingFile.c)
 *     IopParseDevice @ 0x14085F1F0 (IopParseDevice.c)
 *     IopQueryNameInternal @ 0x1408BF6D0 (IopQueryNameInternal.c)
 *     IoQueryFileInformation @ 0x1408C1BB0 (IoQueryFileInformation.c)
 *     PfSnGetSectionObject @ 0x1408C237C (PfSnGetSectionObject.c)
 *     PfpPrefetchEntireDirectory @ 0x1409C745C (PfpPrefetchEntireDirectory.c)
 *     IoQueryVolumeInformation @ 0x140A4AFA0 (IoQueryVolumeInformation.c)
 *     IopGetNetworkOpenInformation @ 0x140AAB068 (IopGetNetworkOpenInformation.c)
 * Callees:
 *     IopAllocateIrpExReturn @ 0x1402537B0 (IopAllocateIrpExReturn.c)
 *     IopQueueThreadIrp @ 0x140253BB0 (IopQueueThreadIrp.c)
 *     IopReleaseFileObjectLock @ 0x140285FF0 (IopReleaseFileObjectLock.c)
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     IopWaitForSynchronousIo @ 0x1402A1910 (IopWaitForSynchronousIo.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 *     IoGetRelatedDeviceObject @ 0x14035CFA0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x14035D320 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1409888C0 (IopWaitAndAcquireFileObjectLock.c)
 */

__int64 __fastcall IopQueryXxxInformation(
        struct _FILE_OBJECT *BugCheckParameter2,
        int a2,
        ULONG a3,
        unsigned __int8 a4,
        __int64 a5,
        _DWORD *a6,
        char a7)
{
  unsigned __int8 v11; // bp
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  __int64 v13; // r8
  int v14; // r15d
  struct _DEVICE_OBJECT *v15; // rsi
  __int64 Irp; // rax
  IRP *v17; // rbx
  struct _KEVENT *p_Event; // rax
  bool v19; // zf
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  char v21; // al
  __int64 v22; // rax
  NTSTATUS v23; // eax
  unsigned int FinalStatus; // esi
  struct _KTHREAD *CurrentThread; // rax
  bool v27; // bl
  __int64 *v28; // rax
  unsigned int v29; // ebx
  __int128 v30; // [rsp+30h] [rbp-58h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-48h] BYREF
  char v32; // [rsp+90h] [rbp+8h] BYREF

  memset(&Event, 0, sizeof(Event));
  v30 = 0LL;
  PsReferenceSiloContext(BugCheckParameter2);
  if ( (BugCheckParameter2->Flags & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v27 = (BugCheckParameter2->Flags & 4) != 0;
    --CurrentThread->KernelApcDisable;
    v28 = KeAbPreAcquire((__int64)&BugCheckParameter2->Lock, 0LL);
    v32 = 0;
    if ( _InterlockedExchange((volatile __int32 *)&BugCheckParameter2->Busy, 1) )
    {
      v29 = IopWaitAndAcquireFileObjectLock((_DWORD)BugCheckParameter2, a4, v27, (_DWORD)v28, (__int64)&v32);
      if ( v32 )
      {
        ObfDereferenceObject(BugCheckParameter2);
        return v29;
      }
    }
    else
    {
      if ( v28 )
        *((_BYTE *)v28 + 10) = 1;
      PsReferenceSiloContext(BugCheckParameter2);
    }
    KeResetEvent(&BugCheckParameter2->Event);
    v11 = 1;
  }
  else
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v11 = 0;
  }
  RelatedDeviceObject = IoGetRelatedDeviceObject(BugCheckParameter2);
  v13 = v11;
  v14 = 71;
  if ( a2 != 75 )
    v14 = a2;
  v15 = RelatedDeviceObject;
  LOBYTE(v13) = v11 ^ 1;
  Irp = IopAllocateIrpExReturn((__int64)RelatedDeviceObject, (unsigned __int8)RelatedDeviceObject->StackSize, v13);
  v17 = (IRP *)Irp;
  if ( Irp )
  {
    *(_QWORD *)(Irp + 192) = BugCheckParameter2;
    *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
    *(_BYTE *)(Irp + 64) = a4;
    if ( v11 )
    {
      *(_BYTE *)(Irp + 71) |= 2u;
      p_Event = 0LL;
    }
    else
    {
      *(_DWORD *)(Irp + 16) = 4;
      p_Event = &Event;
    }
    v19 = a7 == 0;
    v17->UserEvent = p_Event;
    CurrentStackLocation = v17->Tail.Overlay.CurrentStackLocation;
    v17->UserIosb = (PIO_STATUS_BLOCK)&v30;
    v21 = 5;
    if ( v19 )
      v21 = 10;
    v17->Overlay.AllocationSize.QuadPart = 0LL;
    CurrentStackLocation[-1].MajorFunction = v21;
    v22 = a5;
    CurrentStackLocation[-1].FileObject = BugCheckParameter2;
    v17->Flags |= 0x10u;
    v17->AssociatedIrp.MasterIrp = (struct _IRP *)v22;
    CurrentStackLocation[-1].Parameters.Read.Length = a3;
    CurrentStackLocation[-1].Parameters.Create.Options = v14;
    if ( a2 == 75 )
      CurrentStackLocation[-1].Flags |= 1u;
    IopQueueThreadIrp((__int64)v17);
    v23 = IofCallDriver(v15, v17);
    FinalStatus = v23;
    if ( v11 )
    {
      if ( v23 == 259 )
      {
        IopWaitForSynchronousIo(v17, (unsigned int *)BugCheckParameter2, a4);
        FinalStatus = BugCheckParameter2->FinalStatus;
      }
      IopReleaseFileObjectLock((ULONG_PTR)BugCheckParameter2);
    }
    else if ( v23 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      FinalStatus = v30;
    }
    *a6 = DWORD2(v30);
    return FinalStatus;
  }
  else
  {
    if ( (BugCheckParameter2->Flags & 2) != 0 )
      IopReleaseFileObjectLock((ULONG_PTR)BugCheckParameter2);
    ObfDereferenceObject(BugCheckParameter2);
    return 3221225626LL;
  }
}
