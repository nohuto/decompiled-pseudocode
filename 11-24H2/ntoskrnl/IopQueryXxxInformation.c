/*
 * XREFs of IopQueryXxxInformation @ 0x14096A530
 * Callers:
 *     IopValidateJunctionTarget @ 0x140713438 (IopValidateJunctionTarget.c)
 *     MiAttemptPageFileExtension @ 0x1407EDD9C (MiAttemptPageFileExtension.c)
 *     MiCreatePagingFile @ 0x1407EE364 (MiCreatePagingFile.c)
 *     IopParseDevice @ 0x14089F880 (IopParseDevice.c)
 *     PfpPrefetchEntireDirectory @ 0x140953B8C (PfpPrefetchEntireDirectory.c)
 *     IopQueryNameInternal @ 0x140968330 (IopQueryNameInternal.c)
 *     IoQueryFileInformation @ 0x14096A7E0 (IoQueryFileInformation.c)
 *     PfSnGetSectionObject @ 0x14096AFAC (PfSnGetSectionObject.c)
 *     IoQueryVolumeInformation @ 0x14096BF40 (IoQueryVolumeInformation.c)
 *     IopGetNetworkOpenInformation @ 0x140AAFFFC (IopGetNetworkOpenInformation.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x140253C60 (IopQueueThreadIrp.c)
 *     IopAllocateIrpExReturn @ 0x140253DC0 (IopAllocateIrpExReturn.c)
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 *     IopReleaseFileObjectLock @ 0x14031D520 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     IoGetRelatedDeviceObject @ 0x140373C70 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140374160 (IofCallDriver.c)
 *     IopWaitForSynchronousIo @ 0x1403C48D0 (IopWaitForSynchronousIo.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140970738 (IopWaitAndAcquireFileObjectLock.c)
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
  __int64 v17; // rdx
  IRP *v18; // rbx
  struct _KEVENT *p_Event; // rax
  bool v20; // zf
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  char v22; // al
  __int64 v23; // rax
  NTSTATUS v24; // eax
  unsigned int FinalStatus; // esi
  struct _KTHREAD *CurrentThread; // rax
  bool v28; // bl
  _QWORD *v29; // rax
  unsigned int v30; // ebx
  __int128 v31; // [rsp+30h] [rbp-58h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-48h] BYREF
  char v33; // [rsp+90h] [rbp+8h] BYREF

  memset(&Event, 0, sizeof(Event));
  v31 = 0LL;
  PsReferenceSiloContext(BugCheckParameter2);
  if ( (BugCheckParameter2->Flags & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v28 = (BugCheckParameter2->Flags & 4) != 0;
    --CurrentThread->KernelApcDisable;
    v29 = KeAbPreAcquire((__int64)&BugCheckParameter2->Lock, 0LL);
    v33 = 0;
    if ( _InterlockedExchange((volatile __int32 *)&BugCheckParameter2->Busy, 1) )
    {
      v30 = IopWaitAndAcquireFileObjectLock((_DWORD)BugCheckParameter2, a4, v28, (_DWORD)v29, (__int64)&v33);
      if ( v33 )
      {
        ObfDereferenceObject(BugCheckParameter2);
        return v30;
      }
    }
    else
    {
      if ( v29 )
        *((_BYTE *)v29 + 10) = 1;
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
  v18 = (IRP *)Irp;
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
    v20 = a7 == 0;
    v18->UserEvent = p_Event;
    CurrentStackLocation = v18->Tail.Overlay.CurrentStackLocation;
    v18->UserIosb = (PIO_STATUS_BLOCK)&v31;
    v22 = 5;
    if ( v20 )
      v22 = 10;
    v18->Overlay.AllocationSize.QuadPart = 0LL;
    CurrentStackLocation[-1].MajorFunction = v22;
    v23 = a5;
    CurrentStackLocation[-1].FileObject = BugCheckParameter2;
    v18->Flags |= 0x10u;
    v18->AssociatedIrp.MasterIrp = (struct _IRP *)v23;
    CurrentStackLocation[-1].Parameters.Read.Length = a3;
    CurrentStackLocation[-1].Parameters.Create.Options = v14;
    if ( a2 == 75 )
      CurrentStackLocation[-1].Flags |= 1u;
    IopQueueThreadIrp((__int64)v18, v17, 10LL);
    v24 = IofCallDriver(v15, v18);
    FinalStatus = v24;
    if ( v11 )
    {
      if ( v24 == 259 )
      {
        IopWaitForSynchronousIo(v18, (unsigned int *)BugCheckParameter2, a4);
        FinalStatus = BugCheckParameter2->FinalStatus;
      }
      IopReleaseFileObjectLock((ULONG_PTR)BugCheckParameter2);
    }
    else if ( v24 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      FinalStatus = v31;
    }
    *a6 = DWORD2(v31);
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
