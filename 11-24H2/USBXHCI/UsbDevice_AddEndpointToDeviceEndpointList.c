/*
 * XREFs of UsbDevice_AddEndpointToDeviceEndpointList @ 0x1400302D0
 * Callers:
 *     Endpoint_Create @ 0x140080F6C (Endpoint_Create.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

void __fastcall UsbDevice_AddEndpointToDeviceEndpointList(__int64 a1, __int64 a2, _QWORD *a3)
{
  KIRQL v6; // al
  _QWORD *v7; // rdx

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(), __int64, const char *))(WdfFunctions_01033 + 1640))(
    WdfDriverGlobals,
    *(_QWORD *)a1,
    UsbDevice_AddEndpointToDeviceEndpointList,
    7972LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\usbdevice.c");
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(), __int64, const char *))(WdfFunctions_01033 + 1640))(
    WdfDriverGlobals,
    a2,
    UsbDevice_AddEndpointToDeviceEndpointList,
    7980LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\usbdevice.c");
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v7 = *(_QWORD **)(a1 + 112);
  if ( *v7 != a1 + 104 )
    __fastfail(3u);
  *a3 = a1 + 104;
  a3[1] = v7;
  *v7 = a3;
  *(_QWORD *)(a1 + 112) = a3;
  ++*(_DWORD *)(a1 + 120);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v6);
}
