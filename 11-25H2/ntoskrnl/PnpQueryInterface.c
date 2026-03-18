/*
 * XREFs of PnpQueryInterface @ 0x14082CC7C
 * Callers:
 *     PnprQueryReplaceFeatures @ 0x1405A4398 (PnprQueryReplaceFeatures.c)
 *     PiGetDmaAdapterFromBusInterface @ 0x1407141C4 (PiGetDmaAdapterFromBusInterface.c)
 *     IoQueryInterface @ 0x1407143B0 (IoQueryInterface.c)
 *     PnprIdentifyUnits @ 0x14072385C (PnprIdentifyUnits.c)
 *     IopQueryBusResourceUpdateInterface @ 0x140727958 (IopQueryBusResourceUpdateInterface.c)
 *     PipUnprotectDevice @ 0x14072A4DC (PipUnprotectDevice.c)
 *     PiIommuGetInterface @ 0x14082C4F4 (PiIommuGetInterface.c)
 *     PnpGetDeviceLocationStrings @ 0x14082C604 (PnpGetDeviceLocationStrings.c)
 *     PnpQueryExtendedAddress @ 0x140A93560 (PnpQueryExtendedAddress.c)
 *     IopQueryInterfaceRecurseUp @ 0x140A95844 (IopQueryInterfaceRecurseUp.c)
 *     PiProcessDriversLoadedOnSecureDevice @ 0x140AAD2B4 (PiProcessDriversLoadedOnSecureDevice.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x140253BB0 (IopQueueThreadIrp.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x140359D98 (IoGetAttachedDeviceReferenceWithTag.c)
 *     IofCallDriver @ 0x14035D320 (IofCallDriver.c)
 *     IopBuildAsynchronousFsdRequest @ 0x14035EFF0 (IopBuildAsynchronousFsdRequest.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall PnpQueryInterface(
        _QWORD *Object,
        ULONG_PTR a2,
        USHORT a3,
        USHORT a4,
        struct _NAMED_PIPE_CREATE_PARAMETERS *a5,
        USHORT *a6)
{
  struct _DEVICE_OBJECT *AttachedDeviceReferenceWithTag; // rsi
  IRP *v11; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int v13; // ebx
  __int128 v15; // [rsp+40h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-38h] BYREF

  memset(&Event, 0, sizeof(Event));
  v15 = 0LL;
  if ( a4 < 0x20u )
    return 3221225485LL;
  memset_0(a6, 0, a4);
  *a6 = a4;
  a6[1] = a3;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  AttachedDeviceReferenceWithTag = (struct _DEVICE_OBJECT *)IoGetAttachedDeviceReferenceWithTag(Object, 0x49706E50u);
  v11 = (IRP *)IopBuildAsynchronousFsdRequest(
                 0x1Bu,
                 (__int64)AttachedDeviceReferenceWithTag,
                 0LL,
                 0,
                 0LL,
                 (__int64)&v15);
  if ( v11 )
  {
    v11->UserEvent = &Event;
    IopQueueThreadIrp((__int64)v11);
    CurrentStackLocation = v11->Tail.Overlay.CurrentStackLocation;
    v11->RequestorMode = 0;
    v11->IoStatus.Status = -1073741637;
    CurrentStackLocation[-1].MinorFunction = 8;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = a2;
    CurrentStackLocation[-1].Parameters.QueryInterface.Size = a4;
    CurrentStackLocation[-1].Parameters.QueryInterface.Version = a3;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)a6;
    CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = a5;
    v13 = IofCallDriver(AttachedDeviceReferenceWithTag, v11);
    if ( v13 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v13 = v15;
    }
  }
  else
  {
    v13 = -1073741670;
  }
  ObfDereferenceObjectWithTag(AttachedDeviceReferenceWithTag, 0x49706E50u);
  return v13;
}
