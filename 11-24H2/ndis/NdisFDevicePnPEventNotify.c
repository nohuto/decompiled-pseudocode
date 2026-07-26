/*
 * XREFs of NdisFDevicePnPEventNotify @ 0x14004D870
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x140010EE0 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140153F20 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __stdcall NdisFDevicePnPEventNotify(NDIS_HANDLE NdisFilterHandle, PNET_DEVICE_PNP_EVENT NetDevicePnPEvent)
{
  KIRQL v4; // al
  unsigned __int8 *NdisReserved; // rdx
  KIRQL v6; // bp
  struct _KEVENT Event; // [rsp+30h] [rbp-58h] BYREF
  _QWORD Parameter[8]; // [rsp+48h] [rbp-40h] BYREF
  int v9; // [rsp+90h] [rbp+8h] BYREF

  Parameter[1] = NdisFilterHandle;
  Parameter[3] = NetDevicePnPEvent;
  Parameter[0] = 0LL;
  Parameter[2] = 0LL;
  if ( KeExpandKernelStackAndCalloutEx(ndisFDevicePnPEventNotifyInternal, Parameter, (unsigned int)Size, 0, 0LL) < 0 )
  {
    memset(&Event, 0, sizeof(Event));
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisFilterHandle + 18);
    NdisReserved = (unsigned __int8 *)NdisFilterHandle + 264;
    *((_QWORD *)NdisFilterHandle + 19) = KeGetCurrentThread();
    v6 = v4;
    if ( *((_QWORD *)NdisFilterHandle + 33) )
      NdisReserved = NetDevicePnPEvent->NdisReserved;
    *(_QWORD *)NdisReserved = NetDevicePnPEvent;
    *(_QWORD *)&NetDevicePnPEvent->NdisReserved[8] = &Event;
    *(_QWORD *)NetDevicePnPEvent->NdisReserved = 0LL;
    if ( !*((_BYTE *)NdisFilterHandle + 224) )
    {
      v9 = 0;
      ndisReferenceRefEx((PKSPIN_LOCK)NdisFilterHandle + 9, 1u, (enum _NDIS_REFERENCE_STATUS *)&v9);
      *((_BYTE *)NdisFilterHandle + 224) = 1;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)NdisFilterHandle + 6, NormalWorkQueue);
    }
    *((_QWORD *)NdisFilterHandle + 19) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)NdisFilterHandle + 18, v6);
    ndisWaitForKernelObject(&Event);
  }
}
