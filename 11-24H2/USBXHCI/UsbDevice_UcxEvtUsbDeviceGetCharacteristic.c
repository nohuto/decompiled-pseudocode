/*
 * XREFs of UsbDevice_UcxEvtUsbDeviceGetCharacteristic @ 0x14004E1C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbDevice_UcxEvtUsbDeviceGetCharacteristic(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( a3[1] == 1 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
      WdfDriverGlobals,
      a1,
      off_14006B290);
    a3[2] = 2;
    a3[3] = 4;
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v3;
}
