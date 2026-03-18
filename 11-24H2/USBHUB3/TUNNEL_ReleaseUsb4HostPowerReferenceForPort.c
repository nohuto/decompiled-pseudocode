/*
 * XREFs of TUNNEL_ReleaseUsb4HostPowerReferenceForPort @ 0x1400927A0
 * Callers:
 *     HUBPDO_EvtDeviceReleaseHardware @ 0x140082700 (HUBPDO_EvtDeviceReleaseHardware.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 *     TUNNEL_GetUsb4Host @ 0x140091F30 (TUNNEL_GetUsb4Host.c)
 *     TUNNEL_ReleaseUsb4HostPowerReference @ 0x1400925E8 (TUNNEL_ReleaseUsb4HostPowerReference.c)
 */

void __fastcall TUNNEL_ReleaseUsb4HostPowerReferenceForPort(_QWORD **a1)
{
  _QWORD *v2; // rdx
  _QWORD *Usb4Host; // rdi
  UNICODE_STRING v4; // [rsp+20h] [rbp-18h] BYREF

  if ( (*((_DWORD *)a1 + 51) & 0x800) != 0 )
  {
    v2 = a1[183];
    v4 = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, UNICODE_STRING *))(WdfFunctions_01015 + 2472))(
      WdfDriverGlobals,
      v2,
      &v4);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      (*a1)[345],
      0LL);
    Usb4Host = TUNNEL_GetUsb4Host((__int64)*a1, &v4);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, (*a1)[345]);
    if ( Usb4Host )
      TUNNEL_ReleaseUsb4HostPowerReference(*a1, (__int64)Usb4Host);
  }
}
