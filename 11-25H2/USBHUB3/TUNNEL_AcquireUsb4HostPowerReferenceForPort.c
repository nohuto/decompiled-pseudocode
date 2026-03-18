/*
 * XREFs of TUNNEL_AcquireUsb4HostPowerReferenceForPort @ 0x140091594
 * Callers:
 *     HUBPDO_EvtDevicePrepareHardware @ 0x140082630 (HUBPDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 *     TUNNEL_AcquireUsb4HostPowerReference @ 0x1400913D0 (TUNNEL_AcquireUsb4HostPowerReference.c)
 *     TUNNEL_GetUsb4Host @ 0x140092900 (TUNNEL_GetUsb4Host.c)
 */

void __fastcall TUNNEL_AcquireUsb4HostPowerReferenceForPort(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 Usb4Host; // rbx
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  if ( (*((_DWORD *)a1 + 51) & 0x800) != 0 )
  {
    v2 = a1[183];
    v4 = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *))(WdfFunctions_01015 + 2472))(
      WdfDriverGlobals,
      v2,
      &v4);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      *(_QWORD *)(*a1 + 2752LL),
      0LL);
    Usb4Host = TUNNEL_GetUsb4Host(*a1, &v4);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      *(_QWORD *)(*a1 + 2752LL));
    TUNNEL_AcquireUsb4HostPowerReference((_QWORD *)*a1, Usb4Host);
  }
}
