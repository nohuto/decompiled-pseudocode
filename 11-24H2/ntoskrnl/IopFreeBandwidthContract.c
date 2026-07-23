/*
 * XREFs of IopFreeBandwidthContract @ 0x140ABE044
 * Callers:
 *     IopCloseFile @ 0x14083E330 (IopCloseFile.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14025C530 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x14025CA20 (IofCallDriver.c)
 *     IopQueueThreadIrp @ 0x140284270 (IopQueueThreadIrp.c)
 *     IopAllocateIrpMustSucceed @ 0x140284370 (IopAllocateIrpMustSucceed.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     IopResetEvent @ 0x1403B3230 (IopResetEvent.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall IopFreeBandwidthContract(PFILE_OBJECT FileObject, _QWORD *a2)
{
  __int64 result; // rax
  ULONG v4; // edi
  PDEVICE_OBJECT RelatedDeviceObject; // r14
  __int64 v6; // rdx
  PIRP IrpMustSucceed; // rax
  IRP *v8; // rbx
  struct _KEVENT *p_Event; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  KEVENT *v11; // rcx
  LARGE_INTEGER Interval; // [rsp+30h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+38h] [rbp-48h] BYREF
  __int128 v14; // [rsp+50h] [rbp-30h] BYREF
  __int128 v15; // [rsp+60h] [rbp-20h] BYREF
  int v16; // [rsp+70h] [rbp-10h]

  result = 0LL;
  memset(&Event, 0, sizeof(Event));
  v14 = 0LL;
  v16 = 0;
  v15 = 0LL;
  if ( (_QWORD *)*a2 != a2 )
  {
    v4 = FileObject->Flags & 2;
    while ( 1 )
    {
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      IopResetEvent((__int64)FileObject);
      v16 = 0;
      v15 = 0LL;
      RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
      LOBYTE(v6) = RelatedDeviceObject->StackSize;
      IrpMustSucceed = IopAllocateIrpMustSucceed((__int64)RelatedDeviceObject, v6);
      v8 = IrpMustSucceed;
      IrpMustSucceed->Tail.Overlay.OriginalFileObject = FileObject;
      IrpMustSucceed->Tail.Overlay.Thread = KeGetCurrentThread();
      IrpMustSucceed->RequestorMode = 0;
      if ( v4 )
      {
        p_Event = 0LL;
      }
      else
      {
        IrpMustSucceed->Flags = 4;
        p_Event = &Event;
      }
      IrpMustSucceed->UserEvent = p_Event;
      IrpMustSucceed->UserIosb = (PIO_STATUS_BLOCK)&v14;
      CurrentStackLocation = IrpMustSucceed->Tail.Overlay.CurrentStackLocation;
      v8->Overlay.AllocationSize.QuadPart = 0LL;
      CurrentStackLocation[-1].MajorFunction = 6;
      CurrentStackLocation[-1].FileObject = FileObject;
      CurrentStackLocation[-1].Parameters.Read.Length = 20;
      CurrentStackLocation[-1].Parameters.Create.Options = 44;
      v8->UserBuffer = 0LL;
      v8->MdlAddress = 0LL;
      v8->AssociatedIrp.MasterIrp = (struct _IRP *)&v15;
      PsReferenceSiloContext(FileObject);
      IopQueueThreadIrp((__int64)v8);
      if ( IofCallDriver(RelatedDeviceObject, v8) == 259 )
      {
        v11 = &FileObject->Event;
        if ( !v4 )
          v11 = &Event;
        KeWaitForSingleObject(v11, Executive, 0, 0, 0LL);
      }
      result = (unsigned int)v14;
      if ( (_DWORD)v14 != -1073741670 && (_DWORD)v14 != -1073741801 )
        break;
      Interval.QuadPart = -1000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
  }
  return result;
}
