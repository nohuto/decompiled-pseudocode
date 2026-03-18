/*
 * XREFs of PiCMReturnBasicResultData @ 0x140934C74
 * Callers:
 *     PiCMDeleteDeviceInterfaceKey @ 0x1406ECB2C (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMCreateObject @ 0x1406ECC34 (PiCMCreateObject.c)
 *     PiCMValidateDeviceInstance @ 0x140933E98 (PiCMValidateDeviceInstance.c)
 *     PiCMSetObjectProperty @ 0x14095D17C (PiCMSetObjectProperty.c)
 *     PiCMSetRegistryProperty @ 0x14095E16C (PiCMSetRegistryProperty.c)
 *     PiCMDeviceAction @ 0x14095EA0C (PiCMDeviceAction.c)
 *     PiCMDeleteDeviceKey @ 0x140AB8E44 (PiCMDeleteDeviceKey.c)
 *     PiCMUnregisterDeviceInterface @ 0x140ABBD2C (PiCMUnregisterDeviceInterface.c)
 *     PiCMDeleteClassKey @ 0x140ABC48C (PiCMDeleteClassKey.c)
 *     PiCMDeleteObject @ 0x140ABC5BC (PiCMDeleteObject.c)
 *     PiCMSetDeviceProblem @ 0x140ABD29C (PiCMSetDeviceProblem.c)
 *     PiCMDeleteDevice @ 0x140AC08A4 (PiCMDeleteDevice.c)
 * Callees:
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 */

__int64 __fastcall PiCMReturnBasicResultData(int a1, int a2, _QWORD *a3, unsigned int a4, _DWORD *a5)
{
  unsigned int v6; // ebx
  __int64 v8; // [rsp+20h] [rbp-18h]

  *a5 = 0;
  v6 = 0;
  if ( a4 >= 8 && a2 == 8 )
  {
    LODWORD(v8) = 8;
    HIDWORD(v8) = a1;
    ProbeForWrite(a3, a4, 4u);
    *a3 = v8;
    *a5 = 8;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
