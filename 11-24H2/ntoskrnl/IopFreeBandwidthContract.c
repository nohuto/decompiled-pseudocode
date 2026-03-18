/*
 * XREFs of IopFreeBandwidthContract @ 0x140AC2D5C
 * Callers:
 *     IopCloseFile @ 0x140842070 (IopCloseFile.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x140253C60 (IopQueueThreadIrp.c)
 *     IopAllocateIrpMustSucceed @ 0x140253D60 (IopAllocateIrpMustSucceed.c)
 *     KeDelayExecutionThread @ 0x14033BC60 (KeDelayExecutionThread.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     IoGetRelatedDeviceObject @ 0x140373C70 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140374160 (IofCallDriver.c)
 *     IopResetEvent @ 0x1403C4670 (IopResetEvent.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall IopFreeBandwidthContract(PFILE_OBJECT FileObject, _QWORD *a2)
{
  __int64 result; // rax
  ULONG v4; // edi
  PDEVICE_OBJECT RelatedDeviceObject; // r14
  __int64 v6; // rdx
  __int64 MustSucceed; // rax
  IRP *v8; // rbx
  struct _KEVENT *p_Event; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  KEVENT *v13; // rcx
  LARGE_INTEGER Interval; // [rsp+30h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+38h] [rbp-48h] BYREF
  __int128 v16; // [rsp+50h] [rbp-30h] BYREF
  __int128 v17; // [rsp+60h] [rbp-20h] BYREF
  int v18; // [rsp+70h] [rbp-10h]

  result = 0LL;
  memset(&Event, 0, sizeof(Event));
  v16 = 0LL;
  v18 = 0;
  v17 = 0LL;
  if ( (_QWORD *)*a2 != a2 )
  {
    v4 = FileObject->Flags & 2;
    while ( 1 )
    {
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      IopResetEvent((__int64)FileObject);
      v18 = 0;
      v17 = 0LL;
      RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
      LOBYTE(v6) = RelatedDeviceObject->StackSize;
      MustSucceed = IopAllocateIrpMustSucceed((__int64)RelatedDeviceObject, v6);
      v8 = (IRP *)MustSucceed;
      *(_QWORD *)(MustSucceed + 192) = FileObject;
      *(_QWORD *)(MustSucceed + 152) = KeGetCurrentThread();
      *(_BYTE *)(MustSucceed + 64) = 0;
      if ( v4 )
      {
        p_Event = 0LL;
      }
      else
      {
        *(_DWORD *)(MustSucceed + 16) = 4;
        p_Event = &Event;
      }
      *(_QWORD *)(MustSucceed + 80) = p_Event;
      *(_QWORD *)(MustSucceed + 72) = &v16;
      v10 = *(_QWORD *)(MustSucceed + 184);
      v8->Overlay.AllocationSize.QuadPart = 0LL;
      *(_BYTE *)(v10 - 72) = 6;
      *(_QWORD *)(v10 - 24) = FileObject;
      *(_DWORD *)(v10 - 64) = 20;
      *(_DWORD *)(v10 - 56) = 44;
      v8->UserBuffer = 0LL;
      v8->MdlAddress = 0LL;
      v8->AssociatedIrp.MasterIrp = (struct _IRP *)&v17;
      PsReferenceSiloContext(FileObject);
      IopQueueThreadIrp((__int64)v8, v11, v12);
      if ( IofCallDriver(RelatedDeviceObject, v8) == 259 )
      {
        v13 = &FileObject->Event;
        if ( !v4 )
          v13 = &Event;
        KeWaitForSingleObject(v13, Executive, 0, 0, 0LL);
      }
      result = (unsigned int)v16;
      if ( (_DWORD)v16 != -1073741670 && (_DWORD)v16 != -1073741801 )
        break;
      Interval.QuadPart = -1000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
  }
  return result;
}
