/*
 * XREFs of PnpQueryInterface @ 0x1409C4D84
 * Callers:
 *     PnprQueryReplaceFeatures @ 0x1405A7BA8 (PnprQueryReplaceFeatures.c)
 *     PiGetDmaAdapterFromBusInterface @ 0x1407202C4 (PiGetDmaAdapterFromBusInterface.c)
 *     IoQueryInterface @ 0x1407204B0 (IoQueryInterface.c)
 *     PnprIdentifyUnits @ 0x14072F7DC (PnprIdentifyUnits.c)
 *     IopQueryBusResourceUpdateInterface @ 0x140733BF0 (IopQueryBusResourceUpdateInterface.c)
 *     PipUnprotectDevice @ 0x14073676C (PipUnprotectDevice.c)
 *     IopQueryInterfaceRecurseUp @ 0x1409C43A8 (IopQueryInterfaceRecurseUp.c)
 *     PnpQueryExtendedAddress @ 0x1409C44BC (PnpQueryExtendedAddress.c)
 *     PiIommuGetInterface @ 0x1409C45FC (PiIommuGetInterface.c)
 *     PnpGetDeviceLocationStrings @ 0x1409C470C (PnpGetDeviceLocationStrings.c)
 *     PiProcessDriversLoadedOnSecureDevice @ 0x1409C5488 (PiProcessDriversLoadedOnSecureDevice.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x140253C60 (IopQueueThreadIrp.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x1402D6794 (IoGetAttachedDeviceReferenceWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x140374160 (IofCallDriver.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1403754A0 (IopBuildAsynchronousFsdRequest.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
  __int64 v11; // rdx
  IRP *v12; // rbx
  __int64 v13; // r8
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int v15; // ebx
  __int128 v17; // [rsp+40h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-38h] BYREF

  memset(&Event, 0, sizeof(Event));
  v17 = 0LL;
  if ( a4 < 0x20u )
    return 3221225485LL;
  memset_0(a6, 0, a4);
  *a6 = a4;
  a6[1] = a3;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  AttachedDeviceReferenceWithTag = (struct _DEVICE_OBJECT *)IoGetAttachedDeviceReferenceWithTag(Object, 0x49706E50u);
  v12 = (IRP *)IopBuildAsynchronousFsdRequest(
                 0x1Bu,
                 (__int64)AttachedDeviceReferenceWithTag,
                 0LL,
                 0,
                 0LL,
                 (__int64)&v17);
  if ( v12 )
  {
    v12->UserEvent = &Event;
    IopQueueThreadIrp((__int64)v12, v11, v13);
    CurrentStackLocation = v12->Tail.Overlay.CurrentStackLocation;
    v12->RequestorMode = 0;
    v12->IoStatus.Status = -1073741637;
    CurrentStackLocation[-1].MinorFunction = 8;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = a2;
    CurrentStackLocation[-1].Parameters.QueryInterface.Size = a4;
    CurrentStackLocation[-1].Parameters.QueryInterface.Version = a3;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)a6;
    CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = a5;
    v15 = IofCallDriver(AttachedDeviceReferenceWithTag, v12);
    if ( v15 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v15 = v17;
    }
  }
  else
  {
    v15 = -1073741670;
  }
  ObfDereferenceObjectWithTag(AttachedDeviceReferenceWithTag, 0x49706E50u);
  return v15;
}
