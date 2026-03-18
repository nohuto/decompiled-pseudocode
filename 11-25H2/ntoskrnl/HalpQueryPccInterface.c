/*
 * XREFs of HalpQueryPccInterface @ 0x1406F81BC
 * Callers:
 *     HalpAcquirePccInterface @ 0x1406F7F44 (HalpAcquirePccInterface.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     IofCallDriver @ 0x14035D320 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     IoGetAttachedDeviceReference @ 0x14041DD00 (IoGetAttachedDeviceReference.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     IoBuildSynchronousFsdRequest @ 0x140A361D0 (IoBuildSynchronousFsdRequest.c)
 */

__int64 __fastcall HalpQueryPccInterface(
        PDEVICE_OBJECT DeviceObject,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        _DWORD *a6)
{
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  PIRP v8; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int Status; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  memset_0(a6, 0, 0x80uLL);
  a6[8] = a5;
  *a6 = 65664;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
  v8 = IoBuildSynchronousFsdRequest(0x1Bu, AttachedDeviceReference, 0LL, 0, 0LL, &Event, &IoStatusBlock);
  if ( v8 )
  {
    CurrentStackLocation = v8->Tail.Overlay.CurrentStackLocation;
    v8->RequestorMode = 0;
    v8->IoStatus.Status = -1073741637;
    CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)&GUID_PCC_INTERFACE_STANDARD;
    CurrentStackLocation[-1].MinorFunction = 8;
    CurrentStackLocation[-1].Parameters.Create.Options = 65664;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)a6;
    Status = IofCallDriver(AttachedDeviceReference, v8);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
  }
  else
  {
    Status = -1073741670;
  }
  ObfDereferenceObject(AttachedDeviceReference);
  return Status;
}
