/*
 * XREFs of RaidAdapterStopDeviceIrp @ 0x140183020
 * Callers:
 *     RaidAdapterPnpIrp @ 0x140015724 (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaidPauseAdapterQueue @ 0x1400078E0 (RaidPauseAdapterQueue.c)
 *     RaidPnPPassToMiniPort @ 0x140010ED8 (RaidPnPPassToMiniPort.c)
 *     RaForwardIrp @ 0x1400177F0 (RaForwardIrp.c)
 *     RaidAdapterPoFxActivateComponent @ 0x14001DA40 (RaidAdapterPoFxActivateComponent.c)
 *     RaidAdapterStop @ 0x1400403C8 (RaidAdapterStop.c)
 *     RaidAdapterDeleteAsyncCallbacks @ 0x140042E9C (RaidAdapterDeleteAsyncCallbacks.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     StorSetIoGatewayEmptyEvent @ 0x140053F18 (StorSetIoGatewayEmptyEvent.c)
 *     GatewayWaitForForwardIoWithTimeout @ 0x1400A5F18 (GatewayWaitForForwardIoWithTimeout.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     RaidDeleteResourceList @ 0x1401812E0 (RaidDeleteResourceList.c)
 */

__int64 __fastcall RaidAdapterStopDeviceIrp(__int64 a1, IRP *a2)
{
  __int64 v4; // rcx
  int v5; // esi
  bool v6; // zf
  __int64 v7; // rcx
  __int64 v8; // rcx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-50h]
  PLARGE_INTEGER Timeouta; // [rsp+20h] [rbp-50h]
  union _LARGE_INTEGER v12; // [rsp+30h] [rbp-40h] BYREF
  struct _KEVENT Event; // [rsp+38h] [rbp-38h] BYREF
  GUID v14; // [rsp+50h] [rbp-20h] BYREF

  memset(&Event, 0, sizeof(Event));
  _InterlockedExchange((volatile __int32 *)(a1 + 88), 8);
  v4 = *(_QWORD *)(a1 + 4960);
  if ( v4 )
  {
    *(_DWORD *)(v4 + 20) |= 4u;
    RaidAdapterPoFxActivateComponent(a1, 0LL, 1LL);
  }
  RaidPauseAdapterQueue(a1);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  StorSetIoGatewayEmptyEvent(*(_QWORD *)(a1 + 960), &Event);
  v12.QuadPart = -1200000000LL;
  v5 = KeWaitForSingleObject(&Event, Executive, 0, 0, &v12);
  if ( v5 >= 0 )
    v5 = GatewayWaitForForwardIoWithTimeout(a1, 0x1D4C0u);
  if ( v5 )
  {
    v6 = StorEtwLoggingEnabled == 0;
    a2->IoStatus.Status = -1073741823;
    if ( !v6 )
    {
      v14 = 0LL;
      IoGetActivityIdIrp(a2, &v14);
      if ( (byte_140171462 & 0x20) != 0 )
      {
        LODWORD(Timeout) = a2->IoStatus.Status;
        McTemplateK0pd_EtwWriteTransfer(v7, &EventPnpRequestComplete, &v14, a2, Timeout);
      }
    }
  }
  else
  {
    v5 = RaidPnPPassToMiniPort(*(_QWORD *)(a1 + 8), 4u, 0LL, 0LL, 0);
    if ( v5 >= 0 )
    {
      RaidAdapterDeleteAsyncCallbacks(a1);
      RaidAdapterStop(a1);
      RaidDeleteResourceList(a1 + 360);
      if ( StorEtwLoggingEnabled )
      {
        v14 = 0LL;
        IoGetActivityIdIrp(a2, &v14);
        if ( (byte_140171462 & 0x20) != 0 )
        {
          LODWORD(Timeouta) = a2->IoStatus.Status;
          McTemplateK0pd_EtwWriteTransfer(v8, &EventPnpRequestComplete, &v14, a2, Timeouta, 0);
        }
      }
      a2->IoStatus.Status = 0;
      return (unsigned int)RaForwardIrp(*(struct _DEVICE_OBJECT **)(a1 + 24), a2);
    }
  }
  return (unsigned int)v5;
}
