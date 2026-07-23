/*
 * XREFs of IopQueryXxxInformation @ 0x140952FC0
 * Callers:
 *     IopValidateJunctionTarget @ 0x140710FC8 (IopValidateJunctionTarget.c)
 *     MiAttemptPageFileExtension @ 0x1407EE36C (MiAttemptPageFileExtension.c)
 *     MiCreatePagingFile @ 0x1407EE934 (MiCreatePagingFile.c)
 *     IopParseDevice @ 0x1408A7F20 (IopParseDevice.c)
 *     PfpPrefetchEntireDirectory @ 0x14093753C (PfpPrefetchEntireDirectory.c)
 *     IopQueryNameInternal @ 0x140950DC0 (IopQueryNameInternal.c)
 *     IoQueryFileInformation @ 0x140953270 (IoQueryFileInformation.c)
 *     PfSnGetSectionObject @ 0x140953A3C (PfSnGetSectionObject.c)
 *     IoQueryVolumeInformation @ 0x1409549A0 (IoQueryVolumeInformation.c)
 *     IopGetNetworkOpenInformation @ 0x140AAAF68 (IopGetNetworkOpenInformation.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14025C530 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x14025CA20 (IofCallDriver.c)
 *     IopQueueThreadIrp @ 0x140284270 (IopQueueThreadIrp.c)
 *     IopAllocateIrpExReturn @ 0x1402843D0 (IopAllocateIrpExReturn.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     IopReleaseFileObjectLock @ 0x1402C60B0 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     IopWaitForSynchronousIo @ 0x1403B3490 (IopWaitForSynchronousIo.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140958F48 (IopWaitAndAcquireFileObjectLock.c)
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
  _QWORD *v28; // rax
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
