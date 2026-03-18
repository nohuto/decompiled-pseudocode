/*
 * XREFs of IopFilterResourceRequirementsCall @ 0x14098E480
 * Callers:
 *     IopQueryDeviceResources @ 0x14098DEA4 (IopQueryDeviceResources.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x140253C60 (IopQueueThreadIrp.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     IoAllocateIrp @ 0x1403724A0 (IoAllocateIrp.c)
 *     IofCallDriver @ 0x140374160 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     IoGetAttachedDeviceReference @ 0x14041D070 (IoGetAttachedDeviceReference.c)
 *     IovUtilWatermarkIrp @ 0x140482F44 (IovUtilWatermarkIrp.c)
 */

__int64 __fastcall IopFilterResourceRequirementsCall(struct _DEVICE_OBJECT *a1, ULONG_PTR a2, _QWORD *a3)
{
  PDEVICE_OBJECT AttachedDeviceReference; // rsi
  PIRP Irp; // rax
  IRP *v7; // rbx
  unsigned int v8; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int128 v13; // [rsp+30h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  v13 = 0LL;
  AttachedDeviceReference = IoGetAttachedDeviceReference(a1);
  Irp = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
  v7 = Irp;
  if ( Irp )
  {
    IovUtilWatermarkIrp((__int64)Irp, 1LL);
    if ( a2 )
    {
      v7->IoStatus.Status = 0;
      *((_QWORD *)&v13 + 1) = a2;
      v7->IoStatus.Information = a2;
    }
    else
    {
      LODWORD(v13) = -1073741637;
      v7->IoStatus.Status = -1073741637;
    }
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v7->UserIosb = (PIO_STATUS_BLOCK)&v13;
    v7->UserEvent = &Event;
    v7->Tail.Overlay.Thread = KeGetCurrentThread();
    IopQueueThreadIrp((__int64)v7, v10, v11);
    CurrentStackLocation = v7->Tail.Overlay.CurrentStackLocation;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 3355;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = a2;
    v8 = IofCallDriver(AttachedDeviceReference, v7);
    if ( v8 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v8 = v13;
    }
    *a3 = *((_QWORD *)&v13 + 1);
  }
  else
  {
    v8 = -1073741670;
  }
  ObfDereferenceObject(AttachedDeviceReference);
  return v8;
}
